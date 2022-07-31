#ifndef __c1_SpeedgoatCANOpen2Buses1ms_h__
#define __c1_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc1_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc1_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_dataWrittenToVector[7];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  void *c1_fEmlrtCtx;
  int32_T *c1_sfEvent;
  uint8_T *c1_is_active_c1_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c1_is_c1_SpeedgoatCANOpen2Buses1ms;
  real32_T *c1_ButtonStatus;
  real32_T *c1_ClearError;
  real32_T *c1_DeviceMode;
  real32_T *c1_BrakeCtrl;
  real32_T *c1_ReadError;
  real32_T *c1_aux2;
  real32_T *c1_aux;
  real32_T *c1_PowerEnable;
  real32_T *c1_InitStatus;
} SFc1_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc1_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c1_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
