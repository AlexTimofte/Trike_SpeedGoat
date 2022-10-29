
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
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TPDOs_to_DunkB_Outputs_wrapper(const uint8_T *ClearError,
			const uint8_T *DeviceMode,
			const uint8_T *PowerEnable,
			const uint8_T *BrakeCtrl,
			const int32_T *DesiredCurrent)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
TPDO02.ClearError           = *ClearError;
TPDO02.DeviceMode           = *DeviceMode;
TPDO02.PowerEnable          = *PowerEnable;
TPDO02.BrakeCtrl            = *BrakeCtrl;
TPDO02.DesiredCurrent       = *DesiredCurrent;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


