#include "customcode_P8dqyFAtJXM1YDSMrpNtpB.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern void get_gRxCAN_addr_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG ***varAddr);
DLL_EXPORT_CC extern void get_can_rx_queue_addr_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG_QUEUE **varAddr);
DLL_EXPORT_CC extern void get_can_rx_queue_APT_addr_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG_QUEUE_APT **varAddr);
DLL_EXPORT_CC extern void get_gRxCAN_APT_addr_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG_APT ***varAddr);
DLL_EXPORT_CC extern const char_T *get_dll_checksum_P8dqyFAtJXM1YDSMrpNtpB(void);
DLL_EXPORT_CC extern uint8_T Handle_SDO_Request_APT_P8dqyFAtJXM1YDSMrpNtpB(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_SetTPDO_APT_P8dqyFAtJXM1YDSMrpNtpB(uint8_T no, const uint8_T *data);
DLL_EXPORT_CC extern void CANOpenSlave_SetTPDO_P8dqyFAtJXM1YDSMrpNtpB(uint8_T no, const uint8_T *data);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStackAsyncRx_APT_P8dqyFAtJXM1YDSMrpNtpB(uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStack_APT_P8dqyFAtJXM1YDSMrpNtpB(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenHW_SendMessage_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_ResetCommunication_APT_P8dqyFAtJXM1YDSMrpNtpB(void);
DLL_EXPORT_CC extern void CANOpenSlave_ResetCommunication_P8dqyFAtJXM1YDSMrpNtpB(void);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStack_P8dqyFAtJXM1YDSMrpNtpB(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_ProcessStackAsyncRx_P8dqyFAtJXM1YDSMrpNtpB(uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_GetRPDO_APT_P8dqyFAtJXM1YDSMrpNtpB(uint8_T no, uint8_T *data);
DLL_EXPORT_CC extern uint8_T Handle_SDO_Request_P8dqyFAtJXM1YDSMrpNtpB(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);
DLL_EXPORT_CC extern void CANOpenSlave_GetRPDO_P8dqyFAtJXM1YDSMrpNtpB(uint8_T no, uint8_T *data);
DLL_EXPORT_CC extern void CANOpenHW_SendMessage_APT_P8dqyFAtJXM1YDSMrpNtpB(CAN_MSG_APT *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

