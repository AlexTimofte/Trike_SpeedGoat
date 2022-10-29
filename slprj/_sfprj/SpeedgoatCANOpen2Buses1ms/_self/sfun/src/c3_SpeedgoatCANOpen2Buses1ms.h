#ifndef __c3_SpeedgoatCANOpen2Buses1ms_h__
#define __c3_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc3_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc3_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[8];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_fEmlrtCtx;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c3_is_c3_SpeedgoatCANOpen2Buses1ms;
  real32_T *c3_ButtonStatus;
  real32_T *c3_ClearError;
  real32_T *c3_DeviceMode;
  real32_T *c3_BrakeCtrl;
  real32_T *c3_ReadError;
  real32_T *c3_aux2;
  real32_T *c3_aux;
  real32_T *c3_PowerEnable;
  real32_T *c3_BrakesMotor_CurrentInit;
  real32_T *c3_InitStatus;
} SFc3_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc3_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c3_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
