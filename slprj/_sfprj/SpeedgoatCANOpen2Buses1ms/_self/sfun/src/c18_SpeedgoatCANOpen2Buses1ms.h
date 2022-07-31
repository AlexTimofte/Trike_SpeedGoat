#ifndef __c18_SpeedgoatCANOpen2Buses1ms_h__
#define __c18_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c18_dataWrittenToVector[2];
  uint8_T c18_doSetSimStateSideEffects;
  const mxArray *c18_setSimStateSideEffectsInfo;
  void *c18_fEmlrtCtx;
  int32_T *c18_sfEvent;
  uint8_T *c18_is_active_c18_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c18_is_c18_SpeedgoatCANOpen2Buses1ms;
  real_T *c18_e_out;
  real_T *c18_e_in;
  real_T *c18_Hyst;
  real_T *c18_timer;
  uint8_T *c18_temporalCounter_i1;
} SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc18_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c18_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c18_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c18_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
