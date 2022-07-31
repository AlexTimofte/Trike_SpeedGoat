/* Include files */

#define IN_SF_MACHINE_SOURCE           1
#include "SpeedgoatCANOpen2Buses1ms_sfun.h"
#include "SpeedgoatCANOpen2Buses1ms_sfun_debug_macros.h"
#include "c1_SpeedgoatCANOpen2Buses1ms.h"
#include "c2_SpeedgoatCANOpen2Buses1ms.h"
#include "c3_SpeedgoatCANOpen2Buses1ms.h"
#include "c4_SpeedgoatCANOpen2Buses1ms.h"
#include "c5_SpeedgoatCANOpen2Buses1ms.h"
#include "c10_SpeedgoatCANOpen2Buses1ms.h"
#include "c12_SpeedgoatCANOpen2Buses1ms.h"
#include "c13_SpeedgoatCANOpen2Buses1ms.h"
#include "c14_SpeedgoatCANOpen2Buses1ms.h"
#include "c18_SpeedgoatCANOpen2Buses1ms.h"
#include "c20_SpeedgoatCANOpen2Buses1ms.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _SpeedgoatCANOpen2Buses1msMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void SpeedgoatCANOpen2Buses1ms_initializer(void)
{
}

void SpeedgoatCANOpen2Buses1ms_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_SpeedgoatCANOpen2Buses1ms_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_SpeedgoatCANOpen2Buses1ms_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_process_testpoint_info_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "SpeedgoatCANOpen2Buses1ms")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c1_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c2_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c3_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c4_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c5_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 10:
      {
        extern mxArray *sf_c10_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c10_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 12:
      {
        extern mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c12_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 13:
      {
        extern mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c13_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 14:
      {
        extern mxArray *sf_c14_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c14_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 18:
      {
        extern mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c18_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     case 20:
      {
        extern mxArray *sf_c20_SpeedgoatCANOpen2Buses1ms_get_testpoint_info(void);
        plhs[0] = sf_c20_SpeedgoatCANOpen2Buses1ms_get_testpoint_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4160014704U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(728635582U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3935279897U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2222048727U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c1_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c2_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c3_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c4_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c5_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c10_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c12_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c13_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c14_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c18_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_SpeedgoatCANOpen2Buses1ms_get_check_sum(mxArray
            *plhs[]);
          sf_c20_SpeedgoatCANOpen2Buses1ms_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3505660715U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4129045772U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2143317729U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2062719U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1722304771U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1987911754U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(89248455U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(849977931U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_autoinheritance_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "TAAHtTzZ1K3cn5UpZkn1W") == 0) {
          extern mxArray
            *sf_c1_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "bLEfVj1vK2aw3nRUQFoyqB") == 0) {
          extern mxArray
            *sf_c2_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "7f1tEFt9TkJxUaAiKHMYpF") == 0) {
          extern mxArray
            *sf_c3_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "FvgjMMC5ZoGRqeGfwd5WnE") == 0) {
          extern mxArray
            *sf_c4_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "KLPKHaaEXgPV4ulJh4EqDE") == 0) {
          extern mxArray
            *sf_c5_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "3B6evMUvId1hBhDnbI4Kf") == 0) {
          extern mxArray
            *sf_c10_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c10_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "ONOGxLqR1BIscwniXNMfIE") == 0) {
          extern mxArray
            *sf_c12_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "AoKi5I73EiCydBqQe7oHl") == 0) {
          extern mxArray
            *sf_c13_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c13_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "3B6evMUvId1hBhDnbI4Kf") == 0) {
          extern mxArray
            *sf_c14_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c14_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "3B6evMUvId1hBhDnbI4Kf") == 0) {
          extern mxArray
            *sf_c18_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c18_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 20:
      {
        if (strcmp(aiChksum, "3B6evMUvId1hBhDnbI4Kf") == 0) {
          extern mxArray
            *sf_c20_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info(void);
          plhs[0] = sf_c20_SpeedgoatCANOpen2Buses1ms_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(instanceChksum, "skT9LIwaR5b5k2uHPrlqXdC") == 0) {
          extern const mxArray
            *sf_c1_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c1_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 2:
      {
        if (strcmp(instanceChksum, "sOzzLQgBaNlv7JsJzuoWAIB") == 0) {
          extern const mxArray
            *sf_c2_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 3:
      {
        if (strcmp(instanceChksum, "spuFX9VQC1PPwdOUpbRiEaF") == 0) {
          extern const mxArray
            *sf_c3_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c3_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 4:
      {
        if (strcmp(instanceChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern const mxArray
            *sf_c4_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 5:
      {
        if (strcmp(instanceChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern const mxArray
            *sf_c5_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c5_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 10:
      {
        if (strcmp(instanceChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern const mxArray
            *sf_c10_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c10_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 12:
      {
        if (strcmp(instanceChksum, "snlV8iUGxwvoZgkwiBqtoi") == 0) {
          extern const mxArray
            *sf_c12_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c12_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 13:
      {
        if (strcmp(instanceChksum, "sEglgmx8oGnAKoA9iTcmONH") == 0) {
          extern const mxArray
            *sf_c13_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c13_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 14:
      {
        if (strcmp(instanceChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern const mxArray
            *sf_c14_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c14_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 18:
      {
        if (strcmp(instanceChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern const mxArray
            *sf_c18_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c18_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 20:
      {
        if (strcmp(instanceChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern const mxArray
            *sf_c20_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c20_SpeedgoatCANOpen2Buses1ms_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_third_party_uses_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "skT9LIwaR5b5k2uHPrlqXdC") == 0) {
          extern mxArray *sf_c1_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sOzzLQgBaNlv7JsJzuoWAIB") == 0) {
          extern mxArray *sf_c2_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "spuFX9VQC1PPwdOUpbRiEaF") == 0) {
          extern mxArray *sf_c3_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray *sf_c4_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray *sf_c5_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c10_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c10_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "snlV8iUGxwvoZgkwiBqtoi") == 0) {
          extern mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sEglgmx8oGnAKoA9iTcmONH") == 0) {
          extern mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c13_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c14_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c14_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c18_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c20_SpeedgoatCANOpen2Buses1ms_third_party_uses_info
            (void);
          plhs[0] = sf_c20_SpeedgoatCANOpen2Buses1ms_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_jit_fallback_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "skT9LIwaR5b5k2uHPrlqXdC") == 0) {
          extern mxArray *sf_c1_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sOzzLQgBaNlv7JsJzuoWAIB") == 0) {
          extern mxArray *sf_c2_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "spuFX9VQC1PPwdOUpbRiEaF") == 0) {
          extern mxArray *sf_c3_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray *sf_c4_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray *sf_c5_SpeedgoatCANOpen2Buses1ms_jit_fallback_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c10_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c10_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "snlV8iUGxwvoZgkwiBqtoi") == 0) {
          extern mxArray *sf_c12_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sEglgmx8oGnAKoA9iTcmONH") == 0) {
          extern mxArray *sf_c13_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c13_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c14_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c14_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c18_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c18_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray *sf_c20_SpeedgoatCANOpen2Buses1ms_jit_fallback_info
            (void);
          plhs[0] = sf_c20_SpeedgoatCANOpen2Buses1ms_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "skT9LIwaR5b5k2uHPrlqXdC") == 0) {
          extern mxArray
            *sf_c1_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sOzzLQgBaNlv7JsJzuoWAIB") == 0) {
          extern mxArray
            *sf_c2_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "spuFX9VQC1PPwdOUpbRiEaF") == 0) {
          extern mxArray
            *sf_c3_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray
            *sf_c4_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray
            *sf_c5_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray
            *sf_c10_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c10_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "snlV8iUGxwvoZgkwiBqtoi") == 0) {
          extern mxArray
            *sf_c12_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sEglgmx8oGnAKoA9iTcmONH") == 0) {
          extern mxArray
            *sf_c13_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c13_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray
            *sf_c14_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c14_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray
            *sf_c18_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c18_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "skxVeLo82yAR3zayK11HYPD") == 0) {
          extern mxArray
            *sf_c20_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info(void);
          plhs[0] = sf_c20_SpeedgoatCANOpen2Buses1ms_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void SpeedgoatCANOpen2Buses1ms_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _SpeedgoatCANOpen2Buses1msMachineNumber_ = sf_debug_initialize_machine
    (debugInstance,"SpeedgoatCANOpen2Buses1ms","sfun",0,21,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _SpeedgoatCANOpen2Buses1msMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _SpeedgoatCANOpen2Buses1msMachineNumber_,0);
}

void SpeedgoatCANOpen2Buses1ms_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_SpeedgoatCANOpen2Buses1ms_optimization_info(void);
mxArray* load_SpeedgoatCANOpen2Buses1ms_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_SpeedgoatCANOpen2Buses1ms_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "SpeedgoatCANOpen2Buses1ms", "SpeedgoatCANOpen2Buses1ms");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_SpeedgoatCANOpen2Buses1ms_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
