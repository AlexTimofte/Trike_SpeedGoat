#ifndef __SpeedgoatCANOpen03_XPCOPTIONS_H___
#define __SpeedgoatCANOpen03_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "SpeedgoatCANOpen03.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                1
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_SpeedgoatCANOpen03_T))
#define SIMMODE                        0
#define LOGTET                         0
#define LOGBUFSIZE                     100000
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
void SpeedgoatCANOpen03_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_SpeedgoatCANOpen03_T *const SpeedgoatCANOpen03_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  SpeedgoatCANOpen03_M->Timing.stepSize0 =
    SpeedgoatCANOpen03_M->Timing.stepSize0 * ratio;
  SpeedgoatCANOpen03_M->Timing.stepSize = SpeedgoatCANOpen03_M->Timing.stepSize *
    ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  SpeedgoatCANOpen03_ChangeStepSize(stepSize, SpeedgoatCANOpen03_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(SpeedgoatCANOpen03_M, errMsg);
}

#endif                                 /* __SpeedgoatCANOpen03_XPCOPTIONS_H___ */
