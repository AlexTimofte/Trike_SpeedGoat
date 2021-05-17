#include "customcode_YniSwGxVGDuH0o55vVoK7E.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern void get_gRxCAN_addr_YniSwGxVGDuH0o55vVoK7E(CAN_MSG ***varAddr);
DLL_EXPORT_CC extern void get_can_rx_queue_addr_YniSwGxVGDuH0o55vVoK7E(CAN_MSG_QUEUE **varAddr);
DLL_EXPORT_CC extern const char_T *get_dll_checksum_YniSwGxVGDuH0o55vVoK7E(void);
DLL_EXPORT_CC extern void CANOpenSlave_SetTPDO_YniSwGxVGDuH0o55vVoK7E(uint8_T no, const uint8_T *data);
DLL_EXPORT_CC extern void CANOpenSlave_GetRPDO_YniSwGxVGDuH0o55vVoK7E(uint8_T no, uint8_T *data);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStackAsyncRx_YniSwGxVGDuH0o55vVoK7E(uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_ResetCommunication_YniSwGxVGDuH0o55vVoK7E(void);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStack_YniSwGxVGDuH0o55vVoK7E(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenHW_SendMessage_YniSwGxVGDuH0o55vVoK7E(CAN_MSG *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern uint8_T Handle_SDO_Request_YniSwGxVGDuH0o55vVoK7E(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

