#ifndef __c12_SpeedgoatCANOpen2Buses1ms_h__
#define __c12_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c12_dataWrittenToVector[7];
  uint8_T c12_doSetSimStateSideEffects;
  const mxArray *c12_setSimStateSideEffectsInfo;
  void *c12_fEmlrtCtx;
  int32_T *c12_sfEvent;
  uint8_T *c12_is_active_c12_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c12_is_c12_SpeedgoatCANOpen2Buses1ms;
  real32_T *c12_ButtonStatus;
  real32_T *c12_ClearError;
  real32_T *c12_DeviceMode;
  real32_T *c12_BrakeCtrl;
  real32_T *c12_ReadError;
  real32_T *c12_aux2;
  real32_T *c12_aux;
  real32_T *c12_PowerEnable;
  real32_T *c12_InitStatus;
} SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc12_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c12_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c12_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif