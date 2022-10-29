#ifndef __c13_SpeedgoatCANOpen2Buses1ms_h__
#define __c13_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_dataWrittenToVector[4];
  uint8_T c13_doSetSimStateSideEffects;
  const mxArray *c13_setSimStateSideEffectsInfo;
  void *c13_fEmlrtCtx;
  int32_T *c13_sfEvent;
  uint8_T *c13_is_active_c13_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c13_is_c13_SpeedgoatCANOpen2Buses1ms;
  real_T *c13_BrakesMotor_CurrentReqIn;
  real_T *c13_VehSpeed;
  real_T *c13_BrakesMotor_CurrentReq;
  uint8_T *c13_BrakeCtrlIn;
  uint8_T *c13_BrakeCtrl;
  uint8_T *c13_JsButton;
  real32_T *c13_JsLongCmd;
  real_T *c13_Neutral_State;
  real_T *c13_Parking_Brake;
} SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc13_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c13_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c13_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
