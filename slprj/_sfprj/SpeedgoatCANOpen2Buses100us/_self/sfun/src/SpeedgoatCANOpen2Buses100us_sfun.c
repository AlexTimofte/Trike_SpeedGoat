/* Include files */

#define IN_SF_MACHINE_SOURCE           1
#include "SpeedgoatCANOpen2Buses100us_sfun.h"
#include "SpeedgoatCANOpen2Buses100us_sfun_debug_macros.h"
#include "c1_SpeedgoatCANOpen2Buses100us.h"
#include "c2_SpeedgoatCANOpen2Buses100us.h"
#include "c3_SpeedgoatCANOpen2Buses100us.h"
#include "c4_SpeedgoatCANOpen2Buses100us.h"
#include "c5_SpeedgoatCANOpen2Buses100us.h"
#include "c12_SpeedgoatCANOpen2Buses100us.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _SpeedgoatCANOpen2Buses100usMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void SpeedgoatCANOpen2Buses100us_initializer(void)
{
}

void SpeedgoatCANOpen2Buses100us_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_SpeedgoatCANOpen2Buses100us_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_SpeedgoatCANOpen2Buses100us_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_SpeedgoatCANOpen2Buses100us_process_testpoint_info_call( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
  if (!strcmp(machineName, "SpeedgoatCANOpen2Buses100us")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c1_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c2_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c3_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c4_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c5_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
        break;
      }

     case 12:
      {
        extern mxArray *sf_c12_SpeedgoatCANOpen2Buses100us_get_testpoint_info
          (void);
        plhs[0] = sf_c12_SpeedgoatCANOpen2Buses100us_get_testpoint_info();
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

unsigned int sf_SpeedgoatCANOpen2Buses100us_process_check_sum_call( int nlhs,
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2168234884U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(704761847U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3521470186U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3302816668U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c1_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c2_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c3_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c4_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c5_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_SpeedgoatCANOpen2Buses100us_get_check_sum(mxArray
            *plhs[]);
          sf_c12_SpeedgoatCANOpen2Buses100us_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2755636468U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2459864611U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2408923065U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(303231323U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_SpeedgoatCANOpen2Buses100us_autoinheritance_info( int nlhs,
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
        if (strcmp(aiChksum, "1qQy17lUVK1UGKj556kB8") == 0) {
          extern mxArray
            *sf_c1_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "O4LWzMdDcRceb04oyQMYXC") == 0) {
          extern mxArray
            *sf_c2_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "kB16IzCsmVFQBJQ3HRnAO") == 0) {
          extern mxArray
            *sf_c3_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "FvgjMMC5ZoGRqeGfwd5WnE") == 0) {
          extern mxArray
            *sf_c4_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "KLPKHaaEXgPV4ulJh4EqDE") == 0) {
          extern mxArray
            *sf_c5_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "ESpxWDrf6dYr41GEr5BtgF") == 0) {
          extern mxArray
            *sf_c12_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info(void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses100us_get_autoinheritance_info();
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

unsigned int sf_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info( int
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
        if (strcmp(instanceChksum, "sRMKVlP0dIyTqhz9XyfEsX") == 0) {
          extern const mxArray
            *sf_c1_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c1_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 2:
      {
        if (strcmp(instanceChksum, "sJea3lsRw7y4NjY1d9CZd0") == 0) {
          extern const mxArray
            *sf_c2_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 3:
      {
        if (strcmp(instanceChksum, "sZ4uOyvb1jIR0SmfD1jtTOB") == 0) {
          extern const mxArray
            *sf_c3_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c3_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 4:
      {
        if (strcmp(instanceChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern const mxArray
            *sf_c4_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 5:
      {
        if (strcmp(instanceChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern const mxArray
            *sf_c5_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c5_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 12:
      {
        if (strcmp(instanceChksum, "sDjDQbYgzY0yrZfL00szLSC") == 0) {
          extern const mxArray
            *sf_c12_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c12_SpeedgoatCANOpen2Buses100us_get_eml_resolved_functions_info();
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

unsigned int sf_SpeedgoatCANOpen2Buses100us_third_party_uses_info( int nlhs,
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
        if (strcmp(tpChksum, "sRMKVlP0dIyTqhz9XyfEsX") == 0) {
          extern mxArray
            *sf_c1_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sJea3lsRw7y4NjY1d9CZd0") == 0) {
          extern mxArray
            *sf_c2_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sZ4uOyvb1jIR0SmfD1jtTOB") == 0) {
          extern mxArray
            *sf_c3_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray
            *sf_c4_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray
            *sf_c5_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sDjDQbYgzY0yrZfL00szLSC") == 0) {
          extern mxArray
            *sf_c12_SpeedgoatCANOpen2Buses100us_third_party_uses_info(void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses100us_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_SpeedgoatCANOpen2Buses100us_jit_fallback_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
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
        if (strcmp(tpChksum, "sRMKVlP0dIyTqhz9XyfEsX") == 0) {
          extern mxArray *sf_c1_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sJea3lsRw7y4NjY1d9CZd0") == 0) {
          extern mxArray *sf_c2_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sZ4uOyvb1jIR0SmfD1jtTOB") == 0) {
          extern mxArray *sf_c3_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray *sf_c4_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray *sf_c5_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sDjDQbYgzY0yrZfL00szLSC") == 0) {
          extern mxArray *sf_c12_SpeedgoatCANOpen2Buses100us_jit_fallback_info
            (void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses100us_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info( int nlhs,
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
        if (strcmp(tpChksum, "sRMKVlP0dIyTqhz9XyfEsX") == 0) {
          extern mxArray
            *sf_c1_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sJea3lsRw7y4NjY1d9CZd0") == 0) {
          extern mxArray
            *sf_c2_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sZ4uOyvb1jIR0SmfD1jtTOB") == 0) {
          extern mxArray
            *sf_c3_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sWE62ZaDDfUj7c9PKxfzjx") == 0) {
          extern mxArray
            *sf_c4_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sPxpg5Cbc6NCyz1F8fSYKHH") == 0) {
          extern mxArray
            *sf_c5_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sDjDQbYgzY0yrZfL00szLSC") == 0) {
          extern mxArray
            *sf_c12_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info(void);
          plhs[0] = sf_c12_SpeedgoatCANOpen2Buses100us_updateBuildInfo_args_info
            ();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void SpeedgoatCANOpen2Buses100us_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _SpeedgoatCANOpen2Buses100usMachineNumber_ = sf_debug_initialize_machine
    (debugInstance,"SpeedgoatCANOpen2Buses100us","sfun",0,12,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _SpeedgoatCANOpen2Buses100usMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _SpeedgoatCANOpen2Buses100usMachineNumber_,0);
}

void SpeedgoatCANOpen2Buses100us_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_SpeedgoatCANOpen2Buses100us_optimization_info(void);
mxArray* load_SpeedgoatCANOpen2Buses100us_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_SpeedgoatCANOpen2Buses100us_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "SpeedgoatCANOpen2Buses100us", "SpeedgoatCANOpen2Buses100us");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_SpeedgoatCANOpen2Buses100us_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
