#ifndef _CANOPEN_DEFINES_H
#define _CANOPEN_DEFINES_H
#include <string.h>

/*************************************************************************
                       GLOBAL TYPE DEFINITIONS
*************************************************************************/

//Standard data types
#define BYTE                        unsigned char
#define WORD                        uint16_T
#define DWORD                       uint32_T

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

/**************************************************************************/
//Data structure for a single CAN message
typedef struct
{
    WORD    ID;                     // Message Identifier
    BYTE    LEN;                    // Data length (0-8)
    BYTE    BUF[8];                // Data buffer
}CAN_MSG;

/**************************************************************************/
//This structure holds all node specific configuration
typedef struct
{
    BYTE    Node_ID;                // Current Node ID (1-126)
    WORD    error_code;             // Error code for OD entry [1003,00]
    WORD    Baudrate;               // Current Baudrate in kbit
    WORD    heartbeat_time;         // Heartbeat time in ms
    WORD    heartbeat_timestamp;    // Timestamp of last heartbeat
    CAN_MSG heartbeat_msg;          // Heartbeat message contents
    BYTE    error_register;         // Error register for OD entry [1001,00]
}CANOPEN_CONFIG;

/**************************************************************************/
//This structure holds all the TPDO configuration data for one TPDO
typedef struct
{
//#ifdef USE_EVENT_TIME
    WORD    event_time;             // Event timer in ms
    WORD    event_timestamp;        // If event timer is used, this is the
                                    // timestamp for the next transmission
//#endif
//#ifdef  USE_INHIBIT_TIME
    WORD    inhibit_time;           // Inhibit timer in ms
    WORD    inhibit_timestamp;      // If inhibit timer is used, this is the
                                    // timestamp for the next transmission
    BYTE    inhibit_status;         // 0: Inhibit timer not started or expired
                                    // 1: Inhibit timer started
                                    // 2: Transmit msg waiting for expiration of inhibit
//#endif
    BYTE    pData;                 // Pointer to application data in process image
    CAN_MSG CAN;                    // Current/last message to be transmitted
}TPDO_CONFIG;

/**************************************************************************/
//This structure holds all the RPDO configuration data for one RPDO
typedef struct
{
    WORD    ID;                      // Message Identifier
    BYTE    LEN;                     // Data length (0-8)
    BYTE    pData;                  // Pointer to destination of data
}RPDO_CONFIG;

/**************************************************************************/
// This structure holds all data for one process data entry in the OD
typedef struct
{
  WORD idx;                 // Index of OD entry
  BYTE subidx;              // Subindex of OD entry
  BYTE len;                 // Data length in bytes (1-4), plus bits ODRD, ODWR, RMAP/WMAP
  BYTE offset;              // Offset to process data in process image
} OD_PROCESS_DATA_ENTRY;

/**************************************************************************/
// Define the size of the process image
//#define PROCIMG_SIZE 128 //(16 x 4 bytes)x2 -old 05.10.2015
#define PROCIMG_SIZE 256 //(16 x 8 bytes)x2
/**************************************************************************/
// Define process variables: offsets into the process image
//          Input 1
#define     IN_1            0x00
//          Input 2
#define     IN_2            0x08
//          Input 3
#define     IN_3            0x10
//          Input 4
#define     IN_4            0x18
//          Input 5
#define     IN_5            0x20
//          Input 6
#define     IN_6            0x28
//          Input 7
#define     IN_7            0x30
//          Input 8
#define     IN_8            0x38
//          Input 9
#define     IN_9            0x40
//          Input 10
#define     IN_10           0x48
//          Input 11
#define     IN_11           0x50
//          Input 12
#define     IN_12           0x58
//          Input 13
#define     IN_13           0x60
//          Input 14
#define     IN_14           0x68
//          Input 15
#define     IN_15           0x70
//          Input 16
#define     IN_16           0x78

/**************************************************************************/
//          Output 1
#define     OUT_1           0x80
//          Output 2
#define     OUT_2           0x88
//          Output 3
#define     OUT_3           0x90
//          Output 4
#define     OUT_4           0x98
//          Output 5
#define     OUT_5           0xA0
//          Output 6
#define     OUT_6           0xA8
//          Output 7
#define     OUT_7           0xB0
//          Output 8
#define     OUT_8           0xB8
//          Output 1
#define     OUT_9           0xC0
//          Output 2
#define     OUT_10          0xC8
//          Output 3
#define     OUT_11          0xD0
//          Output 4
#define     OUT_12          0xD8
//          Output 5
#define     OUT_13          0xE0
//          Output 6
#define     OUT_14          0xE8
//          Output 7
#define     OUT_15          0xF0
//          Output 8
#define     OUT_16          0xF8

#endif
