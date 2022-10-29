#ifndef __c5_SpeedgoatCANOpen2Buses1ms_h__
#define __c5_SpeedgoatCANOpen2Buses1ms_h__

/* Type Definitions */
#ifndef typedef_SFc5_SpeedgoatCANOpen2Buses1msInstanceStruct
#define typedef_SFc5_SpeedgoatCANOpen2Buses1msInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c5_dataWrittenToVector[1];
  uint8_T c5_doSetSimStateSideEffects;
  const mxArray *c5_setSimStateSideEffectsInfo;
  void *c5_fEmlrtCtx;
  int32_T *c5_sfEvent;
  uint8_T *c5_is_active_c5_SpeedgoatCANOpen2Buses1ms;
  uint8_T *c5_is_c5_SpeedgoatCANOpen2Buses1ms;
  real32_T *c5_PedalTravelGradient;
  real32_T *c5_Br_CurrentReq;
  real32_T *c5_PedalTravel;
  uint8_T *c5_temporalCounter_i1;
} SFc5_SpeedgoatCANOpen2Buses1msInstanceStruct;

#endif                                 /*typedef_SFc5_SpeedgoatCANOpen2Buses1msInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray *plhs[]);
extern void c5_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
