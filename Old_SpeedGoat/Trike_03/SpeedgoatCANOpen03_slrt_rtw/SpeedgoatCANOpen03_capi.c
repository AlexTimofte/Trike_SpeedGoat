/*
 * SpeedgoatCANOpen03_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen03".
 *
 * Model version              : 1.108
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jun 19 11:37:23 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SpeedgoatCANOpen03_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SpeedgoatCANOpen03.h"
#include "SpeedgoatCANOpen03_capi.h"
#include "SpeedgoatCANOpen03_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("RPDOs from APT/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("RPDOs from APT/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 2, 0, TARGET_STRING("RPDOs from APT/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 3, 0, TARGET_STRING("RPDOs from APT/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 4, 0, TARGET_STRING("RPDOs from APT/p5"),
    TARGET_STRING(""), 4, 3, 0, 0, 0 },

  { 5, 0, TARGET_STRING("RPDOs from APT/p6"),
    TARGET_STRING(""), 5, 3, 0, 0, 0 },

  { 6, 0, TARGET_STRING("RPDOs from APT/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("RPDOs from APT/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("RPDOs from APT/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("RPDOs from Joystick/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("RPDOs from Joystick/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 0 },

  { 11, 0, TARGET_STRING("RPDOs from Joystick/p3"),
    TARGET_STRING(""), 2, 4, 0, 0, 0 },

  { 12, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller/p1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 13, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller/p3"),
    TARGET_STRING(""), 2, 0, 1, 0, 0 },

  { 15, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller1/p1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 16, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/C Caller1/p3"),
    TARGET_STRING(""), 2, 0, 1, 0, 0 },

  { 18, 3, TARGET_STRING("Simulink Application Layer/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 19, 4, TARGET_STRING("Simulink Application Layer/MATLAB Function"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Simulink Application Layer/Abs"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Simulink Application Layer/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Simulink Application Layer/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Simulink Application Layer/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Simulink Application Layer/Gain1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Simulink Application Layer/Gain2"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Simulink Application Layer/Gain3"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Simulink Application Layer/Gain4"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Simulink Application Layer/Gain5"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 29, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 30, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 0 },

  { 31, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 34, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 0, 1, 0, 0 },

  { 35, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 37, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 0 },

  { 38, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 40, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 41, 0, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read/p6"),
    TARGET_STRING(""), 5, 0, 1, 0, 0 },

  { 42, 0, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 1, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 2, TARGET_STRING(
    "CANOpen Slave  Protocol Stack/CAN TX Wrapper1/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 45, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN Setup "),
    TARGET_STRING("P1"), 6, 2, 0 },

  { 46, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN Setup "),
    TARGET_STRING("P2"), 6, 0, 0 },

  { 47, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN Setup "),
    TARGET_STRING("P3"), 6, 0, 0 },

  { 48, TARGET_STRING("Simulink Application Layer/Gain1"),
    TARGET_STRING("Gain"), 4, 0, 0 },

  { 49, TARGET_STRING("Simulink Application Layer/Gain2"),
    TARGET_STRING("Gain"), 4, 0, 0 },

  { 50, TARGET_STRING("Simulink Application Layer/Gain3"),
    TARGET_STRING("Gain"), 2, 0, 1 },

  { 51, TARGET_STRING("Simulink Application Layer/Gain4"),
    TARGET_STRING("Gain"), 1, 0, 2 },

  { 52, TARGET_STRING("Simulink Application Layer/Gain5"),
    TARGET_STRING("Gain"), 1, 0, 2 },

  { 53, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 6, 3, 0 },

  { 54, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 55, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read"),
    TARGET_STRING("P1"), 6, 3, 0 },

  { 56, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN RX Wrapper1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 57, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 58, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 6, 4, 0 },

  { 59, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN TX Wrapper1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 60, TARGET_STRING("CANOpen Slave  Protocol Stack/CAN TX Wrapper1/CAN Write"),
    TARGET_STRING("P1"), 6, 4, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o1,/* 0: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o2,/* 1: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o3,/* 2: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o4,/* 3: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o5,/* 4: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o6,/* 5: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o7,/* 6: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o8,/* 7: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromAPT_o9,/* 8: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromJoystick_o1,/* 9: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromJoystick_o2,/* 10: Signal */
  &SpeedgoatCANOpen03_B.RPDOsfromJoystick_o3,/* 11: Signal */
  &SpeedgoatCANOpen03_B.CCaller_o1,    /* 12: Signal */
  &SpeedgoatCANOpen03_B.CCaller_o2,    /* 13: Signal */
  &SpeedgoatCANOpen03_B.CCaller_o3[0], /* 14: Signal */
  &SpeedgoatCANOpen03_B.CCaller1_o1,   /* 15: Signal */
  &SpeedgoatCANOpen03_B.CCaller1_o2,   /* 16: Signal */
  &SpeedgoatCANOpen03_B.CCaller1_o3[0],/* 17: Signal */
  &SpeedgoatCANOpen03_B.HB,            /* 18: Signal */
  &SpeedgoatCANOpen03_B.Byte0,         /* 19: Signal */
  &SpeedgoatCANOpen03_B.Abs,           /* 20: Signal */
  &SpeedgoatCANOpen03_B.DataTypeConversion,/* 21: Signal */
  &SpeedgoatCANOpen03_B.DataTypeConversion1,/* 22: Signal */
  &SpeedgoatCANOpen03_B.DataTypeConversion2,/* 23: Signal */
  &SpeedgoatCANOpen03_B.Gain1,         /* 24: Signal */
  &SpeedgoatCANOpen03_B.Gain2,         /* 25: Signal */
  &SpeedgoatCANOpen03_B.Gain3,         /* 26: Signal */
  &SpeedgoatCANOpen03_B.Gain4,         /* 27: Signal */
  &SpeedgoatCANOpen03_B.Gain5,         /* 28: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o1,    /* 29: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o2,    /* 30: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o3,    /* 31: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o4,    /* 32: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o5,    /* 33: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o6[0], /* 34: Signal */
  &SpeedgoatCANOpen03_B.Switch,        /* 35: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o1_m,  /* 36: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o2_p,  /* 37: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o3_n,  /* 38: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o4_g,  /* 39: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o5_n,  /* 40: Signal */
  &SpeedgoatCANOpen03_B.CANRead_o6_j[0],/* 41: Signal */
  &SpeedgoatCANOpen03_B.Switch_e,      /* 42: Signal */
  &SpeedgoatCANOpen03_B.Constant_g,    /* 43: Signal */
  &SpeedgoatCANOpen03_B.Constant,      /* 44: Signal */
  &SpeedgoatCANOpen03_P.CANSetup_P1[0],/* 45: Block Parameter */
  &SpeedgoatCANOpen03_P.CANSetup_P2,   /* 46: Block Parameter */
  &SpeedgoatCANOpen03_P.CANSetup_P3,   /* 47: Block Parameter */
  &SpeedgoatCANOpen03_P.Gain1_Gain,    /* 48: Block Parameter */
  &SpeedgoatCANOpen03_P.Gain2_Gain,    /* 49: Block Parameter */
  &SpeedgoatCANOpen03_P.Gain3_Gain,    /* 50: Block Parameter */
  &SpeedgoatCANOpen03_P.Gain4_Gain,    /* 51: Block Parameter */
  &SpeedgoatCANOpen03_P.Gain5_Gain,    /* 52: Block Parameter */
  &SpeedgoatCANOpen03_P.CANRead_P1[0], /* 53: Block Parameter */
  &SpeedgoatCANOpen03_P.Switch_Threshold,/* 54: Block Parameter */
  &SpeedgoatCANOpen03_P.CANRead_P1_i[0],/* 55: Block Parameter */
  &SpeedgoatCANOpen03_P.Switch_Threshold_p,/* 56: Block Parameter */
  &SpeedgoatCANOpen03_P.Constant_Value,/* 57: Block Parameter */
  &SpeedgoatCANOpen03_P.CANWrite_P1[0],/* 58: Block Parameter */
  &SpeedgoatCANOpen03_P.Constant_Value_l,/* 59: Block Parameter */
  &SpeedgoatCANOpen03_P.CANWrite_P1_m[0],/* 60: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  8,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  40,                                  /* 5 */
  1,                                   /* 6 */
  6,                                   /* 7 */
  1,                                   /* 8 */
  7                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -22, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -14, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 45,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 16,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 87488808U,
    2358984327U,
    4130297920U,
    1012931744U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen03_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SpeedgoatCANOpen03_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SpeedgoatCANOpen03_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SpeedgoatCANOpen03_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SpeedgoatCANOpen03_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(SpeedgoatCANOpen03_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(SpeedgoatCANOpen03_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  SpeedgoatCANOpen03_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(SpeedgoatCANOpen03_M);
  SpeedgoatCANOpen03_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_SpeedgoatCANOpen03_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SpeedgoatCANOpen03_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SpeedgoatCANOpen03_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SpeedgoatCANOpen03_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SpeedgoatCANOpen03_host_InitializeDataMapInfo
    (SpeedgoatCANOpen03_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: SpeedgoatCANOpen03_capi.c */
