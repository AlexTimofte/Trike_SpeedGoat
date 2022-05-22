/*
 * SpeedgoatCANOpen2Buses100us.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.893
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 21 12:32:19 2022
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

/* Named constants for Chart: '<S29>/DecisionBrakeCtrl' */
#define SpeedgoatCANOpen2Buses100us_IN_ ((uint8_T)1U)
#define SpeedgoatCANOpen2Buses1_IN_Init ((uint8_T)2U)
#define SpeedgoatCAN_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S36>/Retract' */
#define SpeedgoatCANOpen2Bus_IN_Retract ((uint8_T)2U)
#define SpeedgoatCANOpen2Buse_IN_Init_m ((uint8_T)1U)

/* Named constants for Chart: '<S55>/DunkD_Brake_Init_CurrentMode' */
#define SpeedgoatCANO_IN_SetCurrentMode ((uint8_T)3U)
#define SpeedgoatCANOpen2Buses1_IN_Wait ((uint8_T)5U)
#define SpeedgoatCANOpen_IN_Clear_Error ((uint8_T)1U)
#define SpeedgoatCAN_IN_SetCurrentMode1 ((uint8_T)4U)

/* Named constants for Chart: '<S27>/EnableCtrl' */
#define SpeedgoatCANO_IN_Enable_Control ((uint8_T)1U)

/* Named constants for Chart: '<S59>/DunkA_Steering_Init_SpeedMode' */
#define SpeedgoatCANOpen2Buse_IN_Wait_e ((uint8_T)4U)

/* Block signals (default storage) */
B_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_B;

/* Block states (default storage) */
DW_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_DW;

/* Real-time model */
RT_MODEL_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_M_;
RT_MODEL_SpeedgoatCANOpen2Buses100us_T *const SpeedgoatCANOpen2Buses100us_M =
  &SpeedgoatCANOpen2Buses100us_M_;

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
static void SpeedgoatC_SystemCore_release_i(dsp_simulink_MovingAverage_i_T *obj);
static void SpeedgoatCA_SystemCore_delete_i(dsp_simulink_MovingAverage_i_T *obj);
static void matlabCodegenHandle_matlabCod_i(dsp_simulink_MovingAverage_i_T *obj);
static void SpeedgoatCAN_SystemCore_release(dsp_simulink_MovingAverage_Sp_T *obj);
static void SpeedgoatCANO_SystemCore_delete(dsp_simulink_MovingAverage_Sp_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Sp_T *obj);
static void Speedgoat_SystemCore_release_il(dsp_simulink_MovingAverage_il_T *obj);
static void SpeedgoatC_SystemCore_delete_il(dsp_simulink_MovingAverage_il_T *obj);
static void matlabCodegenHandle_matlabCo_il(dsp_simulink_MovingAverage_il_T *obj);
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
  rtmSampleHitPtr[1] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 3);
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
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[2]) > 49) {/* Sample time: [0.005s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[2] = 0;
  }

  (SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3])++;
  if ((SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3]) > 149) {/* Sample time: [0.015s, 0.0s] */
    SpeedgoatCANOpen2Buses100us_M->Timing.TaskCounters.TID[3] = 0;
  }
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

static void Speedgoat_SystemCore_release_il(dsp_simulink_MovingAverage_il_T *obj)
{
  dsp_simulink_MovingAverage_il_T *obj_0;
  dsp_private_SlidingWindowA_il_T *obj_1;
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

static void SpeedgoatC_SystemCore_delete_il(dsp_simulink_MovingAverage_il_T *obj)
{
  Speedgoat_SystemCore_release_il(obj);
}

static void matlabCodegenHandle_matlabCo_il(dsp_simulink_MovingAverage_il_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SpeedgoatC_SystemCore_delete_il(obj);
  }
}

/* Model output function for TID0 */
static void SpeedgoatCANOpen2Buses100us_output0(void) /* Sample time: [0.0s, 0.0s] */
{
  int32_T aux;
  boolean_T sf_internal_predicateOutput;
  uint8_T xAngleH;
  uint8_T yAngleH;
  uint8_T yAngleL;
  int32_T aux_ySign;
  creal_T x;
  char_T c_data[2];
  dsp_simulink_MovingAverage_i_T *obj;
  dsp_simulink_MovingAverage_i_T *obj_0;
  dsp_private_SlidingWindowAv_i_T *obj_1;
  dsp_private_SlidingWindowAv_i_T *obj_2;
  dsp_private_SlidingWindowAv_i_T *obj_3;
  dsp_private_SlidingWindowAv_i_T *obj_4;
  real_T cumRevIndex;
  real_T csum;
  real_T csumrev[9];
  real_T z;
  dsp_simulink_MovingAverage_Sp_T *obj_5;
  dsp_simulink_MovingAverage_Sp_T *obj_6;
  dsp_private_SlidingWindowAver_T *obj_7;
  dsp_simulink_MovingAverage_il_T *obj_8;
  dsp_simulink_MovingAverage_il_T *obj_9;
  dsp_private_SlidingWindowA_il_T *obj_a;
  dsp_private_SlidingWindowA_il_T *obj_b;
  dsp_private_SlidingWindowA_il_T *obj_c;
  dsp_private_SlidingWindowA_il_T *obj_d;
  real_T csumrev_0[3];
  int8_T wrBufIdx;
  int32_T c_size[2];
  creal_T tmp;
  real32_T tmp_0;
  real_T u0;
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

  /* S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */

  /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */

  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S19>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.CANRead_o3 >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold) {
    SpeedgoatCANOpen2Buses100us_B.Switch_c = 0U;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch_c =
      SpeedgoatCANOpen2Buses100us_B.CANRead_o4;
  }

  /* End of Switch: '<S19>/Switch' */

  /* CCaller: '<S17>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen2Buses100us_B.CANRead_o2,
    SpeedgoatCANOpen2Buses100us_B.Switch_c,
    SpeedgoatCANOpen2Buses100us_B.CANRead_o6,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,
    SpeedgoatCANOpen2Buses100us_B.CCaller_o3);

  /* Outputs for Enabled SubSystem: '<S17>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (SpeedgoatCANOpen2Buses100us_B.CCaller_o2 > 0) {
    /* Constant: '<S20>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_ge =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_k;

    /* S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */

    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC_f);
  }

  /* End of Outputs for SubSystem: '<S17>/CAN TX Wrapper' */

  /* S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */

  /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S21>/Switch' */
  if (SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m >
      SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l) {
    SpeedgoatCANOpen2Buses100us_B.Switch_g = 0U;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch_g =
      SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a;
  }

  /* End of Switch: '<S21>/Switch' */

  /* CCaller: '<S18>/C Caller' */
  CANOpenSlave_ProcessStack_APT(SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,
    SpeedgoatCANOpen2Buses100us_B.Switch_g,
    SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,
    &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,
    SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n);

  /* Outputs for Enabled SubSystem: '<S18>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n > 0) {
    /* Constant: '<S22>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_em =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv;

    /* S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */

    /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    srUpdateBC(SpeedgoatCANOpen2Buses100us_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S18>/CAN TX Wrapper' */

  /* Sin: '<S16>/Sine Wave' */
  SpeedgoatCANOpen2Buses100us_B.SineWave = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_01 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S16>/Cast To Single' */

  /* Sin: '<S16>/Sine Wave1' */
  SpeedgoatCANOpen2Buses100us_B.SineWave1 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single1' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave1);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_02 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S16>/Cast To Single1' */

  /* Sin: '<S16>/Sine Wave3' */
  SpeedgoatCANOpen2Buses100us_B.SineWave3 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single2' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave3);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_03 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S16>/Cast To Single2' */

  /* Sin: '<S16>/Sine Wave2' */
  SpeedgoatCANOpen2Buses100us_B.SineWave2 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single3' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave2);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_04 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S16>/Cast To Single3' */

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

  /* S-Function (RPDOs_from_Joystick): '<S10>/RPDOs from Joystick' */
  RPDOs_from_Joystick_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,
     &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,
     &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd);

  /* MATLAB Function: '<S27>/ButtonStatus' */
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

  SpeedgoatCANOpen2Buses100us_B.Button = aux;

  /* End of MATLAB Function: '<S27>/ButtonStatus' */

  /* DataTypeConversion: '<S27>/Cast To Single3' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.Button;

  /* MATLAB Function: '<S27>/APTControlWord' */
  aux = 0;
  if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p == 8.0F) {
    if (SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd > 0.0F) {
      aux = 4;
    } else {
      if (SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd < 0.0F) {
        aux = 8;
      }
    }
  }

  SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord = 160.0 + (real_T)aux;

  /* End of MATLAB Function: '<S27>/APTControlWord' */

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */
  /* Constant: '<S59>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

  /* Chart: '<S59>/DunkA_Steering_Init_SpeedMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_a = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses100us_B.ClearError_n = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_o = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = 0.0F;
    SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses100us_DW.aux_j > 40000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_j++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.ClearError_n = 1.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_j++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 0.0F;
      SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses100us_B.Constant != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses100us_B.ClearError_n = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_o = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_o = 3.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_j <
        20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_j++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_j >=
          20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
          SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant != 1.0F) {
            SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses100us_B.ClearError_n = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.DeviceMode_o = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.PowerEnable_a = 0.0F;
            SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S59>/DunkA_Steering_Init_SpeedMode' */

  /* Constant: '<S60>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_m =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

  /* Chart: '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_c = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c2_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c2_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses100us_B.ClearError_h = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_f = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_m = 0.0F;
    SpeedgoatCANOpen2Buses100us_DW.aux_a = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses100us_DW.aux_a > 40000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.aux_a = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_a++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.ClearError_h = 1.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_a++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 0.0F;
      SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses100us_B.Constant_m != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses100us_B.ClearError_h = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_f = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_m = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_a = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_f = 3.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_m = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_a <
        20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_m == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_a++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_a >=
          20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_m == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.aux_a = 0.0F;
          SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant_m != 1.0F) {
            SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses100us_B.ClearError_h = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.DeviceMode_f = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.PowerEnable_m = 0.0F;
            SpeedgoatCANOpen2Buses100us_DW.aux_a = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.InitStatus_k = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S60>/DunkC_TiltLeft_Init_CurrentMode' */

  /* Constant: '<S61>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_e =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

  /* Chart: '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c1_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c1_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses100us_B.ClearError = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.DeviceMode = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.PowerEnable = 0.0F;
    SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses100us_DW.aux > 40000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.ClearError = 1.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
      SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses100us_B.Constant_e != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses100us_B.ClearError = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.DeviceMode = 2.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 1.0F;
      }
      break;

     default:
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux < 20.0F)
        && (SpeedgoatCANOpen2Buses100us_B.Constant_e == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux >=
          20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_e == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.aux = 0.0F;
          SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant_e != 1.0F) {
            SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
              SpeedgoatCANOpen2Buses1_IN_Init;
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

  /* End of Chart: '<S61>/DunkB_TiltRight_Init_CurrentMode' */

  /* Constant: '<S55>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_g =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

  /* Chart: '<S55>/DunkD_Brake_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_j = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c3_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c3_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses100us_B.ClearError_k = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_b = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_au = 0.0F;
    SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
    SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 0.0F;
  } else {
    switch (SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100) {
     case SpeedgoatCANOpen_IN_Clear_Error:
      if (SpeedgoatCANOpen2Buses100us_DW.aux_k > 40000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.ClearError_k = 1.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
      }
      break;

     case SpeedgoatCANOpen2Buses1_IN_Init:
      SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen_IN_Clear_Error;
      break;

     case SpeedgoatCANO_IN_SetCurrentMode:
      if (SpeedgoatCANOpen2Buses100us_B.Constant_g != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses100us_B.ClearError_k = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_b = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_au = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 0.0F;
      } else if (SpeedgoatCANOpen2Buses100us_DW.aux_k > 10000.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCAN_IN_SetCurrentMode1;
      } else {
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_b = 2.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_au = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 11000.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k++;
      }
      break;

     case SpeedgoatCAN_IN_SetCurrentMode1:
      if (SpeedgoatCANOpen2Buses100us_B.Constant_g != 1.0F) {
        SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Init;
        SpeedgoatCANOpen2Buses100us_B.ClearError_k = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.DeviceMode_b = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses100us_B.PowerEnable_au = 0.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 0.0F;
      } else {
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 1.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 0.0F;
      }
      break;

     default:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_k <
        20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_g == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
          SpeedgoatCANOpen2Buses1_IN_Wait;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_k++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_k >=
          20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_g == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
          SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant_g != 1.0F) {
            SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
              SpeedgoatCANOpen2Buses1_IN_Init;
            SpeedgoatCANOpen2Buses100us_B.ClearError_k = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.DeviceMode_b = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n = 2.0F;
            SpeedgoatCANOpen2Buses100us_B.PowerEnable_au = 0.0F;
            SpeedgoatCANOpen2Buses100us_DW.aux_k = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.InitStatus_a = 0.0F;
            SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit = 0.0F;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S55>/DunkD_Brake_Init_CurrentMode' */

  /* Chart: '<S27>/EnableCtrl' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_n = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buses1_IN_Init;
  } else if (SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 ==
             SpeedgoatCANO_IN_Enable_Control) {
    if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p == 7.0F) {
      SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen2Buses1_IN_Init;
    } else {
      SpeedgoatCANOpen2Buses100us_B.Enable = 1.0F;
    }
  } else if (SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p == 6.0F) {
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANO_IN_Enable_Control;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Enable = 1.0F;
  }

  /* End of Chart: '<S27>/EnableCtrl' */

  /* Sum: '<S57>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_b =
    (((SpeedgoatCANOpen2Buses100us_B.InitStatus_f +
       SpeedgoatCANOpen2Buses100us_B.InitStatus_k) +
      SpeedgoatCANOpen2Buses100us_B.InitStatus) +
     SpeedgoatCANOpen2Buses100us_B.InitStatus_a) +
    SpeedgoatCANOpen2Buses100us_B.Enable;

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.Compare = (SpeedgoatCANOpen2Buses100us_B.Sum_b ==
    SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const);

  /* Switch: '<S31>/Switch4' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    /* DataTypeConversion: '<S33>/Cast To Single1' */
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1_e =
      SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd;

    /* Gain: '<S33>/Gain1' */
    SpeedgoatCANOpen2Buses100us_B.Gain1_e =
      SpeedgoatCANOpen2Buses100us_P.Gain1_Gain *
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_e;

    /* Abs: '<S33>/Abs' */
    SpeedgoatCANOpen2Buses100us_B.TractionReq = fabs
      (SpeedgoatCANOpen2Buses100us_B.Gain1_e);
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_B.TractionReq;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch4 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch4' */

  /* DataTypeConversion: '<S24>/Data Type Conversion1' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch4);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion1' */
  /* MATLAB Function: '<S24>/HeartBeatgenerator' */
  SpeedgoatCANOpen2Buses100us_DW.tact++;
  if (SpeedgoatCANOpen2Buses100us_DW.tact > 10.0) {
    SpeedgoatCANOpen2Buses100us_DW.tact = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.Heartbeat++;
    if (SpeedgoatCANOpen2Buses100us_DW.Heartbeat > 127.0) {
      SpeedgoatCANOpen2Buses100us_DW.Heartbeat = 0.0;
    }
  }

  SpeedgoatCANOpen2Buses100us_B.HB = SpeedgoatCANOpen2Buses100us_DW.Heartbeat;

  /* End of MATLAB Function: '<S24>/HeartBeatgenerator' */

  /* DataTypeConversion: '<S24>/Data Type Conversion2' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.HB);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion2' */
  /* S-Function (TPDOs_to_APT): '<S2>/TPDOs from Speedgoat to APT' */
  TPDOs_to_APT_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,
     &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat);

  /* Constant: '<S3>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Enable_c =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_e;

  /* S-Function (RPDOs_from_DunkD): '<S4>/RPDOs from Dunker #1' */
  RPDOs_from_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity);

  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  SpeedgoatCANOpen2Buses100us_B.DataTypeConversion = (uint16_T)
    SpeedgoatCANOpen2Buses100us_B.Channel_AN3;

  /* Saturate: '<S36>/Saturation1' */
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

  /* End of Saturate: '<S36>/Saturation1' */

  /* Sum: '<S36>/Sum' incorporates:
   *  Constant: '<S36>/offset'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Saturation1 -
    SpeedgoatCANOpen2Buses100us_P.offset_Value;

  /* Gain: '<S36>/GetInPercent' */
  SpeedgoatCANOpen2Buses100us_B.br_percent2 =
    SpeedgoatCANOpen2Buses100us_P.GetInPercent_Gain *
    SpeedgoatCANOpen2Buses100us_B.Sum;

  /* Gain: '<S36>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.Gain2 = SpeedgoatCANOpen2Buses100us_P.Gain2_Gain
    * SpeedgoatCANOpen2Buses100us_B.br_percent2;

  /* Saturate: '<S36>/Saturation' */
  u0 = SpeedgoatCANOpen2Buses100us_B.Gain2;
  csum = SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = csum;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation = u0;
  }

  /* End of Saturate: '<S36>/Saturation' */

  /* Gain: '<S36>/Gain1' */
  SpeedgoatCANOpen2Buses100us_B.Gain1 =
    SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c *
    SpeedgoatCANOpen2Buses100us_B.Saturation;

  /* Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses100us_B.Delay_o =
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[0];

  /* DataTypeConversion: '<S36>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1 = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.br_percent2;

  /* Sum: '<S36>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.Sum1 = SpeedgoatCANOpen2Buses100us_B.Delay_o -
    SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1;

  /* Chart: '<S36>/Retract' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_h = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.temporalCounter_i1 < 511U) {
    SpeedgoatCANOpen2Buses100us_DW.temporalCounter_i1++;
  }

  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c5_SpeedgoatCANOpen2B == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c5_SpeedgoatCANOpen2B = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c5_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buse_IN_Init_m;
    SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq = 0.0F;
  } else if (SpeedgoatCANOpen2Buses100us_DW.is_c5_SpeedgoatCANOpen2Buses100 ==
             SpeedgoatCANOpen2Buse_IN_Init_m) {
    if (SpeedgoatCANOpen2Buses100us_B.Sum1 > 0.05) {
      SpeedgoatCANOpen2Buses100us_DW.is_c5_SpeedgoatCANOpen2Buses100 =
        SpeedgoatCANOpen2Bus_IN_Retract;
      SpeedgoatCANOpen2Buses100us_DW.temporalCounter_i1 = 0U;
    }
  } else if (SpeedgoatCANOpen2Buses100us_DW.temporalCounter_i1 >= 500) {
    SpeedgoatCANOpen2Buses100us_DW.is_c5_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCANOpen2Buse_IN_Init_m;
    SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq = 0.0F;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq = 1.0F;
  }

  /* End of Chart: '<S36>/Retract' */

  /* Sum: '<S36>/Sum2' */
  SpeedgoatCANOpen2Buses100us_B.Sum2 = SpeedgoatCANOpen2Buses100us_B.Gain1 +
    SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq;

  /* Saturate: '<S36>/Saturation2' */
  u0 = SpeedgoatCANOpen2Buses100us_B.Sum2;
  csum = SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = csum;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S36>/Saturation2' */

  /* Gain: '<S36>/Amp2mAmp' */
  SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq =
    SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain *
    SpeedgoatCANOpen2Buses100us_B.Saturation2;

  /* DataTypeConversion: '<S33>/Cast To Single3' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle3 =
    SpeedgoatCANOpen2Buses100us_B.APT_Speed;

  /* Gain: '<S33>/Gain2' */
  SpeedgoatCANOpen2Buses100us_B.Speed_SI =
    SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle3;

  /* Gain: '<S33>/WheelRadius' */
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI =
    SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain *
    SpeedgoatCANOpen2Buses100us_B.Speed_SI;

  /* DataTypeConversion: '<S33>/Cast To Single2' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle2 =
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI;

  /* DataTypeConversion: '<S55>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single2' */

  /* Chart: '<S29>/DecisionBrakeCtrl' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_e = -1;
  if (SpeedgoatCANOpen2Buses100us_DW.is_active_c13_SpeedgoatCANOpen2 == 0U) {
    SpeedgoatCANOpen2Buses100us_DW.is_active_c13_SpeedgoatCANOpen2 = 1U;
    SpeedgoatCANOpen2Buses100us_DW.is_c13_SpeedgoatCANOpen2Buses10 =
      SpeedgoatCANOpen2Buses1_IN_Init;
    SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o = 0.0;
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4 =
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k;
    SpeedgoatCANOpen2Buses100us_DW.Parking_Brake = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.Neutral_State = 0.0;
  } else if (SpeedgoatCANOpen2Buses100us_DW.is_c13_SpeedgoatCANOpen2Buses10 ==
             SpeedgoatCANOpen2Buses100us_IN_) {
    SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o = -10000.0;
    sf_internal_predicateOutput =
      ((SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq < 10.0) &&
       (SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq > -10.0));
    if (sf_internal_predicateOutput) {
      SpeedgoatCANOpen2Buses100us_DW.is_c13_SpeedgoatCANOpen2Buses10 =
        SpeedgoatCANOpen2Buses1_IN_Init;
      SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o = 0.0;
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4 =
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k;
      SpeedgoatCANOpen2Buses100us_DW.Parking_Brake = 0.0;
      SpeedgoatCANOpen2Buses100us_DW.Neutral_State = 0.0;
    }
  } else {
    SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o = 0.0;
    sf_internal_predicateOutput =
      ((SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq > 100.0) ||
       (SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq < -100.0));
    if (sf_internal_predicateOutput) {
      SpeedgoatCANOpen2Buses100us_DW.is_c13_SpeedgoatCANOpen2Buses10 =
        SpeedgoatCANOpen2Buses100us_IN_;
      SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4 = 2U;
      SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o = -10000.0;
      SpeedgoatCANOpen2Buses100us_DW.Parking_Brake = 1.0;
      SpeedgoatCANOpen2Buses100us_DW.Neutral_State = 0.0;
    }
  }

  /* End of Chart: '<S29>/DecisionBrakeCtrl' */

  /* DataTypeConversion: '<S23>/Data Type Conversion33' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4;

  /* DataTypeConversion: '<S55>/Cast To Single4' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.CurrentInit = (int16_T)(tmp_0 < 0.0F ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(int16_T)(uint16_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single4' */

  /* Gain: '<S29>/Gain5' */
  SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInitmA =
    SpeedgoatCANOpen2Buses100us_P.Gain5_Gain *
    SpeedgoatCANOpen2Buses100us_B.CurrentInit;

  /* Switch: '<S31>/Switch3' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    /* Sum: '<S29>/Sum4' */
    SpeedgoatCANOpen2Buses100us_B.Sum4_e = (real_T)
      SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInitmA * 3.0517578125E-5
      + SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o;
    SpeedgoatCANOpen2Buses100us_B.Switch3 = SpeedgoatCANOpen2Buses100us_B.Sum4_e;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch3 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion36' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch3);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion36' */
  /* DataTypeConversion: '<S55>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_k);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_m = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion32' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_m;

  /* DataTypeConversion: '<S55>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_b);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_g = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion34' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_g;

  /* DataTypeConversion: '<S55>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_au);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_p = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion35' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_p;

  /* S-Function (TPDOs_to_DunkD): '<S4>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkD_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkC): '<S5>/RPDOs from Dunker #1' */
  RPDOs_from_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity);

  /* Gain: '<S5>/Gain1' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity_Inv = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_j *
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity;

  /* Gain: '<S5>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain_Gain *
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent;

  /* RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBufW;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf];

  /* RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_LstBufW;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct1Inport1 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_RDBuf];

  /* RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);
  SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_LstBuf;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg =
    SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_Buf[SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_RDBuf];

  /* S-Function (RPDOs_from_Inclinometer): '<S9>/RPDOs from Inclinometer ' */
  RPDOs_from_Inclinometer_Outputs_wrapper(&SpeedgoatCANOpen2Buses100us_B.xS,
    &SpeedgoatCANOpen2Buses100us_B.xH, &SpeedgoatCANOpen2Buses100us_B.xL,
    &SpeedgoatCANOpen2Buses100us_B.yS, &SpeedgoatCANOpen2Buses100us_B.yH,
    &SpeedgoatCANOpen2Buses100us_B.yL);

  /* MATLAB Function: '<S9>/Conv' */
  xAngleH = SpeedgoatCANOpen2Buses100us_B.xH;
  yAngleH = SpeedgoatCANOpen2Buses100us_B.yH;
  yAngleL = SpeedgoatCANOpen2Buses100us_B.yL;
  if (SpeedgoatCANOpen2Buses100us_B.xS == 0) {
    aux = 1;
  } else {
    aux = -1;
  }

  if (SpeedgoatCANOpen2Buses100us_B.yS == 0) {
    aux_ySign = 1;
  } else {
    aux_ySign = -1;
  }

  SpeedgoatCANOpen2Buses1_dec2hex(SpeedgoatCANOpen2Buses100us_B.xL, c_data,
    c_size);
  x = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  SpeedgoatCANOpen2Buses1_dec2hex(xAngleH, c_data, c_size);
  tmp = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  u0 = x.re;
  csum = x.im;
  if (csum == 0.0) {
    u0 /= 100.0;
  } else if (u0 == 0.0) {
    u0 = 0.0;
  } else {
    u0 /= 100.0;
  }

  cumRevIndex = (tmp.re + u0) * (real_T)aux;
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleL, c_data, c_size);
  x = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleH, c_data, c_size);
  tmp = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  u0 = x.re;
  csum = x.im;
  if (csum == 0.0) {
    u0 /= 100.0;
  } else if (u0 == 0.0) {
    u0 = 0.0;
  } else {
    u0 /= 100.0;
  }

  csum = (tmp.re + u0) * (real_T)aux_ySign;
  SpeedgoatCANOpen2Buses100us_B.xAngle = cumRevIndex;
  SpeedgoatCANOpen2Buses100us_B.yAngle = csum;

  /* End of MATLAB Function: '<S9>/Conv' */

  /* Sum: '<S32>/Sum' incorporates:
   *  Constant: '<S32>/Offset'
   */
  SpeedgoatCANOpen2Buses100us_B.Fb_Angledeg =
    SpeedgoatCANOpen2Buses100us_B.yAngle +
    SpeedgoatCANOpen2Buses100us_P.Offset_Value;

  /* Saturate: '<S32>/Saturation' */
  u0 = SpeedgoatCANOpen2Buses100us_B.Fb_Angledeg;
  csum = SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat_f;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat_i;
  if (u0 > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_a = cumRevIndex;
  } else if (u0 < csum) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_a = csum;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation_a = u0;
  }

  /* End of Saturate: '<S32>/Saturation' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold3' */
  SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold3 =
    SpeedgoatCANOpen2Buses100us_B.Saturation_a;

  /* MATLABSystem: '<S32>/Moving Average' */
  u0 = SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold3;
  obj = &SpeedgoatCANOpen2Buses100us_DW.obj_b;
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
  SpeedgoatCANOpen2Buses100us_B.Fb_Angle_Filtdeg = u0;

  /* End of MATLABSystem: '<S32>/Moving Average' */

  /* Sum: '<S43>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.e =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg -
    SpeedgoatCANOpen2Buses100us_B.Fb_Angle_Filtdeg;

  /* Product: '<S43>/Product1' */
  SpeedgoatCANOpen2Buses100us_B.Product1 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct1Inport1 *
    SpeedgoatCANOpen2Buses100us_B.e;

  /* Gain: '<S43>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses100us_B.ProportionalGain =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kp *
    SpeedgoatCANOpen2Buses100us_B.Product1;

  /* MATLABSystem: '<S43>/Moving Average2' */
  u0 = SpeedgoatCANOpen2Buses100us_B.ProportionalGain;
  obj_5 = &SpeedgoatCANOpen2Buses100us_DW.obj;
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

  SpeedgoatCANOpen2Buses100us_B.Proportional = u0;

  /* End of MATLABSystem: '<S43>/Moving Average2' */

  /* RateTransition: '<S43>/TmpRTBAtSum4Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum4Inport2 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_RDBuf];

  /* Sum: '<S43>/Sum4' */
  SpeedgoatCANOpen2Buses100us_B.Sum4 =
    SpeedgoatCANOpen2Buses100us_B.Proportional +
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum4Inport2;

  /* Product: '<S43>/Product2' */
  SpeedgoatCANOpen2Buses100us_B.Product2 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1 *
    SpeedgoatCANOpen2Buses100us_B.Sum4;

  /* Gain: '<S43>/c1' */
  SpeedgoatCANOpen2Buses100us_B.c1 = SpeedgoatCANOpen2Buses100us_P.c1_Gain *
    SpeedgoatCANOpen2Buses100us_B.Product2;

  /* Gain: '<S32>/Gain1' */
  SpeedgoatCANOpen2Buses100us_B.LeftTiltMotor_SpeedReqrpm =
    SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_k *
    SpeedgoatCANOpen2Buses100us_B.c1;

  /* Switch: '<S31>/Switch1' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_B.LeftTiltMotor_SpeedReqrpm;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion31' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch1);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion31' */
  /* DataTypeConversion: '<S60>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_h);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_j = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S60>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion27' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_j;

  /* DataTypeConversion: '<S60>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_f);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_h = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S60>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion29' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_h;

  /* DataTypeConversion: '<S60>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_m);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S60>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion30' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar;

  /* DataTypeConversion: '<S60>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S60>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion28' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj;

  /* S-Function (TPDOs_to_DunkC): '<S5>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkC_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkB): '<S6>/RPDOs from Dunker #1' */
  RPDOs_from_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity);

  /* DataTypeConversion: '<S61>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_jv = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S61>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion22' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_jv;

  /* DataTypeConversion: '<S61>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_d = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S61>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion24' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_d;

  /* DataTypeConversion: '<S61>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_i = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S61>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion25' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_i;

  /* DataTypeConversion: '<S61>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0 = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S61>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion23' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0;

  /* RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);
  SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_RDB =
    SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Lst;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);
  SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA =
    SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Buf[SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_RDB];

  /* Switch: '<S31>/Switch2' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch2 = (real_T)
      SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA *
      4.6566128730773926E-10;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch2 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion26' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch2);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion26' */

  /* S-Function (TPDOs_to_DunkB): '<S6>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkB_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_DunkA): '<S7>/RPDOs from Dunker #1' */
  RPDOs_from_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity);

  /* DataTypeConversion: '<S59>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_n);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_mc = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S59>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion3' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_mc;

  /* DataTypeConversion: '<S59>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_o);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_e = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S59>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion6' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_e;

  /* DataTypeConversion: '<S59>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_a);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4 = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S59>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion7' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4;

  /* DataTypeConversion: '<S59>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S59>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion4' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu;

  /* RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport1 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_RDBuf];

  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch' */

  /* DataTypeConversion: '<S23>/Data Type Conversion8' */
  u0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent = u0 < 0.0 ? -(int32_T)
    (uint32_T)-u0 : (int32_T)(uint32_T)u0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion8' */

  /* S-Function (TPDOs_to_DunkA): '<S7>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_to_DunkA_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,
     &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent);

  /* S-Function (RPDOs_from_Encoder): '<S8>/RPDOs from Encoder' */
  RPDOs_from_Encoder_Outputs_wrapper
    (&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,
     &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position);

  /* Constant: '<S9>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Enable_l =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_p;

  /* DataTypeConversion: '<S26>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_e =
    SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd;

  /* Gain: '<S30>/dem' */
  SpeedgoatCANOpen2Buses100us_B.dem = SpeedgoatCANOpen2Buses100us_P.dem_Gain *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle_e;

  /* Gain: '<S30>/Robotics Convention' */
  SpeedgoatCANOpen2Buses100us_B.DirectionReq =
    SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain *
    SpeedgoatCANOpen2Buses100us_B.dem;

  /* DataTypeConversion: '<S30>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle =
    SpeedgoatCANOpen2Buses100us_B.DirectionReq;

  /* Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.Memory1 =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput;

  /* MATLABSystem: '<S30>/Moving Average' */
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

  /* End of MATLABSystem: '<S30>/Moving Average' */

  /* DataTypeConversion: '<S30>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1 =
    SpeedgoatCANOpen2Buses100us_B.MovingAverage;

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_LstB + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_RDBu)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_LstB = wrBufIdx;

  /* End of RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_LstB + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_RDBu)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_LstB = wrBufIdx;

  /* End of RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */

  /* Sum: '<S30>/Sum' incorporates:
   *  Constant: '<S30>/Offset to 0 pos => pos = [-180 180]deg'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum_p =
    SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value - (real_T)
    SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position;

  /* Gain: '<S30>/degree2rad' */
  SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad =
    SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain *
    SpeedgoatCANOpen2Buses100us_B.DirectionReq;

  /* Gain: '<S30>/inc2deg' */
  SpeedgoatCANOpen2Buses100us_B.DirectionFb =
    SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain *
    SpeedgoatCANOpen2Buses100us_B.Sum_p;

  /* RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf_c =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBu_p;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1_m =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf_j[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf_c];

  /* Product: '<S32>/Product2' */
  SpeedgoatCANOpen2Buses100us_B.Product2_a =
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1_m ?
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent : 0;

  /* RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_L + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_R)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_B =
      SpeedgoatCANOpen2Buses100us_B.Product2_a;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_m =
      SpeedgoatCANOpen2Buses100us_B.Product2_a;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_k =
      SpeedgoatCANOpen2Buses100us_B.Product2_a;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_L = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
  /* Clock: '<S45>/Clock' */
  SpeedgoatCANOpen2Buses100us_B.Clock = SpeedgoatCANOpen2Buses100us_M->Timing.t
    [0];

  /* Sum: '<S45>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S45>/startTime'
   */
  SpeedgoatCANOpen2Buses100us_B.Sum_f = SpeedgoatCANOpen2Buses100us_B.Clock -
    (0.0);

  /* Math: '<S45>/Math Function' incorporates:
   *  Constant: '<S45>/Constant'
   */
  SpeedgoatCANOpen2Buses100us_B.MathFunction = rt_remd_snf
    (SpeedgoatCANOpen2Buses100us_B.Sum_f,
     SpeedgoatCANOpen2Buses100us_P.Constant_Value_c);

  /* Lookup_n-D: '<S45>/Look-Up Table1' */
  SpeedgoatCANOpen2Buses100us_B.LookUpTable1 = look1_binlxpw
    (SpeedgoatCANOpen2Buses100us_B.MathFunction,
     SpeedgoatCANOpen2Buses100us_P.LookUpTable1_bp01Data,
     SpeedgoatCANOpen2Buses100us_P.RepeatingSequence1_rep_seq_y, 7U);

  /* SignalConversion: '<S45>/Output' */
  SpeedgoatCANOpen2Buses100us_B.Output =
    SpeedgoatCANOpen2Buses100us_B.LookUpTable1;

  /* Gain: '<S32>/n' */
  SpeedgoatCANOpen2Buses100us_B.n = SpeedgoatCANOpen2Buses100us_P.n_Gain *
    SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad;

  /* DataTypeConversion: '<S32>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_p = SpeedgoatCANOpen2Buses100us_B.n;

  /* DataTypeConversion: '<S32>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1_a =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle2;

  /* MATLAB Function: '<S32>/ServoTilting' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1_a *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1_a / 10.05525 * sin
    (SpeedgoatCANOpen2Buses100us_B.CastToSingle_p);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle = atan
    (SpeedgoatCANOpen2Buses100us_B.TiltingAngle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle * 180.0 / 3.1415926535897931;

  /* Sin: '<S32>/Sine Wave1' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle_sinreqdeg = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m) *
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n +
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n;

  /* ManualSwitch: '<S32>/Manual Switch3' */
  if (SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting == 1) {
    /* ManualSwitch: '<S32>/Manual Switch4' */
    if (SpeedgoatCANOpen2Buses100us_P.ManualSwitch4_CurrentSetting == 1) {
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch4 =
        SpeedgoatCANOpen2Buses100us_B.Output;
    } else {
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch4 =
        SpeedgoatCANOpen2Buses100us_B.TiltingAngle_sinreqdeg;
    }

    /* End of ManualSwitch: '<S32>/Manual Switch4' */
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch4;
  } else {
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses100us_B.TiltingAngle;
  }

  /* End of ManualSwitch: '<S32>/Manual Switch3' */

  /* RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_L + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_R)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_B =
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch3;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_j =
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch3;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport_jr =
      SpeedgoatCANOpen2Buses100us_B.ManualSwitch3;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_L = wrBufIdx;

  /* End of RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */

  /* RateTransition: '<S32>/EnableControl' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);
  wrBufIdx = (int8_T)(SpeedgoatCANOpen2Buses100us_DW.EnableControl_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.EnableControl_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.Compare;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.Compare;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.Compare;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.EnableControl_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S32>/EnableControl' */

  /* Gain: '<S32>/degree2m' */
  SpeedgoatCANOpen2Buses100us_B.PosReqm =
    SpeedgoatCANOpen2Buses100us_P.degree2m_Gain *
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3;

  /* Gain: '<S43>/Derivative Gain' */
  SpeedgoatCANOpen2Buses100us_B.kd = SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kd *
    SpeedgoatCANOpen2Buses100us_B.Product1;

  /* RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_LstBu + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_B.Product1;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.Product1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.Product1;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_LstBu = wrBufIdx;

  /* End of RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */

  /* MATLABSystem: '<S43>/Moving Average1' */
  u0 = SpeedgoatCANOpen2Buses100us_B.kd;
  obj_8 = &SpeedgoatCANOpen2Buses100us_DW.obj_bz;
  obj_9 = obj_8;
  if (obj_9->TunablePropsChanged) {
    obj_9->TunablePropsChanged = false;
  }

  obj_a = obj_8->pStatistic;
  if (obj_a->isInitialized != 1) {
    obj_b = obj_a;
    obj_c = obj_b;
    obj_c->isSetupComplete = false;
    obj_c->isInitialized = 1;
    obj_d = obj_c;
    obj_d->pCumSum = 0.0;
    obj_d->pCumSumRev[0] = 0.0;
    obj_d->pCumSumRev[1] = 0.0;
    obj_d->pCumSumRev[2] = 0.0;
    obj_d->pCumRevIndex = 1.0;
    obj_c->isSetupComplete = true;
    obj_b->pCumSum = 0.0;
    obj_b->pCumSumRev[0] = 0.0;
    obj_b->pCumSumRev[1] = 0.0;
    obj_b->pCumSumRev[2] = 0.0;
    obj_b->pCumRevIndex = 1.0;
  }

  cumRevIndex = obj_a->pCumRevIndex;
  csum = obj_a->pCumSum;
  csumrev_0[0] = obj_a->pCumSumRev[0];
  csumrev_0[1] = obj_a->pCumSumRev[1];
  csumrev_0[2] = obj_a->pCumSumRev[2];
  csum += u0;
  z = csumrev_0[(int32_T)cumRevIndex - 1] + csum;
  csumrev_0[(int32_T)cumRevIndex - 1] = u0;
  if (cumRevIndex != 3.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    csumrev_0[1] += csumrev_0[2];
    csumrev_0[0] += csumrev_0[1];
  }

  u0 = z / 4.0;
  obj_a->pCumSum = csum;
  obj_a->pCumSumRev[0] = csumrev_0[0];
  obj_a->pCumSumRev[1] = csumrev_0[1];
  obj_a->pCumSumRev[2] = csumrev_0[2];
  obj_a->pCumRevIndex = cumRevIndex;
  SpeedgoatCANOpen2Buses100us_B.kd_ma = u0;

  /* End of MATLABSystem: '<S43>/Moving Average1' */

  /* SampleTimeMath: '<S49>/TSamp'
   *
   * About '<S49>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  SpeedgoatCANOpen2Buses100us_B.TSamp = SpeedgoatCANOpen2Buses100us_B.kd_ma *
    SpeedgoatCANOpen2Buses100us_P.TSamp_WtEt;

  /* UnitDelay: '<S49>/UD' */
  SpeedgoatCANOpen2Buses100us_B.Uk1 = SpeedgoatCANOpen2Buses100us_DW.UD_DSTATE;

  /* Sum: '<S49>/Diff' */
  SpeedgoatCANOpen2Buses100us_B.Diff = SpeedgoatCANOpen2Buses100us_B.TSamp -
    SpeedgoatCANOpen2Buses100us_B.Uk1;

  /* Gain: '<S43>/Integral Gain' */
  SpeedgoatCANOpen2Buses100us_B.IntegralGain =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Ki *
    SpeedgoatCANOpen2Buses100us_B.Product1;

  /* RateTransition: '<S43>/TmpRTBAtSum2Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum2Inport2 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_RDBuf];

  /* Sum: '<S43>/Sum2' */
  SpeedgoatCANOpen2Buses100us_B.Sum2_d =
    SpeedgoatCANOpen2Buses100us_B.IntegralGain -
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum2Inport2;

  /* RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_e + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_l)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);
  switch (wrBufIdx) {
   case 0:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_B.Sum2_d;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_k =
      SpeedgoatCANOpen2Buses100us_B.Sum2_d;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_b =
      SpeedgoatCANOpen2Buses100us_B.Sum2_d;
    break;
  }

  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_e = wrBufIdx;

  /* End of RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
  /* Saturate: '<S43>/Saturation1' */
  u0 = -SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim;
  csum = SpeedgoatCANOpen2Buses100us_B.Diff;
  cumRevIndex = SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim;
  if (csum > cumRevIndex) {
    SpeedgoatCANOpen2Buses100us_B.Derivative_sat = cumRevIndex;
  } else if (csum < u0) {
    SpeedgoatCANOpen2Buses100us_B.Derivative_sat = u0;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Derivative_sat = csum;
  }

  /* End of Saturate: '<S43>/Saturation1' */
  /* Gain: '<S40>/LSB2Volt' */
  SpeedgoatCANOpen2Buses100us_B.DispLeftVolt =
    SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain *
    SpeedgoatCANOpen2Buses100us_B.Channel_AN2;

  /* Sum: '<S40>/Sum' incorporates:
   *  Constant: '<S40>/Offset for 0 deg'
   */
  SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt = (real_T)
    SpeedgoatCANOpen2Buses100us_B.DispLeftVolt * 1.4901161193847656E-8 -
    SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg_Value;

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

  /* Gain: '<S33>/m//s2Km//h' */
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh =
    SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain *
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI;
}

/* Model update function for TID0 */
static void SpeedgoatCANOpen2Buses100us_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update for Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[0] =
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[1];
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[1] =
    SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1;

  /* Update for Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
    SpeedgoatCANOpen2Buses100us_B.DirectionFb;

  /* Update for UnitDelay: '<S49>/UD' */
  SpeedgoatCANOpen2Buses100us_DW.UD_DSTATE = SpeedgoatCANOpen2Buses100us_B.TSamp;

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
static void SpeedgoatCANOpen2Buses100us_output2(void) /* Sample time: [0.005s, 0.0s] */
{
  real_T DirectionReq;
  real32_T yf;

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_RDBu =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_LstB;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_RDBu) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf2;
    break;
  }

  /* End of RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */

  /* RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_RDBu =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_LstB;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_RDBu) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport2 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf2;
    break;
  }

  /* End of RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */

  /* MATLAB Function: '<S30>/P Controller' */
  DirectionReq = SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1;
  if (SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1 > 90.0) {
    DirectionReq = 90.0;
  }

  if (DirectionReq < -90.0) {
    DirectionReq = -90.0;
  }

  SpeedgoatCANOpen2Buses100us_B.SpeedReq = (DirectionReq -
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport2) * 70.0;

  /* End of MATLAB Function: '<S30>/P Controller' */

  /* RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_R =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_L;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_R) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold2Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_B;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold2Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_m;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold2Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_k;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold2' */
  SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold2 =
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold2Inport1;

  /* Gain: '<S32>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA_i = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l *
    SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold2;

  /* RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_R =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_L;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_R) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold1Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_B;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold1Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_j;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold1Inport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport_jr;
    break;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold1' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg_p =
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold1Inport1;

  /* RateTransition: '<S32>/EnableControl' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.EnableControl_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.EnableControl_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);
  switch (SpeedgoatCANOpen2Buses100us_DW.EnableControl_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.En =
      SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.En =
      SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.En =
      SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf2;
    break;
  }

  /* End of RateTransition: '<S32>/EnableControl' */

  /* ZeroOrderHold: '<S32>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k =
    SpeedgoatCANOpen2Buses100us_B.En;

  /* RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_LstBu;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_RDBuf) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDerivativeInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf0;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDerivativeInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf1;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDerivativeInport1 =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf2;
    break;
  }

  /* End of RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */

  /* MATLAB Function: '<S43>/Derivative' */
  yf = ((real32_T)SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDerivativeInport1 -
        SpeedgoatCANOpen2Buses100us_DW.yf_k1) * 0.0697674453F +
    SpeedgoatCANOpen2Buses100us_DW.yf_k1;
  SpeedgoatCANOpen2Buses100us_B.ud = (yf - SpeedgoatCANOpen2Buses100us_DW.yf_k1)
    * 0.2F / 0.015F;
  SpeedgoatCANOpen2Buses100us_DW.yf_k1 = yf;
  SpeedgoatCANOpen2Buses100us_B.yf = yf;

  /* Delay: '<S43>/Delay' */
  SpeedgoatCANOpen2Buses100us_B.Delay =
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE;

  /* ZeroOrderHold: '<S43>/Zero-Order Hold' */
  SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold =
    SpeedgoatCANOpen2Buses100us_B.Delay;

  /* RateTransition: '<S43>/TmpRTBAtDelayInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_LstBufWR;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);
  SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDelayInport1 =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_Buf[SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_RDBuf];

  /* Memory: '<S40>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.Memory1_l =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_b;

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
  DirectionReq = SpeedgoatCANOpen2Buses100us_B.DispLeftm_k;
  DirectionReq -= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  DirectionReq -= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[2] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1];
  DirectionReq /= SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0];
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp = DirectionReq;
  DirectionReq = SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp;
  DirectionReq += SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[1] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  DirectionReq += SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[2] *
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1];
  SpeedgoatCANOpen2Buses100us_B.DiscreteFilter = DirectionReq;
}

/* Model update function for TID2 */
static void SpeedgoatCANOpen2Buses100us_update2(void) /* Sample time: [0.005s, 0.0s] */
{
  int8_T wrBufIdx;

  /* Update for RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBufW + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBufW = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */

  /* Update for RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_LstBufW + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_LstBufW = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */

  /* Update for RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_LstBuf + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_RDBuf)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);
  SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg_p;
  SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_LstBuf = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */

  /* Update for RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Lst + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_RDB)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);
  SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA_i;
  SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Lst = wrBufIdx;

  /* End of Update for RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */

  /* Update for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.SpeedReq;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */

  /* Update for RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBu_p + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_RDBuf_c)
  {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf_j[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_LstBu_p = wrBufIdx;

  /* End of Update for RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */

  /* Update for RateTransition: '<S43>/TmpRTBAtSum2Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TmpRTBAtSum2Inport2' */

  /* Update for Delay: '<S43>/Delay' */
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE =
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDelayInport1;

  /* Update for Memory: '<S40>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_b =
    SpeedgoatCANOpen2Buses100us_B.DiscreteFilter;

  /* Update for DiscreteFilter: '<S40>/Discrete Filter' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1] =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0];
  SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0] =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_tmp;

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
static void SpeedgoatCANOpen2Buses100us_output3(void) /* Sample time: [0.015s, 0.0s] */
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_l =
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_e;
  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);
  switch (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_l) {
   case 0:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegratorI;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_k;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrato_b;
    break;
  }

  /* End of RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */

  /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_B.Integral =
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI +
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE;

  /* Saturate: '<S43>/Saturation' */
  u1 = -SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim;
  u0 = SpeedgoatCANOpen2Buses100us_B.Integral;
  u2 = SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim;
  if (u0 > u2) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_c = u2;
  } else if (u0 < u1) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_c = u1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation_c = u0;
  }

  /* End of Saturate: '<S43>/Saturation' */

  /* Sum: '<S43>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_c = SpeedgoatCANOpen2Buses100us_B.Integral -
    SpeedgoatCANOpen2Buses100us_B.Saturation_c;

  /* Gain: '<S43>/AntiWindup' */
  u1 = SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Ki /
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kp;
  SpeedgoatCANOpen2Buses100us_B.AntiWindup = u1 *
    SpeedgoatCANOpen2Buses100us_B.Sum_c;
}

/* Model update function for TID3 */
static void SpeedgoatCANOpen2Buses100us_update3(void) /* Sample time: [0.015s, 0.0s] */
{
  int8_T wrBufIdx;

  /* Update for RateTransition: '<S43>/TmpRTBAtSum4Inport2' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.Saturation_c;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TmpRTBAtSum4Inport2' */

  /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE =
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI +
    SpeedgoatCANOpen2Buses100us_B.Integral;

  /* Update for RateTransition: '<S43>/TmpRTBAtDelayInport1' */
  rtw_xpc_mutex_take
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);
  wrBufIdx = (int8_T)
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_RDBuf) {
    wrBufIdx++;
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_xpc_mutex_give
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.AntiWindup;
  SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S43>/TmpRTBAtDelayInport1' */

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

   default :
    break;
  }
}

/* Model initialize function */
static void SpeedgoatCANOpen2Buses100us_initialize(void)
{
  {
    dsp_simulink_MovingAverage_i_T *b_obj;
    dsp_private_SlidingWindowAv_i_T *iobj_0;
    dsp_simulink_MovingAverage_i_T *obj;
    dsp_simulink_MovingAverage_Sp_T *b_obj_0;
    dsp_private_SlidingWindowAver_T *iobj_0_0;
    dsp_simulink_MovingAverage_Sp_T *obj_0;
    dsp_simulink_MovingAverage_il_T *b_obj_1;
    dsp_private_SlidingWindowA_il_T *iobj_0_1;
    dsp_simulink_MovingAverage_il_T *obj_1;

    /* Start for S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */
    /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
    /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S17>/CAN TX Wrapper' */
    /* Start for Constant: '<S20>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_ge =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_k;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
    /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S17>/CAN TX Wrapper' */

    /* Start for S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */
    /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<S18>/CAN TX Wrapper' */
    /* Start for Constant: '<S22>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_em =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv;

    /* Start for S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */
    /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S18>/CAN TX Wrapper' */
    /* Start for Constant: '<S59>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

    /* Start for Constant: '<S60>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_m =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

    /* Start for Constant: '<S61>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_e =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

    /* Start for Constant: '<S55>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_g =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

    /* Start for RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct2Inport1_Initial;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);

    /* Start for RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct1Inport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct1Inport1_Initial;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);

    /* Start for RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg =
      SpeedgoatCANOpen2Buses100us_P.TiltingAngle_stepreqfdeg_Initia;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);

    /* Start for MATLABSystem: '<S32>/Moving Average' */
    SpeedgoatCANOpen2Buses100us_DW.obj_b.matlabCodegenIsDeleted = true;
    b_obj = &SpeedgoatCANOpen2Buses100us_DW.obj_b;
    b_obj->isInitialized = 0;
    b_obj->NumChannels = -1;
    b_obj->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty_f = true;
    b_obj = &SpeedgoatCANOpen2Buses100us_DW.obj_b;
    iobj_0 = &SpeedgoatCANOpen2Buses100us_DW.gobj_0;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1;
    obj = b_obj;
    obj->NumChannels = 1;
    iobj_0->isInitialized = 0;
    obj->pStatistic = iobj_0;
    b_obj->isSetupComplete = true;
    b_obj->TunablePropsChanged = false;

    /* Start for MATLABSystem: '<S43>/Moving Average2' */
    SpeedgoatCANOpen2Buses100us_DW.obj.matlabCodegenIsDeleted = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses100us_DW.obj;
    b_obj_0->isInitialized = 0;
    b_obj_0->NumChannels = -1;
    b_obj_0->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses100us_DW.obj;
    iobj_0_0 = &SpeedgoatCANOpen2Buses100us_DW.gobj_0_d;
    b_obj_0->isSetupComplete = false;
    b_obj_0->isInitialized = 1;
    obj_0 = b_obj_0;
    obj_0->NumChannels = 1;
    iobj_0_0->isInitialized = 0;
    obj_0->pStatistic = iobj_0_0;
    b_obj_0->isSetupComplete = true;
    b_obj_0->TunablePropsChanged = false;

    /* Start for RateTransition: '<S43>/TmpRTBAtSum4Inport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum4Inport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSum4Inport2_InitialCond;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);

    /* Start for RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */
    SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA =
      SpeedgoatCANOpen2Buses100us_P.RightTiltMotor_CurrentReqmA_Ini;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);

    /* Start for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport1_InitialCo;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);

    /* Start for MATLABSystem: '<S30>/Moving Average' */
    SpeedgoatCANOpen2Buses100us_DW.obj_c.matlabCodegenIsDeleted = true;
    b_obj_0 = &SpeedgoatCANOpen2Buses100us_DW.obj_c;
    b_obj_0->isInitialized = 0;
    b_obj_0->NumChannels = -1;
    b_obj_0->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty_h = true;
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

    /* Start for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPControllerInport1_Init;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);

    /* Start for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtPControllerInport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPControllerInport2_Init;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);

    /* Start for RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtProduct2Inport1_m =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct2Inport1_Initi_j;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);

    /* Start for RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold2Inport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtZeroOrderHold2Inport1_I;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);

    /* Start for RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtZeroOrderHold1Inport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtZeroOrderHold1Inport1_I;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);

    /* Start for RateTransition: '<S32>/EnableControl' */
    SpeedgoatCANOpen2Buses100us_B.En =
      SpeedgoatCANOpen2Buses100us_P.EnableControl_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);

    /* Start for RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDerivativeInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDerivativeInport1_Initi;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);

    /* Start for MATLABSystem: '<S43>/Moving Average1' */
    SpeedgoatCANOpen2Buses100us_DW.obj_bz.matlabCodegenIsDeleted = true;
    b_obj_1 = &SpeedgoatCANOpen2Buses100us_DW.obj_bz;
    b_obj_1->isInitialized = 0;
    b_obj_1->NumChannels = -1;
    b_obj_1->matlabCodegenIsDeleted = false;
    SpeedgoatCANOpen2Buses100us_DW.objisempty_n = true;
    b_obj_1 = &SpeedgoatCANOpen2Buses100us_DW.obj_bz;
    iobj_0_1 = &SpeedgoatCANOpen2Buses100us_DW.gobj_0_a;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    obj_1 = b_obj_1;
    obj_1->NumChannels = 1;
    iobj_0_1->isInitialized = 0;
    obj_1->pStatistic = iobj_0_1;
    b_obj_1->isSetupComplete = true;
    b_obj_1->TunablePropsChanged = false;

    /* Start for RateTransition: '<S43>/TmpRTBAtSum2Inport2' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSum2Inport2 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSum2Inport2_InitialCond;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);

    /* Start for RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDiscreteTimeIntegratorI;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);

    /* Start for RateTransition: '<S43>/TmpRTBAtDelayInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtDelayInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDelayInport1_InitialCon;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);

    /* Start for RateTransition: '<S40>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_P.DispLeftm_InitialCondition;
    rtw_xpc_mutex_create(&SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  }

  {
    dsp_simulink_MovingAverage_i_T *obj;
    dsp_private_SlidingWindowAv_i_T *obj_0;
    dsp_simulink_MovingAverage_il_T *obj_1;
    dsp_private_SlidingWindowA_il_T *obj_2;

    /* user code (Initialize function Body) */
    CANOpenSlave_ResetCommunication();
    CANOpenSlave_ResetCommunication_APT();

    /* InitializeConditions for Delay: '<S36>/Delay' */
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[0] =
      SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition_m;
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE_f[1] =
      SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition_m;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct2Inport1_Initial;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct1Inport1_Initial;

    /* InitializeConditions for RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */
    SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TiltingAngle_stepreqfdeg_Initia;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtSum4Inport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSum4Inport2_InitialCond;

    /* InitializeConditions for RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */
    SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.RightTiltMotor_CurrentReqmA_Ini;

    /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport1_InitialCo;

    /* InitializeConditions for Memory: '<S30>/Memory1' */
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
      SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition;

    /* InitializeConditions for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPControllerInport1_Init;

    /* InitializeConditions for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtPControllerInport2_Init;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_Buf_j[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtProduct2Inport1_Initi_j;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_B =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtZeroOrderHold2Inport1_I;

    /* InitializeConditions for RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_B =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtZeroOrderHold1Inport1_I;

    /* InitializeConditions for RateTransition: '<S32>/EnableControl' */
    SpeedgoatCANOpen2Buses100us_DW.EnableControl_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.EnableControl_InitialCondition;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDerivativeInport1_Initi;

    /* InitializeConditions for UnitDelay: '<S49>/UD' */
    SpeedgoatCANOpen2Buses100us_DW.UD_DSTATE =
      SpeedgoatCANOpen2Buses100us_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtSum2Inport2' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSum2Inport2_InitialCond;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegratorI =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDiscreteTimeIntegratorI;

    /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE =
      SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for Delay: '<S43>/Delay' */
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE =
      SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition;

    /* InitializeConditions for RateTransition: '<S43>/TmpRTBAtDelayInport1' */
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_Buf[0] =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtDelayInport1_InitialCon;

    /* InitializeConditions for Memory: '<S40>/Memory1' */
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput_b =
      SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k;

    /* InitializeConditions for RateTransition: '<S40>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses100us_DW.DispLeftm_Buf0 =
      SpeedgoatCANOpen2Buses100us_P.DispLeftm_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S40>/Discrete Filter' */
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[0] =
      SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates;
    SpeedgoatCANOpen2Buses100us_DW.DiscreteFilter_states[1] =
      SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates;

    /* SystemInitialize for Chart: '<S59>/DunkA_Steering_Init_SpeedMode' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_a = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_c = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c2_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S61>/DunkB_TiltRight_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c1_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S55>/DunkD_Brake_Init_CurrentMode' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_j = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c3_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c3_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S27>/EnableCtrl' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_n = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c4_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c4_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for MATLAB Function: '<S24>/HeartBeatgenerator' */
    SpeedgoatCANOpen2Buses100us_DW.Heartbeat = 0.0;
    SpeedgoatCANOpen2Buses100us_DW.tact = 0.0;

    /* SystemInitialize for Chart: '<S36>/Retract' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_h = -1;
    SpeedgoatCANOpen2Buses100us_DW.temporalCounter_i1 = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c5_SpeedgoatCANOpen2B = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c5_SpeedgoatCANOpen2Buses100 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S29>/DecisionBrakeCtrl' */
    SpeedgoatCANOpen2Buses100us_DW.sfEvent_e = -1;
    SpeedgoatCANOpen2Buses100us_DW.is_active_c13_SpeedgoatCANOpen2 = 0U;
    SpeedgoatCANOpen2Buses100us_DW.is_c13_SpeedgoatCANOpen2Buses10 =
      SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

    /* InitializeConditions for MATLABSystem: '<S32>/Moving Average' */
    obj = &SpeedgoatCANOpen2Buses100us_DW.obj_b;
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

    /* SystemInitialize for MATLAB Function: '<S43>/Derivative' */
    SpeedgoatCANOpen2Buses100us_DW.yf_k1 = 0.0F;

    /* InitializeConditions for MATLABSystem: '<S43>/Moving Average1' */
    obj_1 = &SpeedgoatCANOpen2Buses100us_DW.obj_bz;
    obj_2 = obj_1->pStatistic;
    if (obj_2->isInitialized == 1) {
      obj_2->pCumSum = 0.0;
      obj_2->pCumSumRev[0] = 0.0;
      obj_2->pCumSumRev[1] = 0.0;
      obj_2->pCumSumRev[2] = 0.0;
      obj_2->pCumRevIndex = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S43>/Moving Average1' */
  }
}

/* Model terminate function */
static void SpeedgoatCANOpen2Buses100us_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S15>/CAN Setup ' */
  /* Level2 S-Function Block: '<S15>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S19>/CAN Read' */
  /* Level2 S-Function Block: '<S19>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S17>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S20>/CAN Write' */
  /* Level2 S-Function Block: '<S20>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S17>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S21>/CAN Read' */
  /* Level2 S-Function Block: '<S21>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S18>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S22>/CAN Write' */
  /* Level2 S-Function Block: '<S22>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen2Buses100us_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S18>/CAN TX Wrapper' */

  /* Terminate for RateTransition: '<S43>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SEMA);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtProduct1Inport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct1Inport1_d0_SEMA);

  /* Terminate for RateTransition: '<S43>/TiltingAngle_stepreqf [deg]' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TiltingAngle_stepreqfdeg_d0_SEM);

  /* Terminate for MATLABSystem: '<S32>/Moving Average' */
  matlabCodegenHandle_matlabCod_i(&SpeedgoatCANOpen2Buses100us_DW.obj_b);

  /* Terminate for MATLABSystem: '<S43>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses100us_DW.obj);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtSum4Inport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum4Inport2_d0_SEMAPHOR);

  /* Terminate for RateTransition: '<S31>/RightTiltMotor_CurrentReq [mA]' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.RightTiltMotor_CurrentReqmA_d0_);

  /* Terminate for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);

  /* Terminate for MATLABSystem: '<S30>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses100us_DW.obj_c);

  /* Terminate for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);

  /* Terminate for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtProduct2Inport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtProduct2Inport1_d0_SE_n);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtZero-Order Hold2Inport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold2Inport1_d);

  /* Terminate for RateTransition: '<S32>/TmpRTBAtZero-Order Hold1Inport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtZeroOrderHold1Inport1_d);

  /* Terminate for RateTransition: '<S32>/EnableControl' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.EnableControl_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtDerivativeInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDerivativeInport1_d0_SE);

  /* Terminate for MATLABSystem: '<S43>/Moving Average1' */
  matlabCodegenHandle_matlabCo_il(&SpeedgoatCANOpen2Buses100us_DW.obj_bz);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtSum2Inport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSum2Inport2_d0_SEMAPHOR);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtDiscrete-Time IntegratorInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDiscreteTimeIntegrat_bg);

  /* Terminate for RateTransition: '<S43>/TmpRTBAtDelayInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtDelayInport1_d0_SEMAPHO);

  /* Terminate for RateTransition: '<S40>/DispLeft [m]' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
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
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[1] = (0.0001);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[2] = (0.005);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[3] = (0.015);

    /* task offsets */
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[1] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[2] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[3] = (0.0);
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
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize2 = 0.005;
  SpeedgoatCANOpen2Buses100us_M->Timing.stepSize3 = 0.015;

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
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity_Inv = (0LL);
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (0LL);
    SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA = (0LL);
    SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA_i = (0LL);
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S20>/CAN Write (sg_IO602_IO691_write_s) */
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S22>/CAN Write (sg_IO602_IO691_write_s) */
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S15>/CAN Setup  (sg_IO602_IO691_setup_s) */
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S19>/CAN Read (sg_IO602_IO691_read_s) */
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

    /* Level2 S-Function Block: SpeedgoatCANOpen2Buses100us/<S21>/CAN Read (sg_IO602_IO691_read_s) */
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
  SpeedgoatCANOpen2Buses100us_M->Sizes.numSampTimes = (4);/* Number of sample times */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlocks = (303);/* Number of blocks */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockIO = (249);/* Number of block outputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockPrms = (205);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen2Buses100us_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
