#ifndef __c4_SpeedgoatCANOpen2Buses100us_h__
#define __c4_SpeedgoatCANOpen2Buses100us_h__

/* Type Definitions */
#ifndef typedef_SFc4_SpeedgoatCANOpen2Buses100usInstanceStruct
#define typedef_SFc4_SpeedgoatCANOpen2Buses100usInstanceStruct

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
  uint8_T *c4_is_active_c4_SpeedgoatCANOpen2Buses100us;
  uint8_T *c4_is_c4_SpeedgoatCANOpen2Buses100us;
  real32_T *c4_ButtonStatus;
  real32_T *c4_Enable;
} SFc4_SpeedgoatCANOpen2Buses100usInstanceStruct;

#endif                                 /*typedef_SFc4_SpeedgoatCANOpen2Buses100usInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[]);
extern void c4_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
