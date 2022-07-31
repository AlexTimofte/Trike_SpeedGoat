#ifndef __c4_SpeedgoatCANOpen2Buses1ms_h__
#define __c4_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc4_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc4_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_dataWrittenToVector[1];
  uint8_T c4_doSetSimStateSideEffects;
  const mxArray *c4_setSimStateSideEffectsInfo;
  void *c4_fEmlrtCtx;
  int32_T *c4_sfEvent;
  uint8_T *c4_is_active_c4_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c4_is_c4_SpeedgoatCANOpen2Buses1ms;
  real32_T *c4_ButtonStatus;
  real32_T *c4_Enable;
} SFc4_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc4_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c4_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
