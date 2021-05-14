function pt=SpeedgoatCANOpen2Buses100uspt
pt = [];

  
pt(1).blockname = 'Trike Application Layer/Subsystem';
pt(1).paramname = 'Kp';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_SINGLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_Kp';
pt(1).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_Kp';
pt(1).dtname     = 'real32_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Trike Application Layer/Subsystem';
pt(2).paramname = 'Ki';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_SINGLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_Ki';
pt(2).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_Ki';
pt(2).dtname     = 'real32_T';



  
pt(3).blockname = 'Trike Application Layer/Subsystem';
pt(3).paramname = 'max_speed';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_SINGLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_max_speed';
pt(3).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_max_speed';
pt(3).dtname     = 'real32_T';



  
pt(4).blockname = 'Trike Application Layer/Subsystem';
pt(4).paramname = 'min_speed';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_SINGLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_min_speed';
pt(4).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_min_speed';
pt(4).dtname     = 'real32_T';



  
pt(5).blockname = 'Trike Application Layer/Constant';
pt(5).paramname = 'Value';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(5).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Trike Application Layer/Gain1';
pt(6).paramname = 'Gain';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_SINGLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(6).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(6).dtname     = 'real32_T';



  
pt(7).blockname = 'Trike Application Layer/Gain2';
pt(7).paramname = 'Gain';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_UINT32';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(7).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(7).dtname     = 'uint32_T';



  
pt(8).blockname = 'Trike Application Layer/Gain3';
pt(8).paramname = 'Gain';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_SINGLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
pt(8).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
pt(8).dtname     = 'real32_T';



  
pt(9).blockname = 'Trike Application Layer/Gain4';
pt(9).paramname = 'Gain';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_UINT32';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(9).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(9).dtname     = 'uint32_T';



  
pt(10).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(10).paramname = 'P1';
pt(10).class     = 'vector';
pt(10).nrows     = 1;
pt(10).ncols     = 40;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
pt(10).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(11).paramname = 'P2';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(11).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(12).paramname = 'P3';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(12).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Trike Application Layer/Subsystem/Discrete-Time Integrator';
pt(13).paramname = 'gainval';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_SINGLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
pt(13).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
pt(13).dtname     = 'real32_T';



  
pt(14).blockname = 'Trike Application Layer/Subsystem/Discrete-Time Integrator';
pt(14).paramname = 'InitialCondition';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_SINGLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
pt(14).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
pt(14).dtname     = 'real32_T';



  
pt(15).blockname = 'Trike Application Layer/Subsystem/Gain3';
pt(15).paramname = 'Gain';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_SINGLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain_d';
pt(15).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain_d';
pt(15).dtname     = 'real32_T';



  
pt(16).blockname = 'Trike Application Layer/Subsystem/Unit Delay';
pt(16).paramname = 'InitialCondition';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_SINGLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';
pt(16).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';
pt(16).dtname     = 'real32_T';



  
pt(17).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read';
pt(17).paramname = 'P1';
pt(17).class     = 'vector';
pt(17).nrows     = 1;
pt(17).ncols     = 6;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
pt(17).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
pt(18).paramname = 'Threshold';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_UINT8';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(18).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(18).dtname     = 'uint8_T';



  
pt(19).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
pt(19).paramname = 'Value';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_UINT8';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(19).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(19).dtname     = 'uint8_T';



  
pt(20).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write';
pt(20).paramname = 'P1';
pt(20).class     = 'vector';
pt(20).nrows     = 1;
pt(20).ncols     = 7;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
pt(20).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';
pt(20).dtname     = 'real_T';


function len = getlenPT
len = 20;

