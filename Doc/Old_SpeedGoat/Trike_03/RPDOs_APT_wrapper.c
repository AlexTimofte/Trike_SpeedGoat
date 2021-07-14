
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
RPDO_ID1C1 RPDO03;
RPDO_ID1C2 RPDO04;
RPDO_ID1C3 RPDO05;
uint16_T CurrentH, CurrentL;
uint16_T SpeedH, SpeedL;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void RPDOs_APT_Outputs_wrapper(uint8_T *StatusWord,
			int16_T *PhaseCurrent,
			int16_T *Speed,
			uint16_T *BusVoltage,
			int8_T *MotorTemp,
			int8_T *APTTemp,
			uint8_T *ErrStatus,
			uint8_T *PedalPos,
			uint8_T *Direction)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
*StatusWord = RPDO03.Byte0;

CurrentH = RPDO03.Byte1;
CurrentL = RPDO03.Byte2;
*PhaseCurrent = ((CurrentH<<8)|CurrentL);

SpeedH = RPDO03.Byte5;
SpeedL = RPDO03.Byte6;
*Speed = ((SpeedH<<8)|SpeedL) -8000;

*BusVoltage = SWAP16(RPDO04.BusVoltage);

*MotorTemp = ((int8_T)RPDO04.MotorTemperature)-10;
*APTTemp = ((int8_T)RPDO04.APTTemperature)-10;

*ErrStatus = (uint8_T) RPDO05.ErrorStatus;

*Direction = (uint8_T) RPDO05.Direction;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


