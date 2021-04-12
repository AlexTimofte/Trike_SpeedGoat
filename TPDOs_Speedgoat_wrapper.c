
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
#define u_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO_ID20x   TPDO02;
TPDO_ID30x   TPDO03;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TPDOs_Speedgoat_Outputs_wrapper(const uint16_T *DunkA_ControlWord,
			const int8_T *DunkA_OperationMode,
			const int16_T *DunkA_BrakeControl,
			const int32_T *DunkA_TargetPosition,
			const int32_T *DunkA_TargetVelocity)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO02.ControlWord   = *DunkA_ControlWord;
TPDO02.BrakeControl  = *DunkA_BrakeControl;
TPDO02.OperationMode = *DunkA_OperationMode;
TPDO02.dummy1        = 0;
TPDO02.dummy2        = 0;
TPDO02.dummy3        = 0;
TPDO02.dummy4        = 0;
TPDO02.dummy5        = 0;

TPDO03.TargetPosition = *DunkA_TargetPosition; 
TPDO03.TargetVelocity = *DunkA_TargetVelocity;
TPDO03.dummy1         = 0;
TPDO03.dummy2         = 0;
TPDO03.dummy3         = 0;
TPDO03.dummy4         = 0;
TPDO03.dummy5         = 0;
TPDO03.dummy6         = 0;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


