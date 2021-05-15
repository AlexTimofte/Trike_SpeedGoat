#ifndef __c13_SpeedgoatCANOpen2Buses100us_h__
#define __c13_SpeedgoatCANOpen2Buses100us_h__

/* Type Definitions */
#ifndef typedef_SFc13_SpeedgoatCANOpen2Buses100usInstanceStruct
#define typedef_SFc13_SpeedgoatCANOpen2Buses100usInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_dataWrittenToVector[8];
  uint8_T c13_doSetSimStateSideEffects;
  const mxArray *c13_setSimStateSideEffectsInfo;
  void *c13_fEmlrtCtx;
  int32_T *c13_sfEvent;
  uint8_T *c13_is_active_c13_SpeedgoatCANOpen2Buses100us;
  uint8_T *c13_is_c13_SpeedgoatCANOpen2Buses100us;
  real32_T *c13_ButtonStatus;
  real32_T *c13_Joystick_LatCmd;
  real32_T *c13_ClearError;
  real32_T *c13_DeviceMode;
  real32_T *c13_BrakeCtrl;
  real32_T *c13_ReadError;
  real32_T *c13_aux2;
  real32_T *c13_aux;
  real32_T *c13_enable;
  real32_T *c13_PowerEnable;
  real32_T *c13_Joystick_LongCmd;
  real32_T *c13_SpeedRequest;
} SFc13_SpeedgoatCANOpen2Buses100usInstanceStruct;

#endif                                 /*typedef_SFc13_SpeedgoatCANOpen2Buses100usInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c13_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[]);
extern void c13_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
