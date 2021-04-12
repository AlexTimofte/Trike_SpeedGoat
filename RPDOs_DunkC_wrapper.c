
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include  "Data_Type.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
RPDO_ID18x RPDO10;
RPDO_ID28x RPDO11;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void RPDOs_DunkC_Outputs_wrapper(uint16_T *StatusWord,
			int8_T *OperationMode,
			int16_T *CurrentActualValue,
			int16_T *ActualTorque,
			int32_T *ActualPosition,
			int32_T *ActualVelocity)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
*StatusWord         =  (uint16_T) RPDO10.StatusWord;
*OperationMode      = (int8_T)  RPDO10.StatusOpMode; 
*CurrentActualValue = RPDO10.CurrentActualValue;
*ActualTorque       = RPDO10.ActualTorque;

*ActualPosition     = RPDO11.ActualPosition;
*ActualVelocity     = RPDO11.ActualVelocity;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


