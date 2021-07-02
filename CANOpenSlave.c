/*
 * File: SCANOpenSlave.c TRIKE
 *
 *   Date:    31.08.2009
 *   Modified:01.09.2009 - Implementare protocol comunicatie volan
 *            25.09.2020 - Adaptare pentru integrare in Speedgoat (TP)
 *            22.12.2020 - Adaugare Server SDO (HV)
 *            29.12.2020 - Adaugare SDO_Abort  (HV)
 *            30.12.2020 - Implementare Simulink Application Layer (HV)
 * Status:
 */

#include "CANOpenSlave.h"

// Device TPDOs ->   SpeedGoat RPDOs
RPDO_ID182 RPDO01; // Joystick
RPDO_ID282 RPDO02; // Joystick
RPDO_ID1FF RPDO03; // Absolut Encoder WDGA
RPDO_ID2FF RPDO04; // Absolut Encoder WDGA
RPDO_ID290 RPDO05; // mCAN.4.ai-box
RPDO_ID18x RPDO06,RPDO07,RPDO08,RPDO09; // DunkenMotoren
RPDO_ID28x RPDO10,RPDO11,RPDO12,RPDO13; // DunkenMotoren

// SpeedGoat TPDOs    -> Device RPDOs
TPDO_ID20x   TPDO01,TPDO02,TPDO03,TPDO04; // DunkenMotoren


// TPDO_ID1A4   TPDO01; //TPDO_ID185 TPDO01;

/************************************************************************
 GLOBAL VARIABLES
*************************************************************************/
uint16_T gTimCnt=0; //timer variable updated by irq
uint16_T aux_gTimCnt=0, TimFactor = 10; //auxiliar timer variable updated by irq used to obtain ms

//This structure holds all node specific configuration
CANOpenSlave_CONFIG  gCANOPENConfig;

#if NR_OF_TPDOS>0
//This structure holds all the TPDO configuration data for up to 4 TPDOs
TPDO_CONFIG gTPDOConfig[NR_OF_TPDOS];
//This is the next TPDO to be checked in CANOpenSlave_ProcessStack
BYTE gTPDONr=NR_OF_TPDOS;
#endif

#if NR_OF_RPDOS>0
//This structure holds all the RPDOS configuration data for up to 4 RPDOs
RPDO_CONFIG gRPDOConfig[NR_OF_RPDOS];
#endif

//22.12.2020
//This structure holds the CAN message for SDO response or aborts
CAN_MSG gTxSDO;

//This structure holds the CAN message for SDO write
CAN_MSG gTxSDOw;

//This structure holds the CAN message for Emergency codes
CAN_MSG gTxEMGY;

//end 22.12.2020

//************************************************************************
void CANOpenHW_SendMessage(CAN_MSG *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData)
{
	memcpy(txData, pTransmitBuf->BUF, pTransmitBuf->LEN);
	*txID = pTransmitBuf->ID;
	*txDLC = pTransmitBuf->LEN;
}


//*************************************************************************
uint8_T CANOpenHW_IsTimeExpired(uint16_T timestamp)
{
    if (gTimCnt>timestamp)
    {
        if((gTimCnt-timestamp)<0x8000)
            return 1;
         else
          return 0;
    }
   else
    {
       if((timestamp-gTimCnt)>0x8000)
         return 1;
      else
        return 0;
   }
}

//************************************************************************
WORD CANOpenHW_GetTime(void)
{
    return gTimCnt; //gTimCnt
}

/**************************************************************************
 LOCAL FUNCTIONS
 **************************************************************************/

//**************************************************************************
#if NR_OF_TPDOS>0
void Prepare_TPDOs(void)
{ // Called when going into the operational mode
    BYTE i;
    i=0;
    while (i<NR_OF_TPDOS)
    {// prepare all TPDOs for transmission
        if(gTPDOConfig[i].CAN.ID!=0)
        {// This TPDO is used
         // Copy current process data
            memcpy(&gTPDOConfig[i].CAN.BUF[0],gTPDOConfig[i].pData,gTPDOConfig[i].CAN.LEN);
            #ifdef USE_EVENT_TIME
            //Reset event timer for immediate transmission
            gTPDOConfig[i].event_timestamp=CANOpenHW_GetTime();
            #endif
            #ifdef USE_INHIBIT_TIME
            gTPDOConfig[i].inhibit_status=2;// Mark as ready for transmission
            //Reset event timer for immediate transmission
            gTPDOConfig[i].inhibit_timestamp=CANOpenHW_GetTime();
            #endif
        }
        i++;
    }
    gTPDONr=NR_OF_TPDOS;// Ensure that CANOpenSlave_ProcessStack starts with TPDO1
}


//*************************************************************************
void TransmitPDO(BYTE PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData)
{
#ifdef USE_INHIBIT_TIME
    gTPDOConfig[PDONr].inhibit_status=1;// New inhibited timer started
    gTPDOConfig[PDONr].inhibit_timestamp=CANOpenHW_GetTime()+gTPDOConfig[PDONr].inhibit_time;
#endif
#ifdef USE_EVENT_TIME
    gTPDOConfig[gTPDONr].event_timestamp=CANOpenHW_GetTime()+gTPDOConfig[gTPDONr].event_time;
#endif
    CANOpenHW_SendMessage(&gTPDOConfig[PDONr].CAN, txID, txDLC, txData);
}
#endif //NR_OF_TPDOS>0


//*********************  CANOpenSlave_Init ************************************//
void CANOpenSlave_Init(WORD Baudrate, BYTE Node_ID, WORD Heartbeat)
{
   BYTE i;
   //Init the global variables
   #ifdef USE_LED
       gELED=LED_OFF;
       gRLED=LED_BLINK;
   #endif
   #ifdef INTERNAL_RX_QUEUE
   can_rx_queue.in = 0;
   can_rx_queue.out = 0;
   can_rx_queue.ovf_cnt = 0;
   #endif
   gCANOPENConfig.Node_ID=Node_ID;
   gCANOPENConfig.error_code=0;
   gCANOPENConfig.Baudrate=Baudrate;
   gCANOPENConfig.heartbeat_time=Heartbeat;
   gCANOPENConfig.heartbeat_msg.ID=0x700+Node_ID;
   gCANOPENConfig.heartbeat_msg.LEN=1;
   gCANOPENConfig.heartbeat_msg.BUF[0]=0; //Current NMT state of this node = bootup
   gCANOPENConfig.error_register=0;

    //23.12.2020
   //Init SDO Response/Abort message
   gTxSDO.ID=0x580+gCANOPENConfig.Node_ID;
   gTxSDO.LEN=8;


   #if NR_OF_TPDOS>0
   i=0;
   while(i<NR_OF_TPDOS)
   {//Init TPDOs
       gTPDOConfig[i].CAN.ID=0;
       i++;
   }
   #endif

   #if NR_OF_RPDOS>0
   i=0;
   while(i<NR_OF_RPDOS)
   {//Init RPDOs
       gRPDOConfig[i].ID=0;
       i++;
   }
   #endif
    // Signal to CANOpenSlave_ProcessStack; we just initialized
   gTPDONr=0xFF;
}

//************************* CANOpenSlave_InitRPDO **********************************//

#if NR_OF_RPDOS>0
void CANOpenSlave_InitRPDO(BYTE PDO_NR, WORD CAN_ID, BYTE len, BYTE *dat)
{
	PDO_NR--;
	gRPDOConfig[PDO_NR].LEN=len;
	gRPDOConfig[PDO_NR].pData=dat;
	if (CAN_ID==0)
	{
		gRPDOConfig[PDO_NR].ID=0x200+(0x100*((WORD)(PDO_NR)))+gCANOPENConfig.Node_ID;
	}
	else
	{
		gRPDOConfig[PDO_NR].ID=CAN_ID;
	}
}
#endif //NR_OF_RPDOS>0


//*************************** CANOpenSlave_InitTPDO ***********************************//

#if NR_OF_TPDOS>0
void CANOpenSlave_InitTPDO(BYTE PDO_NR, WORD CAN_ID, WORD event_time, WORD inhibit_time, BYTE len, BYTE *pDat)
{
	PDO_NR--;
	//if ((CAN_ID==0) && (len<8))
	//{
	//	gTPDOConfig[PDO_NR].CAN.ID=0x180+(0x100*((WORD)(PDO_NR)))+gCANOPENConfig.Node_ID;
	//}
	//else
	//{
		gTPDOConfig[PDO_NR].CAN.ID=CAN_ID;
	//}
	gTPDOConfig[PDO_NR].CAN.LEN=len;
	gTPDOConfig[PDO_NR].pData=pDat;
	#ifdef USE_EVENT_TIME
	gTPDOConfig[PDO_NR].event_time=event_time;
	#endif
	#ifdef USE_INHIBIT_TIME
	gTPDOConfig[PDO_NR].inhibit_time=inhibit_time;
	#endif
}
#endif // NR_OF_TPDOS>0


//************************************************************************
void CANOpenSlave_ResetApplication(void)
{
    ;
}

//************************************************************************


void CANOpenSlave_ResetCommunication(void)
{
    CANOpenSlave_Init(500, OD_NODEID, 2000); //OD_HEARTBEAT
    #if NR_OF_TPDOS>0
        // TPDO1, default ID (0x180+NodeID),100ms event, 0ms inhibite, 4 bytes
        // Transmit trigger: 10 ms event time

        CANOpenSlave_InitTPDO(1,   0x20A,  5, 0, 8,  &TPDO01.Message);  // DunkA RPDO
        CANOpenSlave_InitTPDO(2,   0x20B,  5, 0, 8,  &TPDO02.Message);  // DunkB RPDO
        CANOpenSlave_InitTPDO(3,   0x20C,  5, 0, 8,  &TPDO03.Message);  // DunkC RPDO
        CANOpenSlave_InitTPDO(4,   0x20D,  5, 0, 8,  &TPDO04.Message);  // DunkD RPDO
        
    
    
    #endif

    #if NR_OF_RPDOS>0
        // RPDO1, default ID (0x200+NodeID) dar  poate fi precizat explicit
        //CANOpenSlave_InitRPDO(BYTE PDO_NR, WORD CAN_ID, BYTE len, BYTE *dat)
       CANOpenSlave_InitRPDO(1, 0x182, 8, &RPDO01.Message); // Joystick
       CANOpenSlave_InitRPDO(2, 0x282, 8, &RPDO02.Message); // Joystick
       CANOpenSlave_InitRPDO(3, 0x1FF, 4, &RPDO03.Message); // Absolut Encoder WDGA
       CANOpenSlave_InitRPDO(4, 0x2FF, 4, &RPDO04.Message); // Absolut Encoder WDGA
        
       CANOpenSlave_InitRPDO(5, 0x290, 8, &RPDO05.Message); // mCAN.4.ai-box
      
       CANOpenSlave_InitRPDO(6, 0x18A, 8, &RPDO06.Message); // DunkA TPDO
       CANOpenSlave_InitRPDO(7, 0x18B, 8, &RPDO07.Message); // DunkB TPDO
       CANOpenSlave_InitRPDO(8, 0x18C, 8, &RPDO08.Message); // DunkC TPDO
       CANOpenSlave_InitRPDO(9, 0x18D, 8, &RPDO09.Message); // DunkD TPDO 
       
//        
//        CANOpenSlave_InitRPDO(6, 0x28A, 8, &RPDO10.Message); // DunkA TPDO
//        CANOpenSlave_InitRPDO(7, 0x28B, 8, &RPDO11.Message); // DunkB TPDO
//        CANOpenSlave_InitRPDO(8, 0x28C, 8, &RPDO12.Message); // DunkC TPDO
//        CANOpenSlave_InitRPDO(9, 0x28D, 8, &RPDO13.Message); // DunkD TPDO 
       
    #endif
 

}


/*************************************************************************
                              SDO Server
 ************************************************************************/
/************************************************************************
        Table with SDO Responses for the read requests to OD
 ************************************************************************/
BYTE const SDOResponseTable[]={
 /*   Communication Profile section of  Object Dictionary */
//Each row has 8 bytes:
    // SDOREPLY()
    //Command Specifier for SDO Response (1 byte)
    //'4' -{number of data bytes} (1 byte)
    // ----------------------------------------------
    //Object Dictionary Index (2 bytes, low first)
    //Object Dictionary Subindex (1 byte)
    //Data (4 bytes, lowest byte first)

//[1000h,00]: Device Type
   SDOREPLY(0x1000,00,4,OD_DEVICE_TYPE),
//[1008h,00]: Manufacturer Device Name
   SDOREPLY(0x1008,00,8,OD_DEVICE_NAME),
//[1017h,00]: Producer Heartbeat Time
   SDOREPLY(0x1017,00,2,OD_HEARTBEAT),
#ifdef OD_SERIAL
//[1018,00]: Identity Object, Number of Entries=4
    SDOREPLY(0x1018, 0x00, 1, 0x00000004L),
#else
//[1018,00]: Identity Object, Number of Entries=3
    SDOREPLY(0x1018, 0x00, 1, 0x00000003L),
#endif
//[1018,01]: Identity Object, Vendor ID
    SDOREPLY(0x1018,01,4,OD_VENDOR_ID),
//[1018,02]: Identity Object, Product Code
    SDOREPLY(0x1018,02,4,OD_PRODUCT_CODE),
//[1018,03]: Identity Object, Revision
    SDOREPLY(0x1018,03,4,OD_REVISION),
#ifdef OD_SERIAL
//[1018,04]: Identity Object, Serial
    SDOREPLY(0x1018,04,4,OD_SERIAL),
#endif

#ifdef PDO_IN_OD
  // NOTE: These entries must be added manually. The parameters must match
  // the parameters used to call the functions CANopen_InitRPDO and CANopn_InitTPDO.

  // RPDO1 Communication Parameters
  SDOREPLY(0x1400, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1400, 0x01, 4, OD_NODEID+0x200),
  SDOREPLY(0x1400, 0x02, 1, 0x000000FFL),

  // RPDO2 Communication Parameters
  SDOREPLY(0x1401, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1401, 0x01, 4, OD_NODEID+0x00000300),
  SDOREPLY(0x1401, 0x02, 1, 0x000000FFL),

  // RPDO3 Communication Parameters
  SDOREPLY(0x1402, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1402, 0x01, 4, OD_NODEID+0x00000400),
  SDOREPLY(0x1402, 0x02, 1, 0x000000FFL),

// RPDO4 Communication Parameters
  SDOREPLY(0x1403, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1403, 0x01, 4, OD_NODEID+0x00000500),
  SDOREPLY(0x1403, 0x02, 1, 0x000000FFL),

// RPDO1 Mapping Parameters
  //Number of Entries x Number of objects mapped into the RPDO1)
  SDOREPLY(0x1600, 0x00, 1, 0x00000001L),
  // Index 0x6200 subindex 0x01 length -value (Address where is stored process variable)
  SDOREPLY(0x1600, 0x01, 4, 0x62000120L),

  //Number of Entries x Number of objects mapped into the RPDO2)
  // RPDO2 Mapping Parameters
  SDOREPLY(0x1601, 0x00, 1, 0x00000001L),
  // Index 0x6200 subindex 0x02 length -value (Address where is stored process variable)
  SDOREPLY(0x1601, 0x01, 4, 0x62000220L),

  //Number of Entries x Number of objects mapped into the RPDO3)
  // RPDO3 Mapping Parameters
  SDOREPLY(0x1602, 0x00, 1, 0x00000001L),
  // Index 0x6200 subindex 0x03 length -value (Address where is stored process variable)
  SDOREPLY(0x1602, 0x01, 4, 0x62000320L),

  //Number of Entries x Number of objects mapped into the RPDO4)
  // RPDO4 Mapping Parameters
  SDOREPLY(0x1603, 0x00, 1, 0x00000001L),
  // Index 0x6200 subindex 0x04 length -value (Address where is stored process variable)
  SDOREPLY(0x1603, 0x01, 4, 0x62000420L),

  // TPDO1 Communication Parameters
  SDOREPLY(0x1800, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1800, 0x01, 4, OD_NODEID+0x180),
  SDOREPLY(0x1800, 0x02, 1, 0x000000FFL),

  // TPDO2 Communication Parameters
  SDOREPLY(0x1801, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1801, 0x01, 4, OD_NODEID+0x280),
  SDOREPLY(0x1801, 0x02, 1, 0x000000FFL),

  // TPDO3 Communication Parameters
  SDOREPLY(0x1802, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1802, 0x01, 4, OD_NODEID+0x380),
  SDOREPLY(0x1802, 0x02, 1, 0x000000FFL),

  // TPDO4 Communication Parameters
  SDOREPLY(0x1803, 0x00, 1, 0x00000002L),
  SDOREPLY(0x1803, 0x01, 4, OD_NODEID+0x480),
  SDOREPLY(0x1803, 0x02, 1, 0x000000FFL),

   //Number of Entries x Number of objects mapped into the TPDO1)
   // TPDO1 Mapping Parameters
  SDOREPLY(0x1A00, 0x00, 1, 0x00000001L),
   // Index 0x6000 subindex 0x01 length -(Address where is stored process variable)
  SDOREPLY(0x1A00, 0x01, 4, 0x60000120L),

  //Number of Entries x Number of objects mapped into the TPDO2)
  // TPDO2 Mapping Parameters
  SDOREPLY(0x1A01, 0x00, 1, 0x00000001L),
  // Index 0x6000 subindex 0x02 length -(Address where is stored process variable)
  SDOREPLY(0x1A01, 0x01, 4, 0x60000220L),

  //Number of Entries x Number of objects mapped into the TPDO3)
  // TPDO3 Mapping Parameters
  SDOREPLY(0x1A02, 0x00, 1, 0x00000001L),
  // Index 0x6000 subindex 0x03 length -(Address where is stored process variable)
  SDOREPLY(0x1A02, 0x01, 4, 0x60000320L),

  //Number of Entries x Number of objects mapped into the TPDO4)
  // TPDO4 Mapping Parameters
  SDOREPLY(0x1A03, 0x00, 1, 0x00000001L),
  // Index 0x6000 subindex 0x04 length -(Address where is stored process variable)
  SDOREPLY(0x1A03, 0x01, 4, 0x60000420L),

  // Nr of Entries for subindex zero of arrays used in gODProcTable
  SDOREPLY(0x6000, 0x00, 1, 0x00000004L),
  SDOREPLY(0x6200, 0x00, 1, 0x00000004L),
#endif // PDO_IN_OD


//[0000h,00]:End of table marker
  SDOREPLY(0x0000,00,0,0x00000000L)
};

#ifdef PROCIMG_IN_OD
// Table with Object Dictionary entries to process Data
OD_PROCESS_DATA_ENTRY gODProcTable[] = {

  // IN_x
  ODENTRY(0x6200,0x01,4+ODRD+ODWR,IN_1),
  ODENTRY(0x6200,0x02,4+ODRD+ODWR,IN_2),
  ODENTRY(0x6200,0x03,4+ODRD+ODWR,IN_3),
  ODENTRY(0x6200,0x04,4+ODRD+ODWR,IN_4),
  ODENTRY(0x6200,0x05,4+ODRD+ODWR,IN_5),
  ODENTRY(0x6200,0x06,4+ODRD+ODWR,IN_6),
  ODENTRY(0x6200,0x07,4+ODRD+ODWR,IN_7),
  ODENTRY(0x6200,0x08,4+ODRD+ODWR,IN_8),
  ODENTRY(0x6200,0x09,4+ODRD+ODWR,IN_9),
  ODENTRY(0x6200,0x0A,4+ODRD+ODWR,IN_10),
  ODENTRY(0x6200,0x0B,4+ODRD+ODWR,IN_11),
  ODENTRY(0x6200,0x0C,4+ODRD+ODWR,IN_12),
  ODENTRY(0x6200,0x0D,4+ODRD+ODWR,IN_13),
  ODENTRY(0x6200,0x0E,4+ODRD+ODWR,IN_14),
  ODENTRY(0x6200,0x0F,4+ODRD+ODWR,IN_15),
  ODENTRY(0x6200,0x10,4+ODRD+ODWR,IN_16),

  // OUT_x
  ODENTRY(0x6000,0x01,4+ODRD,OUT_1),
  ODENTRY(0x6000,0x02,4+ODRD,OUT_2),
  ODENTRY(0x6000,0x03,4+ODRD,OUT_3),
  ODENTRY(0x6000,0x04,4+ODRD,OUT_4),
  ODENTRY(0x6000,0x05,4+ODRD,OUT_5),
  ODENTRY(0x6000,0x06,4+ODRD,OUT_6),
  ODENTRY(0x6000,0x07,4+ODRD,OUT_7),
  ODENTRY(0x6000,0x08,4+ODRD,OUT_8),
  ODENTRY(0x6000,0x09,4+ODRD,OUT_9),
  ODENTRY(0x6000,0x0A,4+ODRD,OUT_10),
  ODENTRY(0x6000,0x0B,4+ODRD,OUT_11),
  ODENTRY(0x6000,0x0C,4+ODRD,OUT_12),
  ODENTRY(0x6000,0x0D,4+ODRD,OUT_13),
  ODENTRY(0x6000,0x0E,4+ODRD,OUT_14),
  ODENTRY(0x6000,0x0F,4+ODRD,OUT_15),
  ODENTRY(0x6000,0x10,4+ODRD,OUT_16),
  // End-of-table marker
  ODENTRY(0xFFFF,0xFF,0xFF,0xFF)
};
#endif // PROCIMG_IN_OD

/*************************************************************************/
BYTE Search_OD(WORD index, BYTE subindex)
{
    BYTE  i;
    BYTE  i_hi,hi;
    BYTE  i_lo,lo;
    BYTE const volatile *p;
    BYTE const volatile *r;

    i=0;
    i_hi=(BYTE) (index>>8);
    i_lo=(BYTE) index;
    r=&(SDOResponseTable[0]);
    while(i<255)
    {
        p=r;
        r+=8; // Set r to next record in table
        p++; // Skip command byte
        lo=*p;
        p++;
        hi=*p;
        if((lo==0)&&(hi==0))
        {// if index in table is zero, this is end of table
            return 255;
        }
        if (lo==i_lo)
        {
            if (hi==i_hi)
            {
                p++;
                if(*p==subindex)
                {// Entry found
                    return i;
                }
            }
        }
        i++;
    }// while search loop
    return 0xFF;
}
//*************************************************************************
#ifdef PROCIMG_IN_OD
BYTE SearchODProcTable(WORD index, BYTE subindex )
{
  BYTE j = 0;
  WORD compare;
  // pointer to od records
  OD_PROCESS_DATA_ENTRY *pOD;

  // initialize pointer
  pOD = &(gODProcTable[0]);
  // loop until maximum table size
  while (j < 0xFF)
  {
    compare = pOD->idx;
    // end of table reached?
    if (compare == 0xFFFF)
    {
      return 0xFF;
    }
    // index found?
    if (compare == index)
    {
      // subindex found?
      if (pOD->subidx == subindex)
      {
        return j;
      }
    }
    // increment by SIZEOF(OD_PROCESS_DATA_ENTRY)
    pOD++;
    j++;
  }

  // not found
  return 0xFF;
}
//*************************************************************************
BYTE ReplyWith(BYTE *pDat, BYTE len)
{
  signed char k; // for loop counter

  // expedited, len of data
  gTxSDO.BUF[0] = 0x43 | ((4-len) << 2);
  // copy "backwards" to swap byte order to lowest first
  for (k = (len - 1); k >= 0; k--)
  {
    gTxSDO.BUF[4+k] = *pDat;
    pDat++;
  }

  // transmit message
  //CANopenHW_SendMessage(&gTxSDO, txID, txDLC, txData);
  //if (!)
  //{
    // failed to transmit
  //  CANOpen_FatalError(0x8801);
  //}

  // transmitted ok
  return 1;
}
#endif // PROCIMG_IN_OD

//*************************************************************************
void Send_SDO_Abort(DWORD ErrorCode,uint32_T *txID,uint8_T *txDLC, uint8_T *txData)
{
    BYTE i;
    gTxSDO.BUF[0]=0x80;
    for(i=0;i<4;i++)
    {
        gTxSDO.BUF[4+i]=ErrorCode;
        ErrorCode>>=8;
        CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
    }
}

//************************************************************************
void CopyConstToData(BYTE *dest, BYTE const volatile *src)
{
    BYTE i;
    for (i=0;i<8;i++)
    {
        *dest=*src;
        dest++;
        src++;
    }
}


//*************************************************************************
BYTE Handle_SDO_Request(BYTE *pData,uint32_T *txID,uint8_T *txDLC, uint8_T *txData)
{ //Returns 1 if SDO Access success
  //Returns 0 if SDO Access Abort generated
    BYTE    cmd; // Command byte of SDO request
    WORD    index;// Index of SDO request
    BYTE    subindex;// Subindex of SDO request
    BYTE    found;// Search result of Search_OD

#ifdef PROCIMG_IN_OD
    BYTE    len;
    // pointer to an entry in gODProcTable
    OD_PROCESS_DATA_ENTRY *pOD;
#endif // PROCIMG_IN_OD
    //Init variables
    cmd=*pData&0xE0;// Upper 3-bits are the command
    index=pData[2]; //Get hi byte of index
    index=(index<<8)+pData[1];//Add lo byte of index
    subindex=pData[3];//subindex

    //Copy Multiplexor into response
    gTxSDO.BUF[1]=pData[1];// index lo
    gTxSDO.BUF[2]=pData[2];//index hi
    gTxSDO.BUF[3]=pData[3];// subindex

   //It is a read or write command
    if ((cmd==0x40)||(cmd==0x20))
    {

 #ifdef PROCIMG_IN_OD
      // deal with access to process data
      found=SearchODProcTable(index,subindex);
      //entry found ?
     if (found != 0xFF)
     {
	  pOD = &(gODProcTable[found]);
      // read command?
      if (cmd == 0x40)
      {
        // read allowed?
        if ((pOD->len & ODRD) != 0) // Check if RD bit is set
        {
          return ReplyWith(&(gProcImg[pOD->offset]),(pOD->len & 0x0F));
        }
		// read not allowed
        else
        {
          Send_SDO_Abort(SDO_ABORT_UNSUPPORTED,txID, txDLC, txData);
          return 0;
        }
      }
      // write command?
      else
      {
        // is WR bit set? - then write allowed
        if ((pOD->len & ODWR) != 0)
        {
		  // for writes: Bits 2 and 3 of *pData are number of bytes without data
          len = 4 - ((*pData & 0x0C) >> 2);
          // is length ok?
          if (len != (pOD->len & 0x0F))
          {
            Send_SDO_Abort(SDO_ABORT_TYPEMISMATCH);
            return 0;
          }
          // retrieve data from SDO write request and copy into process image
          while (len > 0)
          {
            len--;
            gProcImg[pOD->offset+len] = gRxCAN.BUF[4+len];
          }
		  // write response
          gTxSDO.BUF[0] = 0x60;
          CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
 		  return 1;
        }
        // write not allowed
        else
        {
          Send_SDO_Abort(SDO_ABORT_UNSUPPORTED,txID, txDLC, txData);
          return 0;
        }
      }
	}
#endif // PROCIMG_IN_OD

    // search const table
    found = Search_OD(index,subindex);
    // entry found?
    if (found < 255)
    {
	  // read command?
      if (cmd == 0x40)
      {
        memcpy(&gTxSDO.BUF[0],&(SDOResponseTable[(found*8)]),8);
        CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
        return 1;
      }
      // write command
      Send_SDO_Abort(SDO_ABORT_READONLY,txID, txDLC, txData);
      return 0;
    }
    if ((index == 0x1001) && (subindex == 0x00))
    {
      // read command
      if (cmd == 0x40)
      {
	    // expedited, 1 byte of data
        gTxSDO.BUF[0] = 0x4F;
        gTxSDO.BUF[4] = gCANOPENConfig.error_register;
        CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
        return 1;
      }
      // write command
      Send_SDO_Abort(SDO_ABORT_READONLY,txID, txDLC, txData);
      return 0;
    }
    #ifdef DYNAMIC_HEARTBEAT
      // Hard coding of dynamic read/write accesses
        if((index==0x1017)&&(subindex==0x00))
        {//Acces to [1017,00] - heartbeat time
            if (cmd==0x40)
            {//Read command
                gTxSDO.BUF[0]=0x4B;// expedited, 2-bytes of data
                gTxSDO.BUF[4]=(BYTE) gCANOPENConfig.heartbeat_time;
                gTxSDO.BUF[5]=(BYTE) (gCANOPENConfig.heartbeat_time>>8);
                CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
                return 1;
            }
            if (*pData==0x2B)
            {// Expedited write command with 2-bytes of data
               gCANOPENConfig.heartbeat_time=pData[5];
               gCANOPENConfig.heartbeat_time=(gCANOPENConfig.heartbeat_time<<8)+pData[4];
               gTxSDO.BUF[0]=0x60;// Write response
               //Needed to pass conformance test: clear unused bytes
               gTxSDO.BUF[4]=0;
               gTxSDO.BUF[5]=0;
               gTxSDO.BUF[6]=0;
               gTxSDO.BUF[7]=0;
               CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
               return 1;
            }
            Send_SDO_Abort(SDO_ABORT_UNSUPPORTED,txID, txDLC, txData);
            return 0;
        }
    #endif// DYNAMIC HEARTBEAT
    // See if the data requested is in the OD
       found=Search_OD(index,subindex);
       if (found<255)
       {//OD entry found
           if (cmd==0x40)
           {// Read command
               CopyConstToData(&gTxSDO.BUF[0],&SDOResponseTable[(found*8)]);
               CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
               return 1;
           }
           // Write command
           Send_SDO_Abort(SDO_ABORT_READONLY,txID, txDLC, txData);
           return 0;
       }
       if ((index==0x1001)&&(subindex==0x00))
        {
            if(cmd==0x40)
            {// Read command
                gTxSDO.BUF[0]=0x4F;//Expedited, 1-byte of data
                gTxSDO.BUF[4]=gCANOPENConfig.error_register;
                CANOpenHW_SendMessage(&gTxSDO.BUF[0], txID, txDLC, txData);
                return 1;
            }
            // Write command
            Send_SDO_Abort(SDO_ABORT_READONLY,txID, txDLC, txData);
            return 0;
        }
        Send_SDO_Abort(SDO_ABORT_NOT_EXISTS,txID, txDLC, txData);
        return 0;
    }
    if (cmd!=0x80)
    {//Ignore "abort receive"" - all others produce error
        Send_SDO_Abort(SDO_ABORT_UNSUPPORTED,txID, txDLC, txData);
        return 0;
    }
    return 1;
}

void SDO_Write(WORD Node_ID, WORD index, BYTE subindex, uint32_T data,BYTE len)
{
	signed char k;
    gTxSDOw.ID=0x600+Node_ID;
 	gTxSDOw.LEN=8;
	gTxSDOw.BUF[0]=0x23 | ((4-len)<<2);
	gTxSDOw.BUF[1]=(BYTE) (index & 0xFF);
	gTxSDOw.BUF[2]=(BYTE) ((index>>8) & 0xFF);
	gTxSDOw.BUF[3]= subindex;
	for (k=0;k<4;k++)
	  gTxSDOw.BUF[4+k]=0;
	switch(len)
	{
		case 1:
            gTxSDOw.BUF[4]= (BYTE) (data);
		break;
		case 2:
		    gTxSDOw.BUF[4]= (BYTE) (data);
		    gTxSDOw.BUF[5]= (BYTE) (data>>8);
		break;
		case 3:
		    gTxSDOw.BUF[4]= (BYTE) (data);
		    gTxSDOw.BUF[5]= (BYTE) (data>>8);
	  	    gTxSDOw.BUF[6]= (BYTE) (data>>16);
		break;
		case 4:
		    gTxSDOw.BUF[4]= (BYTE) (data);
		    gTxSDOw.BUF[5]= (BYTE) (data>>8);
	  	    gTxSDOw.BUF[6]= (BYTE) (data>>16);
		    gTxSDOw.BUF[7]= (BYTE) (data>>24);
		break;

	}

	// transmit SDO
	//CANopenHW_SendMessage(&gTxSDOw);

}


//******************************  CANOpenSlave_ProcessStack *******************************//
//Syncronous function that must be called on each CAN packet RX attempt
//Considers valid data when rxDLC>0
//Ouput data to be transmitted is considered valid when *txData>0
void CANOpenSlave_ProcessStackAsyncRx(uint32_T *txID, uint8_T *txDLC, uint8_T *txData)
{
    BYTE    i;
   //gTimCnt++; //always advancing time

   aux_gTimCnt++; //always advancing time

    if (aux_gTimCnt > TimFactor)
    {
        gTimCnt++;
        aux_gTimCnt = 0;
    }

    /*     */
	*txDLC = 0; //nothing to send

#ifdef INTERNAL_RX_QUEUE
    //Work on next incoming messages
    if(can_rx_queue.in != can_rx_queue.out)
    {// Message received
		gRxCAN = &(can_rx_queue.msg[can_rx_queue.out]);
#else
	if(gRxCAN) {
#endif
        //Check if it is NMT master message
        if ((gRxCAN->ID==0) && (gRxCAN->LEN<3)) //31.12.2020
        {// NMT Master Message
            if((gRxCAN->BUF[1]==gCANOPENConfig.Node_ID)||(gRxCAN->BUF[1]==0))
            {// NMT message is for this node or for all nodes
                switch (gRxCAN->BUF[0])
                {
                    case 0x01://Start node
                        gCANOPENConfig.heartbeat_msg.BUF[0]=0x05;
                        #if NR_OF_TPDOS>0
                        Prepare_TPDOs();
                        #endif
                        break;
                    case 0x02://Stop node
                        gCANOPENConfig.heartbeat_msg.BUF[0]=0x04;
                        break;
                    case 0x80:
                        gCANOPENConfig.heartbeat_msg.BUF[0]=0x7F;
                        break;
                    case 0x81:// Node Reset
                        CANOpenSlave_ResetApplication();
                        break;
                    case 0x82: // Reset Communication
                        CANOpenSlave_ResetCommunication();
                        break;
                    default:
                        break;
                }
				#ifdef INTERNAL_RX_QUEUE
				can_rx_queue.out = CAN_MSG_QUEUE_NEXT(can_rx_queue.out);
				#else
				gRxCAN = NULL;
				#endif
                return;
            }// NMT message addressed to this node
        }// NMT master message received
/**********************************************************************************************/
        // If node is not stopped...  22.12.2020

        // Check if it is SDO request message
       if (gCANOPENConfig.heartbeat_msg.BUF[0]!=0x04)
       {// Node is NOT stopped
            if (gRxCAN->ID==gCANOPENConfig.Node_ID+0x600)
            {// SDO Request
                i=Handle_SDO_Request(&gRxCAN->BUF[0],txID,txDLC, txData);//Returned value not used in this version
            }
        }
/***********************************************************************************************/

        #if NR_OF_RPDOS>0
        //Check if it is RPDO message
        if (gCANOPENConfig.heartbeat_msg.BUF[0]==0x05)
        {// Node is in operational
            i=0;
            while(i<NR_OF_RPDOS)
            {
                if(gRxCAN->ID==gRPDOConfig[i].ID && gRxCAN->LEN == gRPDOConfig[i].LEN)
                {// RPDO match
					/* Initial code, before aug 2020
                    if (i<3)
                         memcpy(gRPDOConfig[i].pData,&(gRxCAN->BUF[0]),gRPDOConfig[i].LEN);
                    else
                    {
                         memcpy(gRPDOConfig[3+gRxCAN->BUF[0]].pData,&(gRxCAN->BUF[1]),gRPDOConfig[3+gRxCAN->BUF[0]].LEN-1);
                    }*/
                    memcpy(gRPDOConfig[i].pData, &(gRxCAN->BUF[0]),gRPDOConfig[i].LEN);
                    i=NR_OF_RPDOS;
                }
                i++;
            }// for all RPDOs
        }// Node is operational
        #endif //NR_OF_RPDOS>0
		#ifdef INTERNAL_RX_QUEUE
		can_rx_queue.out = CAN_MSG_QUEUE_NEXT(can_rx_queue.out);
		#else
		gRxCAN = NULL;
		#endif
    }// Message received



	if(gTPDONr==0xFF)// Was set by CANOpenSlave_init()
    {
        //init heartbeat time
        gCANOPENConfig.heartbeat_timestamp=CANOpenHW_GetTime()+gCANOPENConfig.heartbeat_time;
        //Send Boot-up message
        CANOpenHW_SendMessage(&gCANOPENConfig.heartbeat_msg, txID, txDLC, txData);
        #ifdef AUTOSTART
            gCANOPENConfig.heartbeat_msg.BUF[0]=0x05; //going into operational state
            #if NR_OF_TPDOS>0
                Prepare_TPDOs();
            #endif
        #else// AUTOSTART
            gCANOPENConfig.heartbeat_msg.BUF[0]=0x7F; //going into pre-operational state
        #endif// AUTOSTART
        gTPDONr=NR_OF_TPDOS;//Return value to default
        return;
    }

    #if NR_OF_TPDOS>0
    // Check Next TPDO for transmit
    if (gCANOPENConfig.heartbeat_msg.BUF[0]==0x05)
    {// Node is in operational
        gTPDONr++;
        if(gTPDONr>=NR_OF_TPDOS)
        {
            gTPDONr=0;
        }
        //if (gTPDOConfig[gTPDONr].CAN.ID!=0) //31.12.2020
        //{//TPDO 'gTPDONr' is used
            #ifdef USE_EVENT_TIME
            if((gTPDOConfig[gTPDONr].event_time!=0)&& (CANOpenHW_IsTimeExpired(gTPDOConfig[gTPDONr].event_timestamp)))
            {//TPDO 'i' uses event timer and event timer is expired
             //Get application data
                memcpy(gTPDOConfig[gTPDONr].CAN.BUF,gTPDOConfig[gTPDONr].pData, gTPDOConfig[gTPDONr].CAN.LEN);
                TransmitPDO(gTPDONr, txID, txDLC, txData);
                return;
            }
            #endif //USE_EVENT_TIME
            #ifdef USE_INHIBIT_TIME
            if(gTPDOConfig[gTPDONr].inhibit_time!=0)
            {// Not using event timer, COS transmission
                if (gTPDOConfig[gTPDONr].inhibit_status==2)
                {// New transmit message already waiting
                    if (CANOpenHW_IsTimeExpired(gTPDOConfig[gTPDONr].inhibit_timestamp))
                    {//Inhibit time did expire
                        TransmitPDO(gTPDONr, txID, txDLC, txData);
                        return;
                    }
                }
                else
                {// Inhibit status is 0 or 1
                 // Check if application data changed
                    if((memcmp(&gTPDOConfig[gTPDONr].CAN.BUF[0],gTPDOConfig[gTPDONr].pData, gTPDOConfig[gTPDONr].CAN.LEN)!=0))
                    {// Application data changed!
                     //Copy application data
                         memcpy(&gTPDOConfig[gTPDONr].CAN.BUF[0],gTPDOConfig[gTPDONr].pData, gTPDOConfig[gTPDONr].CAN.LEN);
                         if (gTPDOConfig[gTPDONr].inhibit_status==0)
                         {// Inhibit time already expired
                             TransmitPDO(gTPDONr, txID, txDLC, txData);
                             return;
                         }
                        //inhibit_status is 1
                        gTPDOConfig[gTPDONr].inhibit_status=2;//Wait for inhibit time to expire
                    }
                }
            }// Inhibit Time !=0
            #endif //USE_INHIBIT_TIME
        //}// PDO active (CAN_ID!=0) //31.12.20202
    }// if node is operational
    #endif // NR_OF_TPDOS>0

    //Produce Heartbeat
    if (gCANOPENConfig.heartbeat_time!=0)
    {
        if (CANOpenHW_IsTimeExpired(gCANOPENConfig.heartbeat_timestamp))
        {
            CANOpenHW_SendMessage(&gCANOPENConfig.heartbeat_msg, txID, txDLC, txData);
            gCANOPENConfig.heartbeat_timestamp=CANOpenHW_GetTime()+gCANOPENConfig.heartbeat_time;
        }
    }
}

void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, uint8_T const *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData)
{
	if(rxDLC>0) {
		#ifdef INTERNAL_RX_QUEUE
		uint8_T n = CAN_MSG_QUEUE_NEXT(can_rx_queue.in);
		if(n != can_rx_queue.out) {
			CAN_MSG *d = &(can_rx_queue.msg[can_rx_queue.in]);
			memcpy(d->BUF, rxData, rxDLC);
			d->ID = rxID;
			d->LEN = rxDLC;
			can_rx_queue.in = n;
		}
		#else
			gRxCAN = &can_rx;
			memcpy(gRxCAN->BUF, rxData, rxDLC);
			gRxCAN->ID = rxID;
			gRxCAN->LEN = rxDLC;
		#endif
	}
	CANOpenSlave_ProcessStackAsyncRx(txID, txDLC, txData);
}

void CANOpenSlave_GetRPDO(uint8_T no, uint8_T *data) {
	memcpy(data, gRPDOConfig[no].pData, gRPDOConfig[no].LEN);
}
void CANOpenSlave_SetTPDO(uint8_T no, uint8_T const *data) {
	memcpy(gTPDOConfig[no].pData, data, 8);//gTPDOConfig[no].CAN.LEN);
}

