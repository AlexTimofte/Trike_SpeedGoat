# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = SpeedgoatCANOpen2Buses100us
TARGET      = sfun
MODULE_SRCS   = c1_SpeedgoatCANOpen2Buses100us.c c2_SpeedgoatCANOpen2Buses100us.c c3_SpeedgoatCANOpen2Buses100us.c c4_SpeedgoatCANOpen2Buses100us.c c5_SpeedgoatCANOpen2Buses100us.c c12_SpeedgoatCANOpen2Buses100us.c
MODEL_SRC  = SpeedgoatCANOpen2Buses100us_sfun.c
MODEL_REG = SpeedgoatCANOpen2Buses100us_sfun_registry.c
MAKEFILE    = SpeedgoatCANOpen2Buses100us_sfun.mak
MATLAB_ROOT  = E:\Program Files\MATLAB\R2018b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\Users\Venqo\Desktop\speedgoat\applications\trike_git\trike_speedgoat_algo\slprj\_sfprj\speedgoatcanopen2buses100us\_self\sfun\src" /I "C:\Users\Venqo\Desktop\speedgoat\applications\trike_git\trike_speedgoat_algo"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "E:\Program Files\MATLAB\R2018b\extern\include" \
    /I "E:\Program Files\MATLAB\R2018b\simulink\include" \
    /I "E:\Program Files\MATLAB\R2018b\simulink\include\sf_runtime" \
    /I "E:\Program Files\MATLAB\R2018b\stateflow\c\mex\include" \
    /I "E:\Program Files\MATLAB\R2018b\rtw\c\src" \
    /I "C:\Users\Venqo\Desktop\SpeedGoat\Applications\Trike_git\Trike_SpeedGoat_algo\slprj\_sfprj\SpeedgoatCANOpen2Buses100us\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Users\Venqo\Desktop\SpeedGoat\Applications\Trike_git\Trike_SpeedGoat_algo\slprj\_slcc\RntCWIQhSBMk0JpdeDcPVE"
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_DEFAULT_RELEASE=R2017b /DMATLAB_MEX_FILE /nologo /MD  
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_ABS_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = SpeedgoatCANOpen2Buses100us_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "E:\Program Files\MATLAB\R2018b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "E:\Program Files\MATLAB\R2018b\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "E:\Program Files\MATLAB\R2018b\extern\version\c_mexapi_version.c"