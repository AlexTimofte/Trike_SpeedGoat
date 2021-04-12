
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
RPDO_ID1C8 RPDO11;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void AN2CAN_converter_Outputs_wrapper(uint16_T *Channel_AN1,
			uint16_T *Channel_AN2,
			uint16_T *Channel_AN3,
			uint16_T *Channel_AN4)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
*Channel_AN1   = RPDO11.AN_01;
*Channel_AN2   = RPDO11.AN_02; 
*Channel_AN3   = RPDO11.AN_03;
*Channel_AN4   = RPDO11.AN_04;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


