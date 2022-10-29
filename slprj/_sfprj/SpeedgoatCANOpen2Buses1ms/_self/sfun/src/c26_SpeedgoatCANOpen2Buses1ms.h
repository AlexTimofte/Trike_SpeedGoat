#ifndef __c26_SpeedgoatCANOpen2Buses1ms_h__
#define __c26_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc26_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc26_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c26_dataWrittenToVector[2];
  uint8_T c26_doSetSimStateSideEffects;
  const mxArray *c26_setSimStateSideEffectsInfo;
  void *c26_fEmlrtCtx;
  int32_T *c26_sfEvent;
  uint8_T *c26_is_active_c26_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c26_is_c26_SpeedgoatCANOpen2Buses1ms;
  real_T *c26_e_out;
  real_T *c26_e_in;
  real_T *c26_Hyst;
  real_T *c26_timer;
  uint8_T *c26_temporalCounter_i1;
} SFc26_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc26_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c26_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c26_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c26_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
