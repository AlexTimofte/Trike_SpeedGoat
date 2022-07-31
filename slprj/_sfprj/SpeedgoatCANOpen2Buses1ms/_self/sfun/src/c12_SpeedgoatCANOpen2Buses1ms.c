/* Include files */

#include "SpeedgoatCANOpen2Buses1ms_sfun.h"
#include "c12_SpeedgoatCANOpen2Buses1ms.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SpeedgoatCANOpen2Buses1ms_sfun_debug_macros.h"
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
#define c12_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c12_IN_Clear_Error             ((uint8_T)1U)
#define c12_IN_Init                    ((uint8_T)2U)
#define c12_IN_SetCurrentMode          ((uint8_T)3U)
#define c12_IN_Wait                    ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c12_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_e_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c12_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_g_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c12_h_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c12_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c12_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c12_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initialize_params_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void enable_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void disable_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c12_update_debugger_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void ext_mode_exec_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void set_sim_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_st);
static void c12_set_sim_state_side_effects_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void finalize_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void sf_gateway_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void mdl_start_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c12_chartstep_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initSimStructsc12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c12_enter_atomic_Init(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void c12_enter_atomic_Wait(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber, uint32_T c12_instanceNumber);
static const mxArray *c12_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static real_T c12_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_b_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static boolean_T c12_b_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static int32_T c12_c_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_d_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static real32_T c12_d_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_ClearError, const char_T *c12_identifier);
static real32_T c12_e_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static uint8_T c12_f_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_is_active_c12_SpeedgoatCANOpen2Buses1ms, const char_T *c12_identifier);
static uint8_T c12_g_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_h_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_b_dataWrittenToVector, const char_T
  *c12_identifier, boolean_T c12_y[7]);
static void c12_i_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T c12_y[7]);
static const mxArray *c12_j_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier);
static const mxArray *c12_k_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c12_ssid);
static void c12_init_sf_message_store_memory
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void init_simulink_io_address
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc12_SpeedgoatCANOpen2Buses1ms(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  *chartInstance->c12_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c12_doSetSimStateSideEffects = 0U;
  chartInstance->c12_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms = 0U;
  *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_NO_ACTIVE_CHILD;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c12_update_debugger_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c12_prevAniVal;
  c12_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 10U, *chartInstance->c12_sfEvent);
  }

  if (*chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms == c12_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
  }

  if (*chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms == c12_IN_Clear_Error)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
  }

  if (*chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms == c12_IN_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
  }

  if (*chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms ==
      c12_IN_SetCurrentMode) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c12_sfEvent);
  }

  _SFD_SET_ANIMATION(c12_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c12_update_debugger_state_c12_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

static const mxArray *get_sim_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  const mxArray *c12_st;
  const mxArray *c12_y = NULL;
  real32_T c12_hoistedGlobal;
  const mxArray *c12_b_y = NULL;
  real32_T c12_b_hoistedGlobal;
  const mxArray *c12_c_y = NULL;
  real32_T c12_c_hoistedGlobal;
  const mxArray *c12_d_y = NULL;
  real32_T c12_d_hoistedGlobal;
  const mxArray *c12_e_y = NULL;
  real32_T c12_e_hoistedGlobal;
  const mxArray *c12_f_y = NULL;
  real32_T c12_f_hoistedGlobal;
  const mxArray *c12_g_y = NULL;
  real32_T c12_g_hoistedGlobal;
  const mxArray *c12_h_y = NULL;
  uint8_T c12_h_hoistedGlobal;
  const mxArray *c12_i_y = NULL;
  uint8_T c12_i_hoistedGlobal;
  const mxArray *c12_j_y = NULL;
  const mxArray *c12_k_y = NULL;
  c12_st = NULL;
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellmatrix(10, 1), false);
  c12_hoistedGlobal = *chartInstance->c12_BrakeCtrl;
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_b_hoistedGlobal = *chartInstance->c12_ClearError;
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", &c12_b_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 1, c12_c_y);
  c12_c_hoistedGlobal = *chartInstance->c12_DeviceMode;
  c12_d_y = NULL;
  sf_mex_assign(&c12_d_y, sf_mex_create("y", &c12_c_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 2, c12_d_y);
  c12_d_hoistedGlobal = *chartInstance->c12_InitStatus;
  c12_e_y = NULL;
  sf_mex_assign(&c12_e_y, sf_mex_create("y", &c12_d_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 3, c12_e_y);
  c12_e_hoistedGlobal = *chartInstance->c12_PowerEnable;
  c12_f_y = NULL;
  sf_mex_assign(&c12_f_y, sf_mex_create("y", &c12_e_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 4, c12_f_y);
  c12_f_hoistedGlobal = *chartInstance->c12_aux;
  c12_g_y = NULL;
  sf_mex_assign(&c12_g_y, sf_mex_create("y", &c12_f_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 5, c12_g_y);
  c12_g_hoistedGlobal = *chartInstance->c12_aux2;
  c12_h_y = NULL;
  sf_mex_assign(&c12_h_y, sf_mex_create("y", &c12_g_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 6, c12_h_y);
  c12_h_hoistedGlobal =
    *chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms;
  c12_i_y = NULL;
  sf_mex_assign(&c12_i_y, sf_mex_create("y", &c12_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 7, c12_i_y);
  c12_i_hoistedGlobal = *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms;
  c12_j_y = NULL;
  sf_mex_assign(&c12_j_y, sf_mex_create("y", &c12_i_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c12_y, 8, c12_j_y);
  c12_k_y = NULL;
  sf_mex_assign(&c12_k_y, sf_mex_create("y",
    chartInstance->c12_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 7), false);
  sf_mex_setcell(c12_y, 9, c12_k_y);
  sf_mex_assign(&c12_st, c12_y, false);
  return c12_st;
}

static void set_sim_state_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_st)
{
  const mxArray *c12_u;
  boolean_T c12_bv0[7];
  int32_T c12_i0;
  c12_u = sf_mex_dup(c12_st);
  *chartInstance->c12_BrakeCtrl = c12_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 0)), "BrakeCtrl");
  *chartInstance->c12_ClearError = c12_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 1)), "ClearError");
  *chartInstance->c12_DeviceMode = c12_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 2)), "DeviceMode");
  *chartInstance->c12_InitStatus = c12_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 3)), "InitStatus");
  *chartInstance->c12_PowerEnable = c12_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 4)), "PowerEnable");
  *chartInstance->c12_aux = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 5)), "aux");
  *chartInstance->c12_aux2 = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 6)), "aux2");
  *chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms =
    c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 7)),
    "is_active_c12_SpeedgoatCANOpen2Buses1ms");
  *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 8)),
     "is_c12_SpeedgoatCANOpen2Buses1ms");
  c12_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 9)),
    "dataWrittenToVector", c12_bv0);
  for (c12_i0 = 0; c12_i0 < 7; c12_i0++) {
    chartInstance->c12_dataWrittenToVector[c12_i0] = c12_bv0[c12_i0];
  }

  sf_mex_assign(&chartInstance->c12_setSimStateSideEffectsInfo,
                c12_j_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 10)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c12_u);
  chartInstance->c12_doSetSimStateSideEffects = 1U;
  c12_update_debugger_state_c12_SpeedgoatCANOpen2Buses1ms(chartInstance);
  sf_mex_destroy(&c12_st);
}

static void c12_set_sim_state_side_effects_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (chartInstance->c12_doSetSimStateSideEffects != 0) {
    chartInstance->c12_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c12_setSimStateSideEffectsInfo);
}

static void sf_gateway_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c12_set_sim_state_side_effects_c12_SpeedgoatCANOpen2Buses1ms(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 10, *chartInstance->c12_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_ReadError, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_ButtonStatus, 2U);
  *chartInstance->c12_sfEvent = CALL_EVENT;
  c12_chartstep_c12_SpeedgoatCANOpen2Buses1ms(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c12_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c12_chartstep_c12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c12_debug_family_var_map[3];
  uint32_T c12_b_debug_family_var_map[3];
  real_T c12_nargin = 0.0;
  real_T c12_b_nargin = 0.0;
  real_T c12_nargout = 1.0;
  real_T c12_b_nargout = 1.0;
  uint32_T c12_c_debug_family_var_map[3];
  boolean_T c12_out;
  boolean_T c12_b_out;
  real_T c12_c_nargin = 0.0;
  real_T c12_c_nargout = 1.0;
  boolean_T c12_c_out;
  uint32_T c12_d_debug_family_var_map[2];
  real_T c12_d_nargin = 0.0;
  uint32_T c12_e_debug_family_var_map[2];
  uint32_T c12_f_debug_family_var_map[2];
  real_T c12_d_nargout = 0.0;
  real_T c12_e_nargin = 0.0;
  real_T c12_f_nargin = 0.0;
  real_T c12_e_nargout = 0.0;
  real_T c12_f_nargout = 0.0;
  uint32_T c12_g_debug_family_var_map[3];
  real_T c12_g_nargin = 0.0;
  real_T c12_g_nargout = 1.0;
  boolean_T c12_d_out;
  uint32_T c12_h_debug_family_var_map[3];
  uint32_T c12_i_debug_family_var_map[2];
  real_T c12_h_nargin = 0.0;
  real_T c12_i_nargin = 0.0;
  real_T c12_h_nargout = 1.0;
  real_T c12_i_nargout = 0.0;
  boolean_T c12_e_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 10U, *chartInstance->c12_sfEvent);
  if (*chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 10U,
                 *chartInstance->c12_sfEvent);
    *chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c12_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
    *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
    c12_enter_atomic_Init(chartInstance);
  } else {
    switch (*chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms) {
     case c12_IN_Clear_Error:
      CV_CHART_EVAL(10, 0, c12_IN_Clear_Error);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c12_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c12_e_debug_family_names,
        c12_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargin, 0U, c12_sf_marshallOut,
        c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargout, 1U, c12_sf_marshallOut,
        c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_out, 2U, c12_b_sf_marshallOut,
        c12_b_sf_marshallIn);
      if (!chartInstance->c12_dataWrittenToVector[4U]) {
        sf_read_before_write_error(chartInstance->S, 0U, 239U, 1, 3);
      }

      if (CV_EML_IF(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)
            *chartInstance->c12_aux, 4000.0, -1, 4U, *chartInstance->c12_aux >
            4000.0F))) {
        c12_out = true;
      } else {
        c12_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c12_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c12_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_f_debug_family_names,
          c12_f_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_f_nargin, 0U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_f_nargout, 1U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        *chartInstance->c12_aux = 0.0F;
        chartInstance->c12_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_aux, 0U);
        _SFD_SYMBOL_SCOPE_POP();
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
          c12_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
        c12_enter_atomic_Wait(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c12_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_b_debug_family_names,
          c12_e_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_e_nargin, 0U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_e_nargout, 1U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        *chartInstance->c12_ClearError = 1.0F;
        chartInstance->c12_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_ClearError, 4U);
        if (!chartInstance->c12_dataWrittenToVector[4U]) {
          sf_read_before_write_error(chartInstance->S, 0U, 79U, 50, 3);
        }

        (*chartInstance->c12_aux)++;
        chartInstance->c12_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_aux, 0U);
        *chartInstance->c12_InitStatus = 0.0F;
        chartInstance->c12_dataWrittenToVector[6U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_InitStatus, 8U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c12_sfEvent);
      break;

     case c12_IN_Init:
      CV_CHART_EVAL(10, 0, c12_IN_Init);
      *chartInstance->c12_BrakeCtrl = 0.0F;
      chartInstance->c12_dataWrittenToVector[2U] = true;
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
      *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
        c12_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
      *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Clear_Error;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c12_sfEvent);
      break;

     case c12_IN_SetCurrentMode:
      CV_CHART_EVAL(10, 0, c12_IN_SetCurrentMode);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c12_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c12_k_debug_family_names,
        c12_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_b_nargin, 0U, c12_sf_marshallOut,
        c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_b_nargout, 1U,
        c12_sf_marshallOut, c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_b_out, 2U, c12_b_sf_marshallOut,
        c12_b_sf_marshallIn);
      if (CV_EML_IF(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0, (real_T)
            *chartInstance->c12_ReadError, 1.0, -1, 1U,
            *chartInstance->c12_ReadError != 1.0F))) {
        c12_b_out = true;
      } else {
        c12_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c12_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c12_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c12_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c12_sfEvent);
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
          c12_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c12_sfEvent);
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Init;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
        c12_enter_atomic_Init(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c12_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_d_debug_family_names,
          c12_d_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_d_nargin, 0U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_d_nargout, 1U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        *chartInstance->c12_DeviceMode = 3.0F;
        chartInstance->c12_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_DeviceMode, 5U);
        *chartInstance->c12_PowerEnable = 1.0F;
        chartInstance->c12_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_PowerEnable, 7U);
        *chartInstance->c12_InitStatus = 1.0F;
        chartInstance->c12_dataWrittenToVector[6U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_InitStatus, 8U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c12_sfEvent);
      break;

     case c12_IN_Wait:
      CV_CHART_EVAL(10, 0, c12_IN_Wait);
      *chartInstance->c12_BrakeCtrl = 2.0F;
      chartInstance->c12_dataWrittenToVector[2U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c12_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c12_g_debug_family_names,
        c12_c_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_c_nargin, 0U, c12_sf_marshallOut,
        c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_c_nargout, 1U,
        c12_sf_marshallOut, c12_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_c_out, 2U, c12_b_sf_marshallOut,
        c12_b_sf_marshallIn);
      if (!chartInstance->c12_dataWrittenToVector[4U]) {
        sf_read_before_write_error(chartInstance->S, 0U, 240U, 1, 3);
      }

      if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
            *chartInstance->c12_aux, 20.0, -1, 2U, *chartInstance->c12_aux <
            20.0F)) && CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 1,
            (real_T)*chartInstance->c12_ReadError, 1.0, -1, 0U,
            *chartInstance->c12_ReadError == 1.0F))) {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c12_c_out = true;
      } else {
        CV_EML_MCDC(3, 0, 0, false);
        CV_EML_IF(3, 0, 0, false);
        c12_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c12_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
          c12_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
        *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
        c12_enter_atomic_Wait(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     *chartInstance->c12_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c12_i_debug_family_names,
          c12_g_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_g_nargin, 0U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_g_nargout, 1U,
          c12_sf_marshallOut, c12_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_d_out, 2U,
          c12_b_sf_marshallOut, c12_b_sf_marshallIn);
        if (!chartInstance->c12_dataWrittenToVector[4U]) {
          sf_read_before_write_error(chartInstance->S, 0U, 242U, 1, 3);
        }

        if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)
              *chartInstance->c12_aux, 20.0, -1, 5U, *chartInstance->c12_aux >=
              20.0F)) && CV_EML_COND(4, 0, 1, CV_RELATIONAL_EVAL(5U, 4U, 1,
              (real_T)*chartInstance->c12_ReadError, 1.0, -1, 0U,
              *chartInstance->c12_ReadError == 1.0F))) {
          CV_EML_MCDC(4, 0, 0, true);
          CV_EML_IF(4, 0, 0, true);
          c12_d_out = true;
        } else {
          CV_EML_MCDC(4, 0, 0, false);
          CV_EML_IF(4, 0, 0, false);
          c12_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c12_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c12_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_j_debug_family_names,
            c12_i_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_i_nargin, 0U,
            c12_sf_marshallOut, c12_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_i_nargout, 1U,
            c12_sf_marshallOut, c12_sf_marshallIn);
          *chartInstance->c12_aux = 0.0F;
          chartInstance->c12_dataWrittenToVector[4U] = true;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_aux, 0U);
          _SFD_SYMBOL_SCOPE_POP();
          *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
            c12_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
          *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
            c12_IN_SetCurrentMode;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c12_sfEvent);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       *chartInstance->c12_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c12_h_debug_family_names,
            c12_h_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_h_nargin, 0U,
            c12_sf_marshallOut, c12_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_h_nargout, 1U,
            c12_sf_marshallOut, c12_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_e_out, 2U,
            c12_b_sf_marshallOut, c12_b_sf_marshallIn);
          if (CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
                *chartInstance->c12_ReadError, 1.0, -1, 1U,
                *chartInstance->c12_ReadError != 1.0F))) {
            c12_e_out = true;
          } else {
            c12_e_out = false;
          }

          _SFD_SYMBOL_SCOPE_POP();
          if (c12_e_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c12_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c12_sfEvent);
            *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
              c12_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c12_sfEvent);
            *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = c12_IN_Init;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c12_sfEvent);
            c12_enter_atomic_Init(chartInstance);
          } else {
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                         *chartInstance->c12_sfEvent);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c12_sfEvent);
      break;

     default:
      CV_CHART_EVAL(10, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms =
        c12_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c12_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c12_sfEvent);
}

static void initSimStructsc12_SpeedgoatCANOpen2Buses1ms
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c12_enter_atomic_Init(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  uint32_T c12_debug_family_var_map[2];
  real_T c12_nargin = 0.0;
  real_T c12_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_debug_family_names,
    c12_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargin, 0U, c12_sf_marshallOut,
    c12_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargout, 1U, c12_sf_marshallOut,
    c12_sf_marshallIn);
  *chartInstance->c12_ClearError = 0.0F;
  chartInstance->c12_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_ClearError, 4U);
  *chartInstance->c12_DeviceMode = 0.0F;
  chartInstance->c12_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_DeviceMode, 5U);
  *chartInstance->c12_BrakeCtrl = 0.0F;
  chartInstance->c12_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_BrakeCtrl, 6U);
  *chartInstance->c12_PowerEnable = 0.0F;
  chartInstance->c12_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_PowerEnable, 7U);
  *chartInstance->c12_aux = 0.0F;
  chartInstance->c12_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_aux, 0U);
  *chartInstance->c12_InitStatus = 0.0F;
  chartInstance->c12_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_InitStatus, 8U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c12_enter_atomic_Wait(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  uint32_T c12_debug_family_var_map[2];
  real_T c12_nargin = 0.0;
  real_T c12_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c12_c_debug_family_names,
    c12_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargin, 0U, c12_sf_marshallOut,
    c12_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c12_nargout, 1U, c12_sf_marshallOut,
    c12_sf_marshallIn);
  *chartInstance->c12_BrakeCtrl = 2.0F;
  chartInstance->c12_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_BrakeCtrl, 6U);
  if (!chartInstance->c12_dataWrittenToVector[4U]) {
    sf_read_before_write_error(chartInstance->S, 0U, 238U, 40, 3);
  }

  (*chartInstance->c12_aux)++;
  chartInstance->c12_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_aux, 0U);
  *chartInstance->c12_InitStatus = 0.0F;
  chartInstance->c12_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c12_InitStatus, 8U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber, uint32_T c12_instanceNumber)
{
  (void)(c12_machineNumber);
  (void)(c12_chartNumber);
  (void)(c12_instanceNumber);
}

static const mxArray *c12_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData;
  real_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_mxArrayOutData = NULL;
  c12_u = *(real_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c12_mxArrayOutData, c12_y, false);
  return c12_mxArrayOutData;
}

static real_T c12_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  real_T c12_y;
  real_T c12_d0;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_d0, 1, 0, 0U, 0, 0U, 0);
  c12_y = c12_d0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_nargin;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  real_T c12_y;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_nargin = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_nargin),
    &c12_thisId);
  sf_mex_destroy(&c12_nargin);
  *(real_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_b_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData;
  boolean_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_mxArrayOutData = NULL;
  c12_u = *(boolean_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c12_mxArrayOutData, c12_y, false);
  return c12_mxArrayOutData;
}

static boolean_T c12_b_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  boolean_T c12_y;
  boolean_T c12_b0;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_b0, 1, 11, 0U, 0, 0U, 0);
  c12_y = c12_b0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_sf_internal_predicateOutput;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  boolean_T c12_y;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_sf_internal_predicateOutput = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_sf_internal_predicateOutput), &c12_thisId);
  sf_mex_destroy(&c12_sf_internal_predicateOutput);
  *(boolean_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

const mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c12_nameCaptureInfo = NULL;
  c12_nameCaptureInfo = NULL;
  sf_mex_assign(&c12_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c12_nameCaptureInfo;
}

static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData;
  int32_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_mxArrayOutData = NULL;
  c12_u = *(int32_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c12_mxArrayOutData, c12_y, false);
  return c12_mxArrayOutData;
}

static int32_T c12_c_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  int32_T c12_y;
  int32_T c12_i1;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_i1, 1, 6, 0U, 0, 0U, 0);
  c12_y = c12_i1;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_b_sfEvent;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  int32_T c12_y;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_b_sfEvent = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_sfEvent),
    &c12_thisId);
  sf_mex_destroy(&c12_b_sfEvent);
  *(int32_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_d_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData;
  real32_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_mxArrayOutData = NULL;
  c12_u = *(real32_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c12_mxArrayOutData, c12_y, false);
  return c12_mxArrayOutData;
}

static real32_T c12_d_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_ClearError, const char_T *c12_identifier)
{
  real32_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_ClearError),
    &c12_thisId);
  sf_mex_destroy(&c12_b_ClearError);
  return c12_y;
}

static real32_T c12_e_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  real32_T c12_y;
  real32_T c12_f0;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_f0, 1, 1, 0U, 0, 0U, 0);
  c12_y = c12_f0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_b_ClearError;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  real32_T c12_y;
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c12_b_ClearError = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_ClearError),
    &c12_thisId);
  sf_mex_destroy(&c12_b_ClearError);
  *(real32_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static uint8_T c12_f_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_is_active_c12_SpeedgoatCANOpen2Buses1ms, const char_T *c12_identifier)
{
  uint8_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_is_active_c12_SpeedgoatCANOpen2Buses1ms), &c12_thisId);
  sf_mex_destroy(&c12_b_is_active_c12_SpeedgoatCANOpen2Buses1ms);
  return c12_y;
}

static uint8_T c12_g_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  uint8_T c12_y;
  uint8_T c12_u0;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_u0, 1, 3, 0U, 0, 0U, 0);
  c12_y = c12_u0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_h_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_b_dataWrittenToVector, const char_T
  *c12_identifier, boolean_T c12_y[7])
{
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_dataWrittenToVector),
    &c12_thisId, c12_y);
  sf_mex_destroy(&c12_b_dataWrittenToVector);
}

static void c12_i_emlrt_marshallIn(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T c12_y[7])
{
  boolean_T c12_bv1[7];
  int32_T c12_i2;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_bv1, 1, 11, 0U, 1, 0U, 1, 7);
  for (c12_i2 = 0; c12_i2 < 7; c12_i2++) {
    c12_y[c12_i2] = c12_bv1[c12_i2];
  }

  sf_mex_destroy(&c12_u);
}

static const mxArray *c12_j_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier)
{
  const mxArray *c12_y = NULL;
  emlrtMsgIdentifier c12_thisId;
  c12_y = NULL;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  sf_mex_assign(&c12_y, c12_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_setSimStateSideEffectsInfo), &c12_thisId), false);
  sf_mex_destroy(&c12_b_setSimStateSideEffectsInfo);
  return c12_y;
}

static const mxArray *c12_k_emlrt_marshallIn
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  const mxArray *c12_y = NULL;
  (void)chartInstance;
  (void)c12_parentId;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_duplicatearraysafe(&c12_u), false);
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c12_ssid)
{
  (void)chartInstance;
  (void)c12_ssid;
  return NULL;
}

static void c12_init_sf_message_store_memory
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  chartInstance->c12_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c12_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c12_is_active_c12_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c12_is_c12_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c12_ButtonStatus = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c12_ClearError = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c12_DeviceMode = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c12_BrakeCtrl = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c12_ReadError = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c12_aux2 = (real32_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c12_aux = (real32_T *)ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c12_PowerEnable = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c12_InitStatus = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

/* SFunction Glue Code */
static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c12_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4163090359U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(327086413U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3947496114U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1651341985U);
}

mxArray* sf_c12_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void);
mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ONOGxLqR1BIscwniXNMfIE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c12_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void)
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

mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c12_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c12_SpeedgoatCANOpen2Buses1ms(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[36],T\"BrakeCtrl\",},{M[1],M[3],T\"ClearError\",},{M[1],M[71],T\"DeviceMode\",},{M[1],M[174],T\"InitStatus\",},{M[1],M[234],T\"PowerEnable\",},{M[3],M[70],T\"aux\",},{M[3],M[51],T\"aux2\",},{M[8],M[0],T\"is_active_c12_SpeedgoatCANOpen2Buses1ms\",},{M[9],M[0],T\"is_c12_SpeedgoatCANOpen2Buses1ms\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_SpeedgoatCANOpen2Buses1ms_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SpeedgoatCANOpen2Buses1msMachineNumber_,
           12,
           4,
           9,
           0,
           9,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_SpeedgoatCANOpen2Buses1msMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _SpeedgoatCANOpen2Buses1msMachineNumber_,chartInstance->chartNumber,
             1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SpeedgoatCANOpen2Buses1msMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"aux");
          _SFD_SET_DATA_PROPS(1,0,0,0,"aux2");
          _SFD_SET_DATA_PROPS(2,1,1,0,"ButtonStatus");
          _SFD_SET_DATA_PROPS(3,1,1,0,"ReadError");
          _SFD_SET_DATA_PROPS(4,2,0,1,"ClearError");
          _SFD_SET_DATA_PROPS(5,2,0,1,"DeviceMode");
          _SFD_SET_DATA_PROPS(6,2,0,1,"BrakeCtrl");
          _SFD_SET_DATA_PROPS(7,2,0,1,"PowerEnable");
          _SFD_SET_DATA_PROPS(8,2,0,1,"InitStatus");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,0,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,11,1,11);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,11,-1,4);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(3,0,0,1,27,1,27);

        {
          static int condStart[] = { 1, 13 };

          static int condEnd[] = { 9, 27 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,27,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,9,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,13,27,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,15,-1,1);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(4,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 14 };

          static int condEnd[] = { 10, 28 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(4,0,0,1,28,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,10,-1,5);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,1,14,28,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(6,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,15,-1,1);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _SpeedgoatCANOpen2Buses1msMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c12_ButtonStatus);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c12_ClearError);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c12_DeviceMode);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c12_BrakeCtrl);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c12_ReadError);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c12_aux2);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c12_aux);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c12_PowerEnable);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c12_InitStatus);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "snlV8iUGxwvoZgkwiBqtoi";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 12, "dworkChecksum");
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

static void sf_opaque_initialize_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
  initialize_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  enable_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  disable_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_gateway_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  ext_mode_exec_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c12_SpeedgoatCANOpen2Buses1ms
  (SimStruct* S)
{
  return get_sim_state_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
     (S));                             /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c12_SpeedgoatCANOpen2Buses1ms(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_terminate_c12_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SpeedgoatCANOpen2Buses1ms_optimization_info();
    }

    finalize_c12_SpeedgoatCANOpen2Buses1ms
      ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc12_SpeedgoatCANOpen2Buses1ms
    ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_SpeedgoatCANOpen2Buses1ms
      ((SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr
       (S));
  }
}

mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x5'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id','maxStringLength'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"single\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"single\",,,,,,,M[0],M[],M[-1],M[-1],}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 5, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 294786712U, 3848634672U, 1801873800U,
    2928757155U };

  return checksum;
}

static void mdlSetWorkWidths_c12_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      12);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,12,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 12);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,12);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,12,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,12,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,12);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(950066414U));
  ssSetChecksum1(S,(283134654U));
  ssSetChecksum2(S,(3004849516U));
  ssSetChecksum3(S,(1400791365U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c12_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c12_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct *)utMalloc
    (sizeof(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlStart = mdlStart_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c12_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c12_SpeedgoatCANOpen2Buses1ms;
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
  mdl_start_c12_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

void c12_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c12_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_SpeedgoatCANOpen2Buses1ms(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_SpeedgoatCANOpen2Buses1ms_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}