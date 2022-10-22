#ifndef __SpeedgoatCANOpen2Buses1ms_XPCOPTIONS_H___
#define __SpeedgoatCANOpen2Buses1ms_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "SpeedgoatCANOpen2Buses1ms.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_SpeedgoatCANOpen2Buses1ms_T))
#define SIMMODE                        0
#define LOGTET                         0
#define LOGBUFSIZE                     140000
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void SpeedgoatCANOpen2Buses1ms_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_SpeedgoatCANOpen2Buses1ms_T *const SpeedgoatCANOpen2Buses1ms_M)
{
  real_T ratio = newBaseRateStepSize / 0.0001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize1 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize1 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize2 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize2 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize3 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize3 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize4 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize4 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize5 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize5 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize6 =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize6 * ratio;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize =
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  SpeedgoatCANOpen2Buses1ms_ChangeStepSize(stepSize, SpeedgoatCANOpen2Buses1ms_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(SpeedgoatCANOpen2Buses1ms_M, errMsg);
}

#endif                                 /* __SpeedgoatCANOpen2Buses1ms_XPCOPTIONS_H___ */
