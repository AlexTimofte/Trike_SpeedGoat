
#include "Dunk_PositionControl.h"



uint8_T sts_homing = 0, aux = 0,sts=0,i=0;

void Position_Control(uint16_T sts_word, int8_T sts_op_mode, uint32_T target_pos, uint16_T power_on, uint16_T set_homing, uint16_T *ctrl_word, uint8_T *ctrl_op_mode,int32_T *ctrl_position)
{
    if (set_homing > 0)
    {
        aux           = 1;
    }
    
    if (aux > 0)
    {
        *ctrl_op_mode = 6;
        if (sts_op_mode != 6)  return;  // asteapta confirmarea
         
        *ctrl_word = 6;                 // shutdown
        if (sts_word != 545)  return;   
         
        *ctrl_word = 7;                 // switchon
        if (sts_word != 563)  return;   
          
        *ctrl_word = 15;                 // operation enable
        if (sts_word != 567)  return;   
           
        *ctrl_word = 31;                 // set 0 pos
        if (sts_word != 5687)  return;   
        
        *ctrl_op_mode = 1; 
            if (sts_word != 1591 && sts_op_mode != 1)  return; 
            else aux=1;
        
          
        
        
    }
}
