#ifndef __c2_SpeedgoatCANOpen2Buses1ms_h__
#define __c2_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc2_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc2_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_dataWrittenToVector[7];
  uint8_T c2_doSetSimStateSideEffects;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_fEmlrtCtx;
  int32_T *c2_sfEvent;
  uint8_T *c2_is_active_c2_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c2_is_c2_SpeedgoatCANOpen2Buses1ms;
  real32_T *c2_ButtonStatus;
  real32_T *c2_ClearError;
  real32_T *c2_DeviceMode;
  real32_T *c2_BrakeCtrl;
  real32_T *c2_ReadError;
  real32_T *c2_aux2;
  real32_T *c2_aux;
  real32_T *c2_PowerEnable;
  real32_T *c2_InitStatus;
} SFc2_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc2_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c2_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
