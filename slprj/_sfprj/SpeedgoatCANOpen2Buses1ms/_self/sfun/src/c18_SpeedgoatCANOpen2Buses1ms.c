/* Include files */

#include "SpeedgoatCANOpen2Buses1ms_sfun.h"
#include "c18_SpeedgoatCANOpen2Buses1ms.h"
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
#define c18_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c18_IN_Active                  ((uint8_T)1U)
#define c18_IN_Active1                 ((uint8_T)2U)
#define c18_IN_Standby                 ((uint8_T)3U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c18_debug_family_names[2] = { "nargin", "nargout" };

static const char * c18_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c18_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c18_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c18_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c18_f_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c18_g_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c18_h_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c18_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initialize_params_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void enable_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void disable_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c18_update_debugger_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void ext_mode_exec_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void set_sim_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_st);
static void c18_set_sim_state_side_effects_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void finalize_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void sf_gateway_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void mdl_start_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c18_chartstep_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initSimStructsc18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber, uint32_T c18_instanceNumber);
static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static real_T c18_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_nargin, const char_T *c18_identifier);
static real_T c18_b_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static boolean_T c18_c_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static const mxArray *c18_c_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static int32_T c18_d_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static uint8_T c18_e_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_b_is_active_c18_SpeedgoatCANOpen2Buses1ms, const char_T *c18_identifier);
static uint8_T c18_f_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_g_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_b_dataWrittenToVector, const char_T
  *c18_identifier, boolean_T c18_y[2]);
static void c18_h_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId,
  boolean_T c18_y[2]);
static const mxArray *c18_i_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_b_setSimStateSideEffectsInfo, const char_T *c18_identifier);
static const mxArray *c18_j_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c18_ssid);
static void c18_init_sf_message_store_memory
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void init_simulink_io_address
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc18_SpeedgoatCANOpen2Buses1ms(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  *chartInstance->c18_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c18_doSetSimStateSideEffects = 0U;
  chartInstance->c18_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c18_temporalCounter_i1 = 0U;
  *chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms = 0U;
  *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_NO_ACTIVE_CHILD;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c18_update_debugger_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c18_prevAniVal;
  c18_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 16U, *chartInstance->c18_sfEvent);
  }

  if (*chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms == c18_IN_Active) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
  }

  if (*chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms == c18_IN_Standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
  }

  if (*chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms == c18_IN_Active1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
  }

  _SFD_SET_ANIMATION(c18_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c18_update_debugger_state_c18_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

static const mxArray *get_sim_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  const mxArray *c18_st;
  const mxArray *c18_y = NULL;
  real_T c18_hoistedGlobal;
  const mxArray *c18_b_y = NULL;
  real_T c18_b_hoistedGlobal;
  const mxArray *c18_c_y = NULL;
  uint8_T c18_c_hoistedGlobal;
  const mxArray *c18_d_y = NULL;
  uint8_T c18_d_hoistedGlobal;
  const mxArray *c18_e_y = NULL;
  uint8_T c18_e_hoistedGlobal;
  const mxArray *c18_f_y = NULL;
  const mxArray *c18_g_y = NULL;
  c18_st = NULL;
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellmatrix(6, 1), false);
  c18_hoistedGlobal = *chartInstance->c18_e_out;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_b_hoistedGlobal = *chartInstance->c18_timer;
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", &c18_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 1, c18_c_y);
  c18_c_hoistedGlobal =
    *chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms;
  c18_d_y = NULL;
  sf_mex_assign(&c18_d_y, sf_mex_create("y", &c18_c_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 2, c18_d_y);
  c18_d_hoistedGlobal = *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms;
  c18_e_y = NULL;
  sf_mex_assign(&c18_e_y, sf_mex_create("y", &c18_d_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 3, c18_e_y);
  c18_e_hoistedGlobal = *chartInstance->c18_temporalCounter_i1;
  c18_f_y = NULL;
  sf_mex_assign(&c18_f_y, sf_mex_create("y", &c18_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 4, c18_f_y);
  c18_g_y = NULL;
  sf_mex_assign(&c18_g_y, sf_mex_create("y",
    chartInstance->c18_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c18_y, 5, c18_g_y);
  sf_mex_assign(&c18_st, c18_y, false);
  return c18_st;
}

static void set_sim_state_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_st)
{
  const mxArray *c18_u;
  boolean_T c18_bv0[2];
  int32_T c18_i0;
  c18_u = sf_mex_dup(c18_st);
  *chartInstance->c18_e_out = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 0)), "e_out");
  *chartInstance->c18_timer = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 1)), "timer");
  *chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms =
    c18_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 2)),
    "is_active_c18_SpeedgoatCANOpen2Buses1ms");
  *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 3)),
     "is_c18_SpeedgoatCANOpen2Buses1ms");
  *chartInstance->c18_temporalCounter_i1 = c18_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_u, 4)), "temporalCounter_i1");
  c18_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 5)),
    "dataWrittenToVector", c18_bv0);
  for (c18_i0 = 0; c18_i0 < 2; c18_i0++) {
    chartInstance->c18_dataWrittenToVector[c18_i0] = c18_bv0[c18_i0];
  }

  sf_mex_assign(&chartInstance->c18_setSimStateSideEffectsInfo,
                c18_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 6)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c18_u);
  chartInstance->c18_doSetSimStateSideEffects = 1U;
  c18_update_debugger_state_c18_SpeedgoatCANOpen2Buses1ms(chartInstance);
  sf_mex_destroy(&c18_st);
}

static void c18_set_sim_state_side_effects_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (chartInstance->c18_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms == c18_IN_Active1)
        && (sf_mex_sub(chartInstance->c18_setSimStateSideEffectsInfo,
                       "setSimStateSideEffectsInfo", 1, 3) == 0.0)) {
      *chartInstance->c18_temporalCounter_i1 = 0U;
    }

    chartInstance->c18_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c18_setSimStateSideEffectsInfo);
}

static void sf_gateway_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c18_set_sim_state_side_effects_c18_SpeedgoatCANOpen2Buses1ms(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  if (*chartInstance->c18_temporalCounter_i1 < 63U) {
    *chartInstance->c18_temporalCounter_i1 = (uint8_T)((uint32_T)
      *chartInstance->c18_temporalCounter_i1 + 1U);
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 16, *chartInstance->c18_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c18_Hyst, 1U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_in, 0U);
  *chartInstance->c18_sfEvent = CALL_EVENT;
  c18_chartstep_c18_SpeedgoatCANOpen2Buses1ms(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c18_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c18_chartstep_c18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c18_debug_family_var_map[3];
  uint32_T c18_b_debug_family_var_map[3];
  uint32_T c18_c_debug_family_var_map[3];
  real_T c18_nargin = 0.0;
  real_T c18_b_nargin = 0.0;
  real_T c18_c_nargin = 0.0;
  real_T c18_nargout = 1.0;
  real_T c18_b_nargout = 1.0;
  real_T c18_c_nargout = 1.0;
  boolean_T c18_out;
  boolean_T c18_b_out;
  boolean_T c18_c_out;
  uint32_T c18_d_debug_family_var_map[2];
  real_T c18_d_nargin = 0.0;
  real_T c18_d_nargout = 0.0;
  uint32_T c18_e_debug_family_var_map[2];
  uint32_T c18_f_debug_family_var_map[3];
  real_T c18_e_nargin = 0.0;
  real_T c18_f_nargin = 0.0;
  real_T c18_e_nargout = 0.0;
  real_T c18_f_nargout = 1.0;
  boolean_T c18_d_out;
  uint32_T c18_g_debug_family_var_map[2];
  uint32_T c18_h_debug_family_var_map[2];
  uint32_T c18_i_debug_family_var_map[2];
  real_T c18_g_nargin = 0.0;
  real_T c18_h_nargin = 0.0;
  real_T c18_i_nargin = 0.0;
  real_T c18_g_nargout = 0.0;
  real_T c18_h_nargout = 0.0;
  real_T c18_i_nargout = 0.0;
  uint32_T c18_j_debug_family_var_map[2];
  real_T c18_j_nargin = 0.0;
  real_T c18_j_nargout = 0.0;
  uint32_T c18_k_debug_family_var_map[2];
  real_T c18_k_nargin = 0.0;
  real_T c18_k_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 16U, *chartInstance->c18_sfEvent);
  if (*chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 16U,
                 *chartInstance->c18_sfEvent);
    *chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c18_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
    *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_Standby;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_c_debug_family_names,
      c18_d_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_d_nargin, 0U, c18_sf_marshallOut,
      c18_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_d_nargout, 1U, c18_sf_marshallOut,
      c18_sf_marshallIn);
    *chartInstance->c18_e_out = 0.0;
    chartInstance->c18_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
    *chartInstance->c18_timer = 0.0;
    chartInstance->c18_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms) {
     case c18_IN_Active:
      CV_CHART_EVAL(16, 0, c18_IN_Active);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c18_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c18_g_debug_family_names,
        c18_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_nargin, 0U, c18_sf_marshallOut,
        c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_nargout, 1U, c18_sf_marshallOut,
        c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_out, 2U, c18_b_sf_marshallOut,
        c18_b_sf_marshallIn);
      if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
            *chartInstance->c18_e_in, *chartInstance->c18_Hyst, -1, 2U,
            *chartInstance->c18_e_in < *chartInstance->c18_Hyst)) && CV_EML_COND
          (2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1, *chartInstance->c18_e_in,
            -*chartInstance->c18_Hyst, -1, 4U, *chartInstance->c18_e_in >
            -*chartInstance->c18_Hyst))) {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c18_out = true;
      } else {
        CV_EML_MCDC(2, 0, 0, false);
        CV_EML_IF(2, 0, 0, false);
        c18_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c18_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms =
          c18_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_Active1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_temporalCounter_i1 = 0U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_d_debug_family_names,
          c18_h_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_h_nargin, 0U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_h_nargout, 1U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        *chartInstance->c18_e_out = *chartInstance->c18_e_in;
        chartInstance->c18_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
        *chartInstance->c18_timer = 0.0;
        chartInstance->c18_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c18_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_b_debug_family_names,
          c18_e_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_e_nargin, 0U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_e_nargout, 1U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        *chartInstance->c18_e_out = *chartInstance->c18_e_in;
        chartInstance->c18_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
        *chartInstance->c18_timer = 0.0;
        chartInstance->c18_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c18_sfEvent);
      break;

     case c18_IN_Active1:
      CV_CHART_EVAL(16, 0, c18_IN_Active1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c18_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c18_i_debug_family_names,
        c18_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_b_nargin, 0U, c18_sf_marshallOut,
        c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_b_nargout, 1U,
        c18_sf_marshallOut, c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_b_out, 2U, c18_b_sf_marshallOut,
        c18_b_sf_marshallIn);
      if (CV_EML_COND(3, 0, 0, *chartInstance->c18_temporalCounter_i1 >= 40) &&
          CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 0,
            *chartInstance->c18_e_in, *chartInstance->c18_Hyst, -1, 2U,
            *chartInstance->c18_e_in < *chartInstance->c18_Hyst)) && CV_EML_COND
          (3, 0, 2, CV_RELATIONAL_EVAL(5U, 3U, 1, *chartInstance->c18_e_in,
            -*chartInstance->c18_Hyst, -1, 4U, *chartInstance->c18_e_in >
            -*chartInstance->c18_Hyst))) {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c18_b_out = true;
      } else {
        CV_EML_MCDC(3, 0, 0, false);
        CV_EML_IF(3, 0, 0, false);
        c18_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c18_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c18_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms =
          c18_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_Standby;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_c_debug_family_names,
          c18_i_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_i_nargin, 0U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_i_nargout, 1U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        *chartInstance->c18_e_out = 0.0;
        chartInstance->c18_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
        *chartInstance->c18_timer = 0.0;
        chartInstance->c18_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     *chartInstance->c18_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c18_h_debug_family_names,
          c18_f_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_f_nargin, 0U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_f_nargout, 1U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_d_out, 2U,
          c18_b_sf_marshallOut, c18_b_sf_marshallIn);
        if (CV_EML_COND(5, 0, 0, *chartInstance->c18_temporalCounter_i1 >= 40) &&
            (CV_EML_COND(5, 0, 1, CV_RELATIONAL_EVAL(5U, 5U, 0,
               *chartInstance->c18_e_in, *chartInstance->c18_Hyst, -1, 4U,
               *chartInstance->c18_e_in > *chartInstance->c18_Hyst)) ||
             CV_EML_COND(5, 0, 2, CV_RELATIONAL_EVAL(5U, 5U, 1,
               *chartInstance->c18_e_in, -*chartInstance->c18_Hyst, -1, 2U,
               *chartInstance->c18_e_in < -*chartInstance->c18_Hyst)))) {
          CV_EML_MCDC(5, 0, 0, true);
          CV_EML_IF(5, 0, 0, true);
          c18_d_out = true;
        } else {
          CV_EML_MCDC(5, 0, 0, false);
          CV_EML_IF(5, 0, 0, false);
          c18_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c18_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c18_sfEvent);
          *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms =
            c18_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
          *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_Active;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_debug_family_names,
            c18_k_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_k_nargin, 0U,
            c18_sf_marshallOut, c18_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_k_nargout, 1U,
            c18_sf_marshallOut, c18_sf_marshallIn);
          *chartInstance->c18_e_out = *chartInstance->c18_e_in;
          chartInstance->c18_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
          *chartInstance->c18_timer = 0.0;
          chartInstance->c18_dataWrittenToVector[1U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                       *chartInstance->c18_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_e_debug_family_names,
            c18_j_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_j_nargin, 0U,
            c18_sf_marshallOut, c18_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_j_nargout, 1U,
            c18_sf_marshallOut, c18_sf_marshallIn);
          *chartInstance->c18_e_out = *chartInstance->c18_e_in;
          chartInstance->c18_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
          *chartInstance->c18_timer = 0.0;
          chartInstance->c18_dataWrittenToVector[1U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
          _SFD_SYMBOL_SCOPE_POP();
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c18_sfEvent);
      break;

     case c18_IN_Standby:
      CV_CHART_EVAL(16, 0, c18_IN_Standby);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c18_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c18_f_debug_family_names,
        c18_c_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_c_nargin, 0U, c18_sf_marshallOut,
        c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_c_nargout, 1U,
        c18_sf_marshallOut, c18_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_c_out, 2U, c18_b_sf_marshallOut,
        c18_b_sf_marshallIn);
      if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
            *chartInstance->c18_e_in, *chartInstance->c18_Hyst, -1, 4U,
            *chartInstance->c18_e_in > *chartInstance->c18_Hyst)) || CV_EML_COND
          (1, 0, 1, CV_RELATIONAL_EVAL(5U, 1U, 1, *chartInstance->c18_e_in,
            -*chartInstance->c18_Hyst, -1, 2U, *chartInstance->c18_e_in <
            -*chartInstance->c18_Hyst))) {
        CV_EML_MCDC(1, 0, 0, true);
        CV_EML_IF(1, 0, 0, true);
        c18_c_out = true;
      } else {
        CV_EML_MCDC(1, 0, 0, false);
        CV_EML_IF(1, 0, 0, false);
        c18_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c18_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms =
          c18_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c18_sfEvent);
        *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = c18_IN_Active;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c18_debug_family_names,
          c18_g_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_g_nargin, 0U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c18_g_nargout, 1U,
          c18_sf_marshallOut, c18_sf_marshallIn);
        *chartInstance->c18_e_out = *chartInstance->c18_e_in;
        chartInstance->c18_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_e_out, 2U);
        *chartInstance->c18_timer = 0.0;
        chartInstance->c18_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c18_timer, 3U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c18_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c18_sfEvent);
      break;

     default:
      CV_CHART_EVAL(16, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms =
        c18_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c18_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c18_sfEvent);
}

static void initSimStructsc18_SpeedgoatCANOpen2Buses1ms
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber, uint32_T c18_instanceNumber)
{
  (void)(c18_machineNumber);
  (void)(c18_chartNumber);
  (void)(c18_instanceNumber);
}

static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData;
  real_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_mxArrayOutData = NULL;
  c18_u = *(real_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c18_mxArrayOutData, c18_y, false);
  return c18_mxArrayOutData;
}

static real_T c18_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_nargin, const char_T *c18_identifier)
{
  real_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nargin),
    &c18_thisId);
  sf_mex_destroy(&c18_nargin);
  return c18_y;
}

static real_T c18_b_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  real_T c18_y;
  real_T c18_d0;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_d0, 1, 0, 0U, 0, 0U, 0);
  c18_y = c18_d0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_nargin;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  real_T c18_y;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_nargin = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nargin),
    &c18_thisId);
  sf_mex_destroy(&c18_nargin);
  *(real_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData;
  boolean_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_mxArrayOutData = NULL;
  c18_u = *(boolean_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c18_mxArrayOutData, c18_y, false);
  return c18_mxArrayOutData;
}

static boolean_T c18_c_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  boolean_T c18_y;
  boolean_T c18_b0;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_b0, 1, 11, 0U, 0, 0U, 0);
  c18_y = c18_b0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_sf_internal_predicateOutput;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  boolean_T c18_y;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_sf_internal_predicateOutput = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_sf_internal_predicateOutput), &c18_thisId);
  sf_mex_destroy(&c18_sf_internal_predicateOutput);
  *(boolean_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

const mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  sf_mex_assign(&c18_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c18_nameCaptureInfo;
}

static const mxArray *c18_c_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData;
  int32_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_mxArrayOutData = NULL;
  c18_u = *(int32_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c18_mxArrayOutData, c18_y, false);
  return c18_mxArrayOutData;
}

static int32_T c18_d_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  int32_T c18_y;
  int32_T c18_i1;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_i1, 1, 6, 0U, 0, 0U, 0);
  c18_y = c18_i1;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_b_sfEvent;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  int32_T c18_y;
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c18_b_sfEvent = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_b_sfEvent),
    &c18_thisId);
  sf_mex_destroy(&c18_b_sfEvent);
  *(int32_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

static uint8_T c18_e_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_b_is_active_c18_SpeedgoatCANOpen2Buses1ms, const char_T *c18_identifier)
{
  uint8_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_b_is_active_c18_SpeedgoatCANOpen2Buses1ms), &c18_thisId);
  sf_mex_destroy(&c18_b_is_active_c18_SpeedgoatCANOpen2Buses1ms);
  return c18_y;
}

static uint8_T c18_f_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  uint8_T c18_y;
  uint8_T c18_u0;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_u0, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_u0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_g_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_b_dataWrittenToVector, const char_T
  *c18_identifier, boolean_T c18_y[2])
{
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_b_dataWrittenToVector),
    &c18_thisId, c18_y);
  sf_mex_destroy(&c18_b_dataWrittenToVector);
}

static void c18_h_emlrt_marshallIn(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId,
  boolean_T c18_y[2])
{
  boolean_T c18_bv1[2];
  int32_T c18_i2;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), c18_bv1, 1, 11, 0U, 1, 0U, 1, 2);
  for (c18_i2 = 0; c18_i2 < 2; c18_i2++) {
    c18_y[c18_i2] = c18_bv1[c18_i2];
  }

  sf_mex_destroy(&c18_u);
}

static const mxArray *c18_i_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_b_setSimStateSideEffectsInfo, const char_T *c18_identifier)
{
  const mxArray *c18_y = NULL;
  emlrtMsgIdentifier c18_thisId;
  c18_y = NULL;
  c18_thisId.fIdentifier = (const char *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  sf_mex_assign(&c18_y, c18_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_b_setSimStateSideEffectsInfo), &c18_thisId), false);
  sf_mex_destroy(&c18_b_setSimStateSideEffectsInfo);
  return c18_y;
}

static const mxArray *c18_j_emlrt_marshallIn
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  const mxArray *c18_y = NULL;
  (void)chartInstance;
  (void)c18_parentId;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_duplicatearraysafe(&c18_u), false);
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c18_ssid)
{
  (void)chartInstance;
  (void)c18_ssid;
  return NULL;
}

static void c18_init_sf_message_store_memory
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  chartInstance->c18_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c18_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c18_is_active_c18_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c18_is_c18_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c18_e_out = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_e_in = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c18_Hyst = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_timer = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c18_temporalCounter_i1 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
}

/* SFunction Glue Code */
static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c18_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2958795405U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4030597993U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3240867004U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3673818324U);
}

mxArray* sf_c18_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void);
mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("3B6evMUvId1hBhDnbI4Kf");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c18_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void)
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

mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c18_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c18_SpeedgoatCANOpen2Buses1ms(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[234],T\"e_out\",},{M[1],M[304],T\"timer\",},{M[8],M[0],T\"is_active_c18_SpeedgoatCANOpen2Buses1ms\",},{M[9],M[0],T\"is_c18_SpeedgoatCANOpen2Buses1ms\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M[306],M[1]}}},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_SpeedgoatCANOpen2Buses1ms_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SpeedgoatCANOpen2Buses1msMachineNumber_,
           18,
           3,
           6,
           0,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"e_in");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Hyst");
          _SFD_SET_DATA_PROPS(2,2,0,1,"e_out");
          _SFD_SET_DATA_PROPS(3,2,0,1,"timer");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 16 };

          static int condEnd[] = { 12, 28 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,28,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,12,-1,4);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,16,28,-1,2);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 16 };

          static int condEnd[] = { 12, 28 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,28,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,12,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,16,28,-1,4);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(5,0,0,0,43,0,43);

        {
          static int condStart[] = { 0, 16, 31 };

          static int condEnd[] = { 15, 27, 43 };

          static int pfixExpr[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_EML_MCDC(5,0,0,0,43,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,16,27,-1,4);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,1,31,43,-1,2);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(3,0,0,0,43,0,43);

        {
          static int condStart[] = { 0, 16, 31 };

          static int condEnd[] = { 15, 27, 43 };

          static int pfixExpr[] = { 0, 1, 2, -3, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,0,43,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,16,27,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,31,43,-1,4);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)c18_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)c18_sf_marshallIn);
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
    SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c18_e_out);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c18_e_in);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c18_Hyst);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c18_timer);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "skxVeLo82yAR3zayK11HYPD";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 18, "dworkChecksum");
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

static void sf_opaque_initialize_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
  initialize_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  enable_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  disable_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_gateway_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  ext_mode_exec_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c18_SpeedgoatCANOpen2Buses1ms
  (SimStruct* S)
{
  return get_sim_state_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
     (S));                             /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c18_SpeedgoatCANOpen2Buses1ms(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_terminate_c18_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SpeedgoatCANOpen2Buses1ms_optimization_info();
    }

    finalize_c18_SpeedgoatCANOpen2Buses1ms
      ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc18_SpeedgoatCANOpen2Buses1ms
    ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_SpeedgoatCANOpen2Buses1ms
      ((SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr
       (S));
  }
}

mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id','maxStringLength'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 1031010717U, 1491925625U, 2492558523U,
    1569467743U };

  return checksum;
}

static void mdlSetWorkWidths_c18_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      18);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,18,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 18);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,18);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,18,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,18,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,18);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1051791238U));
  ssSetChecksum1(S,(3891140887U));
  ssSetChecksum2(S,(381164603U));
  ssSetChecksum3(S,(3948827277U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c18_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c18_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct *)utMalloc
    (sizeof(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlStart = mdlStart_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c18_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c18_SpeedgoatCANOpen2Buses1ms;
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
  mdl_start_c18_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

void c18_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c18_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_SpeedgoatCANOpen2Buses1ms(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_SpeedgoatCANOpen2Buses1ms_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}