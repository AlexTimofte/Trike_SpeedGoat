
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
TPDO_ID1A4 TPDO01;

/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TPDOs_Speedgoat_Outputs_wrapper(const uint8_T *Byte0Ctrl,
			const uint8_T *Byte5Ctrl,
			const uint8_T *Byte6Ctrl)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO01.ControlWord = *Byte0Ctrl;
TPDO01.dummy0 =0;
TPDO01.dummy1 =0;
TPDO01.dummy2 =0;
TPDO01.dummy3 =0;
TPDO01.PedalPosition =*Byte5Ctrl;
TPDO01.Heartbeat = *Byte6Ctrl;
TPDO01.dummy4 = 0;

/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


