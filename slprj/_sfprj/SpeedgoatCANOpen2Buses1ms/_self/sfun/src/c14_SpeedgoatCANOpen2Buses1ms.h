#ifndef __c14_SpeedgoatCANOpen2Buses1ms_h__
#define __c14_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc14_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc14_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c14_dataWrittenToVector[2];
  uint8_T c14_doSetSimStateSideEffects;
  const mxArray *c14_setSimStateSideEffectsInfo;
  void *c14_fEmlrtCtx;
  int32_T *c14_sfEvent;
  uint8_T *c14_is_active_c14_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c14_is_c14_SpeedgoatCANOpen2Buses1ms;
  real_T *c14_e_out;
  real_T *c14_e_in;
  real_T *c14_Hyst;
  real_T *c14_timer;
  uint8_T *c14_temporalCounter_i1;
} SFc14_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc14_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c14_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c14_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c14_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
