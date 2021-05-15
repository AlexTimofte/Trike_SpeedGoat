/* Include files */

#include "SpeedgoatCANOpen2Buses100us_sfun.h"
#include "c14_SpeedgoatCANOpen2Buses100us.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SpeedgoatCANOpen2Buses100us_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c14_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c14_IN_Clear_Error             ((uint8_T)1U)
#define c14_IN_Init                    ((uint8_T)2U)
#define c14_IN_SetCurrentMode          ((uint8_T)3U)
#define c14_IN_SetVelocity             ((uint8_T)4U)
#define c14_IN_Wait                    ((uint8_T)5U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c14_debug_family_names[2] = { "nargin", "nargout" };

static const char * c14_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c14_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c14_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c14_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c14_f_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c14_g_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c14_h_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c14_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c14_j_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void initialize_params_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void enable_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void disable_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void c14_update_debugger_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void ext_mode_exec_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void set_sim_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_st);
static void c14_set_sim_state_side_effects_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void finalize_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void sf_gateway_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void mdl_start_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void c14_chartstep_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void initSimStructsc14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c14_machineNumber, uint32_T
  c14_chartNumber, uint32_T c14_instanceNumber);
static const mxArray *c14_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static real_T c14_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static const mxArray *c14_b_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static boolean_T c14_b_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static const mxArray *c14_c_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static int32_T c14_c_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static const mxArray *c14_d_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static real32_T c14_d_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_ClearError, const char_T *c14_identifier);
static real32_T c14_e_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static uint8_T c14_f_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_is_active_c14_SpeedgoatCANOpen2Buses100us, const char_T
   *c14_identifier);
static uint8_T c14_g_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_h_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_dataWrittenToVector, const char_T *c14_identifier, boolean_T c14_y[8]);
static void c14_i_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId, boolean_T c14_y[8]);
static const mxArray *c14_j_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_setSimStateSideEffectsInfo, const char_T *c14_identifier);
static const mxArray *c14_k_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, int32_T
   c14_ssid);
static void c14_init_sf_message_store_memory
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void init_dsm_address_info
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc14_SpeedgoatCANOpen2Buses100us(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  *chartInstance->c14_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c14_doSetSimStateSideEffects = 0U;
  chartInstance->c14_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us = 0U;
  *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
    c14_IN_NO_ACTIVE_CHILD;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c14_update_debugger_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  uint32_T c14_prevAniVal;
  c14_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 6U, *chartInstance->c14_sfEvent);
  }

  if (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us == c14_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c14_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c14_sfEvent);
  }

  if (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us ==
      c14_IN_Clear_Error) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
  }

  if (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us == c14_IN_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
  }

  if (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us ==
      c14_IN_SetCurrentMode) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c14_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c14_sfEvent);
  }

  if (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us ==
      c14_IN_SetVelocity) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c14_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c14_sfEvent);
  }

  _SFD_SET_ANIMATION(c14_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  c14_update_debugger_state_c14_SpeedgoatCANOpen2Buses100us(chartInstance);
}

static const mxArray *get_sim_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  const mxArray *c14_st;
  const mxArray *c14_y = NULL;
  real32_T c14_hoistedGlobal;
  const mxArray *c14_b_y = NULL;
  real32_T c14_b_hoistedGlobal;
  const mxArray *c14_c_y = NULL;
  real32_T c14_c_hoistedGlobal;
  const mxArray *c14_d_y = NULL;
  real32_T c14_d_hoistedGlobal;
  const mxArray *c14_e_y = NULL;
  real32_T c14_e_hoistedGlobal;
  const mxArray *c14_f_y = NULL;
  real32_T c14_f_hoistedGlobal;
  const mxArray *c14_g_y = NULL;
  real32_T c14_g_hoistedGlobal;
  const mxArray *c14_h_y = NULL;
  real32_T c14_h_hoistedGlobal;
  const mxArray *c14_i_y = NULL;
  uint8_T c14_i_hoistedGlobal;
  const mxArray *c14_j_y = NULL;
  uint8_T c14_j_hoistedGlobal;
  const mxArray *c14_k_y = NULL;
  const mxArray *c14_l_y = NULL;
  c14_st = NULL;
  c14_st = NULL;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_createcellmatrix(11, 1), false);
  c14_hoistedGlobal = *chartInstance->c14_BrakeCtrl;
  c14_b_y = NULL;
  sf_mex_assign(&c14_b_y, sf_mex_create("y", &c14_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 0, c14_b_y);
  c14_b_hoistedGlobal = *chartInstance->c14_ClearError;
  c14_c_y = NULL;
  sf_mex_assign(&c14_c_y, sf_mex_create("y", &c14_b_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 1, c14_c_y);
  c14_c_hoistedGlobal = *chartInstance->c14_DeviceMode;
  c14_d_y = NULL;
  sf_mex_assign(&c14_d_y, sf_mex_create("y", &c14_c_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 2, c14_d_y);
  c14_d_hoistedGlobal = *chartInstance->c14_PowerEnable;
  c14_e_y = NULL;
  sf_mex_assign(&c14_e_y, sf_mex_create("y", &c14_d_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 3, c14_e_y);
  c14_e_hoistedGlobal = *chartInstance->c14_SpeedRequest;
  c14_f_y = NULL;
  sf_mex_assign(&c14_f_y, sf_mex_create("y", &c14_e_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 4, c14_f_y);
  c14_f_hoistedGlobal = *chartInstance->c14_aux;
  c14_g_y = NULL;
  sf_mex_assign(&c14_g_y, sf_mex_create("y", &c14_f_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 5, c14_g_y);
  c14_g_hoistedGlobal = *chartInstance->c14_aux2;
  c14_h_y = NULL;
  sf_mex_assign(&c14_h_y, sf_mex_create("y", &c14_g_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 6, c14_h_y);
  c14_h_hoistedGlobal = *chartInstance->c14_enable;
  c14_i_y = NULL;
  sf_mex_assign(&c14_i_y, sf_mex_create("y", &c14_h_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 7, c14_i_y);
  c14_i_hoistedGlobal =
    *chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us;
  c14_j_y = NULL;
  sf_mex_assign(&c14_j_y, sf_mex_create("y", &c14_i_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 8, c14_j_y);
  c14_j_hoistedGlobal = *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us;
  c14_k_y = NULL;
  sf_mex_assign(&c14_k_y, sf_mex_create("y", &c14_j_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c14_y, 9, c14_k_y);
  c14_l_y = NULL;
  sf_mex_assign(&c14_l_y, sf_mex_create("y",
    chartInstance->c14_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 8), false);
  sf_mex_setcell(c14_y, 10, c14_l_y);
  sf_mex_assign(&c14_st, c14_y, false);
  return c14_st;
}

static void set_sim_state_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_st)
{
  const mxArray *c14_u;
  boolean_T c14_bv0[8];
  int32_T c14_i0;
  c14_u = sf_mex_dup(c14_st);
  *chartInstance->c14_BrakeCtrl = c14_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c14_u, 0)), "BrakeCtrl");
  *chartInstance->c14_ClearError = c14_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c14_u, 1)), "ClearError");
  *chartInstance->c14_DeviceMode = c14_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c14_u, 2)), "DeviceMode");
  *chartInstance->c14_PowerEnable = c14_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c14_u, 3)), "PowerEnable");
  *chartInstance->c14_SpeedRequest = c14_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c14_u, 4)), "SpeedRequest");
  *chartInstance->c14_aux = c14_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c14_u, 5)), "aux");
  *chartInstance->c14_aux2 = c14_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c14_u, 6)), "aux2");
  *chartInstance->c14_enable = c14_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c14_u, 7)), "enable");
  *chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us =
    c14_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 8)),
    "is_active_c14_SpeedgoatCANOpen2Buses100us");
  *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
    c14_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 9)),
    "is_c14_SpeedgoatCANOpen2Buses100us");
  c14_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 10)),
    "dataWrittenToVector", c14_bv0);
  for (c14_i0 = 0; c14_i0 < 8; c14_i0++) {
    chartInstance->c14_dataWrittenToVector[c14_i0] = c14_bv0[c14_i0];
  }

  sf_mex_assign(&chartInstance->c14_setSimStateSideEffectsInfo,
                c14_j_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c14_u, 11)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c14_u);
  chartInstance->c14_doSetSimStateSideEffects = 1U;
  c14_update_debugger_state_c14_SpeedgoatCANOpen2Buses100us(chartInstance);
  sf_mex_destroy(&c14_st);
}

static void c14_set_sim_state_side_effects_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  if (chartInstance->c14_doSetSimStateSideEffects != 0) {
    chartInstance->c14_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c14_setSimStateSideEffectsInfo);
}

static void sf_gateway_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  c14_set_sim_state_side_effects_c14_SpeedgoatCANOpen2Buses100us(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 6, *chartInstance->c14_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_Joystick_LongCmd, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_ReadError, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_Joystick_LatCmd, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_ButtonStatus, 3U);
  *chartInstance->c14_sfEvent = CALL_EVENT;
  c14_chartstep_c14_SpeedgoatCANOpen2Buses100us(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  c14_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c14_chartstep_c14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  uint32_T c14_debug_family_var_map[3];
  uint32_T c14_b_debug_family_var_map[3];
  uint32_T c14_c_debug_family_var_map[2];
  real_T c14_nargin = 0.0;
  real_T c14_b_nargin = 0.0;
  real_T c14_c_nargin = 0.0;
  real_T c14_nargout = 1.0;
  uint32_T c14_d_debug_family_var_map[3];
  real_T c14_b_nargout = 1.0;
  real_T c14_c_nargout = 0.0;
  uint32_T c14_e_debug_family_var_map[3];
  boolean_T c14_out;
  real_T c14_d_nargin = 0.0;
  boolean_T c14_b_out;
  real32_T c14_hoistedGlobal;
  real_T c14_e_nargin = 0.0;
  uint32_T c14_f_debug_family_var_map[2];
  real_T c14_d_nargout = 1.0;
  real32_T c14_a;
  real_T c14_e_nargout = 1.0;
  real_T c14_f_nargin = 0.0;
  boolean_T c14_c_out;
  boolean_T c14_d_out;
  real_T c14_f_nargout = 0.0;
  uint32_T c14_g_debug_family_var_map[2];
  real_T c14_g_nargin = 0.0;
  uint32_T c14_h_debug_family_var_map[2];
  real_T c14_g_nargout = 0.0;
  real_T c14_h_nargin = 0.0;
  real_T c14_h_nargout = 0.0;
  uint32_T c14_i_debug_family_var_map[3];
  uint32_T c14_j_debug_family_var_map[2];
  real_T c14_i_nargin = 0.0;
  real_T c14_j_nargin = 0.0;
  real_T c14_i_nargout = 1.0;
  real_T c14_j_nargout = 0.0;
  boolean_T c14_e_out;
  uint32_T c14_k_debug_family_var_map[2];
  real_T c14_k_nargin = 0.0;
  real_T c14_k_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 6U, *chartInstance->c14_sfEvent);
  if (*chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 6U, *chartInstance->c14_sfEvent);
    *chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c14_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
    *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us = c14_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c14_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_debug_family_names,
      c14_f_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_f_nargin, 0U, c14_sf_marshallOut,
      c14_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_f_nargout, 1U, c14_sf_marshallOut,
      c14_sf_marshallIn);
    *chartInstance->c14_ClearError = 0.0F;
    chartInstance->c14_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_ClearError, 7U);
    *chartInstance->c14_DeviceMode = 0.0F;
    chartInstance->c14_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_DeviceMode, 8U);
    *chartInstance->c14_BrakeCtrl = 0.0F;
    chartInstance->c14_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_BrakeCtrl, 9U);
    *chartInstance->c14_PowerEnable = 0.0F;
    chartInstance->c14_dataWrittenToVector[6U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_PowerEnable, 10U);
    *chartInstance->c14_SpeedRequest = 0.0F;
    chartInstance->c14_dataWrittenToVector[7U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_SpeedRequest, 11U);
    *chartInstance->c14_aux = 0.0F;
    chartInstance->c14_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_aux, 0U);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us) {
     case c14_IN_Clear_Error:
      CV_CHART_EVAL(6, 0, c14_IN_Clear_Error);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c14_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c14_g_debug_family_names,
        c14_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_nargin, 0U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_nargout, 1U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_out, 2U, c14_b_sf_marshallOut,
        c14_b_sf_marshallIn);
      if (!chartInstance->c14_dataWrittenToVector[4U]) {
        sf_read_before_write_error(chartInstance->S, 0U, 239U, 1, 3);
      }

      if (CV_EML_IF(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)
            *chartInstance->c14_aux, 2000.0, -1, 4U, *chartInstance->c14_aux >
            2000.0F))) {
        c14_out = true;
      } else {
        c14_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c14_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us = c14_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_c_debug_family_names,
          c14_j_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_j_nargin, 0U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_j_nargout, 1U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        *chartInstance->c14_BrakeCtrl = 2.0F;
        chartInstance->c14_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_BrakeCtrl, 9U);
        *chartInstance->c14_aux = 0.0F;
        chartInstance->c14_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_aux, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c14_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_b_debug_family_names,
          c14_g_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_g_nargin, 0U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_g_nargout, 1U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        *chartInstance->c14_ClearError = 1.0F;
        chartInstance->c14_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_ClearError, 7U);
        if (!chartInstance->c14_dataWrittenToVector[4U]) {
          sf_read_before_write_error(chartInstance->S, 0U, 79U, 37, 3);
        }

        (*chartInstance->c14_aux)++;
        chartInstance->c14_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_aux, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c14_sfEvent);
      break;

     case c14_IN_Init:
      CV_CHART_EVAL(6, 0, c14_IN_Init);
      *chartInstance->c14_BrakeCtrl = 0.0F;
      chartInstance->c14_dataWrittenToVector[2U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c14_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c14_f_debug_family_names,
        c14_d_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_d_nargin, 0U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_d_nargout, 1U,
        c14_sf_marshallOut, c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_c_out, 2U, c14_b_sf_marshallOut,
        c14_b_sf_marshallIn);
      if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)
            *chartInstance->c14_ButtonStatus, 1.0, -1, 0U,
            *chartInstance->c14_ButtonStatus == 1.0F)) || CV_EML_COND(1, 0, 1,
           CV_RELATIONAL_EVAL(5U, 1U, 1, (real_T)*chartInstance->c14_ReadError,
                              1.0, -1, 1U, *chartInstance->c14_ReadError != 1.0F)))
      {
        CV_EML_MCDC(1, 0, 0, true);
        CV_EML_IF(1, 0, 0, true);
        c14_c_out = true;
      } else {
        CV_EML_MCDC(1, 0, 0, false);
        CV_EML_IF(1, 0, 0, false);
        c14_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c14_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_Clear_Error;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c14_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c14_sfEvent);
      break;

     case c14_IN_SetCurrentMode:
      CV_CHART_EVAL(6, 0, c14_IN_SetCurrentMode);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c14_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c14_j_debug_family_names,
        c14_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_b_nargin, 0U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_b_nargout, 1U,
        c14_sf_marshallOut, c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_b_out, 2U, c14_b_sf_marshallOut,
        c14_b_sf_marshallIn);
      if (CV_EML_COND(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
            *chartInstance->c14_ButtonStatus, 8.0, -1, 0U,
            *chartInstance->c14_ButtonStatus == 8.0F)) && CV_EML_COND(5, 0, 1,
           CV_RELATIONAL_EVAL(5U, 5U, 1, (real_T)*chartInstance->c14_ReadError,
                              1.0, -1, 0U, *chartInstance->c14_ReadError == 1.0F)))
      {
        CV_EML_MCDC(5, 0, 0, true);
        CV_EML_IF(5, 0, 0, true);
        c14_b_out = true;
      } else {
        CV_EML_MCDC(5, 0, 0, false);
        CV_EML_IF(5, 0, 0, false);
        c14_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c14_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_SetVelocity;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c14_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c14_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_d_debug_family_names,
          c14_h_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_h_nargin, 0U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_h_nargout, 1U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        *chartInstance->c14_DeviceMode = 2.0F;
        chartInstance->c14_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_DeviceMode, 8U);
        *chartInstance->c14_PowerEnable = 1.0F;
        chartInstance->c14_dataWrittenToVector[6U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_PowerEnable, 10U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c14_sfEvent);
      break;

     case c14_IN_SetVelocity:
      CV_CHART_EVAL(6, 0, c14_IN_SetVelocity);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c14_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_e_debug_family_names,
        c14_c_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_c_nargin, 0U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_c_nargout, 1U,
        c14_sf_marshallOut, c14_sf_marshallIn);
      c14_hoistedGlobal = *chartInstance->c14_Joystick_LongCmd;
      c14_a = c14_hoistedGlobal;
      *chartInstance->c14_SpeedRequest = c14_a * 20.0F;
      chartInstance->c14_dataWrittenToVector[7U] = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_SpeedRequest, 11U);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c14_sfEvent);
      break;

     case c14_IN_Wait:
      CV_CHART_EVAL(6, 0, c14_IN_Wait);
      *chartInstance->c14_BrakeCtrl = 2.0F;
      chartInstance->c14_dataWrittenToVector[2U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c14_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c14_h_debug_family_names,
        c14_e_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_e_nargin, 0U, c14_sf_marshallOut,
        c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_e_nargout, 1U,
        c14_sf_marshallOut, c14_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_d_out, 2U, c14_b_sf_marshallOut,
        c14_b_sf_marshallIn);
      if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
            *chartInstance->c14_ButtonStatus, 0.0, -1, 0U,
            *chartInstance->c14_ButtonStatus == 0.0F)) && CV_EML_COND(3, 0, 1,
           CV_RELATIONAL_EVAL(5U, 3U, 1, (real_T)*chartInstance->c14_ReadError,
                              1.0, -1, 0U, *chartInstance->c14_ReadError == 1.0F)))
      {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c14_d_out = true;
      } else {
        CV_EML_MCDC(3, 0, 0, false);
        CV_EML_IF(3, 0, 0, false);
        c14_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c14_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
          c14_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
        *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us = c14_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c14_c_debug_family_names,
          c14_k_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_k_nargin, 0U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_k_nargout, 1U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        *chartInstance->c14_BrakeCtrl = 2.0F;
        chartInstance->c14_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_BrakeCtrl, 9U);
        *chartInstance->c14_aux = 0.0F;
        chartInstance->c14_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c14_aux, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     *chartInstance->c14_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c14_i_debug_family_names,
          c14_i_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_i_nargin, 0U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_i_nargout, 1U,
          c14_sf_marshallOut, c14_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c14_e_out, 2U,
          c14_b_sf_marshallOut, c14_b_sf_marshallIn);
        if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)
              *chartInstance->c14_ButtonStatus, 2.0, -1, 0U,
              *chartInstance->c14_ButtonStatus == 2.0F)) && CV_EML_COND(4, 0, 1,
             CV_RELATIONAL_EVAL(5U, 4U, 1, (real_T)*chartInstance->c14_ReadError,
              1.0, -1, 0U, *chartInstance->c14_ReadError == 1.0F))) {
          CV_EML_MCDC(4, 0, 0, true);
          CV_EML_IF(4, 0, 0, true);
          c14_e_out = true;
        } else {
          CV_EML_MCDC(4, 0, 0, false);
          CV_EML_IF(4, 0, 0, false);
          c14_e_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c14_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
          *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
            c14_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c14_sfEvent);
          *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
            c14_IN_SetCurrentMode;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c14_sfEvent);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                       *chartInstance->c14_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c14_sfEvent);
      break;

     default:
      CV_CHART_EVAL(6, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us =
        c14_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c14_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c14_sfEvent);
}

static void initSimStructsc14_SpeedgoatCANOpen2Buses100us
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c14_machineNumber, uint32_T
  c14_chartNumber, uint32_T c14_instanceNumber)
{
  (void)(c14_machineNumber);
  (void)(c14_chartNumber);
  (void)(c14_instanceNumber);
}

static const mxArray *c14_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData;
  real_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_mxArrayOutData = NULL;
  c14_u = *(real_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, false);
  return c14_mxArrayOutData;
}

static real_T c14_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  real_T c14_y;
  real_T c14_d0;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_d0, 1, 0, 0U, 0, 0U, 0);
  c14_y = c14_d0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_nargin;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  real_T c14_y;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_nargin = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_nargin),
    &c14_thisId);
  sf_mex_destroy(&c14_nargin);
  *(real_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

static const mxArray *c14_b_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData;
  boolean_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_mxArrayOutData = NULL;
  c14_u = *(boolean_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, false);
  return c14_mxArrayOutData;
}

static boolean_T c14_b_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  boolean_T c14_y;
  boolean_T c14_b0;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_b0, 1, 11, 0U, 0, 0U, 0);
  c14_y = c14_b0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_sf_internal_predicateOutput;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  boolean_T c14_y;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_sf_internal_predicateOutput = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c14_sf_internal_predicateOutput), &c14_thisId);
  sf_mex_destroy(&c14_sf_internal_predicateOutput);
  *(boolean_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

const mxArray
  *sf_c14_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void)
{
  const mxArray *c14_nameCaptureInfo = NULL;
  c14_nameCaptureInfo = NULL;
  sf_mex_assign(&c14_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c14_nameCaptureInfo;
}

static const mxArray *c14_c_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData;
  int32_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_mxArrayOutData = NULL;
  c14_u = *(int32_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, false);
  return c14_mxArrayOutData;
}

static int32_T c14_c_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  int32_T c14_y;
  int32_T c14_i1;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_i1, 1, 6, 0U, 0, 0U, 0);
  c14_y = c14_i1;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_b_sfEvent;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  int32_T c14_y;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_b_sfEvent = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_b_sfEvent),
    &c14_thisId);
  sf_mex_destroy(&c14_b_sfEvent);
  *(int32_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

static const mxArray *c14_d_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData;
  real32_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_mxArrayOutData = NULL;
  c14_u = *(real32_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, false);
  return c14_mxArrayOutData;
}

static real32_T c14_d_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_ClearError, const char_T *c14_identifier)
{
  real32_T c14_y;
  emlrtMsgIdentifier c14_thisId;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_b_ClearError),
    &c14_thisId);
  sf_mex_destroy(&c14_b_ClearError);
  return c14_y;
}

static real32_T c14_e_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  real32_T c14_y;
  real32_T c14_f0;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_f0, 1, 1, 0U, 0, 0U, 0);
  c14_y = c14_f0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_b_ClearError;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  real32_T c14_y;
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
    chartInstanceVoid;
  c14_b_ClearError = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_b_ClearError),
    &c14_thisId);
  sf_mex_destroy(&c14_b_ClearError);
  *(real32_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

static uint8_T c14_f_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_is_active_c14_SpeedgoatCANOpen2Buses100us, const char_T
   *c14_identifier)
{
  uint8_T c14_y;
  emlrtMsgIdentifier c14_thisId;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c14_b_is_active_c14_SpeedgoatCANOpen2Buses100us), &c14_thisId);
  sf_mex_destroy(&c14_b_is_active_c14_SpeedgoatCANOpen2Buses100us);
  return c14_y;
}

static uint8_T c14_g_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  uint8_T c14_y;
  uint8_T c14_u0;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_u0, 1, 3, 0U, 0, 0U, 0);
  c14_y = c14_u0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_h_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_dataWrittenToVector, const char_T *c14_identifier, boolean_T c14_y[8])
{
  emlrtMsgIdentifier c14_thisId;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_b_dataWrittenToVector),
    &c14_thisId, c14_y);
  sf_mex_destroy(&c14_b_dataWrittenToVector);
}

static void c14_i_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId, boolean_T c14_y[8])
{
  boolean_T c14_bv1[8];
  int32_T c14_i2;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), c14_bv1, 1, 11, 0U, 1, 0U, 1, 8);
  for (c14_i2 = 0; c14_i2 < 8; c14_i2++) {
    c14_y[c14_i2] = c14_bv1[c14_i2];
  }

  sf_mex_destroy(&c14_u);
}

static const mxArray *c14_j_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_b_setSimStateSideEffectsInfo, const char_T *c14_identifier)
{
  const mxArray *c14_y = NULL;
  emlrtMsgIdentifier c14_thisId;
  c14_y = NULL;
  c14_thisId.fIdentifier = (const char *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  sf_mex_assign(&c14_y, c14_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c14_b_setSimStateSideEffectsInfo), &c14_thisId), false);
  sf_mex_destroy(&c14_b_setSimStateSideEffectsInfo);
  return c14_y;
}

static const mxArray *c14_k_emlrt_marshallIn
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  const mxArray *c14_y = NULL;
  (void)chartInstance;
  (void)c14_parentId;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_duplicatearraysafe(&c14_u), false);
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance, int32_T
   c14_ssid)
{
  (void)chartInstance;
  (void)c14_ssid;
  return NULL;
}

static void c14_init_sf_message_store_memory
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance)
{
  chartInstance->c14_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c14_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c14_is_active_c14_SpeedgoatCANOpen2Buses100us = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c14_is_c14_SpeedgoatCANOpen2Buses100us = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c14_ButtonStatus = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c14_Joystick_LatCmd = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c14_ClearError = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c14_DeviceMode = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c14_BrakeCtrl = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c14_ReadError = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c14_aux2 = (real32_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c14_aux = (real32_T *)ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c14_enable = (real32_T *)ssGetDWork_wrapper(chartInstance->S, 5);
  chartInstance->c14_PowerEnable = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c14_Joystick_LongCmd = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c14_SpeedRequest = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

/* SFunction Glue Code */
static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c14_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1736955273U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1147136207U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1389187690U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4231059014U);
}

mxArray* sf_c14_SpeedgoatCANOpen2Buses100us_get_post_codegen_info(void);
mxArray *sf_c14_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("cv8FBEsCQdU32gKx12qE7B");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c14_SpeedgoatCANOpen2Buses100us_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c14_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c14_SpeedgoatCANOpen2Buses100us_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c14_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c14_SpeedgoatCANOpen2Buses100us_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c14_SpeedgoatCANOpen2Buses100us(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[36],T\"BrakeCtrl\",},{M[1],M[3],T\"ClearError\",},{M[1],M[71],T\"DeviceMode\",},{M[1],M[234],T\"PowerEnable\",},{M[1],M[249],T\"SpeedRequest\",},{M[3],M[70],T\"aux\",},{M[3],M[51],T\"aux2\",},{M[3],M[174],T\"enable\",},{M[8],M[0],T\"is_active_c14_SpeedgoatCANOpen2Buses100us\",},{M[9],M[0],T\"is_c14_SpeedgoatCANOpen2Buses100us\",}}",
    "100 S'type','srcId','name','auxInfo'{{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 11, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c14_SpeedgoatCANOpen2Buses100us_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance =
      (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SpeedgoatCANOpen2Buses100usMachineNumber_,
           14,
           5,
           6,
           0,
           12,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation
          (_SpeedgoatCANOpen2Buses100usMachineNumber_,chartInstance->chartNumber,
           chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _SpeedgoatCANOpen2Buses100usMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SpeedgoatCANOpen2Buses100usMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"aux");
          _SFD_SET_DATA_PROPS(1,0,0,0,"aux2");
          _SFD_SET_DATA_PROPS(2,0,0,0,"enable");
          _SFD_SET_DATA_PROPS(3,1,1,0,"ButtonStatus");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Joystick_LatCmd");
          _SFD_SET_DATA_PROPS(5,1,1,0,"ReadError");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Joystick_LongCmd");
          _SFD_SET_DATA_PROPS(7,2,0,1,"ClearError");
          _SFD_SET_DATA_PROPS(8,2,0,1,"DeviceMode");
          _SFD_SET_DATA_PROPS(9,2,0,1,"BrakeCtrl");
          _SFD_SET_DATA_PROPS(10,2,0,1,"PowerEnable");
          _SFD_SET_DATA_PROPS(11,2,0,1,"SpeedRequest");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_CH_SUBSTATE_COUNT(5);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
        }

        _SFD_CV_INIT_CHART(5,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,36,1,36);

        {
          static int condStart[] = { 1, 22 };

          static int condEnd[] = { 18, 36 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,36,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,18,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,22,36,-1,1);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,9,1,9);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,9,-1,4);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(3,0,0,1,34,1,34);

        {
          static int condStart[] = { 1, 20 };

          static int condEnd[] = { 16, 34 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,34,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,20,34,-1,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(4,0,0,1,34,1,34);

        {
          static int condStart[] = { 1, 20 };

          static int condEnd[] = { 16, 34 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(4,0,0,1,34,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,1,20,34,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(5,0,0,1,34,1,34);

        {
          static int condStart[] = { 1, 20 };

          static int condEnd[] = { 16, 34 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(5,0,0,1,34,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,1,20,34,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_d_sf_marshallOut,(MexInFcnForType)
          c14_d_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _SpeedgoatCANOpen2Buses100usMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance =
      (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c14_ButtonStatus);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c14_Joystick_LatCmd);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c14_ClearError);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c14_DeviceMode);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c14_BrakeCtrl);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c14_ReadError);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c14_aux2);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c14_aux);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c14_enable);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c14_PowerEnable);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c14_Joystick_LongCmd);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c14_SpeedRequest);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s9aXt71JarIrwJ2qJXl2L3G";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses100us_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 14, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
  initialize_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  enable_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  disable_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  sf_gateway_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  ext_mode_exec_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c14_SpeedgoatCANOpen2Buses100us
  (SimStruct* S)
{
  return get_sim_state_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c14_SpeedgoatCANOpen2Buses100us(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*)sf_get_chart_instance_ptr
     (S), st);
}

static void sf_opaque_terminate_c14_SpeedgoatCANOpen2Buses100us(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SpeedgoatCANOpen2Buses100us_optimization_info();
    }

    finalize_c14_SpeedgoatCANOpen2Buses100us
      ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc14_SpeedgoatCANOpen2Buses100us
    ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c14_SpeedgoatCANOpen2Buses100us(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c14_SpeedgoatCANOpen2Buses100us
      ((SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c14_SpeedgoatCANOpen2Buses100us_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id','maxStringLength'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"single\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"single\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"single\",,,,,,,M[0],M[],M[-1],M[-1],}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 6, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 2304156297U, 2776942174U, 1092658793U,
    2010081734U };

  return checksum;
}

static void mdlSetWorkWidths_c14_SpeedgoatCANOpen2Buses100us(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses100us_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      14);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,14,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 14);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,14);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,14,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,14,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,14);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3742636762U));
  ssSetChecksum1(S,(2096688949U));
  ssSetChecksum2(S,(639941649U));
  ssSetChecksum3(S,(3353358140U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c14_SpeedgoatCANOpen2Buses100us(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c14_SpeedgoatCANOpen2Buses100us(SimStruct *S)
{
  SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *chartInstance;
  chartInstance = (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct *)utMalloc
    (sizeof(SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.mdlStart = mdlStart_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c14_SpeedgoatCANOpen2Buses100us;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0, NULL, NULL);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c14_SpeedgoatCANOpen2Buses100us(chartInstance);
}

void c14_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c14_SpeedgoatCANOpen2Buses100us(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c14_SpeedgoatCANOpen2Buses100us(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c14_SpeedgoatCANOpen2Buses100us(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c14_SpeedgoatCANOpen2Buses100us_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
