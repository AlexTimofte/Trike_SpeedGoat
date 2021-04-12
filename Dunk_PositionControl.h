 #include "CANOpenSlave_PDOs.h" 

// void test(uint8_T input, int *output);
void Position_Control(uint16_T sts_word, int8_T sts_op_mode, uint32_T target_pos, uint16_T power_on, uint16_T set_homing, uint16_T *ctrl_word, uint8_T *ctrl_op_mode,int32_T *ctrl_position);




