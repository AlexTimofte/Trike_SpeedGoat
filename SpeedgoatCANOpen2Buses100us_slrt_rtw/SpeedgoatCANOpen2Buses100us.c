/*
 * SpeedgoatCANOpen2Buses100us.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.861
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Apr 16 13:38:03 2022
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

/* Named constants for Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
#define SpeedgoatCANO_IN_SetCurrentMode ((uint8_T)3U)
#define SpeedgoatCANOpen2Buses1_IN_Wait ((uint8_T)5U)
#define SpeedgoatCANOpen_IN_Clear_Error ((uint8_T)1U)
#define SpeedgoatCAN_IN_SetCurrentMode1 ((uint8_T)4U)

/* Named constants for Chart: '<S27>/EnableCtrl' */
#define SpeedgoatCANO_IN_Enable_Control ((uint8_T)1U)

/* Named constants for Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
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
static void SpeedgoatCAN_SystemCore_release(dsp_simulink_MovingAverage_Sp_T *obj);
static void SpeedgoatCANO_SystemCore_delete(dsp_simulink_MovingAverage_Sp_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Sp_T *obj);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(SpeedgoatCANOpen2Buses100us_M, 2);
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
  dsp_simulink_MovingAverage_Sp_T *obj;
  dsp_simulink_MovingAverage_Sp_T *obj_0;
  dsp_private_SlidingWindowAver_T *obj_1;
  int8_T wrBufIdx;
  int32_T c_size[2];
  creal_T tmp;
  real32_T tmp_0;
  uint16_T u0;
  uint16_T u1;
  uint16_T u2;
  real_T u0_0;
  real_T u1_0;
  real_T u2_0;

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_01 = (int16_T)(u1_0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u1_0 : (int32_T)(int16_T)(uint16_T)u1_0);

  /* End of DataTypeConversion: '<S16>/Cast To Single' */

  /* Sin: '<S16>/Sine Wave1' */
  SpeedgoatCANOpen2Buses100us_B.SineWave1 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single1' */
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave1);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_02 = (int16_T)(u1_0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u1_0 : (int32_T)(int16_T)(uint16_T)u1_0);

  /* End of DataTypeConversion: '<S16>/Cast To Single1' */

  /* Sin: '<S16>/Sine Wave3' */
  SpeedgoatCANOpen2Buses100us_B.SineWave3 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single2' */
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave3);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_03 = (int16_T)(u1_0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u1_0 : (int32_T)(int16_T)(uint16_T)u1_0);

  /* End of DataTypeConversion: '<S16>/Cast To Single2' */

  /* Sin: '<S16>/Sine Wave2' */
  SpeedgoatCANOpen2Buses100us_B.SineWave2 = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase) *
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp +
    SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias;

  /* DataTypeConversion: '<S16>/Cast To Single3' */
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.SineWave2);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.AN_04 = (int16_T)(u1_0 < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-u1_0 : (int32_T)(int16_T)(uint16_T)u1_0);

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord = (uint8_T)(u1_0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u1_0 : (int32_T)(uint8_T)u1_0);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */
  /* Constant: '<S54>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_j =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

  /* Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
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
      if (SpeedgoatCANOpen2Buses100us_B.Constant_j != 1.0F) {
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
        20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_j == 1.0F));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
          SpeedgoatCANOpen2Buse_IN_Wait_e;
        SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b = 2.0F;
        SpeedgoatCANOpen2Buses100us_DW.aux_j++;
        SpeedgoatCANOpen2Buses100us_B.InitStatus_f = 0.0F;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen2Buses100us_DW.aux_j >=
          20.0F) && (SpeedgoatCANOpen2Buses100us_B.Constant_j == 1.0F));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen2Buses100us_DW.aux_j = 0.0F;
          SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
            SpeedgoatCANO_IN_SetCurrentMode;
        } else {
          if (SpeedgoatCANOpen2Buses100us_B.Constant_j != 1.0F) {
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

  /* End of Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */

  /* Constant: '<S55>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_m =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

  /* Chart: '<S55>/DunkC_TiltLeft_Init_CurrentMode' */
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

  /* End of Chart: '<S55>/DunkC_TiltLeft_Init_CurrentMode' */

  /* Constant: '<S56>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_e =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

  /* Chart: '<S56>/DunkB_TiltRight_Init_CurrentMode' */
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

  /* End of Chart: '<S56>/DunkB_TiltRight_Init_CurrentMode' */

  /* Constant: '<S50>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant_g =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

  /* Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
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

  /* End of Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */

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

  /* Sum: '<S52>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_b =
    (((SpeedgoatCANOpen2Buses100us_B.InitStatus_f +
       SpeedgoatCANOpen2Buses100us_B.InitStatus_k) +
      SpeedgoatCANOpen2Buses100us_B.InitStatus) +
     SpeedgoatCANOpen2Buses100us_B.InitStatus_a) +
    SpeedgoatCANOpen2Buses100us_B.Enable;

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch4);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition = (uint8_T)(u1_0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u1_0 : (int32_T)(uint8_T)u1_0);

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.HB);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat = (uint8_T)(u1_0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u1_0 : (int32_T)(uint8_T)u1_0);

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
  u0 = SpeedgoatCANOpen2Buses100us_B.DataTypeConversion;
  u1 = SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat;
  u2 = SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat;
  if (u0 > u2) {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u2;
  } else if (u0 < u1) {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation1 = u0;
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
  u0_0 = SpeedgoatCANOpen2Buses100us_B.Gain2;
  u1_0 = SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat;
  u2_0 = SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat;
  if (u0_0 > u2_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = u2_0;
  } else if (u0_0 < u1_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation = u1_0;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation = u0_0;
  }

  /* End of Saturate: '<S36>/Saturation' */

  /* Gain: '<S36>/Gain1' */
  SpeedgoatCANOpen2Buses100us_B.Gain1 =
    SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c *
    SpeedgoatCANOpen2Buses100us_B.Saturation;

  /* Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses100us_B.Delay =
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[0];

  /* DataTypeConversion: '<S36>/Data Type Conversion1' */
  SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1 = (real32_T)
    SpeedgoatCANOpen2Buses100us_B.br_percent2;

  /* Sum: '<S36>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.Sum1 = SpeedgoatCANOpen2Buses100us_B.Delay -
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
  u0_0 = SpeedgoatCANOpen2Buses100us_B.Sum2;
  u1_0 = SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat;
  u2_0 = SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat;
  if (u0_0 > u2_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = u2_0;
  } else if (u0_0 < u1_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = u1_0;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation2 = u0_0;
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

  /* DataTypeConversion: '<S50>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S50>/Cast To Single2' */

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

  /* DataTypeConversion: '<S50>/Cast To Single4' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen2Buses100us_B.CurrentInit = (int16_T)(tmp_0 < 0.0F ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(int16_T)(uint16_T)tmp_0);

  /* End of DataTypeConversion: '<S50>/Cast To Single4' */

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch3);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent = u1_0 < 0.0 ?
    -(int32_T)(uint32_T)-u1_0 : (int32_T)(uint32_T)u1_0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion36' */
  /* DataTypeConversion: '<S50>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_k);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_m = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S50>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion32' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_m;

  /* DataTypeConversion: '<S50>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_b);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_g = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S50>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion34' */
  SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_g;

  /* DataTypeConversion: '<S50>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_au);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_p = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S50>/Cast To Single3' */

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

  /* Gain: '<S5>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain_Gain *
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent;

  /* DataTypeConversion: '<S55>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_h);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_j = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion27' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_j;

  /* DataTypeConversion: '<S55>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_f);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_h = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion29' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_h;

  /* DataTypeConversion: '<S55>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_m);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion30' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar;

  /* DataTypeConversion: '<S55>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S55>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion28' */
  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj;

  /* Sin: '<S32>/Sine Wave1' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg = sin
    (SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d *
     SpeedgoatCANOpen2Buses100us_M->Timing.t[0] +
     SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m) *
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n +
    SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n;

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

  /* Gain: '<S30>/degree2rad' */
  SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad =
    SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain *
    SpeedgoatCANOpen2Buses100us_B.DirectionReq;

  /* Gain: '<S32>/n' */
  SpeedgoatCANOpen2Buses100us_B.n = SpeedgoatCANOpen2Buses100us_P.n_Gain *
    SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad;

  /* DataTypeConversion: '<S32>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle = SpeedgoatCANOpen2Buses100us_B.n;

  /* DataTypeConversion: '<S32>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1 =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle2;

  /* MATLAB Function: '<S32>/ServoTilting' */
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 *
    SpeedgoatCANOpen2Buses100us_B.CastToSingle1 / 10.05525 * sin
    (SpeedgoatCANOpen2Buses100us_B.CastToSingle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle = atan
    (SpeedgoatCANOpen2Buses100us_B.TiltingAngle);
  SpeedgoatCANOpen2Buses100us_B.TiltingAngle =
    SpeedgoatCANOpen2Buses100us_B.TiltingAngle * 180.0 / 3.1415926535897931;

  /* ManualSwitch: '<S32>/Manual Switch3' */
  if (SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting == 1) {
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg;
  } else {
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3 =
      SpeedgoatCANOpen2Buses100us_B.TiltingAngle;
  }

  /* End of ManualSwitch: '<S32>/Manual Switch3' */

  /* Gain: '<S32>/degree2m' */
  SpeedgoatCANOpen2Buses100us_B.PosReqm =
    SpeedgoatCANOpen2Buses100us_P.degree2m_Gain *
    SpeedgoatCANOpen2Buses100us_B.ManualSwitch3;

  /* Product: '<S41>/Product1' */
  SpeedgoatCANOpen2Buses100us_B.Product1 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.PosReqm;

  /* RateTransition: '<S41>/DispLeft [m] filt' */
  rtw_xpc_mutex_take(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_RDBuf =
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_LstBufWR;
  rtw_xpc_mutex_give(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);
  SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt =
    SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf[SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_RDBuf];

  /* Product: '<S41>/Product' */
  SpeedgoatCANOpen2Buses100us_B.Product = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt;

  /* Sum: '<S41>/Sum1' */
  SpeedgoatCANOpen2Buses100us_B.e = SpeedgoatCANOpen2Buses100us_B.Product1 -
    SpeedgoatCANOpen2Buses100us_B.Product;

  /* Gain: '<S41>/Proportional  Gain' */
  SpeedgoatCANOpen2Buses100us_B.Proportional =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Kp * SpeedgoatCANOpen2Buses100us_B.e;

  /* DiscreteIntegrator: '<S41>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_B.Integral =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE;

  /* Gain: '<S41>/Derivative Gain' */
  SpeedgoatCANOpen2Buses100us_B.DerivativeGain =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Kd * SpeedgoatCANOpen2Buses100us_B.e;

  /* DiscreteIntegrator: '<S41>/Discrete-Time Integrator1' */
  SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1 =
    SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Sum: '<S41>/Sum3' */
  SpeedgoatCANOpen2Buses100us_B.Sum3 =
    SpeedgoatCANOpen2Buses100us_B.DerivativeGain -
    SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1;

  /* Gain: '<S41>/FilterOrder' */
  SpeedgoatCANOpen2Buses100us_B.Derivative =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl_N *
    SpeedgoatCANOpen2Buses100us_B.Sum3;

  /* Sum: '<S41>/Sum4' */
  SpeedgoatCANOpen2Buses100us_B.Sum4 =
    (SpeedgoatCANOpen2Buses100us_B.Proportional +
     SpeedgoatCANOpen2Buses100us_B.Integral) +
    SpeedgoatCANOpen2Buses100us_B.Derivative;

  /* Saturate: '<S41>/Saturation' */
  u1_0 = -SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Req_lim;
  u0_0 = SpeedgoatCANOpen2Buses100us_B.Sum4;
  u2_0 = SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Req_lim;
  if (u0_0 > u2_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_j = u2_0;
  } else if (u0_0 < u1_0) {
    SpeedgoatCANOpen2Buses100us_B.Saturation_j = u1_0;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Saturation_j = u0_0;
  }

  /* End of Saturate: '<S41>/Saturation' */

  /* Product: '<S41>/Product2' */
  SpeedgoatCANOpen2Buses100us_B.Product2 = (real_T)
    SpeedgoatCANOpen2Buses100us_B.Compare *
    SpeedgoatCANOpen2Buses100us_B.Saturation_j;

  /* Gain: '<S41>/c1' */
  SpeedgoatCANOpen2Buses100us_B.c1 = SpeedgoatCANOpen2Buses100us_P.c1_Gain *
    SpeedgoatCANOpen2Buses100us_B.Product2;

  /* Switch: '<S31>/Switch1' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (SpeedgoatCANOpen2Buses100us_B.Compare) {
    SpeedgoatCANOpen2Buses100us_B.Switch1 = SpeedgoatCANOpen2Buses100us_B.c1;
  } else {
    SpeedgoatCANOpen2Buses100us_B.Switch1 =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value;
  }

  /* End of Switch: '<S31>/Switch1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion31' */
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch1);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent = u1_0 < 0.0 ?
    -(int32_T)(uint32_T)-u1_0 : (int32_T)(uint32_T)u1_0;

  /* End of DataTypeConversion: '<S23>/Data Type Conversion31' */

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

  /* DataTypeConversion: '<S56>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_jv = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S56>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion22' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_jv;

  /* DataTypeConversion: '<S56>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_d = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S56>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion24' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_d;

  /* DataTypeConversion: '<S56>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_i = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S56>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion25' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_i;

  /* DataTypeConversion: '<S56>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0 = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S56>/Cast To Single2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion23' */
  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl =
    SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0;

  /* Product: '<S32>/Product2' */
  SpeedgoatCANOpen2Buses100us_B.Product2_a =
    SpeedgoatCANOpen2Buses100us_B.Compare ?
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent : 0;

  /* Gain: '<S32>/Gain' */
  SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA = (int64_T)
    SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l *
    SpeedgoatCANOpen2Buses100us_B.Product2_a;

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch2);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent = u1_0 < 0.0 ?
    -(int32_T)(uint32_T)-u1_0 : (int32_T)(uint32_T)u1_0;

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

  /* DataTypeConversion: '<S54>/Cast To Single1' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.ClearError_n);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.ClearError_mc = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S54>/Cast To Single1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion3' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError =
    SpeedgoatCANOpen2Buses100us_B.ClearError_mc;

  /* DataTypeConversion: '<S54>/Cast To Single' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.DeviceMode_o);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.DeviceMode_e = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S54>/Cast To Single' */

  /* DataTypeConversion: '<S23>/Data Type Conversion6' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode =
    SpeedgoatCANOpen2Buses100us_B.DeviceMode_e;

  /* DataTypeConversion: '<S54>/Cast To Single3' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.PowerEnable_a);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4 = (uint8_T)(tmp_0 < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S54>/Cast To Single3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion7' */
  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable =
    SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4;

  /* DataTypeConversion: '<S54>/Cast To Single2' */
  tmp_0 = (real32_T)floor(SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu = (uint8_T)(tmp_0 < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S54>/Cast To Single2' */

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
  u1_0 = floor(SpeedgoatCANOpen2Buses100us_B.Switch);
  if (rtIsNaN(u1_0) || rtIsInf(u1_0)) {
    u1_0 = 0.0;
  } else {
    u1_0 = fmod(u1_0, 4.294967296E+9);
  }

  SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent = u1_0 < 0.0 ?
    -(int32_T)(uint32_T)-u1_0 : (int32_T)(uint32_T)u1_0;

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
  u0_0 = x.re;
  u2_0 = x.im;
  if (u2_0 == 0.0) {
    u0_0 /= 100.0;
  } else if (u0_0 == 0.0) {
    u0_0 = 0.0;
  } else {
    u0_0 /= 100.0;
  }

  u1_0 = (tmp.re + u0_0) * (real_T)aux;
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleL, c_data, c_size);
  x = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  SpeedgoatCANOpen2Buses1_dec2hex(yAngleH, c_data, c_size);
  tmp = SpeedgoatCANOpen2Bus_str2double(c_data, c_size);
  u0_0 = x.re;
  u2_0 = x.im;
  if (u2_0 == 0.0) {
    u0_0 /= 100.0;
  } else if (u0_0 == 0.0) {
    u0_0 = 0.0;
  } else {
    u0_0 /= 100.0;
  }

  u0_0 = (tmp.re + u0_0) * (real_T)aux_ySign;
  SpeedgoatCANOpen2Buses100us_B.xAngle = u1_0;
  SpeedgoatCANOpen2Buses100us_B.yAngle = u0_0;

  /* End of MATLAB Function: '<S9>/Conv' */
  /* Constant: '<S9>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Enable_l =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_p;

  /* DataTypeConversion: '<S30>/Cast To Single' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle_g =
    SpeedgoatCANOpen2Buses100us_B.DirectionReq;

  /* Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.Memory1 =
    SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput;

  /* MATLABSystem: '<S30>/Moving Average' */
  u1_0 = SpeedgoatCANOpen2Buses100us_B.Memory1;
  obj = &SpeedgoatCANOpen2Buses100us_DW.obj;
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

  SpeedgoatCANOpen2Buses100us_B.MovingAverage = u1_0;

  /* End of MATLABSystem: '<S30>/Moving Average' */

  /* DataTypeConversion: '<S30>/Cast To Single1' */
  SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g =
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
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle_g;
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
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
    break;

   case 1:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf1 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
    break;

   case 2:
    SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_Buf2 =
      SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g;
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

  /* Gain: '<S30>/inc2deg' */
  SpeedgoatCANOpen2Buses100us_B.DirectionFb =
    SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain *
    SpeedgoatCANOpen2Buses100us_B.Sum_p;

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
  /* Sum: '<S41>/Sum' */
  SpeedgoatCANOpen2Buses100us_B.Sum_e = SpeedgoatCANOpen2Buses100us_B.Sum4 -
    SpeedgoatCANOpen2Buses100us_B.Saturation_j;

  /* Gain: '<S41>/AntiWindup' */
  u1_0 = SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Ki /
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Kp;
  SpeedgoatCANOpen2Buses100us_B.AntiWindup = u1_0 *
    SpeedgoatCANOpen2Buses100us_B.Sum_e;

  /* Gain: '<S41>/Integral Gain' */
  SpeedgoatCANOpen2Buses100us_B.IntegralGain =
    SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Ki * SpeedgoatCANOpen2Buses100us_B.e;

  /* Sum: '<S41>/Sum2' */
  SpeedgoatCANOpen2Buses100us_B.Sum2_g =
    SpeedgoatCANOpen2Buses100us_B.IntegralGain -
    SpeedgoatCANOpen2Buses100us_B.AntiWindup;

  /* Constant: '<S32>/Constant' */
  SpeedgoatCANOpen2Buses100us_B.Constant =
    SpeedgoatCANOpen2Buses100us_P.Constant_Value_c;

  /* Gain: '<S33>/m//s2Km//h' */
  SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh =
    SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain *
    SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI;
}

/* Model update function for TID0 */
static void SpeedgoatCANOpen2Buses100us_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update for Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[0] =
    SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[1];
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[1] =
    SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1;

  /* Update for DiscreteIntegrator: '<S41>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE +=
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval *
    SpeedgoatCANOpen2Buses100us_B.Sum2_g;

  /* Update for DiscreteIntegrator: '<S41>/Discrete-Time Integrator1' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE +=
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_gainval *
    SpeedgoatCANOpen2Buses100us_B.Derivative;

  /* Update for Memory: '<S30>/Memory1' */
  SpeedgoatCANOpen2Buses100us_DW.Memory1_PreviousInput =
    SpeedgoatCANOpen2Buses100us_B.DirectionFb;

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

  /* Memory: '<S40>/Memory1' */
  SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_k =
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

  /* Update for RateTransition: '<S41>/DispLeft [m] filt' */
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
  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf[wrBufIdx] =
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_k;
  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_LstBufWR = wrBufIdx;

  /* End of Update for RateTransition: '<S41>/DispLeft [m] filt' */

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
    /* Start for Constant: '<S54>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_j =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_l;

    /* Start for Constant: '<S55>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_m =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_j;

    /* Start for Constant: '<S56>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_e =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_n;

    /* Start for Constant: '<S50>/Constant' */
    SpeedgoatCANOpen2Buses100us_B.Constant_g =
      SpeedgoatCANOpen2Buses100us_P.Constant_Value_h;

    /* Start for RateTransition: '<S41>/DispLeft [m] filt' */
    SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt =
      SpeedgoatCANOpen2Buses100us_P.DispLeftmfilt_InitialCondition;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);

    /* Start for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
    SpeedgoatCANOpen2Buses100us_B.TmpRTBAtSwitchInport1 =
      SpeedgoatCANOpen2Buses100us_P.TmpRTBAtSwitchInport1_InitialCo;
    rtw_xpc_mutex_create
      (&SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);

    /* Start for MATLABSystem: '<S30>/Moving Average' */
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

    /* Start for RateTransition: '<S40>/DispLeft [m]' */
    SpeedgoatCANOpen2Buses100us_B.DispLeftm_k =
      SpeedgoatCANOpen2Buses100us_P.DispLeftm_InitialCondition;
    rtw_xpc_mutex_create(&SpeedgoatCANOpen2Buses100us_DW.DispLeftm_d0_SEMAPHORE);
  }

  /* user code (Initialize function Body) */
  CANOpenSlave_ResetCommunication();
  CANOpenSlave_ResetCommunication_APT();

  /* InitializeConditions for Delay: '<S36>/Delay' */
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[0] =
    SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition;
  SpeedgoatCANOpen2Buses100us_DW.Delay_DSTATE[1] =
    SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition;

  /* InitializeConditions for RateTransition: '<S41>/DispLeft [m] filt' */
  SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_Buf[0] =
    SpeedgoatCANOpen2Buses100us_P.DispLeftmfilt_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S41>/Discrete-Time Integrator' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator_DSTATE =
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S41>/Discrete-Time Integrator1' */
  SpeedgoatCANOpen2Buses100us_DW.DiscreteTimeIntegrator1_DSTATE =
    SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_IC;

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

  /* SystemInitialize for Chart: '<S54>/DunkA_Steering_Init_SpeedMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_a = -1;
  SpeedgoatCANOpen2Buses100us_DW.is_active_c12_SpeedgoatCANOpen2 = 0U;
  SpeedgoatCANOpen2Buses100us_DW.is_c12_SpeedgoatCANOpen2Buses10 =
    SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S55>/DunkC_TiltLeft_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent_c = -1;
  SpeedgoatCANOpen2Buses100us_DW.is_active_c2_SpeedgoatCANOpen2B = 0U;
  SpeedgoatCANOpen2Buses100us_DW.is_c2_SpeedgoatCANOpen2Buses100 =
    SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S56>/DunkB_TiltRight_Init_CurrentMode' */
  SpeedgoatCANOpen2Buses100us_DW.sfEvent = -1;
  SpeedgoatCANOpen2Buses100us_DW.is_active_c1_SpeedgoatCANOpen2B = 0U;
  SpeedgoatCANOpen2Buses100us_DW.is_c1_SpeedgoatCANOpen2Buses100 =
    SpeedgoatCAN_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S50>/DunkD_Brake_Init_CurrentMode' */
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

  /* Terminate for RateTransition: '<S41>/DispLeft [m] filt' */
  rtw_xpc_mutex_delete(SpeedgoatCANOpen2Buses100us_DW.DispLeftmfilt_d0_SEMAPHORE);

  /* Terminate for RateTransition: '<S31>/TmpRTBAtSwitchInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtSwitchInport1_d0_SEMAPH);

  /* Terminate for MATLABSystem: '<S30>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&SpeedgoatCANOpen2Buses100us_DW.obj);

  /* Terminate for RateTransition: '<S30>/TmpRTBAtP ControllerInport1' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport1_d0_S);

  /* Terminate for RateTransition: '<S30>/TmpRTBAtP ControllerInport2' */
  rtw_xpc_mutex_delete
    (SpeedgoatCANOpen2Buses100us_DW.TmpRTBAtPControllerInport2_d0_S);

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
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[1] = (0.0001);
    SpeedgoatCANOpen2Buses100us_M->Timing.sampleTimes[2] = (0.005);

    /* task offsets */
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[0] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[1] = (0.0);
    SpeedgoatCANOpen2Buses100us_M->Timing.offsetTimes[2] = (0.0);
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
    SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv = (0LL);
    SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA = (0LL);
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
  SpeedgoatCANOpen2Buses100us_M->Sizes.numSampTimes = (3);/* Number of sample times */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlocks = (244);/* Number of blocks */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockIO = (217);/* Number of block outputs */
  SpeedgoatCANOpen2Buses100us_M->Sizes.numBlockPrms = (170);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen2Buses100us_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
