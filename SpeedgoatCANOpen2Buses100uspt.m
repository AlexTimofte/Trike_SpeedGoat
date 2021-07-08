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


  
pt(2).blockname = 'Dunker #3/Gain';
pt(2).paramname = 'Gain';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_INT32';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain_Gain_g';
pt(2).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain_Gain_g';
pt(2).dtname     = 'int32_T';



  
pt(3).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(3).paramname = 'P1';
pt(3).class     = 'vector';
pt(3).nrows     = 1;
pt(3).ncols     = 40;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
pt(3).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(4).paramname = 'P2';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(4).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ';
pt(5).paramname = 'P3';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(5).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave';
pt(6).paramname = 'Amplitude';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_l';
pt(6).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_l';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave';
pt(7).paramname = 'Bias';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_c';
pt(7).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_c';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave';
pt(8).paramname = 'Frequency';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_e';
pt(8).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_e';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave';
pt(9).paramname = 'Phase';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_h';
pt(9).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_h';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave1';
pt(10).paramname = 'Amplitude';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';
pt(10).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave1';
pt(11).paramname = 'Bias';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';
pt(11).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave1';
pt(12).paramname = 'Frequency';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';
pt(12).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave1';
pt(13).paramname = 'Phase';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';
pt(13).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave2';
pt(14).paramname = 'Amplitude';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';
pt(14).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave2';
pt(15).paramname = 'Bias';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';
pt(15).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave2';
pt(16).paramname = 'Frequency';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';
pt(16).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave2';
pt(17).paramname = 'Phase';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';
pt(17).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave3';
pt(18).paramname = 'Amplitude';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';
pt(18).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave3';
pt(19).paramname = 'Bias';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';
pt(19).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave3';
pt(20).paramname = 'Frequency';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';
pt(20).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'Speedgoat_TPDOs/Subsystem/Sine Wave3';
pt(21).paramname = 'Phase';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';
pt(21).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'Trike Application Layer/Scopes/Constant';
pt(22).paramname = 'Value';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(22).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'Trike Application Layer/Scopes/Gain2';
pt(23).paramname = 'Gain';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_UINT32';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
pt(23).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
pt(23).dtname     = 'uint32_T';



  
pt(24).blockname = 'Trike Application Layer/Scopes/Gain4';
pt(24).paramname = 'Gain';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_UINT32';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(24).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
pt(24).dtname     = 'uint32_T';



  
pt(25).blockname = 'Trike Application Layer/System_Control/BrakeControl/offset';
pt(25).paramname = 'Value';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'SpeedgoatCANOpen2Buses100us_P.offset_Value';
pt(25).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.offset_Value';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'Trike Application Layer/System_Control/BrakeControl/Amp2mAmp';
pt(26).paramname = 'Gain';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';
pt(26).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'Trike Application Layer/System_Control/BrakeControl/Gain1';
pt(27).paramname = 'Gain';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(27).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Trike Application Layer/System_Control/BrakeControl/Gain2';
pt(28).paramname = 'Gain';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(28).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'Trike Application Layer/System_Control/BrakeControl/Gain3';
pt(29).paramname = 'Gain';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
pt(29).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation';
pt(30).paramname = 'UpperLimit';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
pt(30).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation';
pt(31).paramname = 'LowerLimit';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
pt(31).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation1';
pt(32).paramname = 'UpperLimit';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_UINT16';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
pt(32).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
pt(32).dtname     = 'uint16_T';



  
pt(33).blockname = 'Trike Application Layer/System_Control/BrakeControl/Saturation1';
pt(33).paramname = 'LowerLimit';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_UINT16';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
pt(33).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
pt(33).dtname     = 'uint16_T';



  
pt(34).blockname = 'Trike Application Layer/System_Control/DirectionControl/Offset to 0 pos => pos = [-180 180]deg';
pt(34).paramname = 'Value';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';
pt(34).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Trike Application Layer/System_Control/DirectionControl/Robotics Convention';
pt(35).paramname = 'Gain';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_SINGLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
pt(35).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
pt(35).dtname     = 'real32_T';



  
pt(36).blockname = 'Trike Application Layer/System_Control/DirectionControl/degree2rad';
pt(36).paramname = 'Gain';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_SINGLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
pt(36).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
pt(36).dtname     = 'real32_T';



  
pt(37).blockname = 'Trike Application Layer/System_Control/DirectionControl/dem';
pt(37).paramname = 'Gain';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_SINGLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'SpeedgoatCANOpen2Buses100us_P.dem_Gain';
pt(37).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.dem_Gain';
pt(37).dtname     = 'real32_T';



  
pt(38).blockname = 'Trike Application Layer/System_Control/DirectionControl/inc2deg';
pt(38).paramname = 'Gain';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
pt(38).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Trike Application Layer/System_Control/DirectionControl/Memory1';
pt(39).paramname = 'InitialCondition';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
pt(39).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'Trike Application Layer/System_Control/Subsystem/Constant';
pt(40).paramname = 'Value';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(40).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl';
pt(41).paramname = 'Kp';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kp';
pt(41).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kp';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl';
pt(42).paramname = 'Ki';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Ki';
pt(42).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Ki';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl';
pt(43).paramname = 'Req_lim';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Req_lim';
pt(43).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Req_lim';
pt(43).dtname     = 'real_T';



  
pt(44).blockname = 'Trike Application Layer/System_Control/TiltingControl/Constant';
pt(44).paramname = 'Value';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';
pt(44).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';
pt(44).dtname     = 'real_T';



  
pt(45).blockname = 'Trike Application Layer/System_Control/TiltingControl/Constant1';
pt(45).paramname = 'Value';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
pt(45).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
pt(45).dtname     = 'real_T';



  
pt(46).blockname = 'Trike Application Layer/System_Control/TiltingControl/Offset for 0 deg (3.5064V -> 57.02mm)';
pt(46).paramname = 'Value';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg35064V5702mm_Value';
pt(46).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg35064V5702mm_Value';
pt(46).dtname     = 'real_T';



  
pt(47).blockname = 'Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1';
pt(47).paramname = 'Gain';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain';
pt(47).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain';
pt(47).dtname     = 'real_T';



  
pt(48).blockname = 'Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2';
pt(48).paramname = 'Gain';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain';
pt(48).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain';
pt(48).dtname     = 'real_T';



  
pt(49).blockname = 'Trike Application Layer/System_Control/TiltingControl/LSB2Volt';
pt(49).paramname = 'Gain';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_INT16';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';
pt(49).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';
pt(49).dtname     = 'int16_T';



  
pt(50).blockname = 'Trike Application Layer/System_Control/TiltingControl/Volt2meter';
pt(50).paramname = 'Gain';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
pt(50).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
pt(50).dtname     = 'real_T';



  
pt(51).blockname = 'Trike Application Layer/System_Control/TiltingControl/degree2m';
pt(51).paramname = 'Gain';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';
pt(51).isStruct  = false;
pt(51).symbol     = 'SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
pt(51).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
pt(51).dtname     = 'real_T';



  
pt(52).blockname = 'Trike Application Layer/System_Control/TiltingControl/n';
pt(52).paramname = 'Gain';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_SINGLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';
pt(52).isStruct  = false;
pt(52).symbol     = 'SpeedgoatCANOpen2Buses100us_P.n_Gain';
pt(52).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.n_Gain';
pt(52).dtname     = 'real32_T';



  
pt(53).blockname = 'Trike Application Layer/System_Control/TiltingControl/Memory1';
pt(53).paramname = 'InitialCondition';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';
pt(53).isStruct  = false;
pt(53).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k';
pt(53).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k';
pt(53).dtname     = 'real_T';



  
pt(54).blockname = 'Trike Application Layer/System_Control/TiltingControl/Sine Wave';
pt(54).paramname = 'Amplitude';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';
pt(54).isStruct  = false;
pt(54).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';
pt(54).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';
pt(54).dtname     = 'real_T';



  
pt(55).blockname = 'Trike Application Layer/System_Control/TiltingControl/Sine Wave';
pt(55).paramname = 'Bias';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';
pt(55).isStruct  = false;
pt(55).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';
pt(55).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';
pt(55).dtname     = 'real_T';



  
pt(56).blockname = 'Trike Application Layer/System_Control/TiltingControl/Sine Wave';
pt(56).paramname = 'Frequency';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';
pt(56).isStruct  = false;
pt(56).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';
pt(56).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';
pt(56).dtname     = 'real_T';



  
pt(57).blockname = 'Trike Application Layer/System_Control/TiltingControl/Sine Wave';
pt(57).paramname = 'Phase';
pt(57).class     = 'scalar';
pt(57).nrows     = 1;
pt(57).ncols     = 1;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';
pt(57).isStruct  = false;
pt(57).symbol     = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';
pt(57).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';
pt(57).dtname     = 'real_T';



  
pt(58).blockname = 'Trike Application Layer/System_Control/TiltingControl/Manual Switch';
pt(58).paramname = 'CurrentSetting';
pt(58).class     = 'scalar';
pt(58).nrows     = 1;
pt(58).ncols     = 1;
pt(58).subsource = 'SS_UINT8';
pt(58).ndims     = '2';
pt(58).size      = '[]';
pt(58).isStruct  = false;
pt(58).symbol     = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting';
pt(58).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting';
pt(58).dtname     = 'uint8_T';



  
pt(59).blockname = 'Trike Application Layer/System_Control/TiltingControl/Manual Switch1';
pt(59).paramname = 'CurrentSetting';
pt(59).class     = 'scalar';
pt(59).nrows     = 1;
pt(59).ncols     = 1;
pt(59).subsource = 'SS_UINT8';
pt(59).ndims     = '2';
pt(59).size      = '[]';
pt(59).isStruct  = false;
pt(59).symbol     = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting';
pt(59).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting';
pt(59).dtname     = 'uint8_T';



  
pt(60).blockname = 'Trike Application Layer/System_Control/TiltingControl/Discrete Filter';
pt(60).paramname = 'Numerator';
pt(60).class     = 'vector';
pt(60).nrows     = 1;
pt(60).ncols     = 3;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';
pt(60).isStruct  = false;
pt(60).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef';
pt(60).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0]';
pt(60).dtname     = 'real_T';



  
pt(61).blockname = 'Trike Application Layer/System_Control/TiltingControl/Discrete Filter';
pt(61).paramname = 'Denominator';
pt(61).class     = 'vector';
pt(61).nrows     = 1;
pt(61).ncols     = 3;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';
pt(61).isStruct  = false;
pt(61).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef';
pt(61).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0]';
pt(61).dtname     = 'real_T';



  
pt(62).blockname = 'Trike Application Layer/System_Control/TiltingControl/Discrete Filter';
pt(62).paramname = 'InitialStates';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';
pt(62).isStruct  = false;
pt(62).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates';
pt(62).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates';
pt(62).dtname     = 'real_T';



  
pt(63).blockname = 'Trike Application Layer/System_Control/TractionControl/Gain1';
pt(63).paramname = 'Gain';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_SINGLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';
pt(63).isStruct  = false;
pt(63).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n';
pt(63).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n';
pt(63).dtname     = 'real32_T';



  
pt(64).blockname = 'Trike Application Layer/System_Control/TractionControl/Gain2';
pt(64).paramname = 'Gain';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_INT16';
pt(64).ndims     = '2';
pt(64).size      = '[]';
pt(64).isStruct  = false;
pt(64).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
pt(64).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
pt(64).dtname     = 'int16_T';



  
pt(65).blockname = 'Trike Application Layer/System_Control/TractionControl/WheelRadius';
pt(65).paramname = 'Gain';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_INT32';
pt(65).ndims     = '2';
pt(65).size      = '[]';
pt(65).isStruct  = false;
pt(65).symbol     = 'SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
pt(65).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
pt(65).dtname     = 'int32_T';



  
pt(66).blockname = 'Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant';
pt(66).paramname = 'Value';
pt(66).class     = 'scalar';
pt(66).nrows     = 1;
pt(66).ncols     = 1;
pt(66).subsource = 'SS_SINGLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';
pt(66).isStruct  = false;
pt(66).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
pt(66).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
pt(66).dtname     = 'real32_T';



  
pt(67).blockname = 'Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant';
pt(67).paramname = 'Value';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_SINGLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';
pt(67).isStruct  = false;
pt(67).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
pt(67).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
pt(67).dtname     = 'real32_T';



  
pt(68).blockname = 'Trike Application Layer/System_Init/Subsystem/Compare To Constant';
pt(68).paramname = 'const';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_SINGLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';
pt(68).isStruct  = false;
pt(68).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
pt(68).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
pt(68).dtname     = 'real32_T';



  
pt(69).blockname = 'Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant';
pt(69).paramname = 'Value';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_SINGLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';
pt(69).isStruct  = false;
pt(69).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
pt(69).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
pt(69).dtname     = 'real32_T';



  
pt(70).blockname = 'Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant';
pt(70).paramname = 'Value';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_SINGLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';
pt(70).isStruct  = false;
pt(70).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
pt(70).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
pt(70).dtname     = 'real32_T';



  
pt(71).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read';
pt(71).paramname = 'P1';
pt(71).class     = 'vector';
pt(71).nrows     = 1;
pt(71).ncols     = 6;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';
pt(71).isStruct  = false;
pt(71).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
pt(71).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';
pt(71).dtname     = 'real_T';



  
pt(72).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
pt(72).paramname = 'Threshold';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_UINT8';
pt(72).ndims     = '2';
pt(72).size      = '[]';
pt(72).isStruct  = false;
pt(72).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(72).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
pt(72).dtname     = 'uint8_T';



  
pt(73).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
pt(73).paramname = 'Value';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_UINT8';
pt(73).ndims     = '2';
pt(73).size      = '[]';
pt(73).isStruct  = false;
pt(73).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
pt(73).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
pt(73).dtname     = 'uint8_T';



  
pt(74).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write';
pt(74).paramname = 'P1';
pt(74).class     = 'vector';
pt(74).nrows     = 1;
pt(74).ncols     = 7;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';
pt(74).isStruct  = false;
pt(74).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
pt(74).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';
pt(74).dtname     = 'real_T';



  
pt(75).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read';
pt(75).paramname = 'P1';
pt(75).class     = 'vector';
pt(75).nrows     = 1;
pt(75).ncols     = 6;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';
pt(75).isStruct  = false;
pt(75).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n';
pt(75).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0]';
pt(75).dtname     = 'real_T';



  
pt(76).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch';
pt(76).paramname = 'Threshold';
pt(76).class     = 'scalar';
pt(76).nrows     = 1;
pt(76).ncols     = 1;
pt(76).subsource = 'SS_UINT8';
pt(76).ndims     = '2';
pt(76).size      = '[]';
pt(76).isStruct  = false;
pt(76).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
pt(76).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
pt(76).dtname     = 'uint8_T';



  
pt(77).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant';
pt(77).paramname = 'Value';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_UINT8';
pt(77).ndims     = '2';
pt(77).size      = '[]';
pt(77).isStruct  = false;
pt(77).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
pt(77).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
pt(77).dtname     = 'uint8_T';



  
pt(78).blockname = 'Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write';
pt(78).paramname = 'P1';
pt(78).class     = 'vector';
pt(78).nrows     = 1;
pt(78).ncols     = 7;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';
pt(78).isStruct  = false;
pt(78).symbol     = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h';
pt(78).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0]';
pt(78).dtname     = 'real_T';



  
pt(79).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Discrete-Time Integrator';
pt(79).paramname = 'gainval';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';
pt(79).isStruct  = false;
pt(79).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
pt(79).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
pt(79).dtname     = 'real_T';



  
pt(80).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Discrete-Time Integrator';
pt(80).paramname = 'InitialCondition';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';
pt(80).isStruct  = false;
pt(80).symbol     = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
pt(80).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
pt(80).dtname     = 'real_T';



  
pt(81).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Gain';
pt(81).paramname = 'Gain';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';
pt(81).isStruct  = false;
pt(81).symbol     = 'SpeedgoatCANOpen2Buses100us_P.Gain_Gain';
pt(81).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.Gain_Gain';
pt(81).dtname     = 'real_T';



  
pt(82).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward';
pt(82).paramname = 'Numerator';
pt(82).class     = 'vector';
pt(82).nrows     = 1;
pt(82).ncols     = 2;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';
pt(82).isStruct  = false;
pt(82).symbol     = 'SpeedgoatCANOpen2Buses100us_P.FeedForward_NumCoef';
pt(82).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.FeedForward_NumCoef[0]';
pt(82).dtname     = 'real_T';



  
pt(83).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward';
pt(83).paramname = 'Denominator';
pt(83).class     = 'vector';
pt(83).nrows     = 1;
pt(83).ncols     = 2;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';
pt(83).isStruct  = false;
pt(83).symbol     = 'SpeedgoatCANOpen2Buses100us_P.FeedForward_DenCoef';
pt(83).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.FeedForward_DenCoef[0]';
pt(83).dtname     = 'real_T';



  
pt(84).blockname = 'Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward';
pt(84).paramname = 'InitialStates';
pt(84).class     = 'scalar';
pt(84).nrows     = 1;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';
pt(84).isStruct  = false;
pt(84).symbol     = 'SpeedgoatCANOpen2Buses100us_P.FeedForward_InitialStates';
pt(84).baseaddr   = '&SpeedgoatCANOpen2Buses100us_P.FeedForward_InitialStates';
pt(84).dtname     = 'real_T';


function len = getlenPT
len = 84;

