/* Include files */

#include "SpeedgoatCANOpen2Buses1ms_sfun.h"
#include "c13_SpeedgoatCANOpen2Buses1ms.h"
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
#define c13_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c13_IN_                        ((uint8_T)1U)
#define c13_IN_Init                    ((uint8_T)2U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c13_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_c_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_d_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initialize_params_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void enable_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void disable_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c13_update_debugger_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void ext_mode_exec_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void set_sim_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_st);
static void c13_set_sim_state_side_effects_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void finalize_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void sf_gateway_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void mdl_start_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void initSimStructsc13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void c13_enter_atomic_Init(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber, uint32_T c13_instanceNumber);
static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static real_T c13_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_nargin, const char_T *c13_identifier);
static real_T c13_b_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static boolean_T c13_c_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static int32_T c13_d_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static uint8_T c13_e_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_b_BrakeCtrl, const char_T *c13_identifier);
static uint8_T c13_f_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_e_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static void c13_g_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_b_dataWrittenToVector, const char_T
  *c13_identifier, boolean_T c13_y[4]);
static void c13_h_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId,
  boolean_T c13_y[4]);
static const mxArray *c13_i_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_b_setSimStateSideEffectsInfo, const char_T *c13_identifier);
static const mxArray *c13_j_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c13_ssid);
static void c13_init_sf_message_store_memory
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance);
static void init_simulink_io_address
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc13_SpeedgoatCANOpen2Buses1ms(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  *chartInstance->c13_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c13_doSetSimStateSideEffects = 0U;
  chartInstance->c13_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms = 0U;
  *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = c13_IN_NO_ACTIVE_CHILD;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c13_update_debugger_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c13_prevAniVal;
  c13_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms == c13_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms == c13_IN_) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
  }

  _SFD_SET_ANIMATION(c13_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c13_update_debugger_state_c13_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

static const mxArray *get_sim_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  const mxArray *c13_st;
  const mxArray *c13_y = NULL;
  uint8_T c13_hoistedGlobal;
  const mxArray *c13_b_y = NULL;
  real_T c13_b_hoistedGlobal;
  const mxArray *c13_c_y = NULL;
  real_T c13_c_hoistedGlobal;
  const mxArray *c13_d_y = NULL;
  real_T c13_d_hoistedGlobal;
  const mxArray *c13_e_y = NULL;
  uint8_T c13_e_hoistedGlobal;
  const mxArray *c13_f_y = NULL;
  uint8_T c13_f_hoistedGlobal;
  const mxArray *c13_g_y = NULL;
  const mxArray *c13_h_y = NULL;
  c13_st = NULL;
  c13_st = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_createcellmatrix(7, 1), false);
  c13_hoistedGlobal = *chartInstance->c13_BrakeCtrl;
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 0, c13_b_y);
  c13_b_hoistedGlobal = *chartInstance->c13_BrakesMotor_CurrentReq;
  c13_c_y = NULL;
  sf_mex_assign(&c13_c_y, sf_mex_create("y", &c13_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 1, c13_c_y);
  c13_c_hoistedGlobal = *chartInstance->c13_Neutral_State;
  c13_d_y = NULL;
  sf_mex_assign(&c13_d_y, sf_mex_create("y", &c13_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 2, c13_d_y);
  c13_d_hoistedGlobal = *chartInstance->c13_Parking_Brake;
  c13_e_y = NULL;
  sf_mex_assign(&c13_e_y, sf_mex_create("y", &c13_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 3, c13_e_y);
  c13_e_hoistedGlobal =
    *chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms;
  c13_f_y = NULL;
  sf_mex_assign(&c13_f_y, sf_mex_create("y", &c13_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 4, c13_f_y);
  c13_f_hoistedGlobal = *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms;
  c13_g_y = NULL;
  sf_mex_assign(&c13_g_y, sf_mex_create("y", &c13_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 5, c13_g_y);
  c13_h_y = NULL;
  sf_mex_assign(&c13_h_y, sf_mex_create("y",
    chartInstance->c13_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 4), false);
  sf_mex_setcell(c13_y, 6, c13_h_y);
  sf_mex_assign(&c13_st, c13_y, false);
  return c13_st;
}

static void set_sim_state_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_st)
{
  const mxArray *c13_u;
  boolean_T c13_bv0[4];
  int32_T c13_i0;
  c13_u = sf_mex_dup(c13_st);
  *chartInstance->c13_BrakeCtrl = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 0)), "BrakeCtrl");
  *chartInstance->c13_BrakesMotor_CurrentReq = c13_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 1)),
     "BrakesMotor_CurrentReq");
  *chartInstance->c13_Neutral_State = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 2)), "Neutral_State");
  *chartInstance->c13_Parking_Brake = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 3)), "Parking_Brake");
  *chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms =
    c13_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 4)),
    "is_active_c13_SpeedgoatCANOpen2Buses1ms");
  *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = c13_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 5)),
     "is_c13_SpeedgoatCANOpen2Buses1ms");
  c13_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 6)),
    "dataWrittenToVector", c13_bv0);
  for (c13_i0 = 0; c13_i0 < 4; c13_i0++) {
    chartInstance->c13_dataWrittenToVector[c13_i0] = c13_bv0[c13_i0];
  }

  sf_mex_assign(&chartInstance->c13_setSimStateSideEffectsInfo,
                c13_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 7)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c13_u);
  chartInstance->c13_doSetSimStateSideEffects = 1U;
  c13_update_debugger_state_c13_SpeedgoatCANOpen2Buses1ms(chartInstance);
  sf_mex_destroy(&c13_st);
}

static void c13_set_sim_state_side_effects_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  if (chartInstance->c13_doSetSimStateSideEffects != 0) {
    chartInstance->c13_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c13_setSimStateSideEffectsInfo);
}

static void sf_gateway_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  uint32_T c13_b_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  boolean_T c13_b_out;
  uint32_T c13_c_debug_family_var_map[2];
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 0.0;
  c13_set_sim_state_side_effects_c13_SpeedgoatCANOpen2Buses1ms(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 11, *chartInstance->c13_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c13_JsLongCmd, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c13_JsButton, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c13_BrakeCtrlIn, 4U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_VehSpeed, 3U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_BrakesMotor_CurrentReqIn, 2U);
  *chartInstance->c13_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 11U, *chartInstance->c13_sfEvent);
  if (*chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 11U,
                 *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = c13_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
    c13_enter_atomic_Init(chartInstance);
  } else {
    switch (*chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms) {
     case c13_IN_:
      CV_CHART_EVAL(11, 0, c13_IN_);
      *chartInstance->c13_BrakesMotor_CurrentReq = -10000.0;
      chartInstance->c13_dataWrittenToVector[0U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_c_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
            *chartInstance->c13_BrakesMotor_CurrentReqIn, 10.0, -1, 2U,
            *chartInstance->c13_BrakesMotor_CurrentReqIn < 10.0)) && CV_EML_COND
          (2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1,
            *chartInstance->c13_BrakesMotor_CurrentReqIn, -10.0, -1, 4U,
            *chartInstance->c13_BrakesMotor_CurrentReqIn > -10.0))) {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c13_out = true;
      } else {
        CV_EML_MCDC(2, 0, 0, false);
        CV_EML_IF(2, 0, 0, false);
        c13_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms =
          c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = c13_IN_Init;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
        c13_enter_atomic_Init(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c13_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c13_sfEvent);
      break;

     case c13_IN_Init:
      CV_CHART_EVAL(11, 0, c13_IN_Init);
      *chartInstance->c13_BrakesMotor_CurrentReq = 0.0;
      chartInstance->c13_dataWrittenToVector[0U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_d_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
            *chartInstance->c13_BrakesMotor_CurrentReqIn, 100.0, -1, 4U,
            *chartInstance->c13_BrakesMotor_CurrentReqIn > 100.0)) ||
          CV_EML_COND(1, 0, 1, CV_RELATIONAL_EVAL(5U, 1U, 1,
            *chartInstance->c13_BrakesMotor_CurrentReqIn, -100.0, -1, 2U,
            *chartInstance->c13_BrakesMotor_CurrentReqIn < -100.0))) {
        CV_EML_MCDC(1, 0, 0, true);
        CV_EML_IF(1, 0, 0, true);
        c13_b_out = true;
      } else {
        CV_EML_MCDC(1, 0, 0, false);
        CV_EML_IF(1, 0, 0, false);
        c13_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms =
          c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = c13_IN_;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_b_debug_family_names,
          c13_c_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_BrakeCtrl = 2U;
        chartInstance->c13_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c13_BrakeCtrl, 8U);
        *chartInstance->c13_BrakesMotor_CurrentReq = -10000.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_BrakesMotor_CurrentReq, 7U);
        *chartInstance->c13_Parking_Brake = 1.0;
        chartInstance->c13_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_Parking_Brake, 1U);
        *chartInstance->c13_Neutral_State = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_Neutral_State, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c13_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c13_sfEvent);
      break;

     default:
      CV_CHART_EVAL(11, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms =
        c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  c13_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc13_SpeedgoatCANOpen2Buses1ms
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c13_enter_atomic_Init(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  uint32_T c13_debug_family_var_map[2];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  *chartInstance->c13_BrakesMotor_CurrentReq = 0.0;
  chartInstance->c13_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_BrakesMotor_CurrentReq, 7U);
  *chartInstance->c13_BrakeCtrl = *chartInstance->c13_BrakeCtrlIn;
  chartInstance->c13_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c13_BrakeCtrl, 8U);
  *chartInstance->c13_Parking_Brake = 0.0;
  chartInstance->c13_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_Parking_Brake, 1U);
  *chartInstance->c13_Neutral_State = 0.0;
  chartInstance->c13_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_Neutral_State, 0U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber, uint32_T c13_instanceNumber)
{
  (void)(c13_machineNumber);
  (void)(c13_chartNumber);
  (void)(c13_instanceNumber);
}

static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  real_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(real_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static real_T c13_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_nargin, const char_T *c13_identifier)
{
  real_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nargin),
    &c13_thisId);
  sf_mex_destroy(&c13_nargin);
  return c13_y;
}

static real_T c13_b_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  real_T c13_y;
  real_T c13_d0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_d0, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_nargin;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  real_T c13_y;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_nargin = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nargin),
    &c13_thisId);
  sf_mex_destroy(&c13_nargin);
  *(real_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  boolean_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(boolean_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static boolean_T c13_c_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  boolean_T c13_y;
  boolean_T c13_b0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_b0, 1, 11, 0U, 0, 0U, 0);
  c13_y = c13_b0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_sf_internal_predicateOutput;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  boolean_T c13_y;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_sf_internal_predicateOutput = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c13_sf_internal_predicateOutput), &c13_thisId);
  sf_mex_destroy(&c13_sf_internal_predicateOutput);
  *(boolean_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

const mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c13_nameCaptureInfo = NULL;
  c13_nameCaptureInfo = NULL;
  sf_mex_assign(&c13_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c13_nameCaptureInfo;
}

static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  int32_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(int32_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static int32_T c13_d_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  int32_T c13_y;
  int32_T c13_i1;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_i1, 1, 6, 0U, 0, 0U, 0);
  c13_y = c13_i1;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_sfEvent;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  int32_T c13_y;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_b_sfEvent = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_sfEvent),
    &c13_thisId);
  sf_mex_destroy(&c13_b_sfEvent);
  *(int32_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  uint8_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(uint8_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static uint8_T c13_e_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_b_BrakeCtrl, const char_T *c13_identifier)
{
  uint8_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_BrakeCtrl),
    &c13_thisId);
  sf_mex_destroy(&c13_b_BrakeCtrl);
  return c13_y;
}

static uint8_T c13_f_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  uint8_T c13_y;
  uint8_T c13_u0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_u0, 1, 3, 0U, 0, 0U, 0);
  c13_y = c13_u0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_BrakeCtrl;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  uint8_T c13_y;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_b_BrakeCtrl = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_BrakeCtrl),
    &c13_thisId);
  sf_mex_destroy(&c13_b_BrakeCtrl);
  *(uint8_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_e_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  real32_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(real32_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static void c13_g_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_b_dataWrittenToVector, const char_T
  *c13_identifier, boolean_T c13_y[4])
{
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_dataWrittenToVector),
    &c13_thisId, c13_y);
  sf_mex_destroy(&c13_b_dataWrittenToVector);
}

static void c13_h_emlrt_marshallIn(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId,
  boolean_T c13_y[4])
{
  boolean_T c13_bv1[4];
  int32_T c13_i2;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), c13_bv1, 1, 11, 0U, 1, 0U, 1, 4);
  for (c13_i2 = 0; c13_i2 < 4; c13_i2++) {
    c13_y[c13_i2] = c13_bv1[c13_i2];
  }

  sf_mex_destroy(&c13_u);
}

static const mxArray *c13_i_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_b_setSimStateSideEffectsInfo, const char_T *c13_identifier)
{
  const mxArray *c13_y = NULL;
  emlrtMsgIdentifier c13_thisId;
  c13_y = NULL;
  c13_thisId.fIdentifier = (const char *)c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  sf_mex_assign(&c13_y, c13_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c13_b_setSimStateSideEffectsInfo), &c13_thisId), false);
  sf_mex_destroy(&c13_b_setSimStateSideEffectsInfo);
  return c13_y;
}

static const mxArray *c13_j_emlrt_marshallIn
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  const mxArray *c13_y = NULL;
  (void)chartInstance;
  (void)c13_parentId;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_duplicatearraysafe(&c13_u), false);
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance, int32_T
   c13_ssid)
{
  (void)chartInstance;
  (void)c13_ssid;
  return NULL;
}

static void c13_init_sf_message_store_memory
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance)
{
  chartInstance->c13_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c13_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c13_is_active_c13_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c13_is_c13_SpeedgoatCANOpen2Buses1ms = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c13_BrakesMotor_CurrentReqIn = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c13_VehSpeed = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c13_BrakesMotor_CurrentReq = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c13_BrakeCtrlIn = (uint8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c13_BrakeCtrl = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c13_JsButton = (uint8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c13_JsLongCmd = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c13_Neutral_State = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c13_Parking_Brake = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
}

/* SFunction Glue Code */
static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c13_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2176381180U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2896037387U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(678281479U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(241767610U);
}

mxArray* sf_c13_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void);
mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("AoKi5I73EiCydBqQe7oHl");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
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
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c13_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void)
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

mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c13_SpeedgoatCANOpen2Buses1ms_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c13_SpeedgoatCANOpen2Buses1ms(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[256],T\"BrakeCtrl\",},{M[1],M[234],T\"BrakesMotor_CurrentReq\",},{M[3],M[290],T\"Neutral_State\",},{M[3],M[291],T\"Parking_Brake\",},{M[8],M[0],T\"is_active_c13_SpeedgoatCANOpen2Buses1ms\",},{M[9],M[0],T\"is_c13_SpeedgoatCANOpen2Buses1ms\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c13_SpeedgoatCANOpen2Buses1ms_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SpeedgoatCANOpen2Buses1msMachineNumber_,
           13,
           2,
           3,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"Neutral_State");
          _SFD_SET_DATA_PROPS(1,0,0,0,"Parking_Brake");
          _SFD_SET_DATA_PROPS(2,1,1,0,"BrakesMotor_CurrentReqIn");
          _SFD_SET_DATA_PROPS(3,1,1,0,"VehSpeed");
          _SFD_SET_DATA_PROPS(4,1,1,0,"BrakeCtrlIn");
          _SFD_SET_DATA_PROPS(5,1,1,0,"JsButton");
          _SFD_SET_DATA_PROPS(6,1,1,0,"JsLongCmd");
          _SFD_SET_DATA_PROPS(7,2,0,1,"BrakesMotor_CurrentReq");
          _SFD_SET_DATA_PROPS(8,2,0,1,"BrakeCtrl");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,67,1,48);

        {
          static int condStart[] = { 1, 37 };

          static int condEnd[] = { 30, 67 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,67,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,30,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,37,67,-1,4);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,69,1,48);

        {
          static int condStart[] = { 1, 38 };

          static int condEnd[] = { 31, 69 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,69,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,31,-1,4);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,38,69,-1,2);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)
          c13_d_sf_marshallIn);
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
    SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance =
      (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c13_BrakesMotor_CurrentReqIn);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c13_VehSpeed);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c13_BrakesMotor_CurrentReq);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c13_BrakeCtrlIn);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c13_BrakeCtrl);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c13_JsButton);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c13_JsLongCmd);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c13_Neutral_State);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c13_Parking_Brake);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sEglgmx8oGnAKoA9iTcmONH";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 13, "dworkChecksum");
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

static void sf_opaque_initialize_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
  initialize_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  enable_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  disable_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  sf_gateway_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  ext_mode_exec_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c13_SpeedgoatCANOpen2Buses1ms
  (SimStruct* S)
{
  return get_sim_state_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)sf_get_chart_instance_ptr
     (S));                             /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c13_SpeedgoatCANOpen2Buses1ms(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_terminate_c13_SpeedgoatCANOpen2Buses1ms(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SpeedgoatCANOpen2Buses1ms_optimization_info();
    }

    finalize_c13_SpeedgoatCANOpen2Buses1ms
      ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc13_SpeedgoatCANOpen2Buses1ms
    ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c13_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c13_SpeedgoatCANOpen2Buses1ms
      ((SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*)sf_get_chart_instance_ptr
       (S));
  }
}

mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x5'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id','maxStringLength'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1],},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1],}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 5, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3535091673U, 2506713681U, 3495410836U,
    2040752196U };

  return checksum;
}

static void mdlSetWorkWidths_c13_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetInputPortDirectFeedThrough(S, 4, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SpeedgoatCANOpen2Buses1ms_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      13);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,13,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 13);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,13);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,13,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,13,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,13);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(796589074U));
  ssSetChecksum1(S,(627932849U));
  ssSetChecksum2(S,(3880855334U));
  ssSetChecksum3(S,(3417159619U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c13_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c13_SpeedgoatCANOpen2Buses1ms(SimStruct *S)
{
  SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *chartInstance;
  chartInstance = (SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct *)utMalloc
    (sizeof(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlStart = mdlStart_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c13_SpeedgoatCANOpen2Buses1ms;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c13_SpeedgoatCANOpen2Buses1ms;
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
  mdl_start_c13_SpeedgoatCANOpen2Buses1ms(chartInstance);
}

void c13_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c13_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c13_SpeedgoatCANOpen2Buses1ms(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c13_SpeedgoatCANOpen2Buses1ms(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c13_SpeedgoatCANOpen2Buses1ms_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
