#ifndef __c24_SpeedgoatCANOpen2Buses1ms_h__
#define __c24_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc24_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc24_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c24_dataWrittenToVector[1];
  uint8_T c24_doSetSimStateSideEffects;
  const mxArray *c24_setSimStateSideEffectsInfo;
  void *c24_fEmlrtCtx;
  int32_T *c24_sfEvent;
  uint8_T *c24_is_active_c24_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c24_is_c24_SpeedgoatCANOpen2Buses1ms;
  real_T *c24_e_out;
  int32_T *c24_current_out;
  int32_T *c24_current_in;
} SFc24_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc24_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c24_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c24_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c24_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
