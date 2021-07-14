/*
 * SpeedgoatCANOpen2Buses100us.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.750
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Jul 12 21:12:35 2021
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

/* Named constants for Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
#define SpeedgoatCANO_IN_SetCurrentMode ((uint8_T)3U)
#define SpeedgoatCANOpen2Bus_CALL_EVENT (-1)
#define SpeedgoatCANOpen2Buses1_IN_Init ((uint8_T)2U)
#define SpeedgoatCANOpen2Buses1_IN_Wait ((uint8_T)4U)
#define SpeedgoatCANOpen_IN_Clear_Error ((uint8_T)1U)
#define SpeedgoatCAN_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S25>/EnableCtrl' */
#define SpeedgoatCANO_IN_Enable_Control ((uint8_T)1U)
#define SpeedgoatCANOpen2Buse_IN_Init_o ((uint8_T)2U)
#define SpeedgoatC_IN_NO_ACTIVE_CHILD_k ((uint8_T)0U)

/* Named constants for Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
#define SpeedgoatCANOp_IN_Clear_Error_i ((uint8_T)1U)
#define SpeedgoatCANOpen2Buse_IN_Wait_e ((uint8_T)4U)
#define SpeedgoatCA_IN_SetCurrentMode_a ((uint8_T)3U)

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
static void SpeedgoatC_SystemCore_release_i(dsp_simulink_MovingAverage_i_T *obj);
static void SpeedgoatCA_SystemCore_delete_i(dsp_simulink_MovingAverage_i_T *obj);
static void matlabCodegenHandle_matlabCod_i(dsp_simulink_MovingAverage_i_T *obj);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
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
  rtmSampleHitPtr[2] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 3);
  rtmSampleHitPtr[4] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 4);
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
  (SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[2])++;
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.0002s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[2] = 0;
  }

  (SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3])++;
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3]) > 9) {/* Sample time: [0.001s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3] = 0;
  }

  (SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[4])++;
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[4]) > 49) {/* Sample time: [0.005s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[4] = 0;
  }
}

/*
 * System initialize for atomic system:
 *    '<S50>/DunkD_Brake_Init_CurrentMode'
 *    '<S56>/DunkB_TiltLeft_Init_CurrentMode'
 *    '<S57>/DunkC_TiltRight_Init_CurrentMode'
 */
void DunkD_Brake_Init_Curre_Init(DW_DunkD_Brake_Init_CurrentMo_T *localDW)
{
  localDW->sfEvent = SpeedgoatCANOpen2Bus_CALL_EVENT;
  localDW->is_active_c3_SpeedgoatCANOpen2B = 0U;
  localDW->is_c3_SpeedgoatCANOpen2Buses100 = SpeedgoatCAN_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S50>/DunkD_Brake_Init_CurrentMode'
 *    '<S56>/DunkB_TiltLeft_Init_CurrentMode'
 *    '<S57>/DunkC_TiltRight_Init_CurrentMode'
 */
void DunkD_Brake_Init_CurrentMod(real32_T rtu_ButtonStatus, real32_T
  rtu_ReadError, B_DunkD_Brake_Init_CurrentMod_T *localB,
  DW_DunkD_Brake_Init_CurrentMo_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  localDW->sfEvent = SpeedgoatCANOpen2Bus_CALL_EVENT;

  /* Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
  if (localDW->is_active_c3_SpeedgoatCANOpen2B == 0U) {
    localDW->is_active_c3_SpeedgoatCANOpen2B = 1U;
    localDW->is_c3_SpeedgoatCANOpen2Buses100 = SpeedgoatCANOpen2Buses1_IN_Init;
    localB->ClearError = 0.0F;
    localB->DeviceMode = 0.0F;
    localB->BrakeCtrl = 0.0F;
    localB->PowerEnable = 0.0F;
    localDW->aux = 0.0F;
    localB->InitStatus = 0.0F;
  } else {
    switch (localDW->is_c3_SpeedgoatCANOpen2Buses100) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (localDW->aux > 2000.0F) {
        localDW->is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        localB->BrakeCtrl = 2.0F;
        localDW->aux = 0.0F;
        localB->InitStatus = 0.0F;
      } else {
        localB->ClearError = 1.0F;
        localDW->aux++;
        localB->InitStatus = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      localB->BrakeCtrl = 0.0F;
      sf_internal_predicateOutput = ((rtu_ButtonStatus == 1.0F) ||
        (rtu_ReadError != 1.0F));
      if (sf_internal_predicateOutput) {
        localDW->is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen_IN_Clear_Error;
      }
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (rtu_ReadError != 1.0F) {
        localDW->is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        localB->ClearError = 0.0F;
        localB->DeviceMode = 0.0F;
        localB->BrakeCtrl = 0.0F;
        localB->PowerEnable = 0.0F;
        localDW->aux = 0.0F;
        localB->InitStatus = 0.0F;
      } else {
        localB->DeviceMode = 2.0F;
        localB->PowerEnable = 1.0F;
        localB->InitStatus = 1.0F;
      }
      break;

     default:
      localB->BrakeCtrl = 2.0F;
      sf_internal_predicateOutput = ((rtu_ButtonStatus == 0.0F) &&
        (rtu_ReadError == 1.0F));
      if (sf_internal_predicateOutput) {
        localDW->is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        localB->BrakeCtrl = 2.0F;
        localDW->aux = 0.0F;
        localB->InitStatus = 0.0F;
      } else {
        sf_internal_predicateOutput = ((rtu_ButtonStatus == 2.0F) &&
          (rtu_ReadError == 1.0F));
        if (sf_internal_predicateOutput) {
          localDW->is_c3_SpeedgoatCANOpen2Buses100 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (rtu_ReadError != 1.0F) {
            localDW->is_c3_SpeedgoatCANOpen2Buses100 =
              SpeedgoatCANOpen2Buses1_IN_Init;
            localB->ClearError = 0.0F;
            localB->DeviceMode = 0.0F;
            localB->BrakeCtrl = 0.0F;
            localB->PowerEnable = 0.0F;
            localDW->aux = 0.0F;
            localB->InitStatus = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T q;
  boolean_T y_0;
  boolean_T y_1;
  y_0 = ((!rtIsNaN(u0)) && (!rtIsInf(u0)));
  y_1 = ((!rtIsNaN(u1)) && (!rtIsInf(u1)));
  if ((!y_0) || (!y_1)) {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      y = ceil(u1);
    } else {
      y = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != y)) {
      q = fabs(u0 / u1);
      if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
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

static void SpeedgoatC_SystemCore_release_i(dsp_simulink_MovingAverage_i_T *obj)
{
  dsp_simulink_MovingAverage_i_T *obj_0;
  dsp_private_SlidingWindowAv_i_T *obj_1;
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

static void SpeedgoatCA_SystemCore_delete_i(dsp_simulink_MovingAverage_i_T *obj)
{
  SpeedgoatC_SystemCore_release_i(obj);
}

static void matlabCodegenHandle_matlabCod_i(dsp_simulink_MovingAverage_i_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SpeedgoatCA_SystemCore_delete_i(obj);
  }
}

/* Model output function for TID0 */
static void SpeedgoatCANOpen2Buses100us_output0(void) /* Sample time: [0.0s, 0.0s] */
{
  int32_T aux;
  boolean_T sf_internal_predicateOutput;
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
  dsp_simulink_MovingAverage_i_T *obj_5;
  dsp_simulink_MovingAverage_i_T *obj_6;
  dsp_private_SlidingWindowAv_i_T *obj_7;
  int8_T wrBufIdx;
  real32_T tmp;
  uint64_T tmp_0;
  uint64_T tmp_1;
  int128m_T tmp_2;
  uint16_T u0_0;
  uint16_T u1;
  uint16_T u2;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_scheduler();
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC_f);

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<S13>/CAN Setup ' */

  /* Level2 S-Function Block: '<S13>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_read_s): '<S17>/CAN Read' */

  /* Level2 S-Function Block: '<S17>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S17>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.CANRead_o3 >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold) {
    SpeedgoatCANOpen2Buses100us_B.Switch_c = 0U;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch_c =
      SpeedgoatCANOpen2Buses100us_B.CANRead_o4;
  }

  /* End of Switch: '<S17>/Switch' */

  /* CCaller: '<S15>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen2Buses100us_B.CANRead_o2,
    SpeedgoatCANOpen2Buses100us_B.Switch_c,
    SpeedgoatCANOpen2Buses100us_B.CANRead_o6,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,
    SpeedgoatCANOpen2Buses100us_B.CCaller_o3);

  /* Outputs for Enabled SubSystem: '<S15>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  if (SpeedgoatCANOpen2Buses100us_B.CCaller_o2 > 0) {
    /* Constant: '<S18>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_ge =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp;

    /* S-Function (sg_IO602_IO691_write_s): '<S18>/CAN Write' */

    /* Level2 S-Function Block: '<S18>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC_f);
  }

  /* End of Outputs for SubSystem: '<S15>/CAN TX Wrapper' */

  /* S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */

  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S19>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l) {
    SpeedgoatCANOpen2Buses100us_B.Switch_g = 0U;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch_g =
      SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a;
  }

  /* End of Switch: '<S19>/Switch' */

  /* CCaller: '<S16>/C Caller' */
  CANOpenSlave_ProcessStack_APT(SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,
    SpeedgoatCANOpen2Buses100us_B.Switch_g,
    SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,
    SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n);

  /* Outputs for Enabled SubSystem: '<S16>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n > 0) {
    /* Constant: '<S20>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_em =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv;

    /* S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */

    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S16>/CAN TX Wrapper' */

  /* S-Function (RPDOs_from_Joystick): '<S9>/RPDOs from Joystick' */
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
  if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 8.0F) {
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
  /* Constant: '<S54>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

  /* Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
      SpeedgoatCANOpen2Buse_IN_Init_o;
    SpeedgoatCANOpen2Buses100us_B.ClearError = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.DeviceMode = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.PowerEnable = 0.0F;
    SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10) {
     case SpeedgoatCANOp_IN_Clear_Error_i:
      if (SpeedgoatCANOpen2Buses100us_DW.aux > 2000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.ClearError = 1.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buse_IN_Init_o:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
      sf_internal_predicateOutput =
        ((SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 1.0F) ||
         (SpeedgoatCANOpen2Buses100us_B.Constant != 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOp_IN_Clear_Error_i;
      }
      break;

     case SpeedgoatCA_IN_SetCurrentMode_a:
      if (SpeedgoatCANOpen2Buses100us_B.Constant != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Init_o;
        SpeedgoatCANOpen2Buses100us_B.ClearError = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.DeviceMode = 3.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
      sf_internal_predicateOutput =
        ((SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 0.0F) &&
         (SpeedgoatCANOpen2Buses100us_B.Constant == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        sf_internal_predicateOutput =
          ((SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 2.0F) &&
           (SpeedgoatCANOpen2Buses100us_B.Constant == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
            SpeedgoatCA_IN_SetCurrentMode_a;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant != 1.0F) {
            SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
              SpeedgoatCANOpen2Buse_IN_Init_o;
            SpeedgoatCANOpen2Buses100us_B.ClearError = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.DeviceMode = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.PowerEnable = 0.0F;
            SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */

  /* Constant: '<S56>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_e =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

  /* Chart: '<S56>/DunkB_TiltLeft_Init_CurrentMode' */
  DunkD_Brake_Init_CurrentMod(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant_e,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkB_TiltLeft_Init_CurrentM);

  /* Constant: '<S57>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_m =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

  /* Chart: '<S57>/DunkC_TiltRight_Init_CurrentMode' */
  DunkD_Brake_Init_CurrentMod(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant_m,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkC_TiltRight_Init_Current);

  /* Constant: '<S50>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_g =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

  /* Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
  DunkD_Brake_Init_CurrentMod(SpeedgoatCANOpen2Buses100us_B.CastToSingle3,
    SpeedgoatCANOpen2Buses100us_B.Constant_g,
    &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode,
    &SpeedgoatCANOpen2Buses100us_DW.sf_DunkD_Brake_Init_CurrentMode);

  /* Chart: '<S25>/EnableCtrl' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_n = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buse_IN_Init_o;
  } else if (SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 ==
             SpeedgoatCANO_IN_Enable_Control) {
    if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 7.0F) {
      SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen2Buse_IN_Init_o;
    } else {
      SpeedgoatCANOpen2Buses100us_B.Enable = 1.0F;
    }
  } else if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3 == 6.0F) {
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANO_IN_Enable_Control;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Enable = 0.0F;
  }

  /* End of Chart: '<S25>/EnableCtrl' */

  /* Sum: '<S55>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_b =
    (((SpeedgoatCANOpen2Buses100us_B.InitStatus +
       SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus)
      + SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus)
     + SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus)
    + SpeedgoatCANOpen2Buses100us_B.Enable;

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.Compare = (SpeedgoatCANOpen2Buses100us_B.Sum_b ==
    SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const);

  /* Switch: '<S35>/Switch4' incorporates:
   *  Constant: '<S35>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    /* Gain: '<S37>/Gain1' */
    SpeedgoatCANOpen2Buses100us_B.Gain1_e =
      SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n *
      SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd;

    /* Abs: '<S37>/Abs' */
    SpeedgoatCANOpen2Buses100us_B.TractionRef = (real32_T)fabs
      (SpeedgoatCANOpen2Buses100us_B.Gain1_e);
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_B.TractionRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S35>/Switch4' */

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
  /* DataTypeConversion: '<S54>/Cast To Single1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_m = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S54>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion3' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_m;

  /* DataTypeConversion: '<S54>/Cast To Single' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_e = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S54>/Cast To Single' */

  /* DataTypeConversion: '<S22>/Data Type Conversion6' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_e;

  /* DataTypeConversion: '<S57>/Cast To Single1' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_j = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S57>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion27' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_j;

  /* DataTypeConversion: '<S57>/Cast To Single' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_h = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S57>/Cast To Single' */

  /* DataTypeConversion: '<S22>/Data Type Conversion29' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_h;

  /* DataTypeConversion: '<S57>/Cast To Single3' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S57>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion30' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_a;

  /* DataTypeConversion: '<S57>/Cast To Single2' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S57>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion28' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b;

  /* RateTransition: '<S47>/FeedForward1' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.FeedForward1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.FeedForward1_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_B.FeedForward =
    SpeedgoatCANOpen2Buses100us_DW.FeedForward1_Buf[SpeedgoatCANOpen2Buses100us_DW.FeedForward1_RDBuf];

  /* Clock: '<S41>/Clock' */
  SpeedgoatCANOpen2Buses100us_B.Clock = SpeedgoatCANOpen2Buses100us_M->Timing.t
    [0];

  /* Sum: '<S41>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S41>/startTime'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum = SpeedgoatCANOpen2Buses100us_B.Clock - (0.0);

  /* Math: '<S41>/Math Function' incorporates:
   *  Constant: '<S41>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.MathFunction = rt_remd_snf
    (SpeedgoatCANOpen2Buses100us_B.Sum,
     SpeedgoatCANOpen2Buses100us_P.Constant_Value_c);

  /* Lookup_n-D: '<S41>/Look-Up Table1' */
  SpeedgoatCANOpen2Buses100us_B.LookUpTable1 = look1_binlxpw
    (SpeedgoatCANOpen2Buses100us_B.MathFunction,
     SpeedgoatCANOpen2Buses100us_P.LookUpTable1_bp01Data,
     SpeedgoatCANOpen2Buses100us_P.RepeatingSequence_rep_seq_y, 7U);

  /* DataTypeConversion: '<S24>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_e =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd;

  /* Gain: '<S34>/dem' */
  SpeedgoatCANOpen2Buses100us_B.DirectionReq =
    SpeedgoatCANOpen2Buses100us_P.dem_Gain *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle_e;

  /* Gain: '<S34>/Robotics Convention' */
  SpeedgoatCANOpen2Buses100us_B.DirectionRef =
    SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain *
    SpeedgoatCANOpen2Buses100us_B.DirectionReq;

  /* Gain: '<S34>/degree2rad' */
  SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad =
    SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain *
    SpeedgoatCANOpen2Buses100us_B.DirectionRef;

  /* Gain: '<S36>/n' */
  SpeedgoatCANOpen2Buses100us_B.n = SpeedgoatCANOpen2Buses100us_P.n_Gain *
    SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad;

  /* DataTypeConversion: '<S36>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle = SpeedgoatCANOpen2Buses100us_B.n;

  /* DataTypeConversion: '<S36>/Cast To Single1' incorporates:
   *  Constant: '<S36>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1 =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_ce;

  /* MATLAB Function: '<S36>/ServoTilting' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 / 10.05525 * sin
    (SpeedgoatCANOpen2Buses100us_B.CastToSingle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle = atan
    (SpeedgoatCANOpen2Buses100us_B.TiltingAngle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle * 180.0 / 3.1415926535897931;

  /* ManualSwitch: '<S36>/Manual Switch1' */
  if (SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting == 1) {
    /* ManualSwitch: '<S36>/Manual Switch' incorporates:
     *  Constant: '<S36>/Constant1'
     */
    if (SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting == 1) {
      /* SignalConversion: '<S41>/Output' */
      SpeedgoatCANOpen2Buses100us_B.Output =
        SpeedgoatCANOpen2Buses100us_B.LookUpTable1;
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch =
        SpeedgoatCANOpen2Buses100us_B.Output;
    } else {
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch =
        SpeedgoatCANOpen2Buses100us_P.Constant1_Value;
    }

    /* End of ManualSwitch: '<S36>/Manual Switch' */
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch1 =
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch;
  } else {
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch1 =
      SpeedgoatCANOpen2Buses100us_B.TiltingAngle;
  }

  /* End of ManualSwitch: '<S36>/Manual Switch1' */

  /* Gain: '<S36>/degree2m' */
  SpeedgoatCANOpen2Buses100us_B.PosRefm =
    SpeedgoatCANOpen2Buses100us_P.degree2m_Gain *
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch1;

  /* Product: '<S47>/Product1' */
  SpeedgoatCANOpen2Buses100us_B.Product1 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.PosRefm;

  /* Memory: '<S40>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput;

  /* Product: '<S47>/Product' */
  SpeedgoatCANOpen2Buses100us_B.Product = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;

  /* Sum: '<S47>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.e = SpeedgoatCANOpen2Buses100us_B.Product1 -
    SpeedgoatCANOpen2Buses100us_B.Product;

  /* Gain: '<S47>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses100us_B.Proportional =
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kp * SpeedgoatCANOpen2Buses100us_B.e;

  /* DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_B.Integral =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE;

  /* Gain: '<S47>/Derivative Gain' */
  SpeedgoatCANOpen2Buses100us_B.DerivativeGain =
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kd * SpeedgoatCANOpen2Buses100us_B.e;

  /* DiscreteIntegrator: '<S47>/Discrete-Time Integrator1' */
  SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1 =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Sum: '<S47>/Sum3' */
  SpeedgoatCANOpen2Buses100us_B.Sum3 =
    SpeedgoatCANOpen2Buses100us_B.DerivativeGain -
    SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1;

  /* Gain: '<S47>/FilterOrder' */
  SpeedgoatCANOpen2Buses100us_B.Derivative =
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_N * SpeedgoatCANOpen2Buses100us_B.Sum3;

  /* Sum: '<S47>/Sum4' */
  SpeedgoatCANOpen2Buses100us_B.Sum4 =
    ((SpeedgoatCANOpen2Buses100us_B.FeedForward +
      SpeedgoatCANOpen2Buses100us_B.Proportional) +
     SpeedgoatCANOpen2Buses100us_B.Integral) +
    SpeedgoatCANOpen2Buses100us_B.Derivative;

  /* Saturate: '<S47>/Saturation' */
  u0 = -SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Req_lim;
  csum = SpeedgoatCANOpen2Buses100us_B.Sum4;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = u0;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation = csum;
  }

  /* End of Saturate: '<S47>/Saturation' */

  /* Product: '<S47>/Product2' */
  SpeedgoatCANOpen2Buses100us_B.Product2 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.Saturation;

  /* Gain: '<S47>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.Gain = SpeedgoatCANOpen2Buses100us_P.Gain_Gain *
    SpeedgoatCANOpen2Buses100us_B.Product2;

  /* Gain: '<S36>/Amp2mAmp_conv2' */
  SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2 =
    SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain *
    SpeedgoatCANOpen2Buses100us_B.Gain;

  /* Switch: '<S35>/Switch2' incorporates:
   *  Constant: '<S35>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch2 =
      SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S35>/Switch2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion31' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch2);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion31' */
  /* DataTypeConversion: '<S50>/Cast To Single1' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_mj = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S50>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion32' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_mj;

  /* DataTypeConversion: '<S50>/Cast To Single' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_g = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S50>/Cast To Single' */

  /* DataTypeConversion: '<S22>/Data Type Conversion34' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_g;

  /* DataTypeConversion: '<S50>/Cast To Single3' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_p = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S50>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion35' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_p;

  /* DataTypeConversion: '<S50>/Cast To Single2' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S50>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion33' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k;

  /* S-Function (RPDOs_from_AN2CANConv): '<S1>/RPDOs from AN2CAN ' */
  RPDOs_from_AN2CANConv_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Channel_AN1,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN2,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN3,
     &SpeedgoatCANOpen2Buses100us_B.Channel_AN4);

  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  SpeedgoatCANOpen2Buses100us_B.DataTypeConversion = (uint16_T)
    SpeedgoatCANOpen2Buses100us_B.Channel_AN3;

  /* Saturate: '<S33>/Saturation1' */
  u0_0 = SpeedgoatCANOpen2Buses100us_B.DataTypeConversion;
  u1 = SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat;
  u2 = SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat;
  if (u0_0 > u2) {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u2;
  } else if (u0_0 < u1) {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u0_0;
  }

  /* End of Saturate: '<S33>/Saturation1' */

  /* Sum: '<S33>/Sum' incorporates:
   *  Constant: '<S33>/offset'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum_i = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Saturation1 -
    SpeedgoatCANOpen2Buses100us_P.offset_Value;

  /* Gain: '<S33>/Gain3' */
  SpeedgoatCANOpen2Buses100us_B.br_percent =
    SpeedgoatCANOpen2Buses100us_P.Gain3_Gain *
    SpeedgoatCANOpen2Buses100us_B.Sum_i;

  /* Gain: '<S33>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.Gain2_a =
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain *
    SpeedgoatCANOpen2Buses100us_B.br_percent;

  /* Saturate: '<S33>/Saturation' */
  u0 = SpeedgoatCANOpen2Buses100us_B.Gain2_a;
  csum = SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_e = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_e = csum;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S33>/Saturation' */

  /* Gain: '<S33>/Gain1' */
  SpeedgoatCANOpen2Buses100us_B.Gain1 = SpeedgoatCANOpen2Buses100us_P.Gain1_Gain
    * SpeedgoatCANOpen2Buses100us_B.Saturation_e;

  /* Gain: '<S33>/Amp2mAmp' */
  SpeedgoatCANOpen2Buses100us_B.BrCurrentRef =
    SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain *
    SpeedgoatCANOpen2Buses100us_B.Gain1;

  /* Switch: '<S35>/Switch3' incorporates:
   *  Constant: '<S35>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch3 =
      SpeedgoatCANOpen2Buses100us_B.BrCurrentRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch3 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S35>/Switch3' */

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
  /* DataTypeConversion: '<S54>/Cast To Single3' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_i = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S54>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion7' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_i;

  /* DataTypeConversion: '<S54>/Cast To Single2' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S54>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion4' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m;

  /* RateTransition: '<S35>/DirSpeedRef' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_B.DirSpeedRef =
    SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_Buf[SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_RDBuf];

  /* Switch: '<S35>/Switch' incorporates:
   *  Constant: '<S35>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_B.DirSpeedRef;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S35>/Switch' */

  /* DataTypeConversion: '<S22>/Data Type Conversion8' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion8' */
  /* DataTypeConversion: '<S56>/Cast To Single1' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_jv = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S56>/Cast To Single1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion22' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_jv;

  /* DataTypeConversion: '<S56>/Cast To Single' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_d = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S56>/Cast To Single' */

  /* DataTypeConversion: '<S22>/Data Type Conversion24' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_d;

  /* DataTypeConversion: '<S56>/Cast To Single3' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S56>/Cast To Single3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion25' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir;

  /* DataTypeConversion: '<S56>/Cast To Single2' */
  tmp = (real32_T)floor
    (SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0 = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S56>/Cast To Single2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion23' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0;

  /* Gain: '<S36>/Amp2mAmp_conv1' */
  SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1 =
    SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain *
    SpeedgoatCANOpen2Buses100us_B.Product2;

  /* Switch: '<S35>/Switch1' incorporates:
   *  Constant: '<S35>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S35>/Switch1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion26' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch1);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S22>/Data Type Conversion26' */
  /* Sin: '<S14>/Sine Wave' */
  SpeedgoatCANOpen2Buses100us_B.SineWave = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave_Bias;

  /* DataTypeConversion: '<S14>/Cast To Single' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_01 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S14>/Cast To Single' */

  /* Sin: '<S14>/Sine Wave1' */
  SpeedgoatCANOpen2Buses100us_B.SineWave1 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias;

  /* DataTypeConversion: '<S14>/Cast To Single1' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave1);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_02 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S14>/Cast To Single1' */

  /* Sin: '<S14>/Sine Wave3' */
  SpeedgoatCANOpen2Buses100us_B.SineWave3 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias;

  /* DataTypeConversion: '<S14>/Cast To Single2' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave3);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_03 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S14>/Cast To Single2' */

  /* Sin: '<S14>/Sine Wave2' */
  SpeedgoatCANOpen2Buses100us_B.SineWave2 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias;

  /* DataTypeConversion: '<S14>/Cast To Single3' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave2);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_04 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S14>/Cast To Single3' */
  /* S-Function (RPDOs_from_APT): '<S2>/RPDOs from APT' */
  RPDOs_from_APT_Outputs_wrapper(&SpeedgoatCANOpen2Buses100us_B.APT_StatusWord,
    &SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent,
    &SpeedgoatCANOpen2Buses100us_B.APT_Speed,
    &SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage,
    &SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp,
    &SpeedgoatCANOpen2Buses100us_B.APT_Temp,
    &SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus,
    &SpeedgoatCANOpen2Buses100us_B.APT_Direction);

  /* S-Function (TPDOs_to_APT): '<S2>/TPDOs from Speedgoat to APT' */
  TPDOs_to_APT_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat);

  /* Constant: '<S3>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Enable_c =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_e;

  /* S-Function (RPDOs_from_DunkA): '<S4>/RPDOs from Dunker #1' */
  RPDOs_from_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity);

  /* S-Function (TPDOs_to_DunkA): '<S4>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkB): '<S5>/RPDOs from Dunker #1' */
  RPDOs_from_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity);

  /* S-Function (TPDOs_to_DunkB): '<S5>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkC): '<S6>/RPDOs from Dunker #1' */
  RPDOs_from_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity);

  /* Gain: '<S6>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain_Gain_g *
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent;

  /* S-Function (TPDOs_to_DunkC): '<S6>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkD): '<S7>/RPDOs from Dunker #1' */
  RPDOs_from_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity);

  /* S-Function (TPDOs_to_DunkD): '<S7>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_Encoder): '<S8>/RPDOs from Encoder' */
  RPDOs_from_Encoder_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,
     &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position);

  /* DataTypeConversion: '<S21>/Data Type Conversion15' */
  SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd;

  /* DataTypeConversion: '<S21>/Data Type Conversion16' */
  SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd;

  /* Gain: '<S21>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.Gain2 = (uint64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p *
    SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position;

  /* DataTypeConversion: '<S21>/Data Type Conversion5' */
  SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.Gain2 * 2.91038305E-11F;

  /* Gain: '<S21>/Gain4' */
  SpeedgoatCANOpen2Buses100us_B.Gain4 = (uint64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain4_Gain *
    SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position;

  /* DataTypeConversion: '<S21>/Data Type Conversion18' */
  SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.Gain4 * 2.91038305E-11F;

  /* DataTypeConversion: '<S21>/Data Type Conversion17' */
  SpeedgoatCANOpen2Buses100us_B.AN1 = SpeedgoatCANOpen2Buses100us_B.Channel_AN1;

  /* DataTypeConversion: '<S21>/Data Type Conversion19' */
  SpeedgoatCANOpen2Buses100us_B.AN2 = SpeedgoatCANOpen2Buses100us_B.Channel_AN2;

  /* DataTypeConversion: '<S21>/Data Type Conversion20' */
  SpeedgoatCANOpen2Buses100us_B.AN3 = SpeedgoatCANOpen2Buses100us_B.Channel_AN3;

  /* DataTypeConversion: '<S21>/Data Type Conversion21' */
  SpeedgoatCANOpen2Buses100us_B.AN4 = SpeedgoatCANOpen2Buses100us_B.Channel_AN4;

  /* DataTypeConversion: '<S21>/Data Type Conversion9' */
  SpeedgoatCANOpen2Buses100us_B.Actual_Current = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent;

  /* MATLABSystem: '<S21>/Moving Average' incorporates:
   *  Constant: '<S21>/Constant'
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
  SpeedgoatCANOpen2Buses100us_B.MovingAverage_o = u0;

  /* End of MATLABSystem: '<S21>/Moving Average' */

  /* DataTypeConversion: '<S21>/Data Type Conversion14' */
  SpeedgoatCANOpen2Buses100us_B.Desired_Current = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.MovingAverage_o;

  /* Memory: '<S34>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.Memory1 =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_n;

  /* MATLABSystem: '<S34>/Moving Average' */
  u0 = SpeedgoatCANOpen2Buses100us_B.Memory1;
  obj_5 = &SpeedgoatCANOpen2Buses100us_DW.obj_c;
  obj_6 = obj_5;
  if (obj_6->TunablePropsChanged) {
    obj_6->TunablePropsChanged = false;
  }

  obj_7 = obj_5->pStatistic;
  if (obj_7->isInitialized != 1) {
    obj_7->isSetupComplete = false;
    obj_7->isInitialized = 1;
    obj_7->isSetupComplete = true;
  }

  SpeedgoatCANOpen2Buses100us_B.MovingAverage = u0;

  /* End of MATLABSystem: '<S34>/Moving Average' */

  /* DataTypeConversion: '<S34>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.DirectionAvg =
    SpeedgoatCANOpen2Buses100us_B.MovingAverage;

  /* DataTypeConversion: '<S34>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_g =
    SpeedgoatCANOpen2Buses100us_B.DirectionRef;

  /* RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_p + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_g)
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

  /* End of RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */

  /* RateTransition: '<S34>/DirectionAvg' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.DirectionAvg;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.DirectionAvg;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.DirectionAvg;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S34>/DirectionAvg' */
  /* Sum: '<S34>/Sum' incorporates:
   *  Constant: '<S34>/Offset to 0 pos => pos = [-180 180]deg'
   */
  SpeedgoatCANOpen2Buses100us_B.Pos_out =
    SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value - (real_T)
    SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position;

  /* Gain: '<S34>/inc2deg' */
  SpeedgoatCANOpen2Buses100us_B.Direction =
    SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain *
    SpeedgoatCANOpen2Buses100us_B.Pos_out;

  /* Sum: '<S36>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.Pos_err = SpeedgoatCANOpen2Buses100us_B.PosRefm
    - SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;

  /* RateTransition: '<S36>/RTilt CurrenRef' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.Gain;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.Gain;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.Gain;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S36>/RTilt CurrenRef' */

  /* RateTransition: '<S36>/DispLeft [m] filt' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S36>/DispLeft [m] filt' */
  /* Gain: '<S40>/LSB2Volt' */
  SpeedgoatCANOpen2Buses100us_B.DispLeftVolt =
    SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain *
    SpeedgoatCANOpen2Buses100us_B.Channel_AN2;

  /* Sum: '<S40>/Sum' incorporates:
   *  Constant: '<S40>/Offset for 0 deg (3.5064V -> 57.02mm)'
   */
  SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt = (real_T)
    SpeedgoatCANOpen2Buses100us_B.DispLeftVolt * 1.4901161193847656E-8 -
    SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg35064V5702mm_Value;

  /* Gain: '<S40>/Volt2meter' */
  SpeedgoatCANOpen2Buses100us_B.DispLeftm =
    SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain *
    SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt;

  /* RateTransition: '<S40>/DispLeft [m]' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DispLeftm_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftm;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftm;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.DispLeftm;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.DispLeftm_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S40>/DispLeft [m]' */
  /* Gain: '<S47>/FF_En' */
  SpeedgoatCANOpen2Buses100us_B.FF_En =
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_FF_En *
    SpeedgoatCANOpen2Buses100us_B.Product1;

  /* RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_LstB + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_RDBu)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.FF_En;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.FF_En;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.FF_En;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_LstB = wrBufIdx;

  /* End of RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
  /* Sum: '<S47>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_a = SpeedgoatCANOpen2Buses100us_B.Sum4 -
    SpeedgoatCANOpen2Buses100us_B.Saturation;

  /* Gain: '<S47>/AntiWindup' */
  u0 = SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Ki /
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kp;
  SpeedgoatCANOpen2Buses100us_B.AntiWindup = u0 *
    SpeedgoatCANOpen2Buses100us_B.Sum_a;

  /* Gain: '<S47>/Integral Gain' */
  SpeedgoatCANOpen2Buses100us_B.IntegralGain =
    SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Ki * SpeedgoatCANOpen2Buses100us_B.e;

  /* Sum: '<S47>/Sum2' */
  SpeedgoatCANOpen2Buses100us_B.Sum2 =
    SpeedgoatCANOpen2Buses100us_B.IntegralGain -
    SpeedgoatCANOpen2Buses100us_B.AntiWindup;

  /* Gain: '<S37>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI =
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k *
    SpeedgoatCANOpen2Buses100us_B.APT_Speed;

  /* Gain: '<S37>/WheelRadius' */
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain *
    SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI;

  /* Sin: '<S36>/Sine Wave' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_d *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_d) *
    SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_d +
    SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_f;

  /* Gain: '<S37>/m//s2Km//h' */
  tmp_0 = (uint64_T)SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain;
  tmp_1 = (uint64_T)SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI;
  sMultiWordMul(&tmp_0, 1, &tmp_1, 1, &tmp_2.chunks[0U], 2);
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh = tmp_2;
}

/* Model update function for TID0 */
static void SpeedgoatCANOpen2Buses100us_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update for Memory: '<S40>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
    SpeedgoatCANOpen2Buses100us_B.DispLeftm;

  /* Update for DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE +=
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses100us_B.Sum2;

  /* Update for DiscreteIntegrator: '<S47>/Discrete-Time Integrator1' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE +=
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_gainval *
    SpeedgoatCANOpen2Buses100us_B.Derivative;

  /* Update for Memory: '<S34>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_n =
    SpeedgoatCANOpen2Buses100us_B.Direction;

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

/* Model output function for TID2 */
static void SpeedgoatCANOpen2Buses100us_output2(void) /* Sample time: [0.0002s, 0.0s] */
{
  real_T denAccum;

  /* RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_RDBu =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_LstB;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_RDBu) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtFeedForwardInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtFeedForwardInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtFeedForwardInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf2;
    break;
  }

  /* End of RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */

  /* DiscreteTransferFcn: '<S47>/FeedForward' */
  denAccum = SpeedgoatCANOpen2Buses100us_B.TmpRTBAtFeedForwardInport1;
  denAccum -= SpeedgoatCANOpen2Buses100us_P.FeedForward_DenCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.FeedForward_states;
  denAccum /= SpeedgoatCANOpen2Buses100us_P.FeedForward_DenCoef[0];
  SpeedgoatCANOpen2Buses100us_DW.FeedForward_tmp = denAccum;
  denAccum = SpeedgoatCANOpen2Buses100us_P.FeedForward_NumCoef[0] *
    SpeedgoatCANOpen2Buses100us_DW.FeedForward_tmp;
  denAccum += SpeedgoatCANOpen2Buses100us_P.FeedForward_NumCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.FeedForward_states;
  SpeedgoatCANOpen2Buses100us_B.FeedForward_a = denAccum;
}

/* Model update function for TID2 */
static void SpeedgoatCANOpen2Buses100us_update2(void) /* Sample time: [0.0002s, 0.0s] */
{
  int8_T wrBufIdx;

  /* Update for RateTransition: '<S47>/FeedForward1' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.FeedForward1_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.FeedForward1_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.FeedForward_a;
  SpeedgoatCANOpen2Buses100us_DW.FeedForward1_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S47>/FeedForward1' */

  /* Update for DiscreteTransferFcn: '<S47>/FeedForward' */
  SpeedgoatCANOpen2Buses100us_DW.FeedForward_states =
    SpeedgoatCANOpen2Buses100us_DW.FeedForward_tmp;

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses100us_M->Timing.clockTick2)) {
    ++SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH2;
  }

  SpeedgoatCANOpen2Buses100us_M->Timing.t[2] =
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTick2 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize2 +
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH2 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
static void SpeedgoatCANOpen2Buses100us_output3(void) /* Sample time: [0.001s, 0.0s] */
{
  /* RateTransition: '<S36>/RTilt CurrenRef' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);
  switch (SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.RTiltCurrentRefA =
      SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.RTiltCurrentRefA =
      SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.RTiltCurrentRefA =
      SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf2;
    break;
  }

  /* End of RateTransition: '<S36>/RTilt CurrenRef' */

  /* ZeroOrderHold: '<S36>/Zero-Order Hold1' */
  SpeedgoatCANOpen2Buses100us_B.Sys_in =
    SpeedgoatCANOpen2Buses100us_B.RTiltCurrentRefA;

  /* RateTransition: '<S36>/DispLeft [m] filt' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  switch (SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_l =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_l =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_l =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf2;
    break;
  }

  /* End of RateTransition: '<S36>/DispLeft [m] filt' */

  /* ZeroOrderHold: '<S36>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses100us_B.Sys_out =
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_l;
}

/* Model update function for TID3 */
static void SpeedgoatCANOpen2Buses100us_update3(void) /* Sample time: [0.001s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses100us_M->Timing.clockTick3)) {
    ++SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH3;
  }

  SpeedgoatCANOpen2Buses100us_M->Timing.t[3] =
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTick3 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize3 +
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH3 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output function for TID4 */
static void SpeedgoatCANOpen2Buses100us_output4(void) /* Sample time: [0.005s, 0.0s] */
{
  real_T DirectionRef;

  /* RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_g =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_p;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_g) {
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

  /* End of RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */

  /* RateTransition: '<S34>/DirectionAvg' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);
  switch (SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.DirectionAvg_n =
      SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.DirectionAvg_n =
      SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.DirectionAvg_n =
      SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf2;
    break;
  }

  /* End of RateTransition: '<S34>/DirectionAvg' */

  /* MATLAB Function: '<S34>/P Direction Controller' */
  DirectionRef = SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp;
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp > 90.0) {
    DirectionRef = 90.0;
  }

  if (DirectionRef < -90.0) {
    DirectionRef = -90.0;
  }

  SpeedgoatCANOpen2Buses100us_B.SpeedRef = (DirectionRef -
    SpeedgoatCANOpen2Buses100us_B.DirectionAvg_n) * 70.0;

  /* End of MATLAB Function: '<S34>/P Direction Controller' */
  /* RateTransition: '<S40>/DispLeft [m]' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DispLeftm_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  switch (SpeedgoatCANOpen2Buses100us_DW.DispLeftm_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf2;
    break;
  }

  /* End of RateTransition: '<S40>/DispLeft [m]' */

  /* DiscreteFilter: '<S40>/Discrete Filter' */
  DirectionRef = SpeedgoatCANOpen2Buses100us_B.DispLeftm_k;
  DirectionRef -= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  DirectionRef -= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[2] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1];
  DirectionRef /= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0];
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp = DirectionRef;
  DirectionRef = SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp;
  DirectionRef += SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  DirectionRef += SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[2] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1];
  SpeedgoatCANOpen2Buses100us_B.DiscreteFilter = DirectionRef;
}

/* Model update function for TID4 */
static void SpeedgoatCANOpen2Buses100us_update4(void) /* Sample time: [0.005s, 0.0s] */
{
  int8_T wrBufIdx;

  /* Update for RateTransition: '<S35>/DirSpeedRef' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.SpeedRef;
  SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S35>/DirSpeedRef' */

  /* Update for DiscreteFilter: '<S40>/Discrete Filter' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1] =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0] =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp;

  /* Update absolute time */
  /* The "clockTick4" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick4"
   * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick4 and the high bits
   * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses100us_M->Timing.clockTick4)) {
    ++SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH4;
  }

  SpeedgoatCANOpen2Buses100us_M->Timing.t[4] =
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTick4 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize4 +
    SpeedgoatCANOpen2Buses100us_M->Timing.clockTickH4 *
    SpeedgoatCANOpen2Buses100us_M->Timing.stepSize4 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void SpeedgoatCANOpen2Buses100us_output(int_T tid)
{
  switch (tid) {
   case 0 :
    SpeedgoatCANOpen2Buses100us_output0();
    break;

   case 1 :
    SpeedgoatCANOpen2Buses100us_output2();
    break;

   case 2 :
    SpeedgoatCANOpen2Buses100us_output3();
    break;

   case 3 :
    SpeedgoatCANOpen2Buses100us_output4();
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
    SpeedgoatCANOpen2Buses100us_update2();
    break;

   case 2 :
    SpeedgoatCANOpen2Buses100us_update3();
    break;

   case 3 :
    SpeedgoatCANOpen2Buses100us_update4();
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
    dsp_simulink_MovingAverage_i_T *b_obj_0;
    dsp_private_SlidingWindowAv_i_T *iobj_0_0;
    dsp_simulink_MovingAverage_i_T *obj_0;

    /* Start for S-Function (sg_IO602_IO691_setup_s): '<S13>/CAN Setup ' */
    /* Level2 S-Function Block: '<S13>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S17>/CAN Read' */
    /* Level2 S-Function Block: '<S17>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S15>/CAN TX Wrapper' */
    /* Start for Constant: '<S18>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_ge =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S18>/CAN Write' */
    /* Level2 S-Function Block: '<S18>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S15>/CAN TX Wrapper' */

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
    /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S16>/CAN TX Wrapper' */
    /* Start for Constant: '<S20>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_em =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S16>/CAN TX Wrapper' */
    /* Start for Constant: '<S54>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

    /* Start for Constant: '<S56>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_e =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

    /* Start for Constant: '<S57>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_m =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

    /* Start for Constant: '<S50>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_g =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

    /* Start for RateTransition: '<S47>/FeedForward1' */
    SpeedgoatCANOpen2Buses100us_B.FeedForward =
      SpeedgoatCANOpen2Buses100us_P.FeedForward1_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);

    /* Start for RateTransition: '<S35>/DirSpeedRef' */
    SpeedgoatCANOpen2Buses100us_B.DirSpeedRef =
      SpeedgoatCANOpen2Buses100us_P.DirSpeedRef_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);

    /* Start for MATLABSystem: '<S21>/Moving Average' */
    SpeedgoatCANOpen2Buses100us_DW.obj.matlabCodegenIsDeleted = true;
    b_obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
    b_obj->isInitialized = 0;
    b_obj->NumChannels = -1;
    b_obj->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty_n = true;
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

    /* Start for MATLABSystem: '<S34>/Moving Average' */
    SpeedgoatCANOpen2Buses100us_DW.obj_c.matlabCodegenIsDeleted = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses100us_DW.obj_c;
    b_obj_0->isInitialized = 0;
    b_obj_0->NumChannels = -1;
    b_obj_0->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses100us_DW.obj_c;
    iobj_0_0 = &SpeedgoatCANOpen2Buses100us_DW.gobj_0_j;
    b_obj_0->isSetupComplete = false;
    b_obj_0->isInitialized = 1;
    obj_0 = b_obj_0;
    obj_0->NumChannels = 1;
    iobj_0_0->isInitialized = 0;
    obj_0->pStatistic = iobj_0_0;
    b_obj_0->isSetupComplete = true;
    b_obj_0->TunablePropsChanged = false;

    /* Start for RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerInp;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);

    /* Start for RateTransition: '<S34>/DirectionAvg' */
    SpeedgoatCANOpen2Buses100us_B.DirectionAvg_n =
      SpeedgoatCANOpen2Buses100us_P.DirectionAvg_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);

    /* Start for RateTransition: '<S36>/RTilt CurrenRef' */
    SpeedgoatCANOpen2Buses100us_B.RTiltCurrentRefA =
      SpeedgoatCANOpen2Buses100us_P.RTiltCurrenRef_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);

    /* Start for RateTransition: '<S36>/DispLeft [m] filt' */
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_l =
      SpeedgoatCANOpen2Buses100us_P.DispLeftmfilt_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);

    /* Start for RateTransition: '<S40>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_P.DispLeftm_InitialCondition;
    rtw_xpc_mutex_create(&SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);

    /* Start for RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtFeedForwardInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtFeedForwardInport1_Init;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
  }

  {
    dsp_simulink_MovingAverage_Sp_T *obj;
    dsp_private_SlidingWindowAver_T *obj_0;
    int32_T i;

    /* user code (Initialize function Body) */
    CANOpenSlave_ResetCommunication();
    CANOpenSlave_ResetCommunication_APT();

    /* InitializeConditions for RateTransition: '<S47>/FeedForward1' */
    SpeedgoatCANOpen2Buses100us_DW.FeedForward1_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.FeedForward1_InitialCondition;

    /* InitializeConditions for Memory: '<S40>/Memory1' */
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
      SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE =
      SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S47>/Discrete-Time Integrator1' */
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE =
      SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for RateTransition: '<S35>/DirSpeedRef' */
    SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.DirSpeedRef_InitialCondition;

    /* InitializeConditions for Memory: '<S34>/Memory1' */
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_n =
      SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_f;

    /* InitializeConditions for RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerInp =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPDirectionControllerInp;

    /* InitializeConditions for RateTransition: '<S34>/DirectionAvg' */
    SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.DirectionAvg_InitialCondition;

    /* InitializeConditions for RateTransition: '<S36>/RTilt CurrenRef' */
    SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.RTiltCurrenRef_InitialCondition;

    /* InitializeConditions for RateTransition: '<S36>/DispLeft [m] filt' */
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.DispLeftmfilt_InitialCondition;

    /* InitializeConditions for RateTransition: '<S40>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.DispLeftm_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S40>/Discrete Filter' */
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0] =
      SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates;
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1] =
      SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates;

    /* InitializeConditions for RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtFeedForwardInport1_Init;

    /* InitializeConditions for DiscreteTransferFcn: '<S47>/FeedForward' */
    SpeedgoatCANOpen2Buses100us_DW.FeedForward_states =
      SpeedgoatCANOpen2Buses100us_P.FeedForward_InitialStates;

    /* SystemInitialize for Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_k;

    /* SystemInitialize for Chart: '<S56>/DunkB_TiltLeft_Init_CurrentMode' */
    DunkD_Brake_Init_Curre_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkB_TiltLeft_Init_CurrentM);

    /* SystemInitialize for Chart: '<S57>/DunkC_TiltRight_Init_CurrentMode' */
    DunkD_Brake_Init_Curre_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkC_TiltRight_Init_Current);

    /* SystemInitialize for Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
    DunkD_Brake_Init_Curre_Init
      (&SpeedgoatCANOpen2Buses100us_DW.sf_DunkD_Brake_Init_CurrentMode);

    /* SystemInitialize for Chart: '<S25>/EnableCtrl' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_n = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_k;

    /* SystemInitialize for MATLAB Function: '<S23>/HeartBeatgenerator' */
    SpeedgoatCANOpen2Buses100us_DW.Heartbeat = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.tact = 0.0;

    /* InitializeConditions for MATLABSystem: '<S21>/Moving Average' */
    obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->pCumSum = 0.0;
      for (i = 0; i < 49; i++) {
        obj_0->pCumSumRev[i] = 0.0;
      }

      obj_0->pCumRevIndex = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S21>/Moving Average' */
  }
}

/* Model terminate function */
static void SpeedgoatCANOpen2Buses100us_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S13>/CAN Setup ' */
  /* Level2 S-Function Block: '<S13>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S17>/CAN Read' */
  /* Level2 S-Function Block: '<S17>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S15>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S18>/CAN Write' */
  /* Level2 S-Function Block: '<S18>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S15>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S16>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
  /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S16>/CAN TX Wrapper' */

  /* Terminate for RateTransition: '<S47>/FeedForward1' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.FeedForward1_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S35>/DirSpeedRef' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DirSpeedRef_d0_SEMAPHORE);

  /* Terminate for MATLABSystem: '<S21>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses100us_DW.obj);

  /* Terminate for MATLABSystem: '<S34>/Moving Average' */
  matlabCodegenHandle_matlabCod_i(&SpeedgoatCANOpen2Buses100us_DW.obj_c);

  /* Terminate for RateTransition: '<S34>/TmpRTBAtP Direction ControllerInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPDirectionControllerI_l);

  /* Terminate for RateTransition: '<S34>/DirectionAvg' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DirectionAvg_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S36>/RTilt CurrenRef' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.RTiltCurrenRef_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S36>/DispLeft [m] filt' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S40>/DispLeft [m]' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S47>/TmpRTBAtFeedForwardInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtFeedForwardInport1_d0_S);
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

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                          &SpeedgoatCANOpen2Buses100us_M->Timing.simTimeStep);
    rtsiSetTPtr(&SpeedgoatCANOpen2Buses100us_M->solverInfo, &rtmGetTPtr
                (SpeedgoatCANOpen2Buses100us_M));
    rtsiSetStepSizePtr(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                       &SpeedgoatCANOpen2Buses100us_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                          (&rtmGetErrorStatus(SpeedgoatCANOpen2Buses100us_M)));
    rtsiSetRTModelPtr(&SpeedgoatCANOpen2Buses100us_M->solverInfo,
                      SpeedgoatCANOpen2Buses100us_M);
  }

  rtsiSetSimTimeStep(&SpeedgoatCANOpen2Buses100us_M->solverInfo, MAJOR_TIME_STEP);
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
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    mdlTsMap[4] = 4;
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[1] = (0.0001);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[2] = (0.0002);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[3] = (0.001);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[4] = (0.005);

    /* task offsets */
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[1] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[2] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[3] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[4] = (0.0);
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
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize1 = 0.0001;
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize2 = 0.0002;
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize3 = 0.001;
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize4 = 0.005;

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
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI = (0LL);
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (0LL);
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
    SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(SpeedgoatCANOpen2Buses100us_M)[2]);
    SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs[3] =
      &(rtmGetTPtr(SpeedgoatCANOpen2Buses100us_M)[3]);
    SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.taskTimePtrs[4] =
      &(rtmGetTPtr(SpeedgoatCANOpen2Buses100us_M)[4]);
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

  SpeedgoatCANOpen2Buses100us_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)
                  &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    SpeedgoatCANOpen2Buses100us_M->childSfunctions =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[0] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[0]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[1] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[1]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[2] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[2]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[3] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[3]);
    SpeedgoatCANOpen2Buses100us_M->childSfunctions[4] =
      (&SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.childSFunctions[4]);

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S18>/CAN Write (sg_IO602_IO691_write_s) */
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
          ssSetInputPortSignal(rts, 1,
                               &SpeedgoatCANOpen2Buses100us_B.Constant_ge);
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
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK_e);

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
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK_e);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S20>/CAN Write (sg_IO602_IO691_write_s) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &SpeedgoatCANOpen2Buses100us_B.Constant_em);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses100us_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_Size_p);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK);

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
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S13>/CAN Setup  (sg_IO602_IO691_setup_s) */
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
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn2.params;
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
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S17>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
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
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses100us_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
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
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn3.dWorkAux;
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
      sfcnTsMap[0] = 1;

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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S19>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
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
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses100us_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
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
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses100us_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses100us_P.CANRead_P1_Size_b);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses100us_DW.CANRead_PWORK_p);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses100us_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses100us_DW.CANRead_PWORK_p);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

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
  SpeedgoatCANOpen2Buses100us_M->Sizes.numSampTimes = (5);/* Number of sample times */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlocks = (292);/* Number of blocks */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockIO = (219);/* Number of block outputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockPrms = (196);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen2Buses100us_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
