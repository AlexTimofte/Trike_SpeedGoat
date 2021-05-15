/*
 * SpeedgoatCANOpen2Buses100us.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.456
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 15 14:03:32 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "SpeedgoatCANOpen2Buses100us_capi.h"
#include "SpeedgoatCANOpen2Buses100us.h"
#include "SpeedgoatCANOpen2Buses100us_private.h"

/* Named constants for Chart: '<S38>/DunkA_Steering_Init' */
#define SpeedgoatCANO_IN_SetCurrentMode ((uint8_T)3U)
#define SpeedgoatCANOpen2Bus_CALL_EVENT (-1)
#define SpeedgoatCANOpen2Buses1_IN_Init ((uint8_T)2U)
#define SpeedgoatCANOpen2Buses1_IN_Wait ((uint8_T)5U)
#define SpeedgoatCANOpen_IN_Clear_Error ((uint8_T)1U)
#define SpeedgoatCANOpen_IN_SetVelocity ((uint8_T)4U)
#define SpeedgoatCAN_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block signals (default storage) */
B_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_B;

/* Block states (default storage) */
DW_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_DW;

/* Real-time model */
RT_MODEL_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_M_;
RT_MODEL_SpeedgoatCANOpen2Buses100us_T *const SpeedgoatCANOpen2Buses100us_M =
  &SpeedgoatCANOpen2Buses100us_M_;

/* Forward declaration for local functions */
static void SpeedgoatCAN_SystemCore_release(dsp_simulink_MovingAverage_Sp_T *obj);
static void SpeedgoatCANO_SystemCore_delete(dsp_simulink_MovingAverage_Sp_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Sp_T *obj);
void uMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[], int32_T
                   n2, uint64_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T nj;
  uint64_T u1i;
  uint64_T yk;
  uint64_T a1;
  uint64_T a0;
  uint64_T b1;
  uint64_T w10;
  uint64_T w01;
  uint64_T cb;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0ULL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0ULL;
    u1i = u1[i];
    a1 = u1i >> 32U;
    a0 = u1i & 4294967295ULL;
    k = n - i;
    nj = n2 <= k ? n2 : k;
    k = i;
    for (j = 0; j < nj; j++) {
      yk = y[k];
      u1i = u2[j];
      b1 = u1i >> 32U;
      u1i &= 4294967295ULL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk += cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }
}

real_T uMultiWord2Double(const uint64_T u1[], int32_T n1, int32_T e1)
{
  real_T y;
  int32_T i;
  int32_T exp_0;
  y = 0.0;
  exp_0 = e1;
  for (i = 0; i < n1; i++) {
    y += ldexp((real_T)u1[i], exp_0);
    exp_0 += 64;
  }

  return y;
}

void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[], int32_T
                   n2, uint64_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T nj;
  uint64_T u1i;
  uint64_T yk;
  uint64_T a1;
  uint64_T a0;
  uint64_T b1;
  uint64_T w10;
  uint64_T w01;
  uint64_T cb;
  boolean_T isNegative1;
  boolean_T isNegative2;
  uint64_T cb1;
  uint64_T cb2;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808ULL) != 0ULL);
  isNegative2 = ((u2[n2 - 1] & 9223372036854775808ULL) != 0ULL);
  cb1 = 1ULL;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0ULL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0ULL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint64_T)(u1i < cb1);
    }

    a1 = u1i >> 32U;
    a0 = u1i & 4294967295ULL;
    cb2 = 1ULL;
    k = n - i;
    nj = n2 <= k ? n2 : k;
    k = i;
    for (j = 0; j < nj; j++) {
      yk = y[k];
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint64_T)(u1i < cb2);
      }

      b1 = u1i >> 32U;
      u1i &= 4294967295ULL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk += cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1ULL;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint64_T)(yk < cb);
    }
  }
}

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called in the model base rate function.
 * It maintains SampleHit information to allow scheduling
 * of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[1])++;
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[1]) > 249) {/* Sample time: [0.025s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * System initialize for atomic system:
 *    '<S38>/DunkA_Steering_Init'
 *    '<S41>/DunkA_Steering_Init'
 *    '<S42>/DunkA_Steering_Init'
 *    '<S43>/DunkA_Steering_Init'
 */
void Sp_DunkA_Steering_Init_Init(DW_DunkA_Steering_Init_Speedg_T *localDW)
{
  localDW->sfEvent = SpeedgoatCANOpen2Bus_CALL_EVENT;
  localDW->is_active_c14_SpeedgoatCANOpen2 = 0U;
  localDW->is_c14_SpeedgoatCANOpen2Buses10 = SpeedgoatCAN_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S38>/DunkA_Steering_Init'
 *    '<S41>/DunkA_Steering_Init'
 *    '<S42>/DunkA_Steering_Init'
 *    '<S43>/DunkA_Steering_Init'
 */
void Speedgo_DunkA_Steering_Init(real32_T rtu_ButtonStatus, real32_T
  rtu_Joystick_LatCmd, real32_T rtu_ReadError, B_DunkA_Steering_Init_Speedgo_T
  *localB, DW_DunkA_Steering_Init_Speedg_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  localDW->sfEvent = SpeedgoatCANOpen2Bus_CALL_EVENT;

  /* Chart: '<S38>/DunkA_Steering_Init' */
  if (localDW->is_active_c14_SpeedgoatCANOpen2 == 0U) {
    localDW->is_active_c14_SpeedgoatCANOpen2 = 1U;
    localDW->is_c14_SpeedgoatCANOpen2Buses10 = SpeedgoatCANOpen2Buses1_IN_Init;
    localB->ClearError = 0.0F;
    localB->DeviceMode = 0.0F;
    localB->BrakeCtrl = 0.0F;
    localB->PowerEnable = 0.0F;
    localB->SpeedRequest = 0.0F;
    localDW->aux = 0.0F;
  } else {
    switch (localDW->is_c14_SpeedgoatCANOpen2Buses10) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (localDW->aux > 2000.0F) {
        localDW->is_c14_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        localB->BrakeCtrl = 2.0F;
        localDW->aux = 0.0F;
      } else {
        localB->ClearError = 1.0F;
        localDW->aux++;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      localB->BrakeCtrl = 0.0F;
      sf_internal_predicateOutput = ((rtu_ButtonStatus == 1.0F) ||
        (rtu_ReadError != 1.0F));
      if (sf_internal_predicateOutput) {
        localDW->is_c14_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen_IN_Clear_Error;
      }
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      sf_internal_predicateOutput = ((rtu_ButtonStatus == 8.0F) &&
        (rtu_ReadError == 1.0F));
      if (sf_internal_predicateOutput) {
        localDW->is_c14_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen_IN_SetVelocity;
      } else {
        localB->DeviceMode = 2.0F;
        localB->PowerEnable = 1.0F;
      }
      break;

     case SpeedgoatCANOpen_IN_SetVelocity:
      localB->SpeedRequest = rtu_Joystick_LatCmd * 20.0F;
      break;

     default:
      localB->BrakeCtrl = 2.0F;
      sf_internal_predicateOutput = ((rtu_ButtonStatus == 0.0F) &&
        (rtu_ReadError == 1.0F));
      if (sf_internal_predicateOutput) {
        localDW->is_c14_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        localB->BrakeCtrl = 2.0F;
        localDW->aux = 0.0F;
      } else {
        sf_internal_predicateOutput = ((rtu_ButtonStatus == 2.0F) &&
          (rtu_ReadError == 1.0F));
        if (sf_internal_predicateOutput) {
          localDW->is_c14_SpeedgoatCANOpen2Buses10 =
            SpeedgoatCANO_IN_SetCurrentMode;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S38>/DunkA_Steering_Init' */
}

static void SpeedgoatCAN_SystemCore_release(dsp_simulink_MovingAverage_Sp_T *obj)
{
  dsp_simulink_MovingAverage_Sp_T *obj_0;
  dsp_private_SlidingWindowAver_T *obj_1;
  if (obj->isInitialized == 1) {
    obj_0 = obj;
    if (obj_0->isSetupComplete) {
      obj_1 = obj_0->pStatistic;
      if (obj_1->isInitialized == 1) {
        obj_1->isInitialized = 2;
      }

      obj_0->NumChannels = -1;
    }
  }
}

static void SpeedgoatCANO_SystemCore_delete(dsp_simulink_MovingAverage_Sp_T *obj)
{
  SpeedgoatCAN_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Sp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SpeedgoatCANO_SystemCore_delete(obj);
  }
}

/* Model output function for TID0 */
static void SpeedgoatCANOpen2Buses100us_output0(void) /* Sample time: [0.0001s, 0.0s] */
{
  int32_T aux;
  real_T u0;
  dsp_simulink_MovingAverage_Sp_T *obj;
  dsp_simulink_MovingAverage_Sp_T *obj_0;
  dsp_private_SlidingWindowAver_T *obj_1;
  dsp_private_SlidingWindowAver_T *obj_2;
  dsp_private_SlidingWindowAver_T *obj_3;
  dsp_private_SlidingWindowAver_T *obj_4;
  real_T cumRevIndex;
  real_T csum;
  real_T csumrev[49];
  real_T z;
  uint32_T tmp;
  uint32_T tmp_0;
  uint32_T tmp_1;
  int8_T wrBufIdx;
  uint64_T tmp_2;
  uint64_T tmp_3;
  uint128m_T tmp_4;
  int128m_T tmp_5;
  real32_T u0_0;
  real32_T u1;
  real32_T u2;

  {                                    /* Sample time: [0.0001s, 0.0s] */
    rate_scheduler();
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<S11>/CAN Setup ' */

  /* Level2 S-Function Block: '<S11>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */

  /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S15>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.CANRead_o3 >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m) {
    SpeedgoatCANOpen2Buses100us_B.Switch_c = 0U;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch_c =
      SpeedgoatCANOpen2Buses100us_B.CANRead_o4;
  }

  /* End of Switch: '<S15>/Switch' */

  /* CCaller: '<S13>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen2Buses100us_B.CANRead_o2,
    SpeedgoatCANOpen2Buses100us_B.Switch_c,
    SpeedgoatCANOpen2Buses100us_B.CANRead_o6,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,
    SpeedgoatCANOpen2Buses100us_B.CCaller_o3);

  /* Outputs for Enabled SubSystem: '<S13>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (SpeedgoatCANOpen2Buses100us_B.CCaller_o2 > 0) {
    /* Constant: '<S16>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_g =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp;

    /* S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */

    /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S13>/CAN TX Wrapper' */

  /* S-Function (RPDOs_from_AN2CANConv): '<S1>/RPDOs from AN2CAN ' */
  RPDOs_from_AN2CANConv_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Channel_AN1,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN2,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN3,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN4);

  /* S-Function (RPDOs_from_APT): '<S2>/RPDOs from APT' */
  RPDOs_from_APT_Outputs_wrapper(&SpeedgoatCANOpen2Buses100us_B.APT_StatusWord,
    &SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent,
    &SpeedgoatCANOpen2Buses100us_B.APT_Speed,
    &SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage,
    &SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp,
    &SpeedgoatCANOpen2Buses100us_B.APT_Temp,
    &SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus,
    &SpeedgoatCANOpen2Buses100us_B.APT_Direction);

  /* S-Function (RPDOs_from_Joystick): '<S8>/RPDOs from Joystick' */
  RPDOs_from_Joystick_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,
     &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,
     &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd);

  /* MATLAB Function: '<S25>/MATLAB Function' */
  switch (SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus) {
   case 1:
    aux = 1;
    break;

   case 2:
    aux = 2;
    break;

   case 4:
    aux = 3;
    break;

   case 8:
    aux = 4;
    break;

   case 16:
    aux = 5;
    break;

   case 32:
    aux = 6;
    break;

   case 64:
    aux = 7;
    break;

   case 128:
    aux = 8;
    break;

   default:
    aux = 0;
    break;
  }

  SpeedgoatCANOpen2Buses100us_B.button = aux;

  /* End of MATLAB Function: '<S25>/MATLAB Function' */

  /* DataTypeConversion: '<S25>/Cast To Single3' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle3 = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.button;

  /* MATLAB Function: '<S25>/MATLAB Function1' */
  aux = 0;
  if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3 >= 127.0F) {
    if (SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd > 0.0F) {
      aux = 4;
    } else {
      if (SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd < 0.0F) {
        aux = 8;
      }
    }
  }

  SpeedgoatCANOpen2Buses100us_B.Byte0 = 160.0 + (real_T)aux;

  /* End of MATLAB Function: '<S25>/MATLAB Function1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Byte0);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion' */

  /* Switch: '<S32>/Switch4' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S32>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_P.Constant_Value >
      SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold) {
    /* Saturate: '<S34>/Saturation1' */
    u0_0 = SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd;
    u1 = SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat;
    u2 = SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat;
    if (u0_0 > u2) {
      SpeedgoatCANOpen2Buses100us_B.TractionRef = u2;
    } else if (u0_0 < u1) {
      SpeedgoatCANOpen2Buses100us_B.TractionRef = u1;
    } else {
      SpeedgoatCANOpen2Buses100us_B.TractionRef = u0_0;
    }

    /* End of Saturate: '<S34>/Saturation1' */
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_B.TractionRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
  }

  /* End of Switch: '<S32>/Switch4' */

  /* DataTypeConversion: '<S23>/Data Type Conversion1' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch4);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion1' */

  /* MATLAB Function: '<S23>/HeartBeatgenerator' */
  SpeedgoatCANOpen2Buses100us_DW.tact++;
  if (SpeedgoatCANOpen2Buses100us_DW.tact > 10.0) {
    SpeedgoatCANOpen2Buses100us_DW.tact = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.Heartbeat++;
    if (SpeedgoatCANOpen2Buses100us_DW.Heartbeat > 127.0) {
      SpeedgoatCANOpen2Buses100us_DW.Heartbeat = 0.0;
    }
  }

  SpeedgoatCANOpen2Buses100us_B.HB = SpeedgoatCANOpen2Buses100us_DW.Heartbeat;

  /* End of MATLAB Function: '<S23>/HeartBeatgenerator' */

  /* DataTypeConversion: '<S23>/Data Type Conversion2' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.HB);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion2' */

  /* S-Function (TPDOs_to_APT): '<S2>/TPDOs from Speedgoat to APT' */
  TPDOs_to_APT_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat);

  /* S-Function (RPDOs_from_DunkA): '<S3>/RPDOs from Dunker #1' */
  RPDOs_from_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity);

  /* Constant: '<S41>/Constant1' */
  SpeedgoatCANOpen2Buses100us_B.Constant1 =
    SpeedgoatCANOpen2Buses100us_P.Constant1_Value;

  /* Constant: '<S41>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

  /* Chart: '<S41>/DunkA_Steering_Init' */
  Speedgo_DunkA_Steering_Init(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant1,
    SpeedgoatCANOpen2Buses100us_B.Constant,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_k);

  /* DataTypeConversion: '<S41>/Cast To Single1' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.ClearError);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S41>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion3' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError;

  /* DataTypeConversion: '<S41>/Cast To Single' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.DeviceMode);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S41>/Cast To Single' */

  /* DataTypeConversion: '<S22>/Data Type Conversion6' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode;

  /* DataTypeConversion: '<S41>/Cast To Single3' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.PowerEnable);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S41>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion7' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable;

  /* DataTypeConversion: '<S41>/Cast To Single2' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.BrakeCtrl);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S41>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion4' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl;

  /* RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_LstBu;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent =
    SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_Buf[SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_RDBuf];

  /* S-Function (TPDOs_to_DunkA): '<S3>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkB): '<S4>/RPDOs from Dunker #1' */
  RPDOs_from_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity);

  /* Constant: '<S42>/Constant1' */
  SpeedgoatCANOpen2Buses100us_B.Constant1_a =
    SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a;

  /* Constant: '<S42>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_a =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_g5;

  /* Chart: '<S42>/DunkA_Steering_Init' */
  Speedgo_DunkA_Steering_Init(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant1_a,
    SpeedgoatCANOpen2Buses100us_B.Constant_a,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_j);

  /* DataTypeConversion: '<S42>/Cast To Single3' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.ClearError);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_h = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S42>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion22' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_h;

  /* DataTypeConversion: '<S42>/Cast To Single1' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.DeviceMode);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_k = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S42>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion24' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_k;

  /* DataTypeConversion: '<S42>/Cast To Single4' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.PowerEnable);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_k = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S42>/Cast To Single4' */

  /* DataTypeConversion: '<S22>/Data Type Conversion25' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_k;

  /* DataTypeConversion: '<S42>/Cast To Single2' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.BrakeCtrl);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_l = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S42>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion23' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_l;

  /* RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_LstBu;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent =
    SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_Buf[SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_RDBuf];

  /* S-Function (TPDOs_to_DunkB): '<S4>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkC): '<S5>/RPDOs from Dunker #1' */
  RPDOs_from_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity);

  /* Constant: '<S43>/Constant1' */
  SpeedgoatCANOpen2Buses100us_B.Constant1_i =
    SpeedgoatCANOpen2Buses100us_P.Constant1_Value_k;

  /* Constant: '<S43>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_j =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_m;

  /* Chart: '<S43>/DunkA_Steering_Init' */
  Speedgo_DunkA_Steering_Init(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant1_i,
    SpeedgoatCANOpen2Buses100us_B.Constant_j,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_m);

  /* DataTypeConversion: '<S43>/Cast To Single3' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.ClearError);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_o = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S43>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion27' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_o;

  /* DataTypeConversion: '<S43>/Cast To Single1' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.DeviceMode);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_e = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S43>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion29' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_e;

  /* DataTypeConversion: '<S43>/Cast To Single4' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.PowerEnable);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_d = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S43>/Cast To Single4' */

  /* DataTypeConversion: '<S22>/Data Type Conversion30' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_d;

  /* DataTypeConversion: '<S43>/Cast To Single2' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.BrakeCtrl);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_o = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S43>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion28' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_o;

  /* RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_LstBu;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent =
    SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_Buf[SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_RDBuf];

  /* S-Function (TPDOs_to_DunkC): '<S5>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkD): '<S6>/RPDOs from Dunker #1' */
  RPDOs_from_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity);

  /* Constant: '<S38>/Constant1' */
  SpeedgoatCANOpen2Buses100us_B.Constant1_g =
    SpeedgoatCANOpen2Buses100us_P.Constant1_Value_g;

  /* Constant: '<S38>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_jw =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

  /* Chart: '<S38>/DunkA_Steering_Init' */
  Speedgo_DunkA_Steering_Init(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant1_g,
    SpeedgoatCANOpen2Buses100us_B.Constant_jw,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init);

  /* DataTypeConversion: '<S38>/Cast To Single3' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.ClearError);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_a = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S38>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion32' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_a;

  /* DataTypeConversion: '<S38>/Cast To Single1' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.DeviceMode);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_p = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S38>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion34' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_p;

  /* DataTypeConversion: '<S38>/Cast To Single2' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.BrakeCtrl);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_a = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S38>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion35' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_a;

  /* DataTypeConversion: '<S38>/Cast To Single4' */
  u0_0 = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.PowerEnable);
  if (rtIsNaNF(u0_0) || rtIsInfF(u0_0)) {
    u0_0 = 0.0F;
  } else {
    u0_0 = (real32_T)fmod(u0_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = (uint8_T)(u0_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0_0 : (int32_T)(uint8_T)u0_0);

  /* End of DataTypeConversion: '<S38>/Cast To Single4' */

  /* DataTypeConversion: '<S22>/Data Type Conversion33' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_a;

  /* Switch: '<S32>/Switch3' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S32>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_P.Constant_Value >
      SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold) {
    /* Gain: '<S30>/Gain2' */
    SpeedgoatCANOpen2Buses100us_B.Gain2_a = (uint32_T)
      SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p *
      SpeedgoatCANOpen2Buses100us_B.Channel_AN3;

    /* Saturate: '<S30>/Saturation' */
    tmp = SpeedgoatCANOpen2Buses100us_B.Gain2_a;
    tmp_0 = SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat;
    tmp_1 = SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat;
    if (tmp > tmp_1) {
      SpeedgoatCANOpen2Buses100us_B.Saturation = tmp_1;
    } else if (tmp < tmp_0) {
      SpeedgoatCANOpen2Buses100us_B.Saturation = tmp_0;
    } else {
      SpeedgoatCANOpen2Buses100us_B.Saturation = tmp;
    }

    /* End of Saturate: '<S30>/Saturation' */

    /* Gain: '<S30>/Gain1' */
    SpeedgoatCANOpen2Buses100us_B.BrCurrentRef = (uint64_T)
      SpeedgoatCANOpen2Buses100us_P.Gain1_Gain *
      SpeedgoatCANOpen2Buses100us_B.Saturation;
    SpeedgoatCANOpen2Buses100us_B.Switch3 = (real_T)
      SpeedgoatCANOpen2Buses100us_B.BrCurrentRef * 3.4766779039175E-310;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch3 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
  }

  /* End of Switch: '<S32>/Switch3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion36' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch3);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion36' */

  /* S-Function (TPDOs_to_DunkD): '<S6>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_Encoder): '<S7>/RPDOs from Encoder' */
  RPDOs_from_Encoder_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,
     &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position);

  /* S-Function (scblock): '<S19>/S-Function' */
  /* ok to acquire for <S19>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<S10>/Data Type Conversion9' */
  SpeedgoatCANOpen2Buses100us_B.Actual_Current = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent;

  /* MATLABSystem: '<S10>/Moving Average' incorporates:
   *  Constant: '<S10>/Constant'
   */
  u0 = SpeedgoatCANOpen2Buses100us_P.Constant_Value_k;
  obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
  obj_0 = obj;
  if (obj_0->TunablePropsChanged) {
    obj_0->TunablePropsChanged = false;
  }

  obj_1 = obj->pStatistic;
  if (obj_1->isInitialized != 1) {
    obj_2 = obj_1;
    obj_3 = obj_2;
    obj_3->isSetupComplete = false;
    obj_3->isInitialized = 1;
    obj_4 = obj_3;
    obj_4->pCumSum = 0.0;
    for (aux = 0; aux < 49; aux++) {
      obj_4->pCumSumRev[aux] = 0.0;
    }

    obj_4->pCumRevIndex = 1.0;
    obj_3->isSetupComplete = true;
    obj_2->pCumSum = 0.0;
    for (aux = 0; aux < 49; aux++) {
      obj_2->pCumSumRev[aux] = 0.0;
    }

    obj_2->pCumRevIndex = 1.0;
  }

  cumRevIndex = obj_1->pCumRevIndex;
  csum = obj_1->pCumSum;
  for (aux = 0; aux < 49; aux++) {
    csumrev[aux] = obj_1->pCumSumRev[aux];
  }

  csum += u0;
  z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  csumrev[(int32_T)cumRevIndex - 1] = u0;
  if (cumRevIndex != 49.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (aux = 47; aux >= 0; aux--) {
      csumrev[aux] += csumrev[aux + 1];
    }
  }

  u0 = z / 50.0;
  obj_1->pCumSum = csum;
  for (aux = 0; aux < 49; aux++) {
    obj_1->pCumSumRev[aux] = csumrev[aux];
  }

  obj_1->pCumRevIndex = cumRevIndex;
  SpeedgoatCANOpen2Buses100us_B.MovingAverage = u0;

  /* End of MATLABSystem: '<S10>/Moving Average' */

  /* DataTypeConversion: '<S10>/Data Type Conversion14' */
  SpeedgoatCANOpen2Buses100us_B.Desired_Current = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.MovingAverage;

  /* Gain: '<S10>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.Gain2 = (uint64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain *
    SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position;

  /* DataTypeConversion: '<S10>/Data Type Conversion5' */
  SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.Gain2 * 2.91038305E-11F;

  /* Gain: '<S10>/Gain4' */
  SpeedgoatCANOpen2Buses100us_B.Gain4 = (uint64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain4_Gain *
    SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position;

  /* DataTypeConversion: '<S10>/Data Type Conversion18' */
  SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.Gain4 * 2.91038305E-11F;

  /* DataTypeConversion: '<S10>/Data Type Conversion17' */
  SpeedgoatCANOpen2Buses100us_B.AN1 = SpeedgoatCANOpen2Buses100us_B.Channel_AN1;

  /* DataTypeConversion: '<S10>/Data Type Conversion19' */
  SpeedgoatCANOpen2Buses100us_B.AN2 = SpeedgoatCANOpen2Buses100us_B.Channel_AN2;

  /* DataTypeConversion: '<S10>/Data Type Conversion20' */
  SpeedgoatCANOpen2Buses100us_B.AN3 = SpeedgoatCANOpen2Buses100us_B.Channel_AN3;

  /* DataTypeConversion: '<S10>/Data Type Conversion21' */
  SpeedgoatCANOpen2Buses100us_B.AN4 = SpeedgoatCANOpen2Buses100us_B.Channel_AN4;

  /* DataTypeConversion: '<S10>/Data Type Conversion15' */
  SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd;

  /* DataTypeConversion: '<S10>/Data Type Conversion16' */
  SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd;

  /* S-Function (scblock): '<S20>/S-Function' */
  /* ok to acquire for <S20>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* S-Function (scblock): '<S21>/S-Function' */
  /* ok to acquire for <S21>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_k.AcquireOK = 1;

  /* S-Function (scblock): '<S26>/S-Function' */
  /* ok to acquire for <S26>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* S-Function (scblock): '<S27>/S-Function' */
  /* ok to acquire for <S27>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_d.AcquireOK = 1;

  /* S-Function (scblock): '<S28>/S-Function' */
  /* ok to acquire for <S28>/S-Function */
  SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* Memory: '<S31>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.Memory1 =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput;

  /* Gain: '<S31>/degree2rad' */
  tmp_2 = SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain;
  tmp_3 = SpeedgoatCANOpen2Buses100us_B.Memory1;
  uMultiWordMul(&tmp_2, 1, &tmp_3, 1, &tmp_4.chunks[0U], 2);
  SpeedgoatCANOpen2Buses100us_B.degree2rad = tmp_4;

  /* DataTypeConversion: '<S33>/Cast To Single' */
  tmp_4 = SpeedgoatCANOpen2Buses100us_B.degree2rad;
  SpeedgoatCANOpen2Buses100us_B.CastToSingle = uMultiWord2Double(&tmp_4.chunks
    [0U], 2, 0) * 4.9303806576313238E-32;

  /* Gain: '<S34>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI =
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k *
    SpeedgoatCANOpen2Buses100us_B.APT_Speed;

  /* Gain: '<S34>/WheelRadius' */
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain *
    SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI;

  /* DataTypeConversion: '<S33>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI * 8.8817841970012523E-16;

  /* MATLAB Function: '<S33>/ServoTilting' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 / 10.05525 * sin
    (SpeedgoatCANOpen2Buses100us_B.CastToSingle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle = atan
    (SpeedgoatCANOpen2Buses100us_B.TiltingAngle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle * 180.0 / 3.1415926535897931;

  /* Gain: '<S33>/degree2m' */
  SpeedgoatCANOpen2Buses100us_B.degree2m =
    SpeedgoatCANOpen2Buses100us_P.degree2m_Gain *
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle;

  /* RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_n0 + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_k)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_B.degree2m;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_d =
      SpeedgoatCANOpen2Buses100us_B.degree2m;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_j =
      SpeedgoatCANOpen2Buses100us_B.degree2m;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_n0 = wrBufIdx;

  /* End of RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */

  /* Memory: '<S33>/Memory' */
  SpeedgoatCANOpen2Buses100us_B.Memory =
    SpeedgoatCANOpen2Buses100us_DW.Memory_PreviousInput;

  /* RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_jd + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_c)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_f =
      SpeedgoatCANOpen2Buses100us_B.Memory;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_o =
      SpeedgoatCANOpen2Buses100us_B.Memory;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_n =
      SpeedgoatCANOpen2Buses100us_B.Memory;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_jd = wrBufIdx;

  /* End of RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' incorporates:
   *  Constant: '<S25>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' incorporates:
   *  Constant: '<S25>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */

  /* DataTypeConversion: '<S24>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_e =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd;

  /* Gain: '<S31>/Robotics Convention' */
  SpeedgoatCANOpen2Buses100us_B.RoboticsConvention =
    SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle_e;

  /* DataTypeConversion: '<S31>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_g =
    SpeedgoatCANOpen2Buses100us_B.RoboticsConvention;

  /* RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_p + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_gn)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_d =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_f =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_p = wrBufIdx;

  /* End of RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */

  /* DataTypeConversion: '<S31>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Memory1 * 2.9103830456733704E-11;

  /* RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_k + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_lk)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_j =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_i =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_g =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_k = wrBufIdx;

  /* End of RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitchInport2' incorporates:
   *  Constant: '<S25>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitchInport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitchInport3' incorporates:
   *  Constant: '<S32>/Constant'
   */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_i;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtSwitchInport3' */

  /* Gain: '<S31>/inc2deg' */
  SpeedgoatCANOpen2Buses100us_B.Direction = (uint64_T)
    SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain *
    SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position;

  /* Sum: '<S33>/Sum' incorporates:
   *  Constant: '<S33>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Channel_AN1 -
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_g;

  /* Gain: '<S33>/Volt2meter' */
  SpeedgoatCANOpen2Buses100us_B.DispRight =
    SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain *
    SpeedgoatCANOpen2Buses100us_B.Sum;

  /* Gain: '<S34>/m//s2Km//h' */
  tmp_2 = (uint64_T)SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain;
  tmp_3 = (uint64_T)SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI;
  sMultiWordMul(&tmp_2, 1, &tmp_3, 1, &tmp_5.chunks[0U], 2);
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh = tmp_5;
}

/* Model update function for TID0 */
static void SpeedgoatCANOpen2Buses100us_update0(void) /* Sample time: [0.0001s, 0.0s] */
{
  /* Update for Memory: '<S31>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
    SpeedgoatCANOpen2Buses100us_B.Direction;

  /* Update for Memory: '<S33>/Memory' */
  SpeedgoatCANOpen2Buses100us_DW.Memory_PreviousInput =
    SpeedgoatCANOpen2Buses100us_B.DispRight;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses100us_M->Timing.clockTick0)) {
    ++SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH0;
  }

  SpeedgoatCANOpen2Buses100us_M->Timing.t[0] =
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTick0 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize0 +
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH0 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
static void SpeedgoatCANOpen2Buses100us_output1(void) /* Sample time: [0.025s, 0.0s] */
{
  real_T e;
  real_T u;

  /* RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_k =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_n0;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_k) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerInpo;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_d;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_j;
    break;
  }

  /* End of RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */

  /* RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_c =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_jd;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_c) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerIn_b =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_f;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerIn_b =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_o;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerIn_b =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_n;
    break;
  }

  /* End of RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */

  /* MATLAB Function: '<S33>/PI Tilting Controller' */
  e = SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo;
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo > 0.076) {
    e = 0.076;
  }

  if (e < -0.076) {
    e = -0.076;
  }

  e -= SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerIn_b;
  u = ((e - SpeedgoatCANOpen2Buses100us_DW.ek1) * 10000.0 + 1000.0 * e) +
    SpeedgoatCANOpen2Buses100us_DW.uk1;
  if (u > 12.7) {
    u = 12.7;
  }

  if (u < -12.7) {
    u = -12.7;
  }

  SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef = -u;
  SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef = u;
  SpeedgoatCANOpen2Buses100us_DW.uk1 = u;
  SpeedgoatCANOpen2Buses100us_DW.ek1 = e;

  /* End of MATLAB Function: '<S33>/PI Tilting Controller' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */

  /* Switch: '<S32>/Switch1' */
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport2 >
      SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold) {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport3;
  }

  /* End of Switch: '<S32>/Switch1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion26' */
  e = floor(SpeedgoatCANOpen2Buses100us_B.Switch1);
  if (rtIsNaN(e) || rtIsInf(e)) {
    e = 0.0;
  } else {
    e = fmod(e, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent_j = e < 0.0 ?
    -(int32_T)(uint32_T)-e : (int32_T)(uint32_T)e;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion26' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */

  /* Switch: '<S32>/Switch2' */
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport2 >
      SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold) {
    SpeedgoatCANOpen2Buses100us_B.Switch2 =
      SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch2 =
      SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport3;
  }

  /* End of Switch: '<S32>/Switch2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion31' */
  e = floor(SpeedgoatCANOpen2Buses100us_B.Switch2);
  if (rtIsNaN(e) || rtIsInf(e)) {
    e = 0.0;
  } else {
    e = fmod(e, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent_g = e < 0.0 ?
    -(int32_T)(uint32_T)-e : (int32_T)(uint32_T)e;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion31' */

  /* RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_gn =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_p;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_gn) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerInp;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_d;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_f;
    break;
  }

  /* End of RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */

  /* RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_lk =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_k;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionController_lk) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerI_h =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_j;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerI_h =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_i;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerI_h =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_g;
    break;
  }

  /* End of RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */

  /* MATLAB Function: '<S31>/P Direction Controller' */
  e = SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp;
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp > 90.0) {
    e = 90.0;
  }

  if (e < -90.0) {
    e = -90.0;
  }

  SpeedgoatCANOpen2Buses100us_B.SpeedRef = (e -
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerI_h) * 250.0;

  /* End of MATLAB Function: '<S31>/P Direction Controller' */

  /* RateTransition: '<S32>/TmpRTBAtSwitchInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitchInport2' */

  /* RateTransition: '<S32>/TmpRTBAtSwitchInport3' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport3 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSwitchInport3' */

  /* Switch: '<S32>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport2 >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold) {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_B.SpeedRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport3;
  }

  /* End of Switch: '<S32>/Switch' */

  /* DataTypeConversion: '<S22>/Data Type Conversion8' */
  e = floor(SpeedgoatCANOpen2Buses100us_B.Switch);
  if (rtIsNaN(e) || rtIsInf(e)) {
    e = 0.0;
  } else {
    e = fmod(e, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent_h = e < 0.0 ?
    -(int32_T)(uint32_T)-e : (int32_T)(uint32_T)e;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion8' */
}

/* Model update function for TID1 */
static void SpeedgoatCANOpen2Buses100us_update1(void) /* Sample time: [0.025s, 0.0s] */
{
  int8_T wrBufIdx;

  /* Update for RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_LstBu + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent_h;
  SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_LstBu = wrBufIdx;

  /* End of Update for RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */

  /* Update for RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_LstBu + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent_j;
  SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_LstBu = wrBufIdx;

  /* End of Update for RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */

  /* Update for RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_LstBu + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent_g;
  SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_LstBu = wrBufIdx;

  /* End of Update for RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses100us_M->Timing.clockTick1)) {
    ++SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH1;
  }

  SpeedgoatCANOpen2Buses100us_M->Timing.t[1] =
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTick1 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize1 +
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH1 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void SpeedgoatCANOpen2Buses100us_output(int_T tid)
{
  switch (tid) {
   case 0 :
    SpeedgoatCANOpen2Buses100us_output0();
    break;

   case 1 :
    SpeedgoatCANOpen2Buses100us_output1();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void SpeedgoatCANOpen2Buses100us_update(int_T tid)
{
  switch (tid) {
   case 0 :
    SpeedgoatCANOpen2Buses100us_update0();
    break;

   case 1 :
    SpeedgoatCANOpen2Buses100us_update1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void SpeedgoatCANOpen2Buses100us_initialize(void)
{
  {
    dsp_simulink_MovingAverage_Sp_T *b_obj;
    dsp_private_SlidingWindowAver_T *iobj_0;
    dsp_simulink_MovingAverage_Sp_T *obj;

    /* Start for S-Function (sg_IO602_IO691_setup_s): '<S11>/CAN Setup ' */
    /* Level2 S-Function Block: '<S11>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */
    /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S13>/CAN TX Wrapper' */
    /* Start for Constant: '<S16>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_g =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */
    /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S13>/CAN TX Wrapper' */
    /* Start for Constant: '<S41>/Constant1' */
    SpeedgoatCANOpen2Buses100us_B.Constant1 =
      SpeedgoatCANOpen2Buses100us_P.Constant1_Value;

    /* Start for Constant: '<S41>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

    /* Start for RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent =
      SpeedgoatCANOpen2Buses100us_P.DunkA_TPDO_DesiredCurrent_Initi;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);

    /* Start for Constant: '<S42>/Constant1' */
    SpeedgoatCANOpen2Buses100us_B.Constant1_a =
      SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a;

    /* Start for Constant: '<S42>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_a =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_g5;

    /* Start for RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent =
      SpeedgoatCANOpen2Buses100us_P.DunkB_TPDO_DesiredCurrent_Initi;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);

    /* Start for Constant: '<S43>/Constant1' */
    SpeedgoatCANOpen2Buses100us_B.Constant1_i =
      SpeedgoatCANOpen2Buses100us_P.Constant1_Value_k;

    /* Start for Constant: '<S43>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_j =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_m;

    /* Start for RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent =
      SpeedgoatCANOpen2Buses100us_P.DunkC_TPDO_DesiredCurrent_Initi;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);

    /* Start for Constant: '<S38>/Constant1' */
    SpeedgoatCANOpen2Buses100us_B.Constant1_g =
      SpeedgoatCANOpen2Buses100us_P.Constant1_Value_g;

    /* Start for Constant: '<S38>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_jw =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

    /* Start for S-Function (scblock): '<S19>/S-Function' */

    /* S-Function Block: <S19>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(3)) == 0) {
        if ((i = rl32eDefScope(3,2)) != 0) {
          printf("Error creating scope 3\n");
        } else {
          rl32eAddSignal(3, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p2"));
          rl32eSetScope(3, 4, 30000);
          rl32eSetScope(3, 5, 0);
          rl32eSetScope(3, 6, 1);
          rl32eSetScope(3, 0, 0);
          rl32eSetScope(3, 3, rl32eGetSignalNo(
            "Dunker #1/RPDOs from Dunker #1/p2"));
          rl32eSetScope(3, 1, 0.0);
          rl32eSetScope(3, 2, 1);
          rl32eSetScope(3, 9, 0);
          rl32eSetTargetScope(3, 1, 2.0);
          rl32eSetTargetScope(3, 11, -3000.0);
          rl32eSetTargetScope(3, 10, 3000.0);
          xpceScopeAcqOK(3,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(3);
      }
    }

    /* Start for MATLABSystem: '<S10>/Moving Average' */
    SpeedgoatCANOpen2Buses100us_DW.obj.matlabCodegenIsDeleted = true;
    b_obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
    b_obj->isInitialized = 0;
    b_obj->NumChannels = -1;
    b_obj->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty = true;
    b_obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
    iobj_0 = &SpeedgoatCANOpen2Buses100us_DW.gobj_0;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1;
    obj = b_obj;
    obj->NumChannels = 1;
    iobj_0->isInitialized = 0;
    obj->pStatistic = iobj_0;
    b_obj->isSetupComplete = true;
    b_obj->TunablePropsChanged = false;

    /* Start for S-Function (scblock): '<S20>/S-Function' */

    /* S-Function Block: <S20>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(2)) == 0) {
        if ((i = rl32eDefScope(2,2)) != 0) {
          printf("Error creating scope 2\n");
        } else {
          rl32eAddSignal(2, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion15"));
          rl32eSetScope(2, 4, 30000);
          rl32eSetScope(2, 5, 0);
          rl32eSetScope(2, 6, 1);
          rl32eSetScope(2, 0, 0);
          rl32eSetScope(2, 3, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion15"));
          rl32eSetScope(2, 1, 0.0);
          rl32eSetScope(2, 2, 1);
          rl32eSetScope(2, 9, 0);
          rl32eSetTargetScope(2, 1, 2.0);
          rl32eSetTargetScope(2, 11, -300.0);
          rl32eSetTargetScope(2, 10, 300.0);
          xpceScopeAcqOK(2,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_c.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(2);
      }
    }

    /* Start for S-Function (scblock): '<S21>/S-Function' */

    /* S-Function Block: <S21>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(1)) == 0) {
        if ((i = rl32eDefScope(1,2)) != 0) {
          printf("Error creating scope 1\n");
        } else {
          rl32eAddSignal(1, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion16"));
          rl32eSetScope(1, 4, 30000);
          rl32eSetScope(1, 5, 0);
          rl32eSetScope(1, 6, 1);
          rl32eSetScope(1, 0, 0);
          rl32eSetScope(1, 3, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion16"));
          rl32eSetScope(1, 1, 0.0);
          rl32eSetScope(1, 2, 1);
          rl32eSetScope(1, 9, 0);
          rl32eSetTargetScope(1, 1, 2.0);
          rl32eSetTargetScope(1, 11, -300.0);
          rl32eSetTargetScope(1, 10, 300.0);
          xpceScopeAcqOK(1,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_k.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(1);
      }
    }

    /* Start for S-Function (scblock): '<S26>/S-Function' */

    /* S-Function Block: <S26>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(4)) == 0) {
        if ((i = rl32eDefScope(4,2)) != 0) {
          printf("Error creating scope 4\n");
        } else {
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion9"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion14"));
          rl32eSetScope(4, 4, 30000);
          rl32eSetScope(4, 5, 0);
          rl32eSetScope(4, 6, 1);
          rl32eSetScope(4, 0, 0);
          rl32eSetScope(4, 3, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion9"));
          rl32eSetScope(4, 1, 0.0);
          rl32eSetScope(4, 2, 1);
          rl32eSetScope(4, 9, 0);
          rl32eSetTargetScope(4, 1, 2.0);
          rl32eSetTargetScope(4, 11, -10000.0);
          rl32eSetTargetScope(4, 10, 10000.0);
          xpceScopeAcqOK(4,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_j.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(4);
      }
    }

    /* Start for S-Function (scblock): '<S27>/S-Function' */

    /* S-Function Block: <S27>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(5)) == 0) {
        if ((i = rl32eDefScope(5,2)) != 0) {
          printf("Error creating scope 5\n");
        } else {
          rl32eAddSignal(5, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion5"));
          rl32eAddSignal(5, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion18"));
          rl32eSetScope(5, 4, 30000);
          rl32eSetScope(5, 5, 0);
          rl32eSetScope(5, 6, 1);
          rl32eSetScope(5, 0, 0);
          rl32eSetScope(5, 3, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion5"));
          rl32eSetScope(5, 1, 0.0);
          rl32eSetScope(5, 2, 1);
          rl32eSetScope(5, 9, 0);
          rl32eSetTargetScope(5, 1, 2.0);
          rl32eSetTargetScope(5, 11, 0.0);
          rl32eSetTargetScope(5, 10, 400.0);
          xpceScopeAcqOK(5,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_d.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(5);
      }
    }

    /* Start for S-Function (scblock): '<S28>/S-Function' */

    /* S-Function Block: <S28>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(6)) == 0) {
        if ((i = rl32eDefScope(6,2)) != 0) {
          printf("Error creating scope 6\n");
        } else {
          rl32eAddSignal(6, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion17"));
          rl32eAddSignal(6, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion19"));
          rl32eAddSignal(6, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion20"));
          rl32eAddSignal(6, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion21"));
          rl32eSetScope(6, 4, 30000);
          rl32eSetScope(6, 5, 0);
          rl32eSetScope(6, 6, 1);
          rl32eSetScope(6, 0, 0);
          rl32eSetScope(6, 3, rl32eGetSignalNo(
            "Trike Application Layer/Data Type Conversion17"));
          rl32eSetScope(6, 1, 0.0);
          rl32eSetScope(6, 2, 1);
          rl32eSetScope(6, 9, 0);
          rl32eSetTargetScope(6, 1, 2.0);
          rl32eSetTargetScope(6, 11, 0.0);
          rl32eSetTargetScope(6, 10, 40000.0);
          xpceScopeAcqOK(6,
                         &SpeedgoatCANOpen2Buses100us_DW.SFunction_IWORK_f.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(6);
      }
    }

    /* Start for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPITiltingControllerInpo;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);

    /* Start for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPITiltingControllerIn_b =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPITiltingControllerIn_j;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch1Inport2_InitialC;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch1Inport3 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch1Inport3_InitialC;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch2Inport2_InitialC;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitch2Inport3 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch2Inport3_InitialC;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);

    /* Start for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerInp;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);

    /* Start for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerI_h =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerI_j;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitchInport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport2_InitialCo;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);

    /* Start for RateTransition: '<S32>/TmpRTBAtSwitchInport3' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport3 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport3_InitialCo;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
  }

  {
    dsp_simulink_MovingAverage_Sp_T *obj;
    dsp_private_SlidingWindowAver_T *obj_0;
    int32_T i;

    /* user code (Initialize function Body) */
    CANOpenSlave_ResetCommunication();

    /* InitializeConditions for RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.DunkA_TPDO_DesiredCurrent_Initi;

    /* InitializeConditions for RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.DunkB_TPDO_DesiredCurrent_Initi;

    /* InitializeConditions for RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.DunkC_TPDO_DesiredCurrent_Initi;

    /* InitializeConditions for Memory: '<S31>/Memory1' */
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
      SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition;

    /* InitializeConditions for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerInpo =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPITiltingControllerInpo;

    /* InitializeConditions for Memory: '<S33>/Memory' */
    SpeedgoatCANOpen2Buses100us_DW.Memory_PreviousInput =
      SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition;

    /* InitializeConditions for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_f =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPITiltingControllerIn_j;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch1Inport2_InitialC;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch1Inport3_InitialC;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch2Inport2_InitialC;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitch2Inport3_InitialC;

    /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerInp;

    /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_j =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerI_j;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitchInport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport2_InitialCo;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSwitchInport3' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport3_InitialCo;

    /* SystemInitialize for MATLAB Function: '<S23>/HeartBeatgenerator' */
    SpeedgoatCANOpen2Buses100us_DW.Heartbeat = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.tact = 0.0;

    /* SystemInitialize for Chart: '<S41>/DunkA_Steering_Init' */
    Sp_DunkA_Steering_Init_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_k);

    /* SystemInitialize for Chart: '<S42>/DunkA_Steering_Init' */
    Sp_DunkA_Steering_Init_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_j);

    /* SystemInitialize for Chart: '<S43>/DunkA_Steering_Init' */
    Sp_DunkA_Steering_Init_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init_m);

    /* SystemInitialize for Chart: '<S38>/DunkA_Steering_Init' */
    Sp_DunkA_Steering_Init_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkA_Steering_Init);

    /* InitializeConditions for MATLABSystem: '<S10>/Moving Average' */
    obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->pCumSum = 0.0;
      for (i = 0; i < 49; i++) {
        obj_0->pCumSumRev[i] = 0.0;
      }

      obj_0->pCumRevIndex = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S10>/Moving Average' */

    /* SystemInitialize for MATLAB Function: '<S33>/PI Tilting Controller' */
    SpeedgoatCANOpen2Buses100us_DW.uk1 = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.ek1 = 0.0;
  }
}

/* Model terminate function */
static void SpeedgoatCANOpen2Buses100us_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S11>/CAN Setup ' */
  /* Level2 S-Function Block: '<S11>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */
  /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S13>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */
  /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S13>/CAN TX Wrapper' */

  /* Terminate for RateTransition: '<S3>/DunkA_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.DunkA_TPDO_DesiredCurrent_d0_SE);

  /* Terminate for RateTransition: '<S4>/DunkB_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.DunkB_TPDO_DesiredCurrent_d0_SE);

  /* Terminate for RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.DunkC_TPDO_DesiredCurrent_d0_SE);

  /* Terminate for MATLABSystem: '<S10>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses100us_DW.obj);

  /* Terminate for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerIn_p);

  /* Terminate for RateTransition: '<S33>/TmpRTBAtPI Tilting ControllerInport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPITiltingControllerI_di);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitch1Inport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport2_d0_SEMAP);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitch1Inport3' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch1Inport3_d0_SEMAP);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitch2Inport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport2_d0_SEMAP);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitch2Inport3' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitch2Inport3_d0_SEMAP);

  /* Terminate for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);

  /* Terminate for RateTransition: '<S31>/TmpRTBAtP Direction ControllerInport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_h);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitchInport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport2_d0_SEMAPH);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtSwitchInport3' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport3_d0_SEMAPH);
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  SpeedgoatCANOpen2Buses100us_output(tid);
}

void MdlUpdate(int_T tid)
{
  SpeedgoatCANOpen2Buses100us_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  SpeedgoatCANOpen2Buses100us_initialize();
}

void MdlTerminate(void)
{
  SpeedgoatCANOpen2Buses100us_terminate();
}

/* Registration function */
RT_MODEL_SpeedgoatCANOpen2Buses100us_T *SpeedgoatCANOpen2Buses100us(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SpeedgoatCANOpen2Buses100us_M, 0,
                sizeof(RT_MODEL_SpeedgoatCANOpen2Buses100us_T));
  rtsiSetSolverName(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                    "FixedStepDiscrete");
  SpeedgoatCANOpen2Buses100us_M->solverInfoPtr =
    (&SpeedgoatCANOpen2Buses100us_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[0] = (0.0001);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[1] = (0.025);

    /* task offsets */
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(SpeedgoatCANOpen2Buses100us_M,
             &SpeedgoatCANOpen2Buses100us_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SpeedgoatCANOpen2Buses100us_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      SpeedgoatCANOpen2Buses100us_M->Timing.perTaskSampleHitsArray;
    SpeedgoatCANOpen2Buses100us_M->Timing.perTaskSampleHits =
      (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SpeedgoatCANOpen2Buses100us_M, -1);
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize0 = 0.0001;
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize1 = 0.025;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SpeedgoatCANOpen2Buses100us_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, (NULL));
    rtliSetLogT(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, "tout");
    rtliSetLogX(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, "");
    rtliSetLogXFinal(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, 1);
    rtliSetLogY(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SpeedgoatCANOpen2Buses100us_M->rtwLogInfo, (NULL));
  }

  SpeedgoatCANOpen2Buses100us_M->solverInfoPtr =
    (&SpeedgoatCANOpen2Buses100us_M->solverInfo);
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&SpeedgoatCANOpen2Buses100us_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  SpeedgoatCANOpen2Buses100us_M->blockIO = ((void *)
    &SpeedgoatCANOpen2Buses100us_B);
  (void) memset(((void *) &SpeedgoatCANOpen2Buses100us_B), 0,
                sizeof(B_SpeedgoatCANOpen2Buses100us_T));

  {
    SpeedgoatCANOpen2Buses100us_B.Gain2 = (0ULL);
    SpeedgoatCANOpen2Buses100us_B.Gain4 = (0ULL);
    SpeedgoatCANOpen2Buses100us_B.Memory1 = (0ULL);
    SpeedgoatCANOpen2Buses100us_B.Direction = (0ULL);
    SpeedgoatCANOpen2Buses100us_B.BrCurrentRef = (0ULL);
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI = (0LL);
  }

  /* parameters */
  SpeedgoatCANOpen2Buses100us_M->defaultParam = ((real_T *)
    &SpeedgoatCANOpen2Buses100us_P);

  /* states (dwork) */
  SpeedgoatCANOpen2Buses100us_M->dwork = ((void *)
    &SpeedgoatCANOpen2Buses100us_DW);
  (void) memset((void *)&SpeedgoatCANOpen2Buses100us_DW, 0,
                sizeof(DW_SpeedgoatCANOpen2Buses100us_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  SpeedgoatCANOpen2Buses100us_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.sfcnInfo;
    SpeedgoatCANOpen2Buses100us_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (SpeedgoatCANOpen2Buses100us_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses100us_M->Sizes.numSampTimes);
    SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(SpeedgoatCANOpen2Buses100us_M)[0]);
    SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(SpeedgoatCANOpen2Buses100us_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SpeedgoatCANOpen2Buses100us_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SpeedgoatCANOpen2Buses100us_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SpeedgoatCANOpen2Buses100us_M));
    rtssSetStepSizePtr(sfcnInfo, &SpeedgoatCANOpen2Buses100us_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (SpeedgoatCANOpen2Buses100us_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses100us_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses100us_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses100us_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &SpeedgoatCANOpen2Buses100us_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses100us_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SpeedgoatCANOpen2Buses100us_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SpeedgoatCANOpen2Buses100us_M->solverInfoPtr);
  }

  SpeedgoatCANOpen2Buses100us_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)
                  &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    SpeedgoatCANOpen2Buses100us_M->childSfunctions =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[0] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[0]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[1] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[1]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[2] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S16>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses100us_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen2Buses100us_B.CCaller_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &SpeedgoatCANOpen2Buses100us_B.Constant_g);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen2Buses100us_B.CCaller_o2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen2Buses100us_B.CCaller_o3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses100us_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S11>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses100us_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses100us_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S15>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses100us_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen2Buses100us_B.CANRead_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses100us_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numContStates = (0);/* Number of continuous states */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numY = (0);/* Number of model outputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numU = (0);/* Number of model inputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numSampTimes = (2);/* Number of sample times */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlocks = (176);/* Number of blocks */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockIO = (162);/* Number of block outputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockPrms = (115);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen2Buses100us_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
