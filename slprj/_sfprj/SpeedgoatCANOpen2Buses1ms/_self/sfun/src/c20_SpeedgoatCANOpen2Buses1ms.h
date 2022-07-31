#ifndef __c20_SpeedgoatCANOpen2Buses1ms_h__
#define __c20_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc20_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc20_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c20_dataWrittenToVector[2];
  uint8_T c20_doSetSimStateSideEffects;
  const mxArray *c20_setSimStateSideEffectsInfo;
  void *c20_fEmlrtCtx;
  int32_T *c20_sfEvent;
  uint8_T *c20_is_active_c20_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c20_is_c20_SpeedgoatCANOpen2Buses1ms;
  real_T *c20_e_out;
  real_T *c20_e_in;
  real_T *c20_Hyst;
  real_T *c20_timer;
  uint8_T *c20_temporalCounter_i1;
} SFc20_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc20_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c20_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c20_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c20_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
