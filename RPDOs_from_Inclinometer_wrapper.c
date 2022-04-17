
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
RPDO_ID589 RPDO14;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void RPDOs_from_Inclinometer_Outputs_wrapper(uint8_T *X_sign,
			uint8_T *X_AngleH,
			uint8_T *X_AngleL,
			uint8_T *Y_sign,
			uint8_T *Y_AngleH,
			uint8_T *Y_AngleL)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
*X_sign   = RPDO14.X_Dir;
*X_AngleH = RPDO14.X_AngleH;
*X_AngleL = RPDO14.X_AngleL;
*Y_sign   = RPDO14.Y_Dir;
*Y_AngleH = RPDO14.Y_AngleH;
*Y_AngleL = RPDO14.Y_AngleL;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


