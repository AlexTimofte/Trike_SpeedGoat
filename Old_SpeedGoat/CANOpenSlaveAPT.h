/*
 * File: CANOpenSlaveAPT.h
 *
 * Abstract:
 *   CANOpen Slave Protocol Stack for APT QS Motor Controller
 *   Status:
 */
#ifndef _CANOPENSLAVE_APT_DEFINES_H
#define _CANOPENSLAVE_APT_DEFINES_H
#include "CANOpenSlave_APT_PDOs.h"

//Standard data types
#define BYTE uint8_T
#define WORD uint16_T
#define DWORD uint32_T

/**************************************************************************
                            CUSTOMIZATION AREA
 *************************************************************************/
#define OD_NODEID_APT               0x06
#define OD_HEARTBEAT_APT            6000L

//Maximum number of transmit PDOs (0 to 16)
#define NR_OF_TPDOS_APT             1
//Maximum number of receive  PDOs (0 to 16)
#define NR_OF_RPDOS_APT             3

/**************************************************************************
DEFINES: CONST ENTRIES IN OBJECT DICTIONARY
Modify these for your application
**************************************************************************/
#define OD_DEVICE_TYPE_APT   0x000F0191L
#define OD_DEVICE_NAME_APT   0x6161
#define OD_VENDOR_ID_APT     0x00000000L
#define OD_PRODUCT_CODE_APT  0x00000001L
#define OD_REVISION_APT      0x00000001L
// The following are optional and can also be left "undefined"
#define OD_SERIAL_APT        0xFFFFFFFFL

/**************************************************************************
 MACROS FOR OBJECT DICTIONARY ENTRIES
 *************************************************************************/
#define GETBYTE(val,pos)((val>>pos)&0xFF)
#define GETBYTES16(val) GETBYTE(val,0),GETBYTE(val,8)
#define GETBYTES32(val) GETBYTE(val,0),GETBYTE(val,8),GETBYTE(val,16),GETBYTE(val,24)

#define SDOREPLY(index,sub,len,val) 0x43|((4-len)<<2),GETBYTES16(index),sub,GETBYTES32(val)
#define ODENTRY(index,sub,len,offset) {index, sub,len, offset}

//SDO Abort Messages
#define SDO_ABORT_UNSUPPORTED       0x06010000UL
#define SDO_ABORT_NOT_EXISTS        0x06020000UL
#define SDO_ABORT_READONLY          0x06010002UL
#define SDO_ABORT_TYPEMISMATCH      0x06070010UL

#define SDO_ABORT_UNKNOWN_COMMAND   0x05040001UL
#define SDO_ABORT_UNKNOWNSUB        0x06090011UL

//Data Handling Macros
#define SWAP16(x) ((((x)&0xff)<<8)|(((x)&0xff00)>>8))


/************************************************************************************
*******   DEFINES:ENABLING/DISABLING CODE FUNCTIONALITY  Speedgoat  channel 2 *******
************************************************************************************/

//If defined, 1 or more TPDOs use the event time
#define USE_EVENT_TIME_APT

//If defined, 1 or more TPDOs are change-of-state and use the inhibit time
//#define USE_INHIBIT_TIME_APT

// If defined, the PDO parameters are added to the Object Dictionary
// Entries must be added to the SDOResponseTable in CANOpen_utils.c ??
//#define PDO_IN_OD_APT

// If defined, the Process Data is accesible via SDO requests
// Entries must be added to the ODProcTable in CANOpen_utils.c ??
//#define PROCIMG_IN_OD_APT

// If defined, OD entry [1017,00] is supported with SDO read/write accesses
// This is also an example on how to implement dynamic/variable OD entries
#define DYNAMIC_HEARTBEAT_APT

// If defined, node starts up automatically (does not wait for NMT master)
#define AUTOSTART_APT

// If defined, all parameters passed to functions are checked for consistency.
// On failures, the user function CANopen_FatalError is called.
//#define CHECK_PARAMETERS_APT

/**************************************************************************
END OF CUSTOMIZATION AREA - DON'T CHANGE ANYTHING BELOW
**************************************************************************/
#ifdef PROCIMG_IN_OD_APT
// Defines for access type in OD entries
  #ifndef   ODRD
    #define ODRD 0x10
    #define ODWR 0x20
  #endif
BYTE gProcImg_APT[PROCIMG_SIZE];
#endif // PROCIMG_IN_OD

#ifndef USE_EVENT_TIME_APT
//  #ifndef USE_INHIBIT_TIME_APT
//#error At least one, USE_EVENT_TIME_APT or USE_INHIBIT_TIME_APT must be defined!
//  #endif
#endif

#if (NR_OF_RPDOS_APT == 0)
  #if (NR_OF_TPDOS_APT == 0)
#error At least one PDO must be defined!
  #endif
#endif

#if ((NR_OF_TPDOS_APT > 16) || (NR_OF_RPDOS_APT > 16))
#error This configuration was never tested by ESAcademy!
#endif


//Internal CAN RX queue size
#define INTERNAL_RX_QUEUE_APT

#ifdef INTERNAL_RX_QUEUE_APT
#define CAN_MSG_QUEUE_LEN_APT 8
#endif

/**************************************************************************
 END OF CUSTOMIYZATION AREA
 **************************************************************************/

/**************************************************************************
 GLOBAL TYPE DEFINITIONS
 *************************************************************************/


//Data structure for a single CAN message
typedef struct {
	union {
		BYTE    BUF[8];                 // Data buffer
		struct {
			DWORD DW0;
			DWORD DW1;
		};
		struct {
			WORD W0;
			WORD W1;
			WORD W2;
			WORD W3;
		};
	};
    WORD    ID;                     // Message Identifier
    BYTE    LEN;                    // Data length (0-8)
} CAN_MSG_APT;

#ifdef INTERNAL_RX_QUEUE_APT
#define CAN_MSG_QUEUE_NEXT_APT(x) (((x)<((CAN_MSG_QUEUE_LEN_APT)-1))?((x)+1):0)
typedef struct {
	uint32_T ovf_cnt;
	CAN_MSG_APT msg[CAN_MSG_QUEUE_LEN_APT];
	uint8_T in;
	uint8_T out;
} CAN_MSG_QUEUE_APT;

CAN_MSG_QUEUE_APT  can_rx_queue_APT;
CAN_MSG_APT         *gRxCAN_APT;
#else
//This structure holds the current receive message
CAN_MSG_APT   can_rx_APT;
CAN_MSG_APT   * gRxCAN_APT;
#endif

//This structure holds all node specific configuration
typedef struct
{
    BYTE        Node_ID;                // Current Node ID (1-126)
    WORD        error_code;             // Error code for OD entry [1003,00]
    WORD        Baudrate;               // Current Baudrate in kbit
    WORD        heartbeat_time;         // Heartbeat time in ms
    WORD        heartbeat_timestamp;    // Timestamp of last heartbeat
    CAN_MSG_APT heartbeat_msg;          // Heartbeat message contents
    BYTE        error_register;         // Error register for OD entry [1001,00]
} CANOpenSlave_CONFIG_APT;

//This structure holds all the TPDO configuration data for one TPDO
typedef struct
{
#ifdef USE_EVENT_TIME_APT
    WORD    event_time;             // Event timer in ms
    WORD    event_timestamp;        // If event timer is used, this is the
                                    // timestamp for the next transmission
#endif
#ifdef  USE_INHIBIT_TIME_APT
    WORD        inhibit_time;       // Inhibit timer in ms
    WORD        inhibit_timestamp;  // If inhibit timer is used, this is the
                                    // timestamp for the next transmission
    BYTE        inhibit_status;     // 0: Inhibit timer not started or expired
                                    // 1: Inhibit timer started
                                    // 2: Transmit msg waiting for expiration of inhibit
#endif
    BYTE        *pData;             // Pointer to application data
    CAN_MSG_APT CAN;            // Current/last message to be transmitted
}TPDO_CONFIG_APT;

//This structure holds all the RPDO configuration data for one RPDO
typedef struct
{
    WORD    ID;                     // Message Identifier
    BYTE    LEN;                    // Data length (0-8)
    BYTE    *pData;                 // Pointer to destination of data
}RPDO_CONFIG_APT;


/**************************************************************************
 PUBLIC FUNCTIONS
 *************************************************************************/

void CANOpenSlave_ResetCommunication_APT(void);
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, uint8_T const *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T *data);
void CANOpenHW_SendMessage_APT(CAN_MSG_APT *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
void CANOpenSlave_SetTPDO_APT(uint8_T no, uint8_T const *data);

BYTE Handle_SDO_Request_APT(BYTE *pData,uint32_T *txID,uint8_T *txDLC, uint8_T *txData);
#endif
