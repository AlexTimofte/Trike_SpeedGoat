@echo off
set COMPILER=C:\LegacyApp\TDM-GCC-64\bin\gcc
                set CXXCOMPILER=C:\LegacyApp\TDM-GCC-64\bin\g++
                set COMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set CXXCOMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -std=c++11 -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set OPTIMFLAGS=-O2 -fwrapv -DNDEBUG
                set DEBUGFLAGS=-g
                set LINKER=C:\LegacyApp\TDM-GCC-64\bin\gcc
                set CXXLINKER=C:\LegacyApp\TDM-GCC-64\bin\g++
                set LINKFLAGS=-m64 -Wl,--no-undefined -shared -static -L"C:\LegacyApp\Matlab18b\R2018b\extern\lib\win64\mingw64" -llibmx -llibmex -llibmat -lm -llibmwlapack -llibmwblas -Wl,"C:\LegacyApp\Matlab18b\R2018b/extern/lib/win64/mingw64/mexFunction.def"
                set LINKDEBUGFLAGS=-g
                set NAME_OUTPUT=-o "%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=C:\LegacyApp\TDM-GCC-64\bin;C:\LegacyApp\Matlab18b\R2018b\extern\include\win64;C:\LegacyApp\Matlab18b\R2018b\extern\include;C:\LegacyApp\Matlab18b\R2018b\simulink\include;C:\LegacyApp\Matlab18b\R2018b\lib\win64;%MATLAB_BIN%;%PATH%
set INCLUDE=C:\LegacyApp\TDM-GCC-64\include;;%INCLUDE%
set LIB=C:\LegacyApp\TDM-GCC-64\lib;;%LIB%
set LIBPATH=C:\LegacyApp\Matlab18b\R2018b\extern\lib\win64;%LIBPATH%

gmake SHELL="cmd" -f SpeedgoatCANOpen2Buses100us_sfun.gmk
