#ifndef __c14_SpeedgoatCANOpen2Buses100us_h__
#define __c14_SpeedgoatCANOpen2Buses100us_h__

/* Type Definitions */
#ifndef typedef_SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct
#define typedef_SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c14_dataWrittenToVector[8];
  uint8_T c14_doSetSimStateSideEffects;
  const mxArray *c14_setSimStateSideEffectsInfo;
  void *c14_fEmlrtCtx;
  int32_T *c14_sfEvent;
  uint8_T *c14_is_active_c14_SpeedgoatCANOpen2Buses100us;
  uint8_T *c14_is_c14_SpeedgoatCANOpen2Buses100us;
  real32_T *c14_ButtonStatus;
  real32_T *c14_Joystick_LatCmd;
  real32_T *c14_ClearError;
  real32_T *c14_DeviceMode;
  real32_T *c14_BrakeCtrl;
  real32_T *c14_ReadError;
  real32_T *c14_aux2;
  real32_T *c14_aux;
  real32_T *c14_enable;
  real32_T *c14_PowerEnable;
  real32_T *c14_Joystick_LongCmd;
  real32_T *c14_SpeedRequest;
} SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct;

#endif                                 /*typedef_SFc14_SpeedgoatCANOpen2Buses100usInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c14_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c14_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray *plhs[]);
extern void c14_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
