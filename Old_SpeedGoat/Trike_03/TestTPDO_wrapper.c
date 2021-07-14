
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
TPDO_ID186 TPDO01;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TestTPDO_Outputs_wrapper(const uint8_T *S1,
			const uint8_T *S2,
			const uint8_T *S3,
			const uint8_T *S4,
			const uint8_T *S5,
			const int16_T *S6,
			const uint8_T *S8)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO01.Status1 = *S1;
TPDO01.Status2 = *S2;
TPDO01.Status3 = *S3;
TPDO01.Status4 = *S4;
TPDO01.Status5 = *S5;
TPDO01.Status6 = *S6;
TPDO01.Status8 = *S8;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


