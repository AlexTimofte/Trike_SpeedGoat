#ifndef __c10_SpeedgoatCANOpen2Buses1ms_h__
#define __c10_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc10_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc10_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c10_dataWrittenToVector[2];
  uint8_T c10_doSetSimStateSideEffects;
  const mxArray *c10_setSimStateSideEffectsInfo;
  void *c10_fEmlrtCtx;
  int32_T *c10_sfEvent;
  uint8_T *c10_is_active_c10_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c10_is_c10_SpeedgoatCANOpen2Buses1ms;
  real_T *c10_e_out;
  real_T *c10_e_in;
  real_T *c10_Hyst;
  real_T *c10_timer;
  uint8_T *c10_temporalCounter_i1;
} SFc10_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc10_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c10_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c10_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c10_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
