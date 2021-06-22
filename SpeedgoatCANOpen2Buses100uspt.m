function pt=SpeedgoatCANOpen2Buses100uspt
pt = [];

  
pt(1).blockname = 'Dold_MiniMaster_RPDOs/Constant';
pt(1).paramname = 'Value';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_UINT8';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';
pt(1).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';
pt(1).dtname     = 'uint8_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(2).paramname = 'P1';
pt(2).class     = 'vector';
pt(2).nrows     = 1;
pt(2).ncols     = 40;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
pt(2).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(3).paramname = 'P2';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(3).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(4).paramname = 'P3';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(4).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Trike Application Layer/Scopes/Constant';
pt(5).paramname = 'Value';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(5).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Trike Application Layer/Scopes/Gain2';
pt(6).paramname = 'Gain';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_UINT32';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(6).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(6).dtname     = 'uint32_T';



  
pt(7).blockname = 'Trike Application Layer/Scopes/Gain4';
pt(7).paramname = 'Gain';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_UINT32';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(7).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(7).dtname     = 'uint32_T';



  
pt(8).blockname = 'Trike Application Layer/System_Init/Constant';
pt(8).paramname = 'Value';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(8).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'Trike Application Layer/System_Control/BrakeControl/Gain1';
pt(9).paramname = 'Gain';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_UINT32';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c';
pt(9).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c';
pt(9).dtname     = 'uint32_T';



  
pt(10).blockname = 'Trike Application Layer/System_Control/BrakeControl/Gain2';
pt(10).paramname = 'Gain';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_UINT16';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
pt(10).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
pt(10).dtname     = 'uint16_T';



  
pt(11).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation';
pt(11).paramname = 'UpperLimit';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_UINT32';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
pt(11).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
pt(11).dtname     = 'uint32_T';



  
pt(12).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation';
pt(12).paramname = 'LowerLimit';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_UINT32';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
pt(12).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
pt(12).dtname     = 'uint32_T';



  
pt(13).blockname = 'Trike Application Layer/System_Control/DirectionControl/Constant1';
pt(13).paramname = 'Value';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
pt(13).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Trike Application Layer/System_Control/DirectionControl/Robotics Convention';
pt(14).paramname = 'Gain';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_SINGLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
pt(14).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
pt(14).dtname     = 'real32_T';



  
pt(15).blockname = 'Trike Application Layer/System_Control/DirectionControl/degree2rad';
pt(15).paramname = 'Gain';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
pt(15).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'Trike Application Layer/System_Control/DirectionControl/inc2deg';
pt(16).paramname = 'Gain';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
pt(16).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'Trike Application Layer/System_Control/DirectionControl/Memory1';
pt(17).paramname = 'InitialCondition';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
pt(17).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'Trike Application Layer/System_Control/Subsystem/Constant';
pt(18).paramname = 'Value';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';
pt(18).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'Trike Application Layer/System_Control/Subsystem/Switch';
pt(19).paramname = 'Threshold';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(19).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'Trike Application Layer/System_Control/Subsystem/Switch1';
pt(20).paramname = 'Threshold';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold';
pt(20).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'Trike Application Layer/System_Control/Subsystem/Switch2';
pt(21).paramname = 'Threshold';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold';
pt(21).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'Trike Application Layer/System_Control/Subsystem/Switch3';
pt(22).paramname = 'Threshold';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold';
pt(22).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'Trike Application Layer/System_Control/Subsystem/Switch4';
pt(23).paramname = 'Threshold';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold';
pt(23).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold';
pt(23).dtname     = 'real_T';



  
pt(24).blockname = 'Trike Application Layer/System_Control/TiltingControl/Constant';
pt(24).paramname = 'Value';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_g';
pt(24).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_g';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'Trike Application Layer/System_Control/TiltingControl/Volt2meter';
pt(25).paramname = 'Gain';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
pt(25).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'Trike Application Layer/System_Control/TiltingControl/degree2m';
pt(26).paramname = 'Gain';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
pt(26).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'Trike Application Layer/System_Control/TiltingControl/Memory';
pt(27).paramname = 'InitialCondition';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';
pt(27).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Trike Application Layer/System_Control/TractionControl/Gain1';
pt(28).paramname = 'Gain';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_SINGLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(28).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(28).dtname     = 'real32_T';



  
pt(29).blockname = 'Trike Application Layer/System_Control/TractionControl/Gain2';
pt(29).paramname = 'Gain';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_INT16';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
pt(29).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
pt(29).dtname     = 'int16_T';



  
pt(30).blockname = 'Trike Application Layer/System_Control/TractionControl/WheelRadius';
pt(30).paramname = 'Gain';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_INT32';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
pt(30).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
pt(30).dtname     = 'int32_T';



  
pt(31).blockname = 'Trike Application Layer/System_Control/TractionControl/Saturation1';
pt(31).paramname = 'UpperLimit';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
pt(31).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Trike Application Layer/System_Control/TractionControl/Saturation1';
pt(32).paramname = 'LowerLimit';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
pt(32).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant';
pt(33).paramname = 'Value';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_SINGLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
pt(33).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
pt(33).dtname     = 'real32_T';



  
pt(34).blockname = 'Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant';
pt(34).paramname = 'Value';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_SINGLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
pt(34).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
pt(34).dtname     = 'real32_T';



  
pt(35).blockname = 'Trike Application Layer/System_Init/Subsystem/Compare To Constant';
pt(35).paramname = 'const';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
pt(35).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant';
pt(36).paramname = 'Value';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_SINGLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
pt(36).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
pt(36).dtname     = 'real32_T';



  
pt(37).blockname = 'Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant';
pt(37).paramname = 'Value';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_SINGLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
pt(37).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
pt(37).dtname     = 'real32_T';



  
pt(38).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read';
pt(38).paramname = 'P1';
pt(38).class     = 'vector';
pt(38).nrows     = 1;
pt(38).ncols     = 6;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
pt(38).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
pt(39).paramname = 'Threshold';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_UINT8';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m';
pt(39).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m';
pt(39).dtname     = 'uint8_T';



  
pt(40).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
pt(40).paramname = 'Value';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_UINT8';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
pt(40).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
pt(40).dtname     = 'uint8_T';



  
pt(41).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write';
pt(41).paramname = 'P1';
pt(41).class     = 'vector';
pt(41).nrows     = 1;
pt(41).ncols     = 7;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
pt(41).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read';
pt(42).paramname = 'P1';
pt(42).class     = 'vector';
pt(42).nrows     = 1;
pt(42).ncols     = 6;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n';
pt(42).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0]';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch';
pt(43).paramname = 'Threshold';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_UINT8';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
pt(43).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
pt(43).dtname     = 'uint8_T';



  
pt(44).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant';
pt(44).paramname = 'Value';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_UINT8';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
pt(44).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
pt(44).dtname     = 'uint8_T';



  
pt(45).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write';
pt(45).paramname = 'P1';
pt(45).class     = 'vector';
pt(45).nrows     = 1;
pt(45).ncols     = 7;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h';
pt(45).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0]';
pt(45).dtname     = 'real_T';


function len = getlenPT
len = 45;

