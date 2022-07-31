/*
 * SpeedgoatCANOpen2Buses1ms.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.938
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jul 30 12:12:39 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "SpeedgoatCANOpen2Buses1ms_capi.h"
#include "SpeedgoatCANOpen2Buses1ms.h"
#include "SpeedgoatCANOpen2Buses1ms_private.h"

/* Named constants for Chart: '<S44>/Comp_and_Timer' */
#define SpeedgoatCANOpen2B_CALL_EVENT_d (-1)
#define SpeedgoatCANOpen2Bus_IN_Active1 ((uint8_T)2U)
#define SpeedgoatCANOpen2Bus_IN_Standby ((uint8_T)3U)
#define SpeedgoatCANOpen2Buse_IN_Active ((uint8_T)1U)
#define SpeedgoatCAN_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S29>/DecisionBrakeCtrl' */
#define SpeedgoatCANOpen2Buses1_IN_Init ((uint8_T)2U)
#define SpeedgoatCANOpen2Buses1ms_IN_  ((uint8_T)1U)
#define SpeedgoatC_IN_NO_ACTIVE_CHILD_e ((uint8_T)0U)

/* Named constants for Chart: '<S36>/Retract' */
#define SpeedgoatCANOpen2Bus_IN_Retract ((uint8_T)2U)
#define SpeedgoatCANOpen2Buse_IN_Init_m ((uint8_T)1U)

/* Named constants for Chart: '<S43>/Comp_and_Timer' */
#define SpeedgoatCANOpen2B_IN_Active1_e ((uint8_T)2U)
#define SpeedgoatCANOpen2B_IN_Standby_c ((uint8_T)3U)
#define SpeedgoatCANOpen2Bu_IN_Active_l ((uint8_T)1U)

/* Named constants for Chart: '<S65>/DunkD_Brake_Init_CurrentMode' */
#define SpeedgoatCANO_IN_SetCurrentMode ((uint8_T)3U)
#define SpeedgoatCANOpen2Buses1_IN_Wait ((uint8_T)5U)
#define SpeedgoatCANOpen_IN_Clear_Error ((uint8_T)1U)
#define SpeedgoatCAN_IN_SetCurrentMode1 ((uint8_T)4U)

/* Named constants for Chart: '<S27>/EnableCtrl' */
#define SpeedgoatCANO_IN_Enable_Control ((uint8_T)1U)

/* Named constants for Chart: '<S69>/DunkA_Steering_Init_SpeedMode' */
#define SpeedgoatCANOpen2Buse_IN_Wait_e ((uint8_T)4U)

/* Block signals (default storage) */
B_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_B;

/* Block states (default storage) */
DW_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_DW;

/* Real-time model */
RT_MODEL_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_M_;
RT_MODEL_SpeedgoatCANOpen2Buses1ms_T *const SpeedgoatCANOpen2Buses1ms_M =
  &SpeedgoatCANOpen2Buses1ms_M_;

/* Forward declaration for local functions */
static void SpeedgoatCANOpen2Buses1_dec2hex(uint8_T d, char_T s_data[], int32_T
  s_size[2]);
static boolean_T SpeedgoatCANOpen2Bus_copydigits(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n, boolean_T allowpoint);
static boolean_T SpeedgoatCANOpen2B_copyexponent(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n);
static boolean_T SpeedgoatCANOpen2Buses_copysign(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n);
static void SpeedgoatCANOpen2Buse_readfloat(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n, boolean_T *isimag, boolean_T
  *b_finite, real_T *nfv, boolean_T *success);
static creal_T SpeedgoatCANOpen2Bus_str2double(const char_T s_data[], const
  int32_T s_size[2]);
static void SpeedgoatCAN_SystemCore_release(dsp_simulink_MovingAverage_Sp_T *obj);
static void SpeedgoatCANO_SystemCore_delete(dsp_simulink_MovingAverage_Sp_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Sp_T *obj);
static void SpeedgoatC_SystemCore_release_a(dsp_simulink_MovingAverage_a_T *obj);
static void SpeedgoatCA_SystemCore_delete_a(dsp_simulink_MovingAverage_a_T *obj);
static void matlabCodegenHandle_matlabCod_a(dsp_simulink_MovingAverage_a_T *obj);
static void rate_monotonic_scheduler(void);
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

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 3);
  rtmSampleHitPtr[4] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 4);
  rtmSampleHitPtr[5] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 5);
  rtmSampleHitPtr[6] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 6);
  rtmSampleHitPtr[7] = rtmStepTask(SpeedgoatCANOpen2Buses1ms_M, 7);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 5 */
  SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID0_5 =
    (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[5] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID0_5;

  /* tid 1 shares data with slower tid rates: 3, 4, 5 */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[1] == 0) {
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_3 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[3] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[11] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_3;
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_4 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[12] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_4;
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_5 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[13] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_5;
  }

  /* tid 2 shares data with slower tid rate: 7 */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[2] == 0) {
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID2_7 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[23] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID2_7;
  }

  /* tid 3 shares data with slower tid rates: 4, 5, 7 */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[3] == 0) {
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[28] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4;
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[29] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5;
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[31] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7;
  }

  /* tid 4 shares data with slower tid rate: 7 */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4] == 0) {
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[39] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7;
  }

  /* tid 5 shares data with slower tid rate: 7 */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5] == 0) {
    SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7 =
      (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits[47] =
      SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[2])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[2]) > 4) {/* Sample time: [0.0005s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[2] = 0;
  }

  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[3])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[3]) > 9) {/* Sample time: [0.001s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[3] = 0;
  }

  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4]) > 19) {/* Sample time: [0.002s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[4] = 0;
  }

  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5]) > 49) {/* Sample time: [0.005s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[5] = 0;
  }

  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[6])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[6]) > 999) {/* Sample time: [0.1s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[6] = 0;
  }

  (SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7])++;
  if ((SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7]) > 9999) {/* Sample time: [1.0s, 0.0s] */
    SpeedgoatCANOpen2Buses1ms_M->Timing.TaskCounters.TID[7] = 0;
  }
}

/*
 * System initialize for atomic system:
 *    '<S43>/Derivative'
 *    '<S44>/Derivative'
 *    '<S45>/Derivative'
 *    '<S46>/Derivative'
 */
void SpeedgoatCA_Derivative_Init(DW_Derivative_SpeedgoatCANOpe_T *localDW)
{
  localDW->yf_k1 = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S43>/Derivative'
 *    '<S44>/Derivative'
 *    '<S45>/Derivative'
 *    '<S46>/Derivative'
 */
void SpeedgoatCANOpen_Derivative(real_T rtu_y, real_T rtu_Kd, real_T rtu_Ts,
  B_Derivative_SpeedgoatCANOpen_T *localB, DW_Derivative_SpeedgoatCANOpe_T
  *localDW)
{
  real32_T yf;
  yf = (real32_T)(rtu_Ts / (rtu_Ts + 0.6)) * ((real32_T)rtu_y - localDW->yf_k1)
    + localDW->yf_k1;
  localB->ud = (yf - localDW->yf_k1) * (real32_T)rtu_Kd / (real32_T)rtu_Ts;
  localDW->yf_k1 = yf;
  localB->yf = yf;
}

/*
 * System initialize for atomic system:
 *    '<S44>/Comp_and_Timer'
 *    '<S46>/Comp_and_Timer'
 */
void Speedgo_Comp_and_Timer_Init(DW_Comp_and_Timer_SpeedgoatCA_T *localDW)
{
  localDW->sfEvent = SpeedgoatCANOpen2B_CALL_EVENT_d;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c18_SpeedgoatCANOpen2 = 0U;
  localDW->is_c18_SpeedgoatCANOpen2Buses1m = SpeedgoatCAN_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S44>/Comp_and_Timer'
 *    '<S46>/Comp_and_Timer'
 */
void SpeedgoatCAN_Comp_and_Timer(real_T rtu_e_in, real_T rtu_Hyst,
  B_Comp_and_Timer_SpeedgoatCAN_T *localB, DW_Comp_and_Timer_SpeedgoatCA_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* Chart: '<S44>/Comp_and_Timer' */
  if (localDW->temporalCounter_i1 < 63U) {
    localDW->temporalCounter_i1++;
  }

  localDW->sfEvent = SpeedgoatCANOpen2B_CALL_EVENT_d;

  /* Chart: '<S44>/Comp_and_Timer' */
  if (localDW->is_active_c18_SpeedgoatCANOpen2 == 0U) {
    localDW->is_active_c18_SpeedgoatCANOpen2 = 1U;
    localDW->is_c18_SpeedgoatCANOpen2Buses1m = SpeedgoatCANOpen2Bus_IN_Standby;
    localB->e_out = 0.0;
    localB->timer = 0.0;
  } else {
    switch (localDW->is_c18_SpeedgoatCANOpen2Buses1m) {
     case SpeedgoatCANOpen2Buse_IN_Active:
      sf_internal_predicateOutput = ((rtu_e_in < rtu_Hyst) && (rtu_e_in >
        -rtu_Hyst));
      if (sf_internal_predicateOutput) {
        localDW->is_c18_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Bus_IN_Active1;
        localDW->temporalCounter_i1 = 0U;
        localB->e_out = rtu_e_in;
        localB->timer = 0.0;
      } else {
        localB->e_out = rtu_e_in;
        localB->timer = 0.0;
      }
      break;

     case SpeedgoatCANOpen2Bus_IN_Active1:
      sf_internal_predicateOutput = ((localDW->temporalCounter_i1 >= 40U) &&
        (rtu_e_in < rtu_Hyst) && (rtu_e_in > -rtu_Hyst));
      if (sf_internal_predicateOutput) {
        localDW->is_c18_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Bus_IN_Standby;
        localB->e_out = 0.0;
        localB->timer = 0.0;
      } else {
        sf_internal_predicateOutput = ((localDW->temporalCounter_i1 >= 40U) &&
          ((rtu_e_in > rtu_Hyst) || (rtu_e_in < -rtu_Hyst)));
        if (sf_internal_predicateOutput) {
          localDW->is_c18_SpeedgoatCANOpen2Buses1m =
            SpeedgoatCANOpen2Buse_IN_Active;
          localB->e_out = rtu_e_in;
          localB->timer = 0.0;
        } else {
          localB->e_out = rtu_e_in;
          localB->timer = 0.0;
        }
      }
      break;

     default:
      sf_internal_predicateOutput = ((rtu_e_in > rtu_Hyst) || (rtu_e_in <
        -rtu_Hyst));
      if (sf_internal_predicateOutput) {
        localDW->is_c18_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Buse_IN_Active;
        localB->e_out = rtu_e_in;
        localB->timer = 0.0;
      }
      break;
    }
  }
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

/* Function for MATLAB Function: '<S9>/Conv' */
static void SpeedgoatCANOpen2Buses1_dec2hex(uint8_T d, char_T s_data[], int32_T
  s_size[2])
{
  uint8_T di;
  uint8_T r;
  int32_T firstcol;
  boolean_T p;
  char_T s_data_0[2];
  boolean_T exitg1;
  s_size[0] = 1;
  s_size[1] = 2;
  s_data[0] = '0';
  s_data[1] = '0';
  di = d;
  firstcol = 2;
  exitg1 = false;
  while ((!exitg1) && (firstcol > 0)) {
    r = di;
    di = (uint8_T)((uint32_T)di >> 4);
    r = (uint8_T)((uint32_T)r - (di << 4));
    if (r > 9) {
      r = (uint8_T)(r + 7U);
    }

    s_data[firstcol - 1] = (int8_T)(r + 48);
    if (di > 0) {
      firstcol--;
    } else {
      exitg1 = true;
    }
  }

  firstcol = 2;
  p = false;
  if (s_data[0] != '0') {
    p = true;
  }

  if (p) {
    firstcol = 1;
  }

  if (firstcol > 1) {
    s_data[0] = s_data[1];
    s_data_0[0] = s_data[0];
    s_size[0] = 1;
    s_size[1] = 1;
    s_data[0] = s_data_0[0];
  }
}

/* Function for MATLAB Function: '<S9>/Conv' */
static boolean_T SpeedgoatCANOpen2Bus_copydigits(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n, boolean_T allowpoint)
{
  boolean_T success;
  boolean_T haspoint;
  boolean_T exitg1;
  success = (*k <= n);
  haspoint = !allowpoint;
  exitg1 = false;
  while ((!exitg1) && (*k <= n)) {
    if ((s_data[*k - 1] >= '0') && (s_data[*k - 1] <= '9')) {
      s1_data[*idx - 1] = s_data[*k - 1];
      (*idx)++;
      (*k)++;
    } else if (s_data[*k - 1] == '.') {
      if (haspoint) {
        success = false;
        exitg1 = true;
      } else {
        s1_data[*idx - 1] = '.';
        (*idx)++;
        haspoint = true;
        (*k)++;
      }
    } else if (s_data[*k - 1] != ',') {
      exitg1 = true;
    } else {
      (*k)++;
    }
  }

  return success;
}

/* Function for MATLAB Function: '<S9>/Conv' */
static boolean_T SpeedgoatCANOpen2B_copyexponent(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n)
{
  boolean_T success;
  int32_T b_idx;
  int32_T b_k;
  success = true;
  if ((*k <= n) && ((s_data[*k - 1] == 'E') || (s_data[*k - 1] == 'e'))) {
    s1_data[*idx - 1] = 'e';
    (*idx)++;
    (*k)++;
    if (*k <= n) {
      if (s_data[1] == '-') {
        s1_data[*idx - 1] = '-';
        (*idx)++;
        *k = 3;
      } else {
        if (s_data[1] == '+') {
          *k = 3;
        }
      }
    }

    b_idx = *idx;
    b_k = *k;
    success = SpeedgoatCANOpen2Bus_copydigits(s1_data, &b_idx, s_data, &b_k, n,
      false);
    *idx = b_idx;
    *k = b_k;
  }

  return success;
}

/* Function for MATLAB Function: '<S9>/Conv' */
static boolean_T SpeedgoatCANOpen2Buses_copysign(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n)
{
  boolean_T success;
  boolean_T isneg;
  static const boolean_T b[128] = { true, false, false, false, false, false,
    false, false, false, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false };

  isneg = false;
  while ((*k <= n) && ((s_data[*k - 1] == '+') || (s_data[*k - 1] == '-') || b
                       [(uint8_T)s_data[*k - 1] & 127])) {
    if (s_data[*k - 1] == '-') {
      isneg = !isneg;
    }

    (*k)++;
  }

  success = (*k <= n);
  if (success && isneg) {
    if ((*idx >= 2) && (s1_data[*idx - 2] == '-')) {
      s1_data[*idx - 2] = ' ';
    } else {
      s1_data[*idx - 1] = '-';
      (*idx)++;
    }
  }

  return success;
}

/* Function for MATLAB Function: '<S9>/Conv' */
static void SpeedgoatCANOpen2Buse_readfloat(char_T s1_data[], int32_T *idx,
  const char_T s_data[], int32_T *k, int32_T n, boolean_T *isimag, boolean_T
  *b_finite, real_T *nfv, boolean_T *success)
{
  int32_T b_idx;
  int32_T b_k;
  static const boolean_T b[128] = { true, false, false, false, false, false,
    false, false, false, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false };

  *isimag = false;
  *b_finite = true;
  *nfv = 0.0;
  b_idx = *idx;
  b_k = *k;
  *success = SpeedgoatCANOpen2Buses_copysign(s1_data, &b_idx, s_data, &b_k, n);
  *idx = b_idx;
  *k = b_k;
  if (*success) {
    if ((b_k <= n) && ((s_data[b_k - 1] == 'j') || ((s_data[b_k - 1] == 'i') &&
          ((b_k == n) || ((s_data[1] != 'n') && (s_data[1] != 'N')))))) {
      *success = false;
    } else {
      *success = SpeedgoatCANOpen2Bus_copydigits(s1_data, &b_idx, s_data, &b_k,
        n, true);
      *idx = b_idx;
      *k = b_k;
      if (*success) {
        *success = SpeedgoatCANOpen2B_copyexponent(s1_data, &b_idx, s_data, &b_k,
          n);
        *idx = b_idx;
        *k = b_k;
      }

      while ((*k <= n) && b[(uint8_T)s_data[*k - 1] & 127]) {
        (*k)++;
      }

      if ((*k <= n) && (s_data[*k - 1] == '*')) {
        (*k)++;
        while ((*k <= n) && b[(uint8_T)s_data[*k - 1] & 127]) {
          (*k)++;
        }
      }

      if ((*k <= n) && ((s_data[*k - 1] == 'i') || (s_data[*k - 1] == 'j'))) {
        (*k)++;
        *isimag = true;
      }
    }

    while ((*k <= n) && b[(uint8_T)s_data[*k - 1] & 127]) {
      (*k)++;
    }
  }
}

/* Function for MATLAB Function: '<S9>/Conv' */
static creal_T SpeedgoatCANOpen2Bus_str2double(const char_T s_data[], const
  int32_T s_size[2])
{
  creal_T x;
  int32_T n;
  char_T s1_data[4];
  int32_T idx;
  int32_T ntoread;
  boolean_T success;
  boolean_T isimag1;
  char_T b_s1_data[4];
  boolean_T h_success;
  boolean_T isneg;
  int32_T j_k;
  boolean_T l_success;
  real_T scanned1;
  real_T scanned2;
  static const boolean_T c[128] = { true, false, false, false, false, false,
    false, false, false, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false };

  int32_T loop_ub;
  int32_T s1_size[2];
  int32_T b_s1_size[2];
  int8_T tmp;
  x.re = (rtNaN);
  x.im = 0.0;
  n = s_size[1];
  tmp = (int8_T)(s_size[1] + 2);
  s1_size[1] = tmp;
  tmp = (int8_T)(s_size[1] + 2);
  loop_ub = tmp - 1;
  if (0 <= loop_ub) {
    memset(&s1_data[0], 0, (loop_ub + 1) * sizeof(char_T));
  }

  isimag1 = false;
  ntoread = 1;
  idx = 1;
  b_s1_size[0] = 1;
  b_s1_size[1] = s1_size[1];
  loop_ub = s1_size[1] - 1;
  if (0 <= loop_ub) {
    memset(&b_s1_data[0], 0, (loop_ub + 1) * sizeof(char_T));
  }

  isneg = false;
  while ((ntoread <= n) && ((s_data[ntoread - 1] == '+') || (s_data[ntoread - 1]
           == '-') || c[(uint8_T)s_data[ntoread - 1] & 127])) {
    if (s_data[ntoread - 1] == '-') {
      isneg = !isneg;
    }

    ntoread++;
  }

  success = (ntoread <= s_size[1]);
  if (success && isneg) {
    b_s1_data[0] = '-';
    idx = 2;
  }

  j_k = ntoread;
  if (success) {
    if ((ntoread <= s_size[1]) && ((s_data[ntoread - 1] == 'j') ||
         ((s_data[ntoread - 1] == 'i') && ((ntoread == s_size[1]) || ((s_data[1]
             != 'n') && (s_data[1] != 'N')))))) {
      isimag1 = true;
      j_k = ntoread + 1;
      while ((j_k <= n) && c[(uint8_T)s_data[1] & 127]) {
        j_k = 3;
      }

      if ((j_k <= s_size[1]) && (s_data[1] == '*')) {
        j_k = 3;
        SpeedgoatCANOpen2Buse_readfloat(b_s1_data, &idx, s_data, &j_k, 2, &isneg,
          &success, &scanned2, &h_success);
        success = false;
      } else {
        b_s1_data[idx - 1] = '1';
        idx++;
      }
    } else {
      success = SpeedgoatCANOpen2Bus_copydigits(b_s1_data, &idx, s_data, &j_k,
        s_size[1], true);
      if (success) {
        success = SpeedgoatCANOpen2B_copyexponent(b_s1_data, &idx, s_data, &j_k,
          s_size[1]);
      }

      while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
        j_k++;
      }

      if ((j_k <= s_size[1]) && (s_data[j_k - 1] == '*')) {
        j_k++;
        while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
          j_k++;
        }
      }

      if ((j_k <= s_size[1]) && ((s_data[j_k - 1] == 'i') || (s_data[j_k - 1] ==
            'j'))) {
        j_k++;
        isimag1 = true;
      }
    }

    while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
      j_k++;
    }
  }

  loop_ub = b_s1_size[0] * b_s1_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&s1_data[0], &b_s1_data[0], (loop_ub + 1) * sizeof(char_T));
  }

  ntoread = 1;
  if (success && (j_k <= s_size[1])) {
    s1_data[idx - 1] = ' ';
    isneg = false;
    idx++;
    l_success = SpeedgoatCANOpen2Buses_copysign(s1_data, &idx, s_data, &j_k,
      s_size[1]);
    if (l_success) {
      if ((j_k <= s_size[1]) && ((s_data[j_k - 1] == 'j') || ((s_data[j_k - 1] ==
             'i') && ((j_k == s_size[1]) || ((s_data[1] != 'n') && (s_data[1] !=
               'N')))))) {
        isneg = true;
        j_k++;
        while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
          j_k++;
        }

        if ((j_k <= s_size[1]) && (s_data[j_k - 1] == '*')) {
          j_k++;
          SpeedgoatCANOpen2Buse_readfloat(s1_data, &idx, s_data, &j_k, s_size[1],
            &success, &h_success, &scanned2, &l_success);
        } else {
          s1_data[idx - 1] = '1';
          idx++;
        }
      } else {
        l_success = SpeedgoatCANOpen2Bus_copydigits(s1_data, &idx, s_data, &j_k,
          s_size[1], true);
        if (l_success) {
          l_success = SpeedgoatCANOpen2B_copyexponent(s1_data, &idx, s_data,
            &j_k, s_size[1]);
        }

        while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
          j_k++;
        }

        if ((j_k <= s_size[1]) && (s_data[j_k - 1] == '*')) {
          j_k++;
          while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
            j_k++;
          }
        }

        if ((j_k <= s_size[1]) && ((s_data[j_k - 1] == 'i') || (s_data[j_k - 1] ==
              'j'))) {
          j_k++;
          isneg = true;
        }
      }

      while ((j_k <= n) && c[(uint8_T)s_data[j_k - 1] & 127]) {
        j_k++;
      }
    }

    scanned2 = 0.0;
    ntoread = 2;
    if (l_success && (j_k > s_size[1]) && ((isimag1 ^ isneg) != 0)) {
      success = true;
    } else {
      success = false;
    }
  } else {
    scanned2 = 0.0;
  }

  if (success) {
    s1_data[idx - 1] = '\x00';
    if (ntoread == 2) {
      n = sscanf(&s1_data[0], "%lf %lf", &scanned1, &scanned2);
      if (n != 2) {
        scanned1 = (rtNaN);
        scanned2 = (rtNaN);
      }
    } else {
      n = sscanf(&s1_data[0], "%lf", &scanned1);
      if (n != 1) {
        scanned1 = (rtNaN);
      }
    }

    if (isimag1) {
      x.re = scanned2;
      x.im = scanned1;
    } else {
      x.re = scanned1;
      x.im = scanned2;
    }
  }

  return x;
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

static void SpeedgoatC_SystemCore_release_a(dsp_simulink_MovingAverage_a_T *obj)
{
  dsp_simulink_MovingAverage_a_T *obj_0;
  dsp_private_SlidingWindowAv_a_T *obj_1;
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

static void SpeedgoatCA_SystemCore_delete_a(dsp_simulink_MovingAverage_a_T *obj)
{
  SpeedgoatC_SystemCore_release_a(obj);
}

static void matlabCodegenHandle_matlabCod_a(dsp_simulink_MovingAverage_a_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SpeedgoatCA_SystemCore_delete_a(obj);
  }
}

/* Model output function for TID0 */
static void SpeedgoatCANOpen2Buses1ms_output0(void) /* Sample time: [0.0s, 0.0s] */
{
  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */

  /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Clock: '<S47>/Clock' */
  SpeedgoatCANOpen2Buses1ms_B.Clock = SpeedgoatCANOpen2Buses1ms_M->Timing.t[0];

  /* Sum: '<S47>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S47>/startTime'
   */
  SpeedgoatCANOpen2Buses1ms_B.Sum_f = SpeedgoatCANOpen2Buses1ms_B.Clock - (0.0);

  /* Math: '<S47>/Math Function' incorporates:
   *  Constant: '<S47>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_B.MathFunction = rt_remd_snf
    (SpeedgoatCANOpen2Buses1ms_B.Sum_f,
     SpeedgoatCANOpen2Buses1ms_P.Constant_Value);

  /* Lookup_n-D: '<S47>/Look-Up Table1' */
  SpeedgoatCANOpen2Buses1ms_B.LookUpTable1 = look1_binlxpw
    (SpeedgoatCANOpen2Buses1ms_B.MathFunction,
     SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data,
     SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence1_rep_seq_y, 7U);

  /* SignalConversion: '<S47>/Output' */
  SpeedgoatCANOpen2Buses1ms_B.Output = SpeedgoatCANOpen2Buses1ms_B.LookUpTable1;

  /* RateTransition: '<S32>/TiltingAngle_sinreq [deg]' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_4) {
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg =
      SpeedgoatCANOpen2Buses1ms_DW.TiltingAngle_sinreqdeg_Buffer0;
  }

  /* End of RateTransition: '<S32>/TiltingAngle_sinreq [deg]' */

  /* RateTransition: '<S32>/TiltingAngle [deg]' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_3) {
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngledeg =
      SpeedgoatCANOpen2Buses1ms_DW.TiltingAngledeg_Buffer0;
  }

  /* End of RateTransition: '<S32>/TiltingAngle [deg]' */

  /* ManualSwitch: '<S32>/Manual Switch3' */
  if (SpeedgoatCANOpen2Buses1ms_P.ManualSwitch3_CurrentSetting == 1) {
    /* ManualSwitch: '<S32>/Manual Switch4' */
    if (SpeedgoatCANOpen2Buses1ms_P.ManualSwitch4_CurrentSetting == 1) {
      SpeedgoatCANOpen2Buses1ms_B.ManualSwitch4 =
        SpeedgoatCANOpen2Buses1ms_B.Output;
    } else {
      SpeedgoatCANOpen2Buses1ms_B.ManualSwitch4 =
        SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg;
    }

    /* End of ManualSwitch: '<S32>/Manual Switch4' */
    SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses1ms_B.ManualSwitch4;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses1ms_B.TiltingAngledeg;
  }

  /* End of ManualSwitch: '<S32>/Manual Switch3' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID0_5) {
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_stepreqfdeg =
      SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3;
  }

  /* End of ZeroOrderHold: '<S32>/Zero-Order Hold1' */

  /* Gain: '<S32>/degree2m' */
  SpeedgoatCANOpen2Buses1ms_B.PosReqm =
    SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain *
    SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3;

  /* RateTransition: '<S45>/DispLeft [m] filt' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_5) {
    SpeedgoatCANOpen2Buses1ms_B.DispLeftmfilt =
      SpeedgoatCANOpen2Buses1ms_DW.DispLeftmfilt_Buffer0;
  }

  /* End of RateTransition: '<S45>/DispLeft [m] filt' */

  /* Sum: '<S45>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.e_in_b = SpeedgoatCANOpen2Buses1ms_B.PosReqm -
    SpeedgoatCANOpen2Buses1ms_B.DispLeftmfilt;

  /* RateTransition: '<S45>/e_in' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_5) {
    SpeedgoatCANOpen2Buses1ms_B.e_in_a = SpeedgoatCANOpen2Buses1ms_B.e_in_b;
  }

  /* End of RateTransition: '<S45>/e_in' */
  /* Clock: '<S48>/Clock' */
  SpeedgoatCANOpen2Buses1ms_B.Clock_p = SpeedgoatCANOpen2Buses1ms_M->Timing.t[0];

  /* Sum: '<S48>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S48>/startTime'
   */
  SpeedgoatCANOpen2Buses1ms_B.Sum_oi = SpeedgoatCANOpen2Buses1ms_B.Clock_p -
    (0.0);

  /* Math: '<S48>/Math Function' incorporates:
   *  Constant: '<S48>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_B.MathFunction_f = rt_remd_snf
    (SpeedgoatCANOpen2Buses1ms_B.Sum_oi,
     SpeedgoatCANOpen2Buses1ms_P.Constant_Value_d);

  /* Lookup_n-D: '<S48>/Look-Up Table1' */
  SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_j = look1_binlxpw
    (SpeedgoatCANOpen2Buses1ms_B.MathFunction_f,
     SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data_k,
     SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence2_rep_seq_y, 7U);

  /* SignalConversion: '<S48>/Output' */
  SpeedgoatCANOpen2Buses1ms_B.Output_d =
    SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_j;

  /* Clock: '<S49>/Clock' */
  SpeedgoatCANOpen2Buses1ms_B.Clock_pg = SpeedgoatCANOpen2Buses1ms_M->Timing.t[0];

  /* Sum: '<S49>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S49>/startTime'
   */
  SpeedgoatCANOpen2Buses1ms_B.Sum_m = SpeedgoatCANOpen2Buses1ms_B.Clock_pg -
    (0.0);

  /* Math: '<S49>/Math Function' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_B.MathFunction_h = rt_remd_snf
    (SpeedgoatCANOpen2Buses1ms_B.Sum_m,
     SpeedgoatCANOpen2Buses1ms_P.Constant_Value_e);

  /* Lookup_n-D: '<S49>/Look-Up Table1' */
  SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_g = look1_binlxpw
    (SpeedgoatCANOpen2Buses1ms_B.MathFunction_h,
     SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data_h,
     SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence3_rep_seq_y, 7U);

  /* SignalConversion: '<S49>/Output' */
  SpeedgoatCANOpen2Buses1ms_B.Output_c =
    SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_g;

  /* RateTransition: '<S32>/TmpRTBAtManual SwitchInport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID1_3) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtManualSwitchInport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtManualSwitchInport1_Buf;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtManual SwitchInport1' */

  /* ManualSwitch: '<S32>/Manual Switch' incorporates:
   *  ManualSwitch: '<S32>/Manual Switch1'
   */
  if (SpeedgoatCANOpen2Buses1ms_P.ManualSwitch_CurrentSetting == 1) {
    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_m =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtManualSwitchInport1;
  } else {
    if (SpeedgoatCANOpen2Buses1ms_P.ManualSwitch1_CurrentSetting == 1) {
      /* ManualSwitch: '<S32>/Manual Switch1' */
      SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_n =
        SpeedgoatCANOpen2Buses1ms_B.Output_d;
    } else {
      /* ManualSwitch: '<S32>/Manual Switch1' */
      SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_n =
        SpeedgoatCANOpen2Buses1ms_B.Output_c;
    }

    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_m =
      SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_n;
  }

  /* End of ManualSwitch: '<S32>/Manual Switch' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold4' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID0_5) {
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold4 =
      SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_m;
  }

  /* End of ZeroOrderHold: '<S32>/Zero-Order Hold4' */
}

/* Model update function for TID0 */
static void SpeedgoatCANOpen2Buses1ms_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick0)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH0;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[0] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick0 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH0 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick1)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH1;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[1] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick1 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize1 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH1 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
static void SpeedgoatCANOpen2Buses1ms_output2(void) /* Sample time: [0.0005s, 0.0s] */
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC_f);

  /* S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */

  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[3];
    sfcnOutputs(rts,2);
  }

  /* CCaller: '<S17>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen2Buses1ms_B.CANRead_o2,
    SpeedgoatCANOpen2Buses1ms_B.CANRead_o4,
    SpeedgoatCANOpen2Buses1ms_B.CANRead_o6,
    &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1,
    &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2,
    SpeedgoatCANOpen2Buses1ms_B.CCaller_o3,
    &SpeedgoatCANOpen2Buses1ms_B.queue_in,
    &SpeedgoatCANOpen2Buses1ms_B.queue_out);

  /* Outputs for Enabled SubSystem: '<S17>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_B.CCaller_o2 > 0) {
    if (!SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i) {
      SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i = true;
    }

    /* RateTransition: '<S20>/TmpRTBAtCAN WriteInport2' */
    if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID2_7) {
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2_j =
        SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffe_m;
    }

    /* End of RateTransition: '<S20>/TmpRTBAtCAN WriteInport2' */

    /* S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */

    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[0];
      sfcnOutputs(rts,2);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC_f);
  } else {
    if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i) {
      SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i = false;
    }
  }

  /* End of Outputs for SubSystem: '<S17>/CAN TX Wrapper' */
}

/* Model update function for TID2 */
static void SpeedgoatCANOpen2Buses1ms_update2(void) /* Sample time: [0.0005s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick2)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH2;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[2] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick2 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize2 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH2 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
static void SpeedgoatCANOpen2Buses1ms_output3(void) /* Sample time: [0.001s, 0.0s] */
{
  int32_T aux;
  boolean_T sf_internal_predicateOutput;
  real32_T tmp;
  real_T u0;
  real_T u1;
  real_T u2;

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */

  /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[4];
    sfcnOutputs(rts,3);
  }

  /* CCaller: '<S18>/C Caller' */
  CANOpenSlave_ProcessStack_APT(SpeedgoatCANOpen2Buses1ms_B.CANRead_o2_e,
    SpeedgoatCANOpen2Buses1ms_B.CANRead_o4_a,
    SpeedgoatCANOpen2Buses1ms_B.CANRead_o6_h,
    &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1_n,
    &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2_n,
    SpeedgoatCANOpen2Buses1ms_B.CCaller_o3_n);

  /* Outputs for Enabled SubSystem: '<S18>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_B.CCaller_o2_n > 0) {
    if (!SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE) {
      SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE = true;
    }

    /* RateTransition: '<S22>/TmpRTBAtCAN WriteInport2' */
    if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2 =
        SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffer0;
    }

    /* End of RateTransition: '<S22>/TmpRTBAtCAN WriteInport2' */

    /* S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */

    /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[1];
      sfcnOutputs(rts,3);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC);
  } else {
    if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE) {
      SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S18>/CAN TX Wrapper' */
  /* S-Function (RPDOs_from_APT): '<S2>/RPDOs from APT' */
  RPDOs_from_APT_Outputs_wrapper(&SpeedgoatCANOpen2Buses1ms_B.APT_StatusWord,
    &SpeedgoatCANOpen2Buses1ms_B.APT_PhaseCurrent,
    &SpeedgoatCANOpen2Buses1ms_B.APT_Speed,
    &SpeedgoatCANOpen2Buses1ms_B.APT_BusVoltage,
    &SpeedgoatCANOpen2Buses1ms_B.APT_MotorTemp,
    &SpeedgoatCANOpen2Buses1ms_B.APT_Temp,
    &SpeedgoatCANOpen2Buses1ms_B.APT_ErrStatus,
    &SpeedgoatCANOpen2Buses1ms_B.APT_Direction);

  /* RateTransition: '<S27>/Joystick_ButtonsStatus' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus =
      SpeedgoatCANOpen2Buses1ms_DW.Joystick_ButtonsStatus_Buffer0;
  }

  /* End of RateTransition: '<S27>/Joystick_ButtonsStatus' */

  /* MATLAB Function: '<S27>/ButtonStatus' */
  switch (SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus) {
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

  SpeedgoatCANOpen2Buses1ms_B.Button = aux;

  /* End of MATLAB Function: '<S27>/ButtonStatus' */

  /* DataTypeConversion: '<S27>/Cast To Single3' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p = (real32_T)
    SpeedgoatCANOpen2Buses1ms_B.Button;

  /* RateTransition: '<S27>/Joystick_LongCmd' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd =
      SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd_Buffer0;
  }

  /* End of RateTransition: '<S27>/Joystick_LongCmd' */

  /* MATLAB Function: '<S27>/APTControlWord' */
  aux = 0;
  if (SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p == 8.0F) {
    if (SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd > 0.0F) {
      aux = 4;
    } else {
      if (SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd < 0.0F) {
        aux = 8;
      }
    }
  }

  SpeedgoatCANOpen2Buses1ms_B.APT_CtrlWord = 160.0 + (real_T)aux;

  /* End of MATLAB Function: '<S27>/APTControlWord' */

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.APT_CtrlWord);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_ControlWord = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */
  /* RateTransition: '<S31>/TractionReq' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.TractionReq =
      SpeedgoatCANOpen2Buses1ms_DW.TractionReq_Buffer0;
  }

  /* End of RateTransition: '<S31>/TractionReq' */

  /* RateTransition: '<S69>/TmpRTBAtDunkA_Steering_Init_SpeedModeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkA_Steering_Init_Spe;
  }

  /* End of RateTransition: '<S69>/TmpRTBAtDunkA_Steering_Init_SpeedModeInport2' */

  /* Chart: '<S69>/DunkA_Steering_Init_SpeedMode' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_a = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c12_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c12_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses1ms_B.ClearError_n = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a = 0.0F;
    SpeedgoatCANOpen2Buses1ms_DW.aux_j = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses1ms_DW.aux_j > 4000.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.aux_j = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_j++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.ClearError_n = 1.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_j++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 0.0F;
      SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe != 1.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses1ms_B.ClearError_n = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_j = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o = 3.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_j < 20.0F)
        && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_j++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_j >=
          20.0F) && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe
                     == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.aux_j = 0.0F;
          SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe !=
              1.0F) {
            SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses1ms_B.ClearError_n = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a = 0.0F;
            SpeedgoatCANOpen2Buses1ms_DW.aux_j = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.InitStatus_f = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S69>/DunkA_Steering_Init_SpeedMode' */

  /* RateTransition: '<S70>/TmpRTBAtDunkC_TiltLeft_Init_CurrentModeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkC_TiltLeft_Init_Cur;
  }

  /* End of RateTransition: '<S70>/TmpRTBAtDunkC_TiltLeft_Init_CurrentModeInport2' */

  /* Chart: '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_c = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c2_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c2_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses1ms_B.ClearError_h = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m = 0.0F;
    SpeedgoatCANOpen2Buses1ms_DW.aux_a = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses1ms_DW.aux_a > 4000.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.aux_a = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_a++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.ClearError_h = 1.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_a++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 0.0F;
      SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur != 1.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses1ms_B.ClearError_h = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_a = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f = 3.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_a < 20.0F)
        && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_a++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_a >=
          20.0F) && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur
                     == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.aux_a = 0.0F;
          SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur !=
              1.0F) {
            SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses1ms_B.ClearError_h = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m = 0.0F;
            SpeedgoatCANOpen2Buses1ms_DW.aux_a = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.InitStatus_k = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S70>/DunkC_TiltLeft_Init_CurrentMode' */

  /* RateTransition: '<S71>/TmpRTBAtDunkB_TiltRight_Init_CurrentModeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkB_TiltRight_Init_Cu;
  }

  /* End of RateTransition: '<S71>/TmpRTBAtDunkB_TiltRight_Init_CurrentModeInport2' */

  /* Chart: '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c1_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c1_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses1ms_B.ClearError = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable = 0.0F;
    SpeedgoatCANOpen2Buses1ms_DW.aux = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses1ms_DW.aux > 4000.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.ClearError = 1.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 0.0F;
      SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu != 1.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses1ms_B.ClearError = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode = 3.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux < 20.0F) &&
        (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux >=
          20.0F) && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu
                     == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.aux = 0.0F;
          SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu !=
              1.0F) {
            SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses1ms_B.ClearError = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.DeviceMode = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.PowerEnable = 0.0F;
            SpeedgoatCANOpen2Buses1ms_DW.aux = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.InitStatus = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S71>/DunkB_TiltRight_Init_CurrentMode' */

  /* RateTransition: '<S65>/TmpRTBAtDunkD_Brake_Init_CurrentModeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkD_Brake_Init_Curren;
  }

  /* End of RateTransition: '<S65>/TmpRTBAtDunkD_Brake_Init_CurrentModeInport2' */

  /* Chart: '<S65>/DunkD_Brake_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_j = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c3_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c3_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses1ms_B.ClearError_k = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au = 0.0F;
    SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses1ms_DW.aux_k > 4000.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.ClearError_k = 1.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren != 1.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses1ms_B.ClearError_k = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 0.0F;
      } else if (SpeedgoatCANOpen2Buses1ms_DW.aux_k > 10000.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCAN_IN_SetCurrentMode1;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b = 2.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 11000.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k++;
      }
      break;

     case SpeedgoatCAN_IN_SetCurrentMode1:
      if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren != 1.0F) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses1ms_B.ClearError_k = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au = 0.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 1.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 0.0F;
      }
      break;

     default:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_k < 20.0F)
        && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses1ms_DW.aux_k++;
        SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_DW.aux_k >=
          20.0F) && (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren
                     == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
          SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren !=
              1.0F) {
            SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses1ms_B.ClearError_k = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n = 2.0F;
            SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au = 0.0F;
            SpeedgoatCANOpen2Buses1ms_DW.aux_k = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.InitStatus_a = 0.0F;
            SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S65>/DunkD_Brake_Init_CurrentMode' */

  /* Chart: '<S27>/EnableCtrl' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_n = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c4_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c4_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c4_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buses1_IN_Init;
  } else if (SpeedgoatCANOpen2Buses1ms_DW.is_c4_SpeedgoatCANOpen2Buses1ms ==
             SpeedgoatCANO_IN_Enable_Control) {
    if (SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p == 7.0F) {
      SpeedgoatCANOpen2Buses1ms_DW.is_c4_SpeedgoatCANOpen2Buses1ms =
        SpeedgoatCANOpen2Buses1_IN_Init;
    } else {
      SpeedgoatCANOpen2Buses1ms_B.Enable = 1.0F;
    }
  } else if (SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p == 6.0F) {
    SpeedgoatCANOpen2Buses1ms_DW.is_c4_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANO_IN_Enable_Control;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Enable = 1.0F;
  }

  /* End of Chart: '<S27>/EnableCtrl' */

  /* Sum: '<S67>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_b =
    (((SpeedgoatCANOpen2Buses1ms_B.InitStatus_f +
       SpeedgoatCANOpen2Buses1ms_B.InitStatus_k) +
      SpeedgoatCANOpen2Buses1ms_B.InitStatus) +
     SpeedgoatCANOpen2Buses1ms_B.InitStatus_a) +
    SpeedgoatCANOpen2Buses1ms_B.Enable;

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_B.Compare = (SpeedgoatCANOpen2Buses1ms_B.Sum_b ==
    SpeedgoatCANOpen2Buses1ms_P.CompareToConstant_const);

  /* RateTransition: '<S31>/TmpRTBAtConstantOutport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtConstantOutport1_Buffer;
  }

  /* End of RateTransition: '<S31>/TmpRTBAtConstantOutport1' */

  /* Switch: '<S31>/Switch4' */
  if (SpeedgoatCANOpen2Buses1ms_B.Compare) {
    SpeedgoatCANOpen2Buses1ms_B.Switch4 =
      SpeedgoatCANOpen2Buses1ms_B.TractionReq;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Switch4 =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1;
  }

  /* End of Switch: '<S31>/Switch4' */

  /* DataTypeConversion: '<S24>/Data Type Conversion1' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.Switch4);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_PedalPosition = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion1' */
  /* MATLAB Function: '<S24>/HeartBeatgenerator' */
  SpeedgoatCANOpen2Buses1ms_DW.tact++;
  if (SpeedgoatCANOpen2Buses1ms_DW.tact > 10.0) {
    SpeedgoatCANOpen2Buses1ms_DW.tact = 0.0;
    SpeedgoatCANOpen2Buses1ms_DW.Heartbeat++;
    if (SpeedgoatCANOpen2Buses1ms_DW.Heartbeat > 127.0) {
      SpeedgoatCANOpen2Buses1ms_DW.Heartbeat = 0.0;
    }
  }

  SpeedgoatCANOpen2Buses1ms_B.HB = SpeedgoatCANOpen2Buses1ms_DW.Heartbeat;

  /* End of MATLAB Function: '<S24>/HeartBeatgenerator' */

  /* DataTypeConversion: '<S24>/Data Type Conversion2' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.HB);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_Heartbeat = (uint8_T)(u0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion2' */
  /* S-Function (TPDOs_to_APT): '<S2>/TPDOs from Speedgoat to APT' */
  TPDOs_to_APT_Outputs_wrapper(&SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_ControlWord,
    &SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_PedalPosition,
    &SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_Heartbeat);

  /* RateTransition: '<S31>/Rate Transition' */
  SpeedgoatCANOpen2Buses1ms_B.RateTransition =
    SpeedgoatCANOpen2Buses1ms_DW.RateTransition_Buffer0;

  /* DataTypeConversion: '<S23>/Data Type Conversion33' */
  SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses1ms_B.RateTransition;

  /* DataTypeConversion: '<S65>/Cast To Single4' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 65536.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.CurrentInit = (int16_T)(tmp < 0.0F ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S65>/Cast To Single4' */

  /* Gain: '<S29>/Gain5' */
  SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInitmA =
    SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain_d *
    SpeedgoatCANOpen2Buses1ms_B.CurrentInit;

  /* RateTransition: '<S29>/Retract_current' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.Retract_current =
      SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0;
  }

  /* End of RateTransition: '<S29>/Retract_current' */

  /* Switch: '<S31>/Switch3' */
  if (SpeedgoatCANOpen2Buses1ms_B.Compare) {
    /* Sum: '<S29>/Sum4' */
    SpeedgoatCANOpen2Buses1ms_B.Sum4_e = (real_T)
      SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInitmA * 3.0517578125E-5 +
      SpeedgoatCANOpen2Buses1ms_B.Retract_current;
    SpeedgoatCANOpen2Buses1ms_B.Switch3 = SpeedgoatCANOpen2Buses1ms_B.Sum4_e;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Switch3 =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1;
  }

  /* End of Switch: '<S31>/Switch3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion36' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.Switch3);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion36' */
  /* DataTypeConversion: '<S65>/Cast To Single1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.ClearError_k);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.ClearError_m = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S65>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion32' */
  SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError =
    SpeedgoatCANOpen2Buses1ms_B.ClearError_m;

  /* RateTransition: '<S4>/DunkD_TPDO_ClearError' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError_n =
      SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError;
  }

  /* End of RateTransition: '<S4>/DunkD_TPDO_ClearError' */

  /* DataTypeConversion: '<S65>/Cast To Single' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.DeviceMode_g = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S65>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion34' */
  SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_g;

  /* RateTransition: '<S4>/DunkD_TPDO_DeviceMode' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode_l =
      SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode;
  }

  /* End of RateTransition: '<S4>/DunkD_TPDO_DeviceMode' */

  /* DataTypeConversion: '<S65>/Cast To Single3' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.PowerEnable_p = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S65>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion35' */
  SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_p;

  /* RateTransition: '<S4>/DunkD_TPDO_PowerEnable' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable_c =
      SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable;

    /* RateTransition: '<S4>/DunkD_TPDO_BrakeCtrl' */
    SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl_f =
      SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl;

    /* RateTransition: '<S4>/DunkD_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent_k =
      SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent;

    /* RateTransition: '<S31>/LeftTiltMotor_SpeedReq [rpm]1' */
    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm1 =
      SpeedgoatCANOpen2Buses1ms_DW.LeftTiltMotor_SpeedReqrpm1_Buff;
  }

  /* End of RateTransition: '<S4>/DunkD_TPDO_PowerEnable' */

  /* Product: '<S31>/Product' */
  SpeedgoatCANOpen2Buses1ms_B.Product = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.Compare *
    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm1;

  /* DataTypeConversion: '<S23>/Data Type Conversion31' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.Product);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion31' */

  /* SignalConversion: '<S5>/Signal Copy' */
  SpeedgoatCANOpen2Buses1ms_B.TiltLeft_VelocityReq =
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent;

  /* DataTypeConversion: '<S70>/Cast To Single1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.ClearError_h);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.ClearError_j = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S70>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion27' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError =
    SpeedgoatCANOpen2Buses1ms_B.ClearError_j;

  /* RateTransition: '<S5>/DunkC_TPDO_ClearError' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError_b =
      SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError;
  }

  /* End of RateTransition: '<S5>/DunkC_TPDO_ClearError' */

  /* DataTypeConversion: '<S70>/Cast To Single' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.DeviceMode_h = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S70>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion29' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_h;

  /* RateTransition: '<S5>/DunkC_TPDO_DeviceMode' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode_p =
      SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode;
  }

  /* End of RateTransition: '<S5>/DunkC_TPDO_DeviceMode' */

  /* DataTypeConversion: '<S70>/Cast To Single3' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.PowerEnable_ar = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S70>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion30' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_ar;

  /* RateTransition: '<S5>/DunkC_TPDO_PowerEnable' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable_m =
      SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable;
  }

  /* End of RateTransition: '<S5>/DunkC_TPDO_PowerEnable' */

  /* DataTypeConversion: '<S70>/Cast To Single2' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_bj = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S70>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion28' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_bj;

  /* RateTransition: '<S5>/DunkC_TPDO_BrakeCtrl' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl_o =
      SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl;

    /* RateTransition: '<S5>/DunkC_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent_l =
      SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent;

    /* RateTransition: '<S31>/RightTiltMotor_SpeedReq [rpm]' */
    SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm =
      SpeedgoatCANOpen2Buses1ms_DW.RightTiltMotor_SpeedReqrpm_Buff;
  }

  /* End of RateTransition: '<S5>/DunkC_TPDO_BrakeCtrl' */

  /* Switch: '<S31>/Switch2' */
  if (SpeedgoatCANOpen2Buses1ms_B.Compare) {
    SpeedgoatCANOpen2Buses1ms_B.Switch2 =
      SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Switch2 =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1;
  }

  /* End of Switch: '<S31>/Switch2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion26' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.Switch2);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion26' */
  /* SignalConversion: '<S6>/Signal Copy' */
  SpeedgoatCANOpen2Buses1ms_B.TiltRight_CurrentReq =
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent;

  /* DataTypeConversion: '<S71>/Cast To Single1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.ClearError);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.ClearError_jv = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S71>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion22' */
  SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError =
    SpeedgoatCANOpen2Buses1ms_B.ClearError_jv;

  /* RateTransition: '<S6>/DunkB_TPDO_ClearError' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError_i =
      SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError;
  }

  /* End of RateTransition: '<S6>/DunkB_TPDO_ClearError' */

  /* DataTypeConversion: '<S71>/Cast To Single' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.DeviceMode);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.DeviceMode_d = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S71>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion24' */
  SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_d;

  /* RateTransition: '<S6>/DunkB_TPDO_DeviceMode' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode_j =
      SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode;
  }

  /* End of RateTransition: '<S6>/DunkB_TPDO_DeviceMode' */

  /* DataTypeConversion: '<S71>/Cast To Single3' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.PowerEnable);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S71>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion25' */
  SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i;

  /* RateTransition: '<S6>/DunkB_TPDO_PowerEnable' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable_f =
      SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable;
  }

  /* End of RateTransition: '<S6>/DunkB_TPDO_PowerEnable' */

  /* DataTypeConversion: '<S71>/Cast To Single2' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S71>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion23' */
  SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k;

  /* RateTransition: '<S6>/DunkB_TPDO_BrakeCtrl' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl_e =
      SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl;

    /* RateTransition: '<S6>/DunkB_TPDO_DesiredCurrent' */
    SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent_p =
      SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent;
  }

  /* End of RateTransition: '<S6>/DunkB_TPDO_BrakeCtrl' */

  /* DataTypeConversion: '<S69>/Cast To Single1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.ClearError_n);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.ClearError_mc = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S69>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion3' */
  SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError =
    SpeedgoatCANOpen2Buses1ms_B.ClearError_mc;

  /* RateTransition: '<S7>/DunkA_TPDO_ClearError' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError_j =
      SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError;
  }

  /* End of RateTransition: '<S7>/DunkA_TPDO_ClearError' */

  /* DataTypeConversion: '<S69>/Cast To Single' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.DeviceMode_e = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S69>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion6' */
  SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses1ms_B.DeviceMode_e;

  /* RateTransition: '<S7>/DunkA_TPDO_DeviceMode' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode_l =
      SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode;
  }

  /* End of RateTransition: '<S7>/DunkA_TPDO_DeviceMode' */

  /* DataTypeConversion: '<S69>/Cast To Single3' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i4 = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S69>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion7' */
  SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i4;

  /* RateTransition: '<S7>/DunkA_TPDO_PowerEnable' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable_h =
      SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable;
  }

  /* End of RateTransition: '<S7>/DunkA_TPDO_PowerEnable' */

  /* DataTypeConversion: '<S69>/Cast To Single2' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_mu = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S69>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion4' */
  SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_mu;

  /* RateTransition: '<S7>/DunkA_TPDO_BrakeCtrl' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl_m =
      SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl;

    /* RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSwitchInport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSwitchInport1_Buffer0;
  }

  /* End of RateTransition: '<S7>/DunkA_TPDO_BrakeCtrl' */

  /* Switch: '<S31>/Switch' */
  if (SpeedgoatCANOpen2Buses1ms_B.Compare) {
    SpeedgoatCANOpen2Buses1ms_B.Switch =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSwitchInport1;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Switch =
      SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1;
  }

  /* End of Switch: '<S31>/Switch' */

  /* DataTypeConversion: '<S23>/Data Type Conversion8' */
  u0 = floor(SpeedgoatCANOpen2Buses1ms_B.Switch);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion8' */

  /* RateTransition: '<S7>/DunkA_TPDO_DesiredCurrent' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent_m =
      SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent;
  }

  /* End of RateTransition: '<S7>/DunkA_TPDO_DesiredCurrent' */
  /* RateTransition: '<S36>/TmpRTBAtSum2Inport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum2Inport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum2Inport1_Buffer0;
  }

  /* End of RateTransition: '<S36>/TmpRTBAtSum2Inport1' */

  /* RateTransition: '<S36>/Retract_current' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.Retract_current_m =
      SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0_o;
  }

  /* End of RateTransition: '<S36>/Retract_current' */

  /* Sum: '<S36>/Sum2' */
  SpeedgoatCANOpen2Buses1ms_B.Sum2 =
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum2Inport1 +
    SpeedgoatCANOpen2Buses1ms_B.Retract_current_m;

  /* Saturate: '<S36>/Saturation2' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.Sum2;
  u1 = SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat;
  u2 = SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat;
  if (u0 > u2) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2 = u2;
  } else if (u0 < u1) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2 = u1;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S36>/Saturation2' */

  /* Gain: '<S36>/Amp2mAmp' */
  SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq =
    SpeedgoatCANOpen2Buses1ms_P.Amp2mAmp_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Saturation2;

  /* DataTypeConversion: '<S33>/Cast To Single3' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle3 =
    SpeedgoatCANOpen2Buses1ms_B.APT_Speed;

  /* Gain: '<S33>/Gain2' */
  SpeedgoatCANOpen2Buses1ms_B.Speed_SI = SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain *
    SpeedgoatCANOpen2Buses1ms_B.CastToSingle3;

  /* Gain: '<S33>/WheelRadius' */
  SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI =
    SpeedgoatCANOpen2Buses1ms_P.WheelRadius_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Speed_SI;

  /* DataTypeConversion: '<S33>/Cast To Single2' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle2 =
    SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI;

  /* RateTransition: '<S29>/BrakesMotor_CurrentReq' incorporates:
   *  RateTransition: '<S29>/VehSpeed_SI [m//s]1'
   */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_h =
      SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq;
    SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SIms1 =
      SpeedgoatCANOpen2Buses1ms_B.CastToSingle2;
  }

  /* End of RateTransition: '<S29>/BrakesMotor_CurrentReq' */

  /* DataTypeConversion: '<S65>/Cast To Single2' */
  tmp = (real32_T)floor(SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k2 = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S65>/Cast To Single2' */

  /* RateTransition: '<S29>/BrakeCtrl' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_o =
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k2;
  }

  /* End of RateTransition: '<S29>/BrakeCtrl' */
  /* RateTransition: '<S36>/TmpRTBAtSum1Inport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport1_Buffer0;
  }

  /* End of RateTransition: '<S36>/TmpRTBAtSum1Inport1' */

  /* RateTransition: '<S36>/TmpRTBAtSum1Inport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2_o =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0_a;
  }

  /* End of RateTransition: '<S36>/TmpRTBAtSum1Inport2' */

  /* Sum: '<S36>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.Sum1_g =
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport1 -
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2_o;

  /* RateTransition: '<S36>/TmpRTBAtRetractInport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtRetractInport1 =
      SpeedgoatCANOpen2Buses1ms_B.Sum1_g;
  }

  /* End of RateTransition: '<S36>/TmpRTBAtRetractInport1' */
  /* ZeroOrderHold: '<S32>/Zero-Order Hold3' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_5) {
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 =
      SpeedgoatCANOpen2Buses1ms_B.Compare;
  }

  /* End of ZeroOrderHold: '<S32>/Zero-Order Hold3' */
  /* RateTransition: '<S32>/TmpRTBAtServoTiltingInport1' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_4) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtServoTiltingInport1 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtServoTiltingInport1_Buf;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtServoTiltingInport1' */

  /* Abs: '<S32>/Abs' */
  SpeedgoatCANOpen2Buses1ms_B.Abs = fabs
    (SpeedgoatCANOpen2Buses1ms_B.CastToSingle2);

  /* DataTypeConversion: '<S32>/Cast To Single1' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_a = SpeedgoatCANOpen2Buses1ms_B.Abs;

  /* MATLAB Function: '<S32>/ServoTilting' */
  SpeedgoatCANOpen2Buses1ms_B.TiltingAngle =
    SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_a *
    SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_a / 10.05525 * sin
    (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtServoTiltingInport1);
  SpeedgoatCANOpen2Buses1ms_B.TiltingAngle = atan
    (SpeedgoatCANOpen2Buses1ms_B.TiltingAngle);
  SpeedgoatCANOpen2Buses1ms_B.TiltingAngle =
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle * 180.0 / 3.1415926535897931;

  /* Sin: '<S32>/Sine Wave2' */
  if (SpeedgoatCANOpen2Buses1ms_DW.systemEnable_e != 0) {
    SpeedgoatCANOpen2Buses1ms_DW.lastSin_g = sin
      (SpeedgoatCANOpen2Buses1ms_P.SineWave2_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[3]);
    SpeedgoatCANOpen2Buses1ms_DW.lastCos_n = cos
      (SpeedgoatCANOpen2Buses1ms_P.SineWave2_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[3]);
    SpeedgoatCANOpen2Buses1ms_DW.systemEnable_e = 0;
  }

  SpeedgoatCANOpen2Buses1ms_B.SineWave2 =
    ((SpeedgoatCANOpen2Buses1ms_DW.lastSin_g *
      SpeedgoatCANOpen2Buses1ms_P.SineWave2_PCos +
      SpeedgoatCANOpen2Buses1ms_DW.lastCos_n *
      SpeedgoatCANOpen2Buses1ms_P.SineWave2_PSin) *
     SpeedgoatCANOpen2Buses1ms_P.SineWave2_HCos +
     (SpeedgoatCANOpen2Buses1ms_DW.lastCos_n *
      SpeedgoatCANOpen2Buses1ms_P.SineWave2_PCos -
      SpeedgoatCANOpen2Buses1ms_DW.lastSin_g *
      SpeedgoatCANOpen2Buses1ms_P.SineWave2_PSin) *
     SpeedgoatCANOpen2Buses1ms_P.SineWave2_Hsin) *
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_Amp +
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_Bias;

  /* End of Sin: '<S32>/Sine Wave2' */
  /* RateTransition: '<S32>/TmpRTBAtSum1Inport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID3_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtSum1Inport2' */

  /* Sum: '<S32>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.Sum1 = SpeedgoatCANOpen2Buses1ms_B.SineWave2 +
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2;

  /* Gain: '<S33>/m//s2Km//h' */
  SpeedgoatCANOpen2Buses1ms_B.VehSpeed_Kmh =
    SpeedgoatCANOpen2Buses1ms_P.ms2Kmh_Gain *
    SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI;
}

/* Model update function for TID3 */
static void SpeedgoatCANOpen2Buses1ms_update3(void) /* Sample time: [0.001s, 0.0s] */
{
  real_T HoldSine;
  real_T HoldCosine;

  /* Update for RateTransition: '<S32>/TiltingAngle [deg]' */
  SpeedgoatCANOpen2Buses1ms_DW.TiltingAngledeg_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle;

  /* Update for Sin: '<S32>/Sine Wave2' */
  HoldSine = SpeedgoatCANOpen2Buses1ms_DW.lastSin_g;
  HoldCosine = SpeedgoatCANOpen2Buses1ms_DW.lastCos_n;
  SpeedgoatCANOpen2Buses1ms_DW.lastSin_g = HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_HCos + HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_Hsin;
  SpeedgoatCANOpen2Buses1ms_DW.lastCos_n = HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_HCos - HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave2_Hsin;

  /* Update for RateTransition: '<S32>/TmpRTBAtManual SwitchInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtManualSwitchInport1_Buf =
    SpeedgoatCANOpen2Buses1ms_B.Sum1;

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick3)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH3;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[3] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick3 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize3 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH3 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output function for TID4 */
static void SpeedgoatCANOpen2Buses1ms_output4(void) /* Sample time: [0.002s, 0.0s] */
{
  uint8_T xAngleH;
  uint8_T yAngleH;
  uint8_T yAngleL;
  real_T xAngle;
  int32_T aux_xSign;
  int32_T aux_ySign;
  creal_T x;
  char_T c_data[2];
  dsp_simulink_MovingAverage_Sp_T *obj;
  dsp_simulink_MovingAverage_Sp_T *obj_0;
  dsp_private_SlidingWindowAver_T *obj_1;
  int32_T c_size[2];
  creal_T tmp;
  real_T ar;
  real_T ai;
  uint16_T u0;
  uint16_T u1;
  uint16_T u2;

  /* S-Function (RPDOs_from_AN2CANConv): '<S1>/RPDOs from AN2CAN ' */
  RPDOs_from_AN2CANConv_Outputs_wrapper(&SpeedgoatCANOpen2Buses1ms_B.Channel_AN1,
    &SpeedgoatCANOpen2Buses1ms_B.Channel_AN2,
    &SpeedgoatCANOpen2Buses1ms_B.Channel_AN3,
    &SpeedgoatCANOpen2Buses1ms_B.Channel_AN4);

  /* S-Function (RPDOs_from_DunkC): '<S5>/RPDOs from Dunker #1' */
  RPDOs_from_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent,
     &SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity);

  /* Gain: '<S5>/Gain1' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity_Inv = (int64_T)
    SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_j *
    SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity;

  /* Gain: '<S5>/Gain' */
  SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent_Inv = (int64_T)
    SpeedgoatCANOpen2Buses1ms_P.Gain_Gain_g *
    SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent;

  /* S-Function (RPDOs_from_DunkB): '<S6>/RPDOs from Dunker #1' */
  RPDOs_from_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualCurrent,
     &SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualVelocity);

  /* S-Function (RPDOs_from_Encoder): '<S8>/RPDOs from Encoder' */
  RPDOs_from_Encoder_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.Encoder_Actual_Position,
     &SpeedgoatCANOpen2Buses1ms_B.Encoder_Stored_Position);

  /* S-Function (RPDOs_from_Inclinometer): '<S9>/RPDOs from Inclinometer ' */
  RPDOs_from_Inclinometer_Outputs_wrapper(&SpeedgoatCANOpen2Buses1ms_B.xS,
    &SpeedgoatCANOpen2Buses1ms_B.xH, &SpeedgoatCANOpen2Buses1ms_B.xL,
    &SpeedgoatCANOpen2Buses1ms_B.yS, &SpeedgoatCANOpen2Buses1ms_B.yH,
    &SpeedgoatCANOpen2Buses1ms_B.yL);

  /* MATLAB Function: '<S9>/Conv' */
  xAngleH = SpeedgoatCANOpen2Buses1ms_B.xH;
  yAngleH = SpeedgoatCANOpen2Buses1ms_B.yH;
  yAngleL = SpeedgoatCANOpen2Buses1ms_B.yL;
  if (SpeedgoatCANOpen2Buses1ms_B.xS == 0) {
    aux_xSign = 1;
  } else {
    aux_xSign = -1;
  }

  if (SpeedgoatCANOpen2Buses1ms_B.yS == 0) {
    aux_ySign = 1;
  } else {
    aux_ySign = -1;
  }

  SpeedgoatCANOpen2Buses1_dec2hex(SpeedgoatCANOpen2Buses1ms_B.xL, c_data, c_size);
  x = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  SpeedgoatCANOpen2Buses1_dec2hex(xAngleH, c_data, c_size);
  tmp = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  ar = x.re;
  ai = x.im;
  if (ai == 0.0) {
    ar /= 100.0;
  } else if (ar == 0.0) {
    ar = 0.0;
  } else {
    ar /= 100.0;
  }

  xAngle = (tmp.re + ar) * (real_T)aux_xSign;
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleL, c_data, c_size);
  x = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleH, c_data, c_size);
  tmp = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  ar = x.re;
  ai = x.im;
  if (ai == 0.0) {
    ar /= 100.0;
  } else if (ar == 0.0) {
    ar = 0.0;
  } else {
    ar /= 100.0;
  }

  ar = (tmp.re + ar) * (real_T)aux_ySign;
  SpeedgoatCANOpen2Buses1ms_B.xAngle = xAngle;
  SpeedgoatCANOpen2Buses1ms_B.yAngle = ar;

  /* End of MATLAB Function: '<S9>/Conv' */
  /* S-Function (RPDOs_from_Joystick): '<S10>/RPDOs from Joystick' */
  RPDOs_from_Joystick_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_e,
     &SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i,
     &SpeedgoatCANOpen2Buses1ms_B.Joystick_LatCmd);

  /* RateTransition: '<S29>/Joystick_LongCmd1' */
  SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_Buffer[SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_semaphoreTake
    == 0] = SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i;
  SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_ActiveBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_semaphoreTake == 0);

  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion = (uint16_T)
    SpeedgoatCANOpen2Buses1ms_B.Channel_AN3;

  /* Saturate: '<S36>/Saturation1' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion;
  u1 = SpeedgoatCANOpen2Buses1ms_P.Saturation1_LowerSat;
  u2 = SpeedgoatCANOpen2Buses1ms_P.Saturation1_UpperSat;
  if (u0 > u2) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation1 = u2;
  } else if (u0 < u1) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation1 = u1;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S36>/Saturation1' */

  /* RateTransition: '<S36>/TmpRTBAtSumInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0;
  }

  /* End of RateTransition: '<S36>/TmpRTBAtSumInport2' */

  /* Sum: '<S36>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.Saturation1 -
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2;

  /* Gain: '<S36>/GetInPercent' */
  SpeedgoatCANOpen2Buses1ms_B.br_percent2 =
    SpeedgoatCANOpen2Buses1ms_P.GetInPercent_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Sum;

  /* DataTypeConversion: '<S36>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c = (real32_T)
    SpeedgoatCANOpen2Buses1ms_B.br_percent2;

  /* RateTransition: '<S36>/TmpRTBAtRetractInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_Buffer[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_semaphor
    == 0] = SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c;
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_ActiveBu = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_semaphor == 0);

  /* Gain: '<S36>/Gain2' */
  SpeedgoatCANOpen2Buses1ms_B.Gain2 = SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_p *
    SpeedgoatCANOpen2Buses1ms_B.br_percent2;

  /* Saturate: '<S36>/Saturation' */
  xAngle = SpeedgoatCANOpen2Buses1ms_B.Gain2;
  ar = SpeedgoatCANOpen2Buses1ms_P.Saturation_LowerSat;
  ai = SpeedgoatCANOpen2Buses1ms_P.Saturation_UpperSat;
  if (xAngle > ai) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation = ai;
  } else if (xAngle < ar) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation = ar;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation = xAngle;
  }

  /* End of Saturate: '<S36>/Saturation' */

  /* Gain: '<S36>/Gain1' */
  SpeedgoatCANOpen2Buses1ms_B.Gain1 = SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Saturation;

  /* RateTransition: '<S36>/TmpRTBAtDelayInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_Buffer[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_semaphoreT
    == 0] = SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c;
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_ActiveBufI = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_semaphoreT == 0);

  /* DataTypeConversion: '<S26>/Cast To Single' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle_e =
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LatCmd;

  /* Gain: '<S30>/dem' */
  SpeedgoatCANOpen2Buses1ms_B.dem = SpeedgoatCANOpen2Buses1ms_P.dem_Gain *
    SpeedgoatCANOpen2Buses1ms_B.CastToSingle_e;

  /* Gain: '<S30>/Robotics Convention' */
  SpeedgoatCANOpen2Buses1ms_B.DirectionReq =
    SpeedgoatCANOpen2Buses1ms_P.RoboticsConvention_Gain *
    SpeedgoatCANOpen2Buses1ms_B.dem;

  /* DataTypeConversion: '<S30>/Cast To Single' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle =
    SpeedgoatCANOpen2Buses1ms_B.DirectionReq;

  /* Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_B.Memory1 =
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput;

  /* MATLABSystem: '<S30>/Moving Average' */
  xAngle = SpeedgoatCANOpen2Buses1ms_B.Memory1;
  obj = &SpeedgoatCANOpen2Buses1ms_DW.obj;
  obj_0 = obj;
  if (obj_0->TunablePropsChanged) {
    obj_0->TunablePropsChanged = false;
  }

  obj_1 = obj->pStatistic;
  if (obj_1->isInitialized != 1) {
    obj_1->isSetupComplete = false;
    obj_1->isInitialized = 1;
    obj_1->isSetupComplete = true;
  }

  SpeedgoatCANOpen2Buses1ms_B.MovingAverage = xAngle;

  /* End of MATLABSystem: '<S30>/Moving Average' */

  /* DataTypeConversion: '<S30>/Cast To Single1' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle1 =
    SpeedgoatCANOpen2Buses1ms_B.MovingAverage;

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_Buff[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_sema
    == 0] = SpeedgoatCANOpen2Buses1ms_B.CastToSingle;
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_Acti = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_sema == 0);

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_Buff[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_sema
    == 0] = SpeedgoatCANOpen2Buses1ms_B.CastToSingle1;
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_Acti = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_sema == 0);

  /* RateTransition: '<S30>/TmpRTBAtSumInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_m =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_o;
  }

  /* End of RateTransition: '<S30>/TmpRTBAtSumInport2' */

  /* Sum: '<S30>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_p =
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_m - (real_T)
    SpeedgoatCANOpen2Buses1ms_B.Encoder_Actual_Position;

  /* Gain: '<S30>/degree2rad' */
  SpeedgoatCANOpen2Buses1ms_B.SteeringAnglerad =
    SpeedgoatCANOpen2Buses1ms_P.degree2rad_Gain *
    SpeedgoatCANOpen2Buses1ms_B.DirectionReq;

  /* Gain: '<S30>/inc2deg' */
  SpeedgoatCANOpen2Buses1ms_B.DirectionFb =
    SpeedgoatCANOpen2Buses1ms_P.inc2deg_Gain * SpeedgoatCANOpen2Buses1ms_B.Sum_p;

  /* RateTransition: '<S32>/Y_Angle' */
  SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_Buffer[SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_semaphoreTaken
    == 0] = SpeedgoatCANOpen2Buses1ms_B.yAngle;
  SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_ActiveBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_semaphoreTaken == 0);

  /* Sin: '<S32>/Sine Wave1' */
  if (SpeedgoatCANOpen2Buses1ms_DW.systemEnable_k != 0) {
    SpeedgoatCANOpen2Buses1ms_DW.lastSin_k = sin
      (SpeedgoatCANOpen2Buses1ms_P.SineWave1_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[4]);
    SpeedgoatCANOpen2Buses1ms_DW.lastCos_l = cos
      (SpeedgoatCANOpen2Buses1ms_P.SineWave1_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[4]);
    SpeedgoatCANOpen2Buses1ms_DW.systemEnable_k = 0;
  }

  SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg_c =
    ((SpeedgoatCANOpen2Buses1ms_DW.lastSin_k *
      SpeedgoatCANOpen2Buses1ms_P.SineWave1_PCos +
      SpeedgoatCANOpen2Buses1ms_DW.lastCos_l *
      SpeedgoatCANOpen2Buses1ms_P.SineWave1_PSin) *
     SpeedgoatCANOpen2Buses1ms_P.SineWave1_HCos +
     (SpeedgoatCANOpen2Buses1ms_DW.lastCos_l *
      SpeedgoatCANOpen2Buses1ms_P.SineWave1_PCos -
      SpeedgoatCANOpen2Buses1ms_DW.lastSin_k *
      SpeedgoatCANOpen2Buses1ms_P.SineWave1_PSin) *
     SpeedgoatCANOpen2Buses1ms_P.SineWave1_Hsin) *
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_Amp +
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_Bias;

  /* End of Sin: '<S32>/Sine Wave1' */
  /* Gain: '<S32>/n' */
  SpeedgoatCANOpen2Buses1ms_B.n = SpeedgoatCANOpen2Buses1ms_P.n_Gain *
    SpeedgoatCANOpen2Buses1ms_B.SteeringAnglerad;

  /* DataTypeConversion: '<S32>/Cast To Single' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle_p = SpeedgoatCANOpen2Buses1ms_B.n;

  /* Gain: '<S41>/LSB2Volt' */
  SpeedgoatCANOpen2Buses1ms_B.DispLeftVolt =
    SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Channel_AN2;

  /* RateTransition: '<S41>/TmpRTBAtSumInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mb =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_os;
  }

  /* End of RateTransition: '<S41>/TmpRTBAtSumInport2' */

  /* Sum: '<S41>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.DispLeftOffsetVolt = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.DispLeftVolt * 1.4901161193847656E-8 -
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mb;

  /* Gain: '<S41>/Volt2meter' */
  SpeedgoatCANOpen2Buses1ms_B.DispLeftm =
    SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain *
    SpeedgoatCANOpen2Buses1ms_B.DispLeftOffsetVolt;

  /* RateTransition: '<S41>/DispLeft [m]' */
  SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_Buffer[SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_semaphoreTaken
    == 0] = SpeedgoatCANOpen2Buses1ms_B.DispLeftm;
  SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_ActiveBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_semaphoreTaken == 0);

  /* Gain: '<S42>/LSB2Volt' */
  SpeedgoatCANOpen2Buses1ms_B.DispRightVolt =
    SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain_k *
    SpeedgoatCANOpen2Buses1ms_B.Channel_AN1;

  /* RateTransition: '<S42>/TmpRTBAtSumInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID4_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mbd =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_osg;
  }

  /* End of RateTransition: '<S42>/TmpRTBAtSumInport2' */

  /* Sum: '<S42>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.DispRightOffsetVolt = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.DispRightVolt * 1.4901161193847656E-8 -
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mbd;

  /* Gain: '<S42>/Volt2meter' */
  SpeedgoatCANOpen2Buses1ms_B.DispRightm =
    SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain_f *
    SpeedgoatCANOpen2Buses1ms_B.DispRightOffsetVolt;

  /* RateTransition: '<S42>/DispRight [m]' */
  SpeedgoatCANOpen2Buses1ms_DW.DispRightm_Buffer[SpeedgoatCANOpen2Buses1ms_DW.DispRightm_semaphoreTaken
    == 0] = SpeedgoatCANOpen2Buses1ms_B.DispRightm;
  SpeedgoatCANOpen2Buses1ms_DW.DispRightm_ActiveBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses1ms_DW.DispRightm_semaphoreTaken == 0);

  /* Gain: '<S32>/Torque Constant' */
  SpeedgoatCANOpen2Buses1ms_B.TorqueConstant = (int64_T)
    SpeedgoatCANOpen2Buses1ms_P.TorqueConstant_Gain *
    SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent;

  /* DataTypeConversion: '<S33>/Cast To Single1' */
  SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_e =
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i;

  /* Gain: '<S33>/Gain1' */
  SpeedgoatCANOpen2Buses1ms_B.Gain1_e = SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_n
    * SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_e;

  /* Abs: '<S33>/Abs' */
  SpeedgoatCANOpen2Buses1ms_B.TractionReq_a = fabs
    (SpeedgoatCANOpen2Buses1ms_B.Gain1_e);
}

/* Model update function for TID4 */
static void SpeedgoatCANOpen2Buses1ms_update4(void) /* Sample time: [0.002s, 0.0s] */
{
  real_T HoldSine;
  real_T HoldCosine;

  /* Update for RateTransition: '<S27>/Joystick_ButtonsStatus' */
  SpeedgoatCANOpen2Buses1ms_DW.Joystick_ButtonsStatus_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_e;

  /* Update for RateTransition: '<S27>/Joystick_LongCmd' */
  SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i;

  /* Update for RateTransition: '<S31>/TractionReq' */
  SpeedgoatCANOpen2Buses1ms_DW.TractionReq_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.TractionReq_a;

  /* Update for RateTransition: '<S36>/TmpRTBAtSum2Inport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum2Inport1_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.Gain1;

  /* Update for RateTransition: '<S36>/TmpRTBAtSum1Inport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0_a =
    SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c;

  /* Update for Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput =
    SpeedgoatCANOpen2Buses1ms_B.DirectionFb;

  /* Update for RateTransition: '<S32>/TiltingAngle_sinreq [deg]' */
  SpeedgoatCANOpen2Buses1ms_DW.TiltingAngle_sinreqdeg_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg_c;

  /* Update for RateTransition: '<S32>/TmpRTBAtServoTiltingInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtServoTiltingInport1_Buf =
    SpeedgoatCANOpen2Buses1ms_B.CastToSingle_p;

  /* Update for Sin: '<S32>/Sine Wave1' */
  HoldSine = SpeedgoatCANOpen2Buses1ms_DW.lastSin_k;
  HoldCosine = SpeedgoatCANOpen2Buses1ms_DW.lastCos_l;
  SpeedgoatCANOpen2Buses1ms_DW.lastSin_k = HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_HCos + HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_Hsin;
  SpeedgoatCANOpen2Buses1ms_DW.lastCos_l = HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_HCos - HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave1_Hsin;

  /* Update absolute time */
  /* The "clockTick4" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick4"
   * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick4 and the high bits
   * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick4)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH4;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[4] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick4 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize4 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH4 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize4 * 4294967296.0;
}

/* Model output function for TID5 */
static void SpeedgoatCANOpen2Buses1ms_output5(void) /* Sample time: [0.005s, 0.0s] */
{
  boolean_T sf_internal_predicateOutput;
  real_T u0;
  dsp_simulink_MovingAverage_a_T *obj;
  dsp_simulink_MovingAverage_a_T *obj_0;
  dsp_private_SlidingWindowAv_a_T *obj_1;
  dsp_private_SlidingWindowAv_a_T *obj_2;
  dsp_private_SlidingWindowAv_a_T *obj_3;
  dsp_private_SlidingWindowAv_a_T *obj_4;
  real_T cumRevIndex;
  real_T csum;
  real_T csumrev[9];
  real_T z;

  /* S-Function (RPDOs_from_DunkD): '<S4>/RPDOs from Dunker #1' */
  RPDOs_from_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualCurrent,
     &SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualVelocity);

  /* S-Function (TPDOs_to_DunkD): '<S4>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError_n,
     &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode_l,
     &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable_c,
     &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl_f,
     &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent_k);

  /* S-Function (TPDOs_to_DunkC): '<S5>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError_b,
     &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode_p,
     &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable_m,
     &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl_o,
     &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent_l);

  /* S-Function (TPDOs_to_DunkB): '<S6>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError_i,
     &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode_j,
     &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable_f,
     &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl_e,
     &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent_p);

  /* S-Function (RPDOs_from_DunkA): '<S7>/RPDOs from Dunker #1' */
  RPDOs_from_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualCurrent,
     &SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualVelocity);

  /* S-Function (TPDOs_to_DunkA): '<S7>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError_j,
     &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode_l,
     &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable_h,
     &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl_m,
     &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent_m);

  /* RateTransition: '<S29>/Joystick_ButtonsStatus' */
  SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_i =
    SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_e;

  /* RateTransition: '<S29>/Joystick_LongCmd1' */
  SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_semaphoreTake =
    SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_ActiveBufIdx;
  SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd1 =
    SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_Buffer[SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_semaphoreTake];

  /* Chart: '<S29>/DecisionBrakeCtrl' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_e = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c13_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c13_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c13_SpeedgoatCANOpen2Buses1m =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o = 0.0;
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4 =
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_o;
    SpeedgoatCANOpen2Buses1ms_DW.Parking_Brake = 0.0;
    SpeedgoatCANOpen2Buses1ms_DW.Neutral_State = 0.0;
  } else if (SpeedgoatCANOpen2Buses1ms_DW.is_c13_SpeedgoatCANOpen2Buses1m ==
             SpeedgoatCANOpen2Buses1ms_IN_) {
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o = -10000.0;
    sf_internal_predicateOutput =
      ((SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_h < 10.0) &&
       (SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_h > -10.0));
    if (sf_internal_predicateOutput) {
      SpeedgoatCANOpen2Buses1ms_DW.is_c13_SpeedgoatCANOpen2Buses1m =
        SpeedgoatCANOpen2Buses1_IN_Init;
      SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o = 0.0;
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4 =
        SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_o;
      SpeedgoatCANOpen2Buses1ms_DW.Parking_Brake = 0.0;
      SpeedgoatCANOpen2Buses1ms_DW.Neutral_State = 0.0;
    }
  } else {
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o = 0.0;
    sf_internal_predicateOutput =
      ((SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_h > 100.0) ||
       (SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_h < -100.0));
    if (sf_internal_predicateOutput) {
      SpeedgoatCANOpen2Buses1ms_DW.is_c13_SpeedgoatCANOpen2Buses1m =
        SpeedgoatCANOpen2Buses1ms_IN_;
      SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4 = 2U;
      SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o = -10000.0;
      SpeedgoatCANOpen2Buses1ms_DW.Parking_Brake = 1.0;
      SpeedgoatCANOpen2Buses1ms_DW.Neutral_State = 0.0;
    }
  }

  /* End of Chart: '<S29>/DecisionBrakeCtrl' */
  /* RateTransition: '<S36>/TmpRTBAtRetractInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_semaphor =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_ActiveBu;
  SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtRetractInport2 =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_Buffer[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_semaphor];

  /* Chart: '<S36>/Retract' */
  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_h1 = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1 < 511U) {
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1++;
  }

  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c5_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c5_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c5_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buse_IN_Init_m;
    SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq = 0.0F;
  } else if (SpeedgoatCANOpen2Buses1ms_DW.is_c5_SpeedgoatCANOpen2Buses1ms ==
             SpeedgoatCANOpen2Buse_IN_Init_m) {
    if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtRetractInport1 > 0.05) {
      SpeedgoatCANOpen2Buses1ms_DW.is_c5_SpeedgoatCANOpen2Buses1ms =
        SpeedgoatCANOpen2Bus_IN_Retract;
      SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1 = 0U;
    }
  } else if (SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1 >= 500) {
    SpeedgoatCANOpen2Buses1ms_DW.is_c5_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatCANOpen2Buse_IN_Init_m;
    SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq = 0.0F;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq = 1.0F;
  }

  /* End of Chart: '<S36>/Retract' */
  /* Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses1ms_B.Delay_o =
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[0];

  /* RateTransition: '<S36>/TmpRTBAtDelayInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_semaphoreT =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_ActiveBufI;
  SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDelayInport1 =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_Buffer[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_semaphoreT];

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_sema =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_Acti;
  SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport1 =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_Buff[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_sema];

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_sema =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_Acti;
  SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport2 =
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_Buff[SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_sema];

  /* MATLAB Function: '<S30>/P Controller' */
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport1;
  if (SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport1 > 90.0) {
    cumRevIndex = 90.0;
  }

  if (cumRevIndex < -90.0) {
    cumRevIndex = -90.0;
  }

  SpeedgoatCANOpen2Buses1ms_B.SpeedReq = (cumRevIndex -
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport2) * 70.0;

  /* End of MATLAB Function: '<S30>/P Controller' */

  /* RateTransition: '<S32>/Y_Angle' */
  SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_semaphoreTaken =
    SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_ActiveBufIdx;
  SpeedgoatCANOpen2Buses1ms_B.Fb_Angledeg =
    SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_Buffer[SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_semaphoreTaken];

  /* ZeroOrderHold: '<S32>/Zero-Order Hold2' */
  SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold2 =
    SpeedgoatCANOpen2Buses1ms_B.Fb_Angledeg;

  /* MATLABSystem: '<S32>/Moving Average' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold2;
  obj = &SpeedgoatCANOpen2Buses1ms_DW.obj_b;
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
    obj_4->pCumSumRev[0] = 0.0;
    obj_4->pCumSumRev[1] = 0.0;
    obj_4->pCumSumRev[2] = 0.0;
    obj_4->pCumSumRev[3] = 0.0;
    obj_4->pCumSumRev[4] = 0.0;
    obj_4->pCumSumRev[5] = 0.0;
    obj_4->pCumSumRev[6] = 0.0;
    obj_4->pCumSumRev[7] = 0.0;
    obj_4->pCumSumRev[8] = 0.0;
    obj_4->pCumRevIndex = 1.0;
    obj_3->isSetupComplete = true;
    obj_2->pCumSum = 0.0;
    obj_2->pCumSumRev[0] = 0.0;
    obj_2->pCumSumRev[1] = 0.0;
    obj_2->pCumSumRev[2] = 0.0;
    obj_2->pCumSumRev[3] = 0.0;
    obj_2->pCumSumRev[4] = 0.0;
    obj_2->pCumSumRev[5] = 0.0;
    obj_2->pCumSumRev[6] = 0.0;
    obj_2->pCumSumRev[7] = 0.0;
    obj_2->pCumSumRev[8] = 0.0;
    obj_2->pCumRevIndex = 1.0;
  }

  cumRevIndex = obj_1->pCumRevIndex;
  csum = obj_1->pCumSum;
  csumrev[0] = obj_1->pCumSumRev[0];
  csumrev[1] = obj_1->pCumSumRev[1];
  csumrev[2] = obj_1->pCumSumRev[2];
  csumrev[3] = obj_1->pCumSumRev[3];
  csumrev[4] = obj_1->pCumSumRev[4];
  csumrev[5] = obj_1->pCumSumRev[5];
  csumrev[6] = obj_1->pCumSumRev[6];
  csumrev[7] = obj_1->pCumSumRev[7];
  csumrev[8] = obj_1->pCumSumRev[8];
  csum += u0;
  z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  csumrev[(int32_T)cumRevIndex - 1] = u0;
  if (cumRevIndex != 9.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    csumrev[7] += csumrev[8];
    csumrev[6] += csumrev[7];
    csumrev[5] += csumrev[6];
    csumrev[4] += csumrev[5];
    csumrev[3] += csumrev[4];
    csumrev[2] += csumrev[3];
    csumrev[1] += csumrev[2];
    csumrev[0] += csumrev[1];
  }

  u0 = z / 10.0;
  obj_1->pCumSum = csum;
  obj_1->pCumSumRev[0] = csumrev[0];
  obj_1->pCumSumRev[1] = csumrev[1];
  obj_1->pCumSumRev[2] = csumrev[2];
  obj_1->pCumSumRev[3] = csumrev[3];
  obj_1->pCumSumRev[4] = csumrev[4];
  obj_1->pCumSumRev[5] = csumrev[5];
  obj_1->pCumSumRev[6] = csumrev[6];
  obj_1->pCumSumRev[7] = csumrev[7];
  obj_1->pCumSumRev[8] = csumrev[8];
  obj_1->pCumRevIndex = cumRevIndex;
  SpeedgoatCANOpen2Buses1ms_B.Fb_Angle_Filtdeg = u0;

  /* End of MATLABSystem: '<S32>/Moving Average' */

  /* Sum: '<S43>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.e_in =
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_stepreqfdeg -
    SpeedgoatCANOpen2Buses1ms_B.Fb_Angle_Filtdeg;

  /* RateTransition: '<S43>/Hyst' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.Hyst = SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0;
  }

  /* End of RateTransition: '<S43>/Hyst' */

  /* Chart: '<S43>/Comp_and_Timer' */
  if (SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m < 63U) {
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m++;
  }

  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_o = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c14_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c14_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
      SpeedgoatCANOpen2B_IN_Standby_c;
    SpeedgoatCANOpen2Buses1ms_B.e_out_i = 0.0;
    SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m) {
     case SpeedgoatCANOpen2Bu_IN_Active_l:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_B.e_in <
        SpeedgoatCANOpen2Buses1ms_B.Hyst) && (SpeedgoatCANOpen2Buses1ms_B.e_in >
        -SpeedgoatCANOpen2Buses1ms_B.Hyst));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2B_IN_Active1_e;
        SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m = 0U;
        SpeedgoatCANOpen2Buses1ms_B.e_out_i = SpeedgoatCANOpen2Buses1ms_B.e_in;
        SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.e_out_i = SpeedgoatCANOpen2Buses1ms_B.e_in;
        SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
      }
      break;

     case SpeedgoatCANOpen2B_IN_Active1_e:
      sf_internal_predicateOutput =
        ((SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m >= 40U) &&
         (SpeedgoatCANOpen2Buses1ms_B.e_in < SpeedgoatCANOpen2Buses1ms_B.Hyst) &&
         (SpeedgoatCANOpen2Buses1ms_B.e_in > -SpeedgoatCANOpen2Buses1ms_B.Hyst));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2B_IN_Standby_c;
        SpeedgoatCANOpen2Buses1ms_B.e_out_i = 0.0;
        SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
      } else {
        sf_internal_predicateOutput =
          ((SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m >= 40U) &&
           ((SpeedgoatCANOpen2Buses1ms_B.e_in > SpeedgoatCANOpen2Buses1ms_B.Hyst)
            || (SpeedgoatCANOpen2Buses1ms_B.e_in <
                -SpeedgoatCANOpen2Buses1ms_B.Hyst)));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
            SpeedgoatCANOpen2Bu_IN_Active_l;
          SpeedgoatCANOpen2Buses1ms_B.e_out_i = SpeedgoatCANOpen2Buses1ms_B.e_in;
          SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
        } else {
          SpeedgoatCANOpen2Buses1ms_B.e_out_i = SpeedgoatCANOpen2Buses1ms_B.e_in;
          SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
        }
      }
      break;

     default:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_B.e_in >
        SpeedgoatCANOpen2Buses1ms_B.Hyst) || (SpeedgoatCANOpen2Buses1ms_B.e_in <
        -SpeedgoatCANOpen2Buses1ms_B.Hyst));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Bu_IN_Active_l;
        SpeedgoatCANOpen2Buses1ms_B.e_out_i = SpeedgoatCANOpen2Buses1ms_B.e_in;
        SpeedgoatCANOpen2Buses1ms_B.timer_a = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S43>/Comp_and_Timer' */

  /* Product: '<S43>/Product1' */
  SpeedgoatCANOpen2Buses1ms_B.Product1 = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.e_out_i;

  /* Gain: '<S43>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses1ms_B.Proportional =
    SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kp *
    SpeedgoatCANOpen2Buses1ms_B.Product1;

  /* Gain: '<S43>/Integral Gain' */
  SpeedgoatCANOpen2Buses1ms_B.IntegralGain =
    SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ki *
    SpeedgoatCANOpen2Buses1ms_B.Product1;

  /* Delay: '<S43>/Delay' */
  SpeedgoatCANOpen2Buses1ms_B.Delay = SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE;

  /* ZeroOrderHold: '<S43>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold = SpeedgoatCANOpen2Buses1ms_B.Delay;

  /* Sum: '<S43>/Sum2' */
  SpeedgoatCANOpen2Buses1ms_B.Sum2_d = SpeedgoatCANOpen2Buses1ms_B.IntegralGain
    - SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold;

  /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_B.Integral =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_d +
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE;

  /* Saturate: '<S43>/Saturation' */
  u0 = -SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Req_lim;
  csum = SpeedgoatCANOpen2Buses1ms_B.Integral;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_c = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_c = u0;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_c = csum;
  }

  /* End of Saturate: '<S43>/Saturation' */

  /* RateTransition: '<S43>/TmpRTBAtDerivativeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buffe;

    /* RateTransition: '<S43>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3 =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buffe;
  }

  /* End of RateTransition: '<S43>/TmpRTBAtDerivativeInport2' */

  /* MATLAB Function: '<S43>/Derivative' */
  SpeedgoatCANOpen_Derivative(SpeedgoatCANOpen2Buses1ms_B.Product1,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative);

  /* DataTypeConversion: '<S43>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1 =
    SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.ud;

  /* Sum: '<S43>/Sum4' */
  SpeedgoatCANOpen2Buses1ms_B.Sum4 = (SpeedgoatCANOpen2Buses1ms_B.Proportional +
    SpeedgoatCANOpen2Buses1ms_B.Saturation_c) +
    SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1;

  /* Product: '<S43>/Product2' */
  SpeedgoatCANOpen2Buses1ms_B.Product2 = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.Sum4;

  /* Gain: '<S43>/tometer' */
  SpeedgoatCANOpen2Buses1ms_B.tometer = SpeedgoatCANOpen2Buses1ms_P.tometer_Gain
    * SpeedgoatCANOpen2Buses1ms_B.Product2;

  /* Gain: '<S32>/Gain4' */
  SpeedgoatCANOpen2Buses1ms_B.Gain4 = SpeedgoatCANOpen2Buses1ms_P.Gain4_Gain *
    SpeedgoatCANOpen2Buses1ms_B.tometer;

  /* Memory: '<S41>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_B.Memory1_l =
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_b;

  /* Gain: '<S32>/Gain5' */
  SpeedgoatCANOpen2Buses1ms_B.Gain5 = SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Memory1_l;

  /* Sum: '<S44>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.e_in_p = SpeedgoatCANOpen2Buses1ms_B.Gain4 -
    SpeedgoatCANOpen2Buses1ms_B.Gain5;

  /* RateTransition: '<S44>/Hyst' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.Hyst_c =
      SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e;
  }

  /* End of RateTransition: '<S44>/Hyst' */

  /* Chart: '<S44>/Comp_and_Timer' */
  SpeedgoatCAN_Comp_and_Timer(SpeedgoatCANOpen2Buses1ms_B.e_in_p,
    SpeedgoatCANOpen2Buses1ms_B.Hyst_c,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Comp_and_Timer_f);

  /* Product: '<S44>/Product1' */
  SpeedgoatCANOpen2Buses1ms_B.Product1_l = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.e_out;

  /* Gain: '<S44>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses1ms_B.Proportional_l =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kp *
    SpeedgoatCANOpen2Buses1ms_B.Product1_l;

  /* Gain: '<S44>/Integral Gain' */
  SpeedgoatCANOpen2Buses1ms_B.IntegralGain_h =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ki *
    SpeedgoatCANOpen2Buses1ms_B.Product1_l;

  /* Delay: '<S44>/Delay' */
  SpeedgoatCANOpen2Buses1ms_B.Delay_e =
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_d;

  /* ZeroOrderHold: '<S44>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_m =
    SpeedgoatCANOpen2Buses1ms_B.Delay_e;

  /* Sum: '<S44>/Sum2' */
  SpeedgoatCANOpen2Buses1ms_B.Sum2_d4 =
    SpeedgoatCANOpen2Buses1ms_B.IntegralGain_h -
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_m;

  /* DiscreteIntegrator: '<S44>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_B.Integral_a =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_d *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_d4 +
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_d;

  /* Saturate: '<S44>/Saturation' */
  u0 = -SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Req_lim;
  csum = SpeedgoatCANOpen2Buses1ms_B.Integral_a;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_b = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_b = u0;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_b = csum;
  }

  /* End of Saturate: '<S44>/Saturation' */

  /* RateTransition: '<S44>/TmpRTBAtDerivativeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_a =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buf_k;

    /* RateTransition: '<S44>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_f =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buf_d;
  }

  /* End of RateTransition: '<S44>/TmpRTBAtDerivativeInport2' */

  /* MATLAB Function: '<S44>/Derivative' */
  SpeedgoatCANOpen_Derivative(SpeedgoatCANOpen2Buses1ms_B.Product1_l,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_a,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_f,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_f);

  /* DataTypeConversion: '<S44>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_f =
    SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.ud;

  /* Sum: '<S44>/Sum4' */
  SpeedgoatCANOpen2Buses1ms_B.Sum4_d =
    (SpeedgoatCANOpen2Buses1ms_B.Proportional_l +
     SpeedgoatCANOpen2Buses1ms_B.Saturation_b) +
    SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_f;

  /* Product: '<S44>/Product2' */
  SpeedgoatCANOpen2Buses1ms_B.Product2_n = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.Sum4_d;

  /* Saturate: '<S44>/Saturation2' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.Product2_n;
  csum = SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_n;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_b;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_k = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_k = csum;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_k = u0;
  }

  /* End of Saturate: '<S44>/Saturation2' */

  /* Gain: '<S44>/c1' */
  SpeedgoatCANOpen2Buses1ms_B.c1 = SpeedgoatCANOpen2Buses1ms_P.c1_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_k;

  /* Gain: '<S32>/Gain1' */
  SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm =
    SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_k * SpeedgoatCANOpen2Buses1ms_B.c1;

  /* Gain: '<S32>/Gain2' */
  SpeedgoatCANOpen2Buses1ms_B.Gain2_m = SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_c
    * SpeedgoatCANOpen2Buses1ms_B.tometer;

  /* Memory: '<S42>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_B.Memory1_j =
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_k;

  /* Gain: '<S32>/Gain3' */
  SpeedgoatCANOpen2Buses1ms_B.Gain3 = SpeedgoatCANOpen2Buses1ms_P.Gain3_Gain *
    SpeedgoatCANOpen2Buses1ms_B.Memory1_j;

  /* Sum: '<S46>/Sum1' */
  SpeedgoatCANOpen2Buses1ms_B.e_in_i = SpeedgoatCANOpen2Buses1ms_B.Gain2_m -
    SpeedgoatCANOpen2Buses1ms_B.Gain3;

  /* RateTransition: '<S46>/Hyst' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.Hyst_cx =
      SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0;
  }

  /* End of RateTransition: '<S46>/Hyst' */

  /* Chart: '<S46>/Comp_and_Timer' */
  SpeedgoatCAN_Comp_and_Timer(SpeedgoatCANOpen2Buses1ms_B.e_in_i,
    SpeedgoatCANOpen2Buses1ms_B.Hyst_cx,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Comp_and_Timer_b);

  /* Product: '<S46>/Product1' */
  SpeedgoatCANOpen2Buses1ms_B.Product1_a = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.e_out;

  /* Gain: '<S46>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses1ms_B.Proportional_j =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kp *
    SpeedgoatCANOpen2Buses1ms_B.Product1_a;

  /* Gain: '<S46>/Integral Gain' */
  SpeedgoatCANOpen2Buses1ms_B.IntegralGain_g =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ki *
    SpeedgoatCANOpen2Buses1ms_B.Product1_a;

  /* Delay: '<S46>/Delay' */
  SpeedgoatCANOpen2Buses1ms_B.Delay_d =
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_j;

  /* ZeroOrderHold: '<S46>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_a =
    SpeedgoatCANOpen2Buses1ms_B.Delay_d;

  /* Sum: '<S46>/Sum2' */
  SpeedgoatCANOpen2Buses1ms_B.Sum2_j =
    SpeedgoatCANOpen2Buses1ms_B.IntegralGain_g -
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_a;

  /* DiscreteIntegrator: '<S46>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_B.Integral_p =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_p *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_j +
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_h;

  /* Saturate: '<S46>/Saturation' */
  u0 = -SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Req_lim;
  csum = SpeedgoatCANOpen2Buses1ms_B.Integral_p;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_m = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_m = u0;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_m = csum;
  }

  /* End of Saturate: '<S46>/Saturation' */

  /* RateTransition: '<S46>/TmpRTBAtDerivativeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_av =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Bu_kz;

    /* RateTransition: '<S46>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_fo =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Bu_d1;
  }

  /* End of RateTransition: '<S46>/TmpRTBAtDerivativeInport2' */

  /* MATLAB Function: '<S46>/Derivative' */
  SpeedgoatCANOpen_Derivative(SpeedgoatCANOpen2Buses1ms_B.Product1_a,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_av,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_fo,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_b);

  /* DataTypeConversion: '<S46>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_b =
    SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.ud;

  /* Sum: '<S46>/Sum4' */
  SpeedgoatCANOpen2Buses1ms_B.Sum4_dx =
    (SpeedgoatCANOpen2Buses1ms_B.Proportional_j +
     SpeedgoatCANOpen2Buses1ms_B.Saturation_m) +
    SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_b;

  /* Product: '<S46>/Product2' */
  SpeedgoatCANOpen2Buses1ms_B.Product2_e = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.Sum4_dx;

  /* Saturate: '<S46>/Saturation2' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.Product2_e;
  csum = SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_i;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_f;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_g = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_g = csum;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_g = u0;
  }

  /* End of Saturate: '<S46>/Saturation2' */

  /* Gain: '<S46>/c1' */
  SpeedgoatCANOpen2Buses1ms_B.c1_f = SpeedgoatCANOpen2Buses1ms_P.c1_Gain_j *
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_g;

  /* Gain: '<S32>/Gain' */
  SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm_m =
    SpeedgoatCANOpen2Buses1ms_P.Gain_Gain * SpeedgoatCANOpen2Buses1ms_B.c1_f;

  /* RateTransition: '<S45>/Hyst' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd =
      SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0i;
  }

  /* End of RateTransition: '<S45>/Hyst' */

  /* Chart: '<S45>/Comp_and_Timer' */
  if (SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j < 63U) {
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j++;
  }

  SpeedgoatCANOpen2Buses1ms_DW.sfEvent_h = -1;
  if (SpeedgoatCANOpen2Buses1ms_DW.is_active_c10_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c10_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
      SpeedgoatCANOpen2B_IN_Standby_c;
    SpeedgoatCANOpen2Buses1ms_B.e_out = 0.0;
    SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
  } else {
    switch (SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m) {
     case SpeedgoatCANOpen2Bu_IN_Active_l:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_B.e_in_a <
        SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd) &&
        (SpeedgoatCANOpen2Buses1ms_B.e_in_a >
         -SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2B_IN_Active1_e;
        SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j = 0U;
        SpeedgoatCANOpen2Buses1ms_B.e_out = SpeedgoatCANOpen2Buses1ms_B.e_in_a;
        SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
      } else {
        SpeedgoatCANOpen2Buses1ms_B.e_out = SpeedgoatCANOpen2Buses1ms_B.e_in_a;
        SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
      }
      break;

     case SpeedgoatCANOpen2B_IN_Active1_e:
      sf_internal_predicateOutput =
        ((SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j >= 40U) &&
         (SpeedgoatCANOpen2Buses1ms_B.e_in_a <
          SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd) &&
         (SpeedgoatCANOpen2Buses1ms_B.e_in_a >
          -SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2B_IN_Standby_c;
        SpeedgoatCANOpen2Buses1ms_B.e_out = 0.0;
        SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
      } else {
        sf_internal_predicateOutput =
          ((SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j >= 40U) &&
           ((SpeedgoatCANOpen2Buses1ms_B.e_in_a >
             SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd) ||
            (SpeedgoatCANOpen2Buses1ms_B.e_in_a <
             -SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd)));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
            SpeedgoatCANOpen2Bu_IN_Active_l;
          SpeedgoatCANOpen2Buses1ms_B.e_out = SpeedgoatCANOpen2Buses1ms_B.e_in_a;
          SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
        } else {
          SpeedgoatCANOpen2Buses1ms_B.e_out = SpeedgoatCANOpen2Buses1ms_B.e_in_a;
          SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
        }
      }
      break;

     default:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses1ms_B.e_in_a >
        SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd) ||
        (SpeedgoatCANOpen2Buses1ms_B.e_in_a <
         -SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
          SpeedgoatCANOpen2Bu_IN_Active_l;
        SpeedgoatCANOpen2Buses1ms_B.e_out = SpeedgoatCANOpen2Buses1ms_B.e_in_a;
        SpeedgoatCANOpen2Buses1ms_B.timer = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S45>/Comp_and_Timer' */

  /* Product: '<S45>/Product1' */
  SpeedgoatCANOpen2Buses1ms_B.Product1_g = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.e_out;

  /* Gain: '<S45>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses1ms_B.Proportional_b =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Kp *
    SpeedgoatCANOpen2Buses1ms_B.Product1_g;

  /* Gain: '<S45>/Integral Gain' */
  SpeedgoatCANOpen2Buses1ms_B.IntegralGain_f =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Ki *
    SpeedgoatCANOpen2Buses1ms_B.Product1_g;

  /* Delay: '<S45>/Delay' */
  SpeedgoatCANOpen2Buses1ms_B.Delay_b =
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_p;

  /* ZeroOrderHold: '<S45>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_l =
    SpeedgoatCANOpen2Buses1ms_B.Delay_b;

  /* Sum: '<S45>/Sum2' */
  SpeedgoatCANOpen2Buses1ms_B.Sum2_o =
    SpeedgoatCANOpen2Buses1ms_B.IntegralGain_f -
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_l;

  /* DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_B.Integral_j =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_h *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_o +
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTAT_d1;

  /* Saturate: '<S45>/Saturation' */
  u0 = -SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Req_lim;
  csum = SpeedgoatCANOpen2Buses1ms_B.Integral_j;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_d = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_d = u0;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation_d = csum;
  }

  /* End of Saturate: '<S45>/Saturation' */

  /* RateTransition: '<S45>/TmpRTBAtDerivativeInport2' */
  if (SpeedgoatCANOpen2Buses1ms_M->Timing.RateInteraction.TID5_7) {
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_avz =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_B_kzy;

    /* RateTransition: '<S45>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_foi =
      SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_B_d1g;
  }

  /* End of RateTransition: '<S45>/TmpRTBAtDerivativeInport2' */

  /* MATLAB Function: '<S45>/Derivative' */
  SpeedgoatCANOpen_Derivative(SpeedgoatCANOpen2Buses1ms_B.Product1_g,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_avz,
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_foi,
    &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g,
    &SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_g);

  /* DataTypeConversion: '<S45>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_m =
    SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g.ud;

  /* Sum: '<S45>/Sum4' */
  SpeedgoatCANOpen2Buses1ms_B.Sum4_g =
    (SpeedgoatCANOpen2Buses1ms_B.Proportional_b +
     SpeedgoatCANOpen2Buses1ms_B.Saturation_d) +
    SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_m;

  /* Product: '<S45>/Product2' */
  SpeedgoatCANOpen2Buses1ms_B.Product2_a = (real_T)
    SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3 *
    SpeedgoatCANOpen2Buses1ms_B.Sum4_g;

  /* Saturate: '<S45>/Saturation2' */
  u0 = SpeedgoatCANOpen2Buses1ms_B.Product2_a;
  csum = SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_a;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_i;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_i = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_i = csum;
  } else {
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_i = u0;
  }

  /* End of Saturate: '<S45>/Saturation2' */

  /* Gain: '<S45>/c1' */
  SpeedgoatCANOpen2Buses1ms_B.c1_d = SpeedgoatCANOpen2Buses1ms_P.c1_Gain_e *
    SpeedgoatCANOpen2Buses1ms_B.Saturation2_i;

  /* Gain: '<S32>/Gain6' */
  SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA =
    SpeedgoatCANOpen2Buses1ms_P.Gain6_Gain * SpeedgoatCANOpen2Buses1ms_B.c1_d;

  /* RateTransition: '<S41>/DispLeft [m]' */
  SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_semaphoreTaken =
    SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_ActiveBufIdx;
  SpeedgoatCANOpen2Buses1ms_B.DispLeftm_k =
    SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_Buffer[SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_semaphoreTaken];

  /* DiscreteFilter: '<S41>/Discrete Filter' */
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_B.DispLeftm_k;
  cumRevIndex -= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef[1] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[0];
  cumRevIndex -= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef[2] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[1];
  cumRevIndex /= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef[0];
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp = cumRevIndex;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef[0] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp;
  cumRevIndex += SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef[1] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[0];
  cumRevIndex += SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef[2] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[1];
  SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter = cumRevIndex;

  /* RateTransition: '<S42>/DispRight [m]' */
  SpeedgoatCANOpen2Buses1ms_DW.DispRightm_semaphoreTaken =
    SpeedgoatCANOpen2Buses1ms_DW.DispRightm_ActiveBufIdx;
  SpeedgoatCANOpen2Buses1ms_B.DispRightm_e =
    SpeedgoatCANOpen2Buses1ms_DW.DispRightm_Buffer[SpeedgoatCANOpen2Buses1ms_DW.DispRightm_semaphoreTaken];

  /* DiscreteFilter: '<S42>/Discrete Filter' */
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_B.DispRightm_e;
  cumRevIndex -= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef_e[1] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[0];
  cumRevIndex -= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef_e[2] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[1];
  cumRevIndex /= SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef_e[0];
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp_b = cumRevIndex;
  cumRevIndex = SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef_f[0] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp_b;
  cumRevIndex += SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef_f[1] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[0];
  cumRevIndex += SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef_f[2] *
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[1];
  SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter_e = cumRevIndex;

  /* Sum: '<S43>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_c = SpeedgoatCANOpen2Buses1ms_B.Integral -
    SpeedgoatCANOpen2Buses1ms_B.Saturation_c;

  /* Gain: '<S43>/AntiWindup' */
  u0 = SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ki /
    SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kp;
  SpeedgoatCANOpen2Buses1ms_B.AntiWindup = u0 *
    SpeedgoatCANOpen2Buses1ms_B.Sum_c;

  /* Sum: '<S44>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_j = SpeedgoatCANOpen2Buses1ms_B.Integral_a -
    SpeedgoatCANOpen2Buses1ms_B.Saturation_b;

  /* Gain: '<S44>/AntiWindup' */
  u0 = SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ki /
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kp;
  SpeedgoatCANOpen2Buses1ms_B.AntiWindup_c = u0 *
    SpeedgoatCANOpen2Buses1ms_B.Sum_j;

  /* Sum: '<S45>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_d = SpeedgoatCANOpen2Buses1ms_B.Integral_j -
    SpeedgoatCANOpen2Buses1ms_B.Saturation_d;

  /* Gain: '<S45>/AntiWindup' */
  u0 = SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Ki /
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Kp;
  SpeedgoatCANOpen2Buses1ms_B.AntiWindup_p = u0 *
    SpeedgoatCANOpen2Buses1ms_B.Sum_d;

  /* Sum: '<S46>/Sum' */
  SpeedgoatCANOpen2Buses1ms_B.Sum_o = SpeedgoatCANOpen2Buses1ms_B.Integral_p -
    SpeedgoatCANOpen2Buses1ms_B.Saturation_m;

  /* Gain: '<S46>/AntiWindup' */
  u0 = SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ki /
    SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kp;
  SpeedgoatCANOpen2Buses1ms_B.AntiWindup_pe = u0 *
    SpeedgoatCANOpen2Buses1ms_B.Sum_o;
}

/* Model update function for TID5 */
static void SpeedgoatCANOpen2Buses1ms_update5(void) /* Sample time: [0.005s, 0.0s] */
{
  /* Update for RateTransition: '<S31>/Rate Transition' */
  SpeedgoatCANOpen2Buses1ms_DW.RateTransition_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4;

  /* Update for RateTransition: '<S29>/Retract_current' */
  SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o;

  /* Update for RateTransition: '<S31>/LeftTiltMotor_SpeedReq [rpm]1' */
  SpeedgoatCANOpen2Buses1ms_DW.LeftTiltMotor_SpeedReqrpm1_Buff =
    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm;

  /* Update for RateTransition: '<S31>/RightTiltMotor_SpeedReq [rpm]' */
  SpeedgoatCANOpen2Buses1ms_DW.RightTiltMotor_SpeedReqrpm_Buff =
    SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm_m;

  /* Update for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSwitchInport1_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.SpeedReq;

  /* Update for RateTransition: '<S36>/Retract_current' */
  SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0_o =
    SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq;

  /* Update for RateTransition: '<S36>/TmpRTBAtSum1Inport1' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport1_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.Delay_o;

  /* Update for Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[0] =
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[1];
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[1] =
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDelayInport1;

  /* Update for Delay: '<S43>/Delay' */
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE =
    SpeedgoatCANOpen2Buses1ms_B.AntiWindup;

  /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_d + SpeedgoatCANOpen2Buses1ms_B.Integral;

  /* Update for Memory: '<S41>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_b =
    SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter;

  /* Update for Delay: '<S44>/Delay' */
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_d =
    SpeedgoatCANOpen2Buses1ms_B.AntiWindup_c;

  /* Update for DiscreteIntegrator: '<S44>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_d =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_d *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_d4 + SpeedgoatCANOpen2Buses1ms_B.Integral_a;

  /* Update for Memory: '<S42>/Memory1' */
  SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_k =
    SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter_e;

  /* Update for Delay: '<S46>/Delay' */
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_j =
    SpeedgoatCANOpen2Buses1ms_B.AntiWindup_pe;

  /* Update for DiscreteIntegrator: '<S46>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_h =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_p *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_j + SpeedgoatCANOpen2Buses1ms_B.Integral_p;

  /* Update for RateTransition: '<S45>/DispLeft [m] filt' */
  SpeedgoatCANOpen2Buses1ms_DW.DispLeftmfilt_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_B.Memory1_l;

  /* Update for Delay: '<S45>/Delay' */
  SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_p =
    SpeedgoatCANOpen2Buses1ms_B.AntiWindup_p;

  /* Update for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTAT_d1 =
    SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_h *
    SpeedgoatCANOpen2Buses1ms_B.Sum2_o + SpeedgoatCANOpen2Buses1ms_B.Integral_j;

  /* Update for DiscreteFilter: '<S41>/Discrete Filter' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[1] =
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[0];
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[0] =
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp;

  /* Update for DiscreteFilter: '<S42>/Discrete Filter' */
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[1] =
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[0];
  SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[0] =
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_tmp_b;

  /* Update absolute time */
  /* The "clockTick5" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick5"
   * and "Timing.stepSize5". Size of "clockTick5" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick5 and the high bits
   * Timing.clockTickH5. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick5)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH5;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[5] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick5 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize5 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH5 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize5 * 4294967296.0;
}

/* Model output function for TID6 */
static void SpeedgoatCANOpen2Buses1ms_output6(void) /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;

  /* Sin: '<S16>/Sine Wave' */
  if (SpeedgoatCANOpen2Buses1ms_DW.systemEnable != 0) {
    SpeedgoatCANOpen2Buses1ms_DW.lastSin = sin
      (SpeedgoatCANOpen2Buses1ms_P.SineWave_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[6]);
    SpeedgoatCANOpen2Buses1ms_DW.lastCos = cos
      (SpeedgoatCANOpen2Buses1ms_P.SineWave_Freq *
       SpeedgoatCANOpen2Buses1ms_M->Timing.t[6]);
    SpeedgoatCANOpen2Buses1ms_DW.systemEnable = 0;
  }

  SpeedgoatCANOpen2Buses1ms_B.SineWave = ((SpeedgoatCANOpen2Buses1ms_DW.lastSin *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_PCos +
    SpeedgoatCANOpen2Buses1ms_DW.lastCos *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_PSin) *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_HCos +
    (SpeedgoatCANOpen2Buses1ms_DW.lastCos *
     SpeedgoatCANOpen2Buses1ms_P.SineWave_PCos -
     SpeedgoatCANOpen2Buses1ms_DW.lastSin *
     SpeedgoatCANOpen2Buses1ms_P.SineWave_PSin) *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_Hsin) *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_Amp +
    SpeedgoatCANOpen2Buses1ms_P.SineWave_Bias;

  /* End of Sin: '<S16>/Sine Wave' */

  /* DataTypeConversion: '<S16>/Cast To Single' */
  tmp = floor(SpeedgoatCANOpen2Buses1ms_B.SineWave);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.AN_01 = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S16>/Cast To Single' */

  /* DataTypeConversion: '<S16>/Cast To Single1' */
  tmp = floor(SpeedgoatCANOpen2Buses1ms_B.SineWave);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.AN_02 = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S16>/Cast To Single1' */

  /* DataTypeConversion: '<S16>/Cast To Single2' */
  tmp = floor(SpeedgoatCANOpen2Buses1ms_B.SineWave);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.AN_03 = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S16>/Cast To Single2' */

  /* DataTypeConversion: '<S16>/Cast To Single3' */
  tmp = floor(SpeedgoatCANOpen2Buses1ms_B.SineWave);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  SpeedgoatCANOpen2Buses1ms_B.AN_04 = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S16>/Cast To Single3' */
}

/* Model update function for TID6 */
static void SpeedgoatCANOpen2Buses1ms_update6(void) /* Sample time: [0.1s, 0.0s] */
{
  real_T HoldSine;
  real_T HoldCosine;

  /* Update for Sin: '<S16>/Sine Wave' */
  HoldSine = SpeedgoatCANOpen2Buses1ms_DW.lastSin;
  HoldCosine = SpeedgoatCANOpen2Buses1ms_DW.lastCos;
  SpeedgoatCANOpen2Buses1ms_DW.lastSin = HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_HCos + HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_Hsin;
  SpeedgoatCANOpen2Buses1ms_DW.lastCos = HoldCosine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_HCos - HoldSine *
    SpeedgoatCANOpen2Buses1ms_P.SineWave_Hsin;

  /* Update absolute time */
  /* The "clockTick6" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick6"
   * and "Timing.stepSize6". Size of "clockTick6" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick6 and the high bits
   * Timing.clockTickH6. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick6)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH6;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[6] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick6 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize6 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH6 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize6 * 4294967296.0;
}

/* Model output function for TID7 */
static void SpeedgoatCANOpen2Buses1ms_output7(void) /* Sample time: [1.0s, 0.0s] */
{
  /* Outputs for Enabled SubSystem: '<S17>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i) {
    srUpdateBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC_f);
  }

  /* End of Outputs for SubSystem: '<S17>/CAN TX Wrapper' */

  /* Outputs for Enabled SubSystem: '<S18>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE) {
    srUpdateBC(SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S18>/CAN TX Wrapper' */

  /* Constant: '<S3>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Enable_c =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_ej;

  /* Constant: '<S9>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Enable_l =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_p;

  /* Constant: '<S43>/Constant3' */
  SpeedgoatCANOpen2Buses1ms_B.Hyst_g =
    SpeedgoatCANOpen2Buses1ms_P.Constant3_Value;

  /* Gain: '<S44>/degree2m' incorporates:
   *  Constant: '<S44>/Constant3'
   */
  SpeedgoatCANOpen2Buses1ms_B.Hyst_n =
    SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_d *
    SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_d;

  /* Gain: '<S45>/degree2m' incorporates:
   *  Constant: '<S45>/Constant3'
   */
  SpeedgoatCANOpen2Buses1ms_B.Hyst_e =
    SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_b *
    SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_i;

  /* Gain: '<S46>/degree2m' incorporates:
   *  Constant: '<S46>/Constant3'
   */
  SpeedgoatCANOpen2Buses1ms_B.Hyst_i =
    SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_j *
    SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_a;

  /* Constant: '<S65>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Constant =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_h;

  /* Constant: '<S69>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Constant_j =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_l;

  /* Constant: '<S70>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Constant_m =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_j;

  /* Constant: '<S71>/Constant' */
  SpeedgoatCANOpen2Buses1ms_B.Constant_e =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_n;
}

/* Model update function for TID7 */
static void SpeedgoatCANOpen2Buses1ms_update7(void) /* Sample time: [1.0s, 0.0s] */
{
  /* Update for Enabled SubSystem: '<S17>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i) {
    /* Update for RateTransition: '<S20>/TmpRTBAtCAN WriteInport2' incorporates:
     *  Constant: '<S20>/Constant'
     */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffe_m =
      SpeedgoatCANOpen2Buses1ms_P.Constant_Value_k;
  }

  /* End of Update for SubSystem: '<S17>/CAN TX Wrapper' */

  /* Update for Enabled SubSystem: '<S18>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE) {
    /* Update for RateTransition: '<S22>/TmpRTBAtCAN WriteInport2' incorporates:
     *  Constant: '<S22>/Constant'
     */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.Constant_Value_nv;
  }

  /* End of Update for SubSystem: '<S18>/CAN TX Wrapper' */

  /* Update for RateTransition: '<S69>/TmpRTBAtDunkA_Steering_Init_SpeedModeInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkA_Steering_Init_Spe =
    SpeedgoatCANOpen2Buses1ms_B.Constant_j;

  /* Update for RateTransition: '<S70>/TmpRTBAtDunkC_TiltLeft_Init_CurrentModeInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkC_TiltLeft_Init_Cur =
    SpeedgoatCANOpen2Buses1ms_B.Constant_m;

  /* Update for RateTransition: '<S71>/TmpRTBAtDunkB_TiltRight_Init_CurrentModeInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkB_TiltRight_Init_Cu =
    SpeedgoatCANOpen2Buses1ms_B.Constant_e;

  /* Update for RateTransition: '<S65>/TmpRTBAtDunkD_Brake_Init_CurrentModeInport2' */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkD_Brake_Init_Curren =
    SpeedgoatCANOpen2Buses1ms_B.Constant;

  /* Update for RateTransition: '<S31>/TmpRTBAtConstantOutport1' incorporates:
   *  Constant: '<S31>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtConstantOutport1_Buffer =
    SpeedgoatCANOpen2Buses1ms_P.Constant_Value_i;

  /* Update for RateTransition: '<S36>/TmpRTBAtSumInport2' incorporates:
   *  Constant: '<S36>/offset'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_P.offset_Value;

  /* Update for RateTransition: '<S30>/TmpRTBAtSumInport2' incorporates:
   *  Constant: '<S30>/Offset to 0 pos => pos = [-180 180]deg'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_o =
    SpeedgoatCANOpen2Buses1ms_P.Offsetto0pospos180180deg_Value;

  /* Update for RateTransition: '<S43>/Hyst' */
  SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0 = SpeedgoatCANOpen2Buses1ms_B.Hyst_g;

  /* Update for RateTransition: '<S43>/TmpRTBAtDerivativeInport2' incorporates:
   *  Constant: '<S43>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buffe =
    SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kd;

  /* Update for RateTransition: '<S43>/TmpRTBAtDerivativeInport3' incorporates:
   *  Constant: '<S43>/Constant1'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buffe =
    SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ts;

  /* Update for RateTransition: '<S44>/Hyst' */
  SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e =
    SpeedgoatCANOpen2Buses1ms_B.Hyst_n;

  /* Update for RateTransition: '<S44>/TmpRTBAtDerivativeInport2' incorporates:
   *  Constant: '<S44>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buf_k =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kd;

  /* Update for RateTransition: '<S44>/TmpRTBAtDerivativeInport3' incorporates:
   *  Constant: '<S44>/Constant1'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buf_d =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ts;

  /* Update for RateTransition: '<S46>/Hyst' */
  SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0 =
    SpeedgoatCANOpen2Buses1ms_B.Hyst_i;

  /* Update for RateTransition: '<S46>/TmpRTBAtDerivativeInport2' incorporates:
   *  Constant: '<S46>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Bu_kz =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kd;

  /* Update for RateTransition: '<S46>/TmpRTBAtDerivativeInport3' incorporates:
   *  Constant: '<S46>/Constant1'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Bu_d1 =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ts;

  /* Update for RateTransition: '<S45>/Hyst' */
  SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0i =
    SpeedgoatCANOpen2Buses1ms_B.Hyst_e;

  /* Update for RateTransition: '<S45>/TmpRTBAtDerivativeInport2' incorporates:
   *  Constant: '<S45>/Constant'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_B_kzy =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Kd;

  /* Update for RateTransition: '<S45>/TmpRTBAtDerivativeInport3' incorporates:
   *  Constant: '<S45>/Constant1'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_B_d1g =
    SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Ts;

  /* Update for RateTransition: '<S41>/TmpRTBAtSumInport2' incorporates:
   *  Constant: '<S41>/Offset for 0 deg'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_os =
    SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value;

  /* Update for RateTransition: '<S42>/TmpRTBAtSumInport2' incorporates:
   *  Constant: '<S42>/Offset for 0 deg'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_osg =
    SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value_f;

  /* Update for RateTransition: '<S32>/TmpRTBAtSum1Inport2' incorporates:
   *  Constant: '<S32>/Constant3'
   */
  SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0 =
    SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_o;

  /* Update absolute time */
  /* The "clockTick7" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick7"
   * and "Timing.stepSize7". Size of "clockTick7" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick7 and the high bits
   * Timing.clockTickH7. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick7)) {
    ++SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH7;
  }

  SpeedgoatCANOpen2Buses1ms_M->Timing.t[7] =
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTick7 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize7 +
    SpeedgoatCANOpen2Buses1ms_M->Timing.clockTickH7 *
    SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize7 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void SpeedgoatCANOpen2Buses1ms_output(int_T tid)
{
  switch (tid) {
   case 0 :
    SpeedgoatCANOpen2Buses1ms_output0();
    break;

   case 2 :
    SpeedgoatCANOpen2Buses1ms_output2();
    break;

   case 3 :
    SpeedgoatCANOpen2Buses1ms_output3();
    break;

   case 4 :
    SpeedgoatCANOpen2Buses1ms_output4();
    break;

   case 5 :
    SpeedgoatCANOpen2Buses1ms_output5();
    break;

   case 6 :
    SpeedgoatCANOpen2Buses1ms_output6();
    break;

   case 7 :
    SpeedgoatCANOpen2Buses1ms_output7();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void SpeedgoatCANOpen2Buses1ms_update(int_T tid)
{
  switch (tid) {
   case 0 :
    SpeedgoatCANOpen2Buses1ms_update0();
    break;

   case 2 :
    SpeedgoatCANOpen2Buses1ms_update2();
    break;

   case 3 :
    SpeedgoatCANOpen2Buses1ms_update3();
    break;

   case 4 :
    SpeedgoatCANOpen2Buses1ms_update4();
    break;

   case 5 :
    SpeedgoatCANOpen2Buses1ms_update5();
    break;

   case 6 :
    SpeedgoatCANOpen2Buses1ms_update6();
    break;

   case 7 :
    SpeedgoatCANOpen2Buses1ms_update7();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void SpeedgoatCANOpen2Buses1ms_initialize(void)
{
  {
    dsp_simulink_MovingAverage_Sp_T *b_obj;
    dsp_private_SlidingWindowAver_T *iobj_0;
    dsp_simulink_MovingAverage_Sp_T *obj;
    dsp_simulink_MovingAverage_a_T *b_obj_0;
    dsp_private_SlidingWindowAv_a_T *iobj_0_0;
    dsp_simulink_MovingAverage_a_T *obj_0;

    /* Start for S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */
    /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
    /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S17>/CAN TX Wrapper' */
    SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE_i = false;

    /* Start for RateTransition: '<S20>/TmpRTBAtCAN WriteInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2_j =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtCANWriteInport2_Initial;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S17>/CAN TX Wrapper' */
    /* Start for S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */
    /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S18>/CAN TX Wrapper' */
    SpeedgoatCANOpen2Buses1ms_DW.CANTXWrapper_MODE = false;

    /* Start for RateTransition: '<S22>/TmpRTBAtCAN WriteInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtCANWriteInport2_Initi_j;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */
    /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S18>/CAN TX Wrapper' */
    /* Start for RateTransition: '<S27>/Joystick_ButtonsStatus' */
    SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_ButtonsStatus_InitialC;

    /* Start for RateTransition: '<S27>/Joystick_LongCmd' */
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_LongCmd_InitialConditi;

    /* Start for RateTransition: '<S31>/TractionReq' */
    SpeedgoatCANOpen2Buses1ms_B.TractionReq =
      SpeedgoatCANOpen2Buses1ms_P.TractionReq_InitialCondition;

    /* Start for RateTransition: '<S69>/TmpRTBAtDunkA_Steering_Init_SpeedModeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkA_Steering_Init_Spe =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkA_Steering_Init_Spe;

    /* Start for RateTransition: '<S70>/TmpRTBAtDunkC_TiltLeft_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkC_TiltLeft_Init_Cur =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkC_TiltLeft_Init_Cur;

    /* Start for RateTransition: '<S71>/TmpRTBAtDunkB_TiltRight_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkB_TiltRight_Init_Cu =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkB_TiltRight_Init_Cu;

    /* Start for RateTransition: '<S65>/TmpRTBAtDunkD_Brake_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDunkD_Brake_Init_Curren =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkD_Brake_Init_Curren;

    /* Start for RateTransition: '<S31>/TmpRTBAtConstantOutport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtConstantOutport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtConstantOutport1_Initia;

    /* Start for RateTransition: '<S31>/Rate Transition' */
    SpeedgoatCANOpen2Buses1ms_B.RateTransition =
      SpeedgoatCANOpen2Buses1ms_P.RateTransition_InitialCondition;

    /* Start for RateTransition: '<S29>/Retract_current' */
    SpeedgoatCANOpen2Buses1ms_B.Retract_current =
      SpeedgoatCANOpen2Buses1ms_P.Retract_current_InitialConditio;

    /* Start for RateTransition: '<S31>/LeftTiltMotor_SpeedReq [rpm]1' */
    SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm1 =
      SpeedgoatCANOpen2Buses1ms_P.LeftTiltMotor_SpeedReqrpm1_Init;

    /* Start for RateTransition: '<S31>/RightTiltMotor_SpeedReq [rpm]' */
    SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm =
      SpeedgoatCANOpen2Buses1ms_P.RightTiltMotor_SpeedReqrpm_Init;

    /* Start for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSwitchInport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSwitchInport1_InitialCo;

    /* Start for RateTransition: '<S36>/TmpRTBAtSum2Inport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum2Inport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum2Inport1_InitialCond;

    /* Start for RateTransition: '<S36>/Retract_current' */
    SpeedgoatCANOpen2Buses1ms_B.Retract_current_m =
      SpeedgoatCANOpen2Buses1ms_P.Retract_current_InitialCondit_j;

    /* Start for RateTransition: '<S29>/Joystick_LongCmd1' */
    SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd1 =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_LongCmd1_InitialCondit;

    /* Start for RateTransition: '<S36>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCondi;

    /* Start for RateTransition: '<S36>/TmpRTBAtSum1Inport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport1_InitialCond;

    /* Start for RateTransition: '<S36>/TmpRTBAtSum1Inport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2_o =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport2_InitialCo_j;

    /* Start for RateTransition: '<S36>/TmpRTBAtRetractInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtRetractInport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtRetractInport2_InitialC;

    /* Start for RateTransition: '<S36>/TmpRTBAtDelayInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDelayInport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDelayInport1_InitialCon;

    /* Start for MATLABSystem: '<S30>/Moving Average' */
    SpeedgoatCANOpen2Buses1ms_DW.obj.matlabCodegenIsDeleted = true;
    b_obj = &SpeedgoatCANOpen2Buses1ms_DW.obj;
    b_obj->isInitialized = 0;
    b_obj->NumChannels = -1;
    b_obj->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses1ms_DW.objisempty_h = true;
    b_obj = &SpeedgoatCANOpen2Buses1ms_DW.obj;
    iobj_0 = &SpeedgoatCANOpen2Buses1ms_DW.gobj_0_j;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1;
    obj = b_obj;
    obj->NumChannels = 1;
    iobj_0->isInitialized = 0;
    obj->pStatistic = iobj_0;
    b_obj->isSetupComplete = true;
    b_obj->TunablePropsChanged = false;

    /* Start for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtPControllerInport1_Init;

    /* Start for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtPControllerInport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtPControllerInport2_Init;

    /* Start for RateTransition: '<S30>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_m =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCon_j;

    /* Start for RateTransition: '<S32>/TiltingAngle_sinreq [deg]' */
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg =
      SpeedgoatCANOpen2Buses1ms_P.TiltingAngle_sinreqdeg_InitialC;

    /* Start for RateTransition: '<S32>/TiltingAngle [deg]' */
    SpeedgoatCANOpen2Buses1ms_B.TiltingAngledeg =
      SpeedgoatCANOpen2Buses1ms_P.TiltingAngledeg_InitialConditio;

    /* Start for RateTransition: '<S32>/Y_Angle' */
    SpeedgoatCANOpen2Buses1ms_B.Fb_Angledeg =
      SpeedgoatCANOpen2Buses1ms_P.Y_Angle_InitialCondition;

    /* Start for MATLABSystem: '<S32>/Moving Average' */
    SpeedgoatCANOpen2Buses1ms_DW.obj_b.matlabCodegenIsDeleted = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses1ms_DW.obj_b;
    b_obj_0->isInitialized = 0;
    b_obj_0->NumChannels = -1;
    b_obj_0->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses1ms_DW.objisempty = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses1ms_DW.obj_b;
    iobj_0_0 = &SpeedgoatCANOpen2Buses1ms_DW.gobj_0;
    b_obj_0->isSetupComplete = false;
    b_obj_0->isInitialized = 1;
    obj_0 = b_obj_0;
    obj_0->NumChannels = 1;
    iobj_0_0->isInitialized = 0;
    obj_0->pStatistic = iobj_0_0;
    b_obj_0->isSetupComplete = true;
    b_obj_0->TunablePropsChanged = false;

    /* Start for RateTransition: '<S43>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_B.Hyst =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition;

    /* Start for RateTransition: '<S43>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_Initi;

    /* Start for RateTransition: '<S43>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_Initi;

    /* Start for RateTransition: '<S44>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_B.Hyst_c =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_j;

    /* Start for RateTransition: '<S44>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_a =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_Ini_j;

    /* Start for RateTransition: '<S44>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_f =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_Ini_j;

    /* Start for RateTransition: '<S46>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_B.Hyst_cx =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_jx;

    /* Start for RateTransition: '<S46>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_av =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_In_jx;

    /* Start for RateTransition: '<S46>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_fo =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_In_jx;

    /* Start for RateTransition: '<S45>/DispLeft [m] filt' */
    SpeedgoatCANOpen2Buses1ms_B.DispLeftmfilt =
      SpeedgoatCANOpen2Buses1ms_P.DispLeftmfilt_InitialCondition;

    /* Start for RateTransition: '<S45>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_B.Hyst_cxd =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_jxk;

    /* Start for RateTransition: '<S45>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport2_avz =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_I_jxk;

    /* Start for RateTransition: '<S45>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtDerivativeInport3_foi =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_I_jxk;

    /* Start for RateTransition: '<S32>/TmpRTBAtServoTiltingInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtServoTiltingInport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtServoTiltingInport1_Ini;

    /* Start for RateTransition: '<S41>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mb =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCo_jx;

    /* Start for RateTransition: '<S41>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses1ms_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses1ms_P.DispLeftm_InitialCondition;

    /* Start for RateTransition: '<S42>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSumInport2_mbd =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialC_jxk;

    /* Start for RateTransition: '<S42>/DispRight [m]' */
    SpeedgoatCANOpen2Buses1ms_B.DispRightm_e =
      SpeedgoatCANOpen2Buses1ms_P.DispRightm_InitialCondition;

    /* Start for RateTransition: '<S32>/TmpRTBAtSum1Inport2' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtSum1Inport2 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport2_InitialCond;

    /* Start for RateTransition: '<S32>/TmpRTBAtManual SwitchInport1' */
    SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtManualSwitchInport1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtManualSwitchInport1_Ini;
  }

  {
    dsp_simulink_MovingAverage_a_T *obj;
    dsp_private_SlidingWindowAv_a_T *obj_0;

    /* user code (Initialize function Body) */
    CANOpenSlave_ResetCommunication();
    CANOpenSlave_ResetCommunication_APT();

    /* InitializeConditions for RateTransition: '<S27>/Joystick_ButtonsStatus' */
    SpeedgoatCANOpen2Buses1ms_DW.Joystick_ButtonsStatus_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_ButtonsStatus_InitialC;

    /* InitializeConditions for RateTransition: '<S27>/Joystick_LongCmd' */
    SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_LongCmd_InitialConditi;

    /* InitializeConditions for RateTransition: '<S31>/TractionReq' */
    SpeedgoatCANOpen2Buses1ms_DW.TractionReq_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TractionReq_InitialCondition;

    /* InitializeConditions for RateTransition: '<S69>/TmpRTBAtDunkA_Steering_Init_SpeedModeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkA_Steering_Init_Spe =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkA_Steering_Init_Spe;

    /* InitializeConditions for RateTransition: '<S70>/TmpRTBAtDunkC_TiltLeft_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkC_TiltLeft_Init_Cur =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkC_TiltLeft_Init_Cur;

    /* InitializeConditions for RateTransition: '<S71>/TmpRTBAtDunkB_TiltRight_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkB_TiltRight_Init_Cu =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkB_TiltRight_Init_Cu;

    /* InitializeConditions for RateTransition: '<S65>/TmpRTBAtDunkD_Brake_Init_CurrentModeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDunkD_Brake_Init_Curren =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDunkD_Brake_Init_Curren;

    /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtConstantOutport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtConstantOutport1_Buffer =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtConstantOutport1_Initia;

    /* InitializeConditions for RateTransition: '<S31>/Rate Transition' */
    SpeedgoatCANOpen2Buses1ms_DW.RateTransition_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.RateTransition_InitialCondition;

    /* InitializeConditions for RateTransition: '<S29>/Retract_current' */
    SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.Retract_current_InitialConditio;

    /* InitializeConditions for RateTransition: '<S31>/LeftTiltMotor_SpeedReq [rpm]1' */
    SpeedgoatCANOpen2Buses1ms_DW.LeftTiltMotor_SpeedReqrpm1_Buff =
      SpeedgoatCANOpen2Buses1ms_P.LeftTiltMotor_SpeedReqrpm1_Init;

    /* InitializeConditions for RateTransition: '<S31>/RightTiltMotor_SpeedReq [rpm]' */
    SpeedgoatCANOpen2Buses1ms_DW.RightTiltMotor_SpeedReqrpm_Buff =
      SpeedgoatCANOpen2Buses1ms_P.RightTiltMotor_SpeedReqrpm_Init;

    /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSwitchInport1_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSwitchInport1_InitialCo;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtSum2Inport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum2Inport1_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum2Inport1_InitialCond;

    /* InitializeConditions for RateTransition: '<S36>/Retract_current' */
    SpeedgoatCANOpen2Buses1ms_DW.Retract_current_Buffer0_o =
      SpeedgoatCANOpen2Buses1ms_P.Retract_current_InitialCondit_j;

    /* InitializeConditions for RateTransition: '<S29>/Joystick_LongCmd1' */
    SpeedgoatCANOpen2Buses1ms_DW.Joystick_LongCmd1_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.Joystick_LongCmd1_InitialCondit;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCondi;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtSum1Inport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport1_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport1_InitialCond;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtSum1Inport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0_a =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport2_InitialCo_j;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtRetractInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtRetractInport2_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtRetractInport2_InitialC;

    /* InitializeConditions for Delay: '<S36>/Delay' */
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[0] =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_m;
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_f[1] =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_m;

    /* InitializeConditions for RateTransition: '<S36>/TmpRTBAtDelayInport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDelayInport1_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDelayInport1_InitialCon;

    /* InitializeConditions for Memory: '<S30>/Memory1' */
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput =
      SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition;

    /* InitializeConditions for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport1_Buff[0] =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtPControllerInport1_Init;

    /* InitializeConditions for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtPControllerInport2_Buff[0] =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtPControllerInport2_Init;

    /* InitializeConditions for RateTransition: '<S30>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_o =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCon_j;

    /* InitializeConditions for RateTransition: '<S32>/TiltingAngle_sinreq [deg]' */
    SpeedgoatCANOpen2Buses1ms_DW.TiltingAngle_sinreqdeg_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TiltingAngle_sinreqdeg_InitialC;

    /* InitializeConditions for RateTransition: '<S32>/TiltingAngle [deg]' */
    SpeedgoatCANOpen2Buses1ms_DW.TiltingAngledeg_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TiltingAngledeg_InitialConditio;

    /* InitializeConditions for RateTransition: '<S32>/Y_Angle' */
    SpeedgoatCANOpen2Buses1ms_DW.Y_Angle_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.Y_Angle_InitialCondition;

    /* InitializeConditions for RateTransition: '<S43>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition;

    /* InitializeConditions for Delay: '<S43>/Delay' */
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buffe =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_Initi;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buffe =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_Initi;

    /* InitializeConditions for Memory: '<S41>/Memory1' */
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_b =
      SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_k;

    /* InitializeConditions for RateTransition: '<S44>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_j;

    /* InitializeConditions for Delay: '<S44>/Delay' */
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_d =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_p;

    /* InitializeConditions for DiscreteIntegrator: '<S44>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_d =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_j;

    /* InitializeConditions for RateTransition: '<S44>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Buf_k =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_Ini_j;

    /* InitializeConditions for RateTransition: '<S44>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Buf_d =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_Ini_j;

    /* InitializeConditions for Memory: '<S42>/Memory1' */
    SpeedgoatCANOpen2Buses1ms_DW.Memory1_PreviousInput_k =
      SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_o;

    /* InitializeConditions for RateTransition: '<S46>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0 =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_jx;

    /* InitializeConditions for Delay: '<S46>/Delay' */
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_j =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_g;

    /* InitializeConditions for DiscreteIntegrator: '<S46>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTATE_h =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_d;

    /* InitializeConditions for RateTransition: '<S46>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_Bu_kz =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_In_jx;

    /* InitializeConditions for RateTransition: '<S46>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_Bu_d1 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_In_jx;

    /* InitializeConditions for RateTransition: '<S45>/DispLeft [m] filt' */
    SpeedgoatCANOpen2Buses1ms_DW.DispLeftmfilt_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.DispLeftmfilt_InitialCondition;

    /* InitializeConditions for RateTransition: '<S45>/Hyst' */
    SpeedgoatCANOpen2Buses1ms_DW.Hyst_Buffer0_e0i =
      SpeedgoatCANOpen2Buses1ms_P.Hyst_InitialCondition_jxk;

    /* InitializeConditions for Delay: '<S45>/Delay' */
    SpeedgoatCANOpen2Buses1ms_DW.Delay_DSTATE_p =
      SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_gi;

    /* InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteTimeIntegrator_DSTAT_d1 =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_o;

    /* InitializeConditions for RateTransition: '<S45>/TmpRTBAtDerivativeInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport2_B_kzy =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport2_I_jxk;

    /* InitializeConditions for RateTransition: '<S45>/TmpRTBAtDerivativeInport3' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtDerivativeInport3_B_d1g =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtDerivativeInport3_I_jxk;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtServoTiltingInport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtServoTiltingInport1_Buf =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtServoTiltingInport1_Ini;

    /* InitializeConditions for RateTransition: '<S41>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_os =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialCo_jx;

    /* InitializeConditions for RateTransition: '<S41>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses1ms_DW.DispLeftm_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.DispLeftm_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S41>/Discrete Filter' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[0] =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates;
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states[1] =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates;

    /* InitializeConditions for RateTransition: '<S42>/TmpRTBAtSumInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSumInport2_Buffer0_osg =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSumInport2_InitialC_jxk;

    /* InitializeConditions for RateTransition: '<S42>/DispRight [m]' */
    SpeedgoatCANOpen2Buses1ms_DW.DispRightm_Buffer[0] =
      SpeedgoatCANOpen2Buses1ms_P.DispRightm_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S42>/Discrete Filter' */
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[0] =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates_h;
    SpeedgoatCANOpen2Buses1ms_DW.DiscreteFilter_states_b[1] =
      SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates_h;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtSum1Inport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtSum1Inport2_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtSum1Inport2_InitialCond;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtManual SwitchInport1' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtManualSwitchInport1_Buf =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtManualSwitchInport1_Ini;

    /* SystemInitialize for Enabled SubSystem: '<S17>/CAN TX Wrapper' */
    /* InitializeConditions for RateTransition: '<S20>/TmpRTBAtCAN WriteInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffe_m =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtCANWriteInport2_Initial;

    /* End of SystemInitialize for SubSystem: '<S17>/CAN TX Wrapper' */

    /* SystemInitialize for Enabled SubSystem: '<S18>/CAN TX Wrapper' */
    /* InitializeConditions for RateTransition: '<S22>/TmpRTBAtCAN WriteInport2' */
    SpeedgoatCANOpen2Buses1ms_DW.TmpRTBAtCANWriteInport2_Buffer0 =
      SpeedgoatCANOpen2Buses1ms_P.TmpRTBAtCANWriteInport2_Initi_j;

    /* End of SystemInitialize for SubSystem: '<S18>/CAN TX Wrapper' */

    /* SystemInitialize for Chart: '<S69>/DunkA_Steering_Init_SpeedMode' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_a = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c12_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c12_SpeedgoatCANOpen2Buses1m =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for Chart: '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_c = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c2_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c2_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for Chart: '<S71>/DunkB_TiltRight_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c1_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c1_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for Chart: '<S65>/DunkD_Brake_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_j = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c3_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c3_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for Chart: '<S27>/EnableCtrl' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_n = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c4_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c4_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for MATLAB Function: '<S24>/HeartBeatgenerator' */
    SpeedgoatCANOpen2Buses1ms_DW.Heartbeat = 0.0;
    SpeedgoatCANOpen2Buses1ms_DW.tact = 0.0;

    /* SystemInitialize for Chart: '<S29>/DecisionBrakeCtrl' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_e = -1;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c13_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c13_SpeedgoatCANOpen2Buses1m =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for Chart: '<S36>/Retract' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_h1 = -1;
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1 = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c5_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c5_SpeedgoatCANOpen2Buses1ms =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* InitializeConditions for MATLABSystem: '<S32>/Moving Average' */
    obj = &SpeedgoatCANOpen2Buses1ms_DW.obj_b;
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->pCumSum = 0.0;
      obj_0->pCumSumRev[0] = 0.0;
      obj_0->pCumSumRev[1] = 0.0;
      obj_0->pCumSumRev[2] = 0.0;
      obj_0->pCumSumRev[3] = 0.0;
      obj_0->pCumSumRev[4] = 0.0;
      obj_0->pCumSumRev[5] = 0.0;
      obj_0->pCumSumRev[6] = 0.0;
      obj_0->pCumSumRev[7] = 0.0;
      obj_0->pCumSumRev[8] = 0.0;
      obj_0->pCumRevIndex = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S32>/Moving Average' */

    /* SystemInitialize for Chart: '<S43>/Comp_and_Timer' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_o = -1;
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_m = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c14_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c14_SpeedgoatCANOpen2Buses1m =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for MATLAB Function: '<S43>/Derivative' */
    SpeedgoatCA_Derivative_Init(&SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative);

    /* SystemInitialize for Chart: '<S44>/Comp_and_Timer' */
    Speedgo_Comp_and_Timer_Init
      (&SpeedgoatCANOpen2Buses1ms_DW.sf_Comp_and_Timer_f);

    /* SystemInitialize for MATLAB Function: '<S44>/Derivative' */
    SpeedgoatCA_Derivative_Init(&SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_f);

    /* SystemInitialize for Chart: '<S46>/Comp_and_Timer' */
    Speedgo_Comp_and_Timer_Init
      (&SpeedgoatCANOpen2Buses1ms_DW.sf_Comp_and_Timer_b);

    /* SystemInitialize for MATLAB Function: '<S46>/Derivative' */
    SpeedgoatCA_Derivative_Init(&SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_b);

    /* SystemInitialize for Chart: '<S45>/Comp_and_Timer' */
    SpeedgoatCANOpen2Buses1ms_DW.sfEvent_h = -1;
    SpeedgoatCANOpen2Buses1ms_DW.temporalCounter_i1_j = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_active_c10_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses1ms_DW.is_c10_SpeedgoatCANOpen2Buses1m =
      SpeedgoatC_IN_NO_ACTIVE_CHILD_e;

    /* SystemInitialize for MATLAB Function: '<S45>/Derivative' */
    SpeedgoatCA_Derivative_Init(&SpeedgoatCANOpen2Buses1ms_DW.sf_Derivative_g);
  }

  /* Enable for Sin: '<S16>/Sine Wave' */
  SpeedgoatCANOpen2Buses1ms_DW.systemEnable = 1;

  /* Enable for Sin: '<S32>/Sine Wave1' */
  SpeedgoatCANOpen2Buses1ms_DW.systemEnable_k = 1;

  /* Enable for Sin: '<S32>/Sine Wave2' */
  SpeedgoatCANOpen2Buses1ms_DW.systemEnable_e = 1;
}

/* Model terminate function */
static void SpeedgoatCANOpen2Buses1ms_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */
  /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S17>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
  /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S17>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */
  /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S18>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */
  /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S18>/CAN TX Wrapper' */

  /* Terminate for MATLABSystem: '<S30>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses1ms_DW.obj);

  /* Terminate for MATLABSystem: '<S32>/Moving Average' */
  matlabCodegenHandle_matlabCod_a(&SpeedgoatCANOpen2Buses1ms_DW.obj_b);
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  if (tid == 1)
    tid = 0;
  SpeedgoatCANOpen2Buses1ms_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  SpeedgoatCANOpen2Buses1ms_update(tid);
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
  SpeedgoatCANOpen2Buses1ms_initialize();
}

void MdlTerminate(void)
{
  SpeedgoatCANOpen2Buses1ms_terminate();
}

/* Registration function */
RT_MODEL_SpeedgoatCANOpen2Buses1ms_T *SpeedgoatCANOpen2Buses1ms(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SpeedgoatCANOpen2Buses1ms_M, 0,
                sizeof(RT_MODEL_SpeedgoatCANOpen2Buses1ms_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,
                          &SpeedgoatCANOpen2Buses1ms_M->Timing.simTimeStep);
    rtsiSetTPtr(&SpeedgoatCANOpen2Buses1ms_M->solverInfo, &rtmGetTPtr
                (SpeedgoatCANOpen2Buses1ms_M));
    rtsiSetStepSizePtr(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,
                       &SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,
                          (&rtmGetErrorStatus(SpeedgoatCANOpen2Buses1ms_M)));
    rtsiSetRTModelPtr(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,
                      SpeedgoatCANOpen2Buses1ms_M);
  }

  rtsiSetSimTimeStep(&SpeedgoatCANOpen2Buses1ms_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,"FixedStepDiscrete");
  SpeedgoatCANOpen2Buses1ms_M->solverInfoPtr =
    (&SpeedgoatCANOpen2Buses1ms_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    mdlTsMap[4] = 4;
    mdlTsMap[5] = 5;
    mdlTsMap[6] = 6;
    mdlTsMap[7] = 7;
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[1] = (0.0001);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[2] = (0.0005);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[3] = (0.001);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[4] = (0.002);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[5] = (0.005);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[6] = (0.1);
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleTimes[7] = (1.0);

    /* task offsets */
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[1] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[2] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[3] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[4] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[5] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[6] = (0.0);
    SpeedgoatCANOpen2Buses1ms_M->Timing.offsetTimes[7] = (0.0);
  }

  rtmSetTPtr(SpeedgoatCANOpen2Buses1ms_M,
             &SpeedgoatCANOpen2Buses1ms_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SpeedgoatCANOpen2Buses1ms_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHitsArray;
    SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits =
      (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    SpeedgoatCANOpen2Buses1ms_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SpeedgoatCANOpen2Buses1ms_M, -1);
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize0 = 0.0001;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize1 = 0.0001;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize2 = 0.0005;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize3 = 0.001;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize4 = 0.002;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize5 = 0.005;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize6 = 0.1;
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize7 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, (NULL));
    rtliSetLogT(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, "tout");
    rtliSetLogX(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, "");
    rtliSetLogXFinal(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, 1);
    rtliSetLogY(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SpeedgoatCANOpen2Buses1ms_M->rtwLogInfo, (NULL));
  }

  SpeedgoatCANOpen2Buses1ms_M->solverInfoPtr =
    (&SpeedgoatCANOpen2Buses1ms_M->solverInfo);
  SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&SpeedgoatCANOpen2Buses1ms_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&SpeedgoatCANOpen2Buses1ms_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  SpeedgoatCANOpen2Buses1ms_M->blockIO = ((void *) &SpeedgoatCANOpen2Buses1ms_B);
  (void) memset(((void *) &SpeedgoatCANOpen2Buses1ms_B), 0,
                sizeof(B_SpeedgoatCANOpen2Buses1ms_T));

  {
    SpeedgoatCANOpen2Buses1ms_B.TorqueConstant = (0LL);
    SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity_Inv = (0LL);
    SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent_Inv = (0LL);
  }

  /* parameters */
  SpeedgoatCANOpen2Buses1ms_M->defaultParam = ((real_T *)
    &SpeedgoatCANOpen2Buses1ms_P);

  /* states (dwork) */
  SpeedgoatCANOpen2Buses1ms_M->dwork = ((void *) &SpeedgoatCANOpen2Buses1ms_DW);
  (void) memset((void *)&SpeedgoatCANOpen2Buses1ms_DW, 0,
                sizeof(DW_SpeedgoatCANOpen2Buses1ms_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  SpeedgoatCANOpen2Buses1ms_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.sfcnInfo;
    SpeedgoatCANOpen2Buses1ms_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (SpeedgoatCANOpen2Buses1ms_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses1ms_M->Sizes.numSampTimes);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[0]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[1]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[2]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[3]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[4] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[4]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[5] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[5]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[6] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[6]);
    SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs[7] = &(rtmGetTPtr
      (SpeedgoatCANOpen2Buses1ms_M)[7]);
    rtssSetTPtrPtr(sfcnInfo,
                   SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SpeedgoatCANOpen2Buses1ms_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SpeedgoatCANOpen2Buses1ms_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SpeedgoatCANOpen2Buses1ms_M));
    rtssSetStepSizePtr(sfcnInfo, &SpeedgoatCANOpen2Buses1ms_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (SpeedgoatCANOpen2Buses1ms_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses1ms_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses1ms_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses1ms_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &SpeedgoatCANOpen2Buses1ms_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SpeedgoatCANOpen2Buses1ms_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SpeedgoatCANOpen2Buses1ms_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SpeedgoatCANOpen2Buses1ms_M->solverInfoPtr);
  }

  SpeedgoatCANOpen2Buses1ms_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)
                  &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions[0] =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions[0]);
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions[1] =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions[1]);
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions[2] =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions[2]);
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions[3] =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions[3]);
    SpeedgoatCANOpen2Buses1ms_M->childSfunctions[4] =
      (&SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.childSFunctions[4]);

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses1ms/<S20>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses1ms_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2_j);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen2Buses1ms_B.CCaller_o3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses1ms_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses1ms_DW.CANWrite_PWORK_e);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses1ms_DW.CANWrite_PWORK_e);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses1ms/<S22>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses1ms_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1_n);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &SpeedgoatCANOpen2Buses1ms_B.TmpRTBAtCANWriteInport2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2_n);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen2Buses1ms_B.CCaller_o3_n);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses1ms_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1_Size_p);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses1ms_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses1ms_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses1ms/<S15>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses1ms_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses1ms_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses1ms_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses1ms_DW.CANSetup_PWORK);
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses1ms/<S19>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses1ms_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
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
            &SpeedgoatCANOpen2Buses1ms_B.DataPresent));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen2Buses1ms_B.CANRead_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses1ms_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses1ms_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses1ms_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses1ms/<S21>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses1ms_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen2Buses1ms_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
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
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2_e));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3_m));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4_a));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5_h));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen2Buses1ms_B.CANRead_o6_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen2Buses1ms_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SpeedgoatCANOpen2Buses1ms_P.CANRead_P1_Size_b);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen2Buses1ms_DW.CANRead_PWORK_p);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen2Buses1ms_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen2Buses1ms_DW.CANRead_PWORK_p);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 0);
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
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numContStates = (0);/* Number of continuous states */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numY = (0);/* Number of model outputs */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numU = (0);/* Number of model inputs */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numSampTimes = (8);/* Number of sample times */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numBlocks = (519);/* Number of blocks */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numBlockIO = (387);/* Number of block outputs */
  SpeedgoatCANOpen2Buses1ms_M->Sizes.numBlockPrms = (329);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen2Buses1ms_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
