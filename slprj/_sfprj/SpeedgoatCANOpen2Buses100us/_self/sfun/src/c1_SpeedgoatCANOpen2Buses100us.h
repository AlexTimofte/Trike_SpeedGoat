#ifndef __c1_SpeedgoatCANOpen2Buses100us_h__
#define __c1_SpeedgoatCANOpen2Buses100us_h__

/* Type Definitions */
#ifndef typedef_SFc1_SpeedgoatCANOpen2Buses100usInstanceStruct
#define typedef_SFc1_SpeedgoatCANOpen2Buses100usInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_dataWrittenToVector[8];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  void *c1_fEmlrtCtx;
  int32_T *c1_sfEvent;
  uint8_T *c1_is_active_c1_SpeedgoatCANOpen2Buses100us;
  uint8_T *c1_is_c1_SpeedgoatCANOpen2Buses100us;
  real32_T *c1_ButtonStatus;
  real32_T *c1_Joystick_LatCmd;
  real32_T *c1_ClearError;
  real32_T *c1_DeviceMode;
  real32_T *c1_BrakeCtrl;
  real32_T *c1_ReadError;
  real32_T *c1_aux2;
  real32_T *c1_aux;
  real32_T *c1_enable;
  real32_T *c1_PowerEnable;
  real32_T *c1_Joystick_LongCmd;
  real32_T *c1_SpeedRequest;
} SFc1_SpeedgoatCANOpen2Buses100usInstanceStruct;

#endif                                 /*typedef_SFc1_SpeedgoatCANOpen2Buses100usInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[]);
extern void c1_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
