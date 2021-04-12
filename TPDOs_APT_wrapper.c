
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
#include  "Data_TypeAPT.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO_ID1A4 TPDO01_APT;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TPDOs_APT_Outputs_wrapper(const uint8_T *APT_ControlWord,
			const uint8_T *APT_PedalPosition,
			const uint8_T *APT_HeartBeat)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO01_APT.ControlWord    = *APT_ControlWord;
TPDO01_APT.PedalPosition  = *APT_PedalPosition;
TPDO01_APT.Heartbeat      = *APT_HeartBeat;
TPDO01_APT.dummy0         = 0;
TPDO01_APT.dummy1         = 0;
TPDO01_APT.dummy2         = 0;
TPDO01_APT.dummy4         = 0;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


