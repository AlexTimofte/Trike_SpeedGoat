#ifndef __c28_SpeedgoatCANOpen2Buses1ms_h__
#define __c28_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc28_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc28_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c28_dataWrittenToVector[1];
  uint8_T c28_doSetSimStateSideEffects;
  const mxArray *c28_setSimStateSideEffectsInfo;
  void *c28_fEmlrtCtx;
  int32_T *c28_sfEvent;
  uint8_T *c28_is_active_c28_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c28_is_c28_SpeedgoatCANOpen2Buses1ms;
  real_T *c28_speed_in;
  real_T *c28_e_out;
  real_T *c28_speed_out;
} SFc28_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc28_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c28_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c28_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c28_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
