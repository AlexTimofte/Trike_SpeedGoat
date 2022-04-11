#ifndef __c3_SpeedgoatCANOpen2Buses100us_h__
#define __c3_SpeedgoatCANOpen2Buses100us_h__

/* Type Definitions */
#ifndef typedef_SFc3_SpeedgoatCANOpen2Buses100usInstanceStruct
#define typedef_SFc3_SpeedgoatCANOpen2Buses100usInstanceStruct

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
  uint8_T *c3_is_active_c3_SpeedgoatCANOpen2Buses100us;
  uint8_T *c3_is_c3_SpeedgoatCANOpen2Buses100us;
  real32_T *c3_ButtonStatus;
  real32_T *c3_ClearError;
  real32_T *c3_DeviceMode;
  real32_T *c3_BrakeCtrl;
  real32_T *c3_ReadError;
  real32_T *c3_aux2;
  real32_T *c3_aux;
  real32_T *c3_PowerEnable;
  real32_T *c3_InitStatus;
  real32_T *c3_BrakeCurrentInit;
} SFc3_SpeedgoatCANOpen2Buses100usInstanceStruct;

#endif                                 /*typedef_SFc3_SpeedgoatCANOpen2Buses100usInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[]);
extern void c3_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
