function xcp = SpeedgoatCANOpen2Buses100usxcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'SpeedgoatCANOpen2Buses100us';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.0001;
xcp.events(1).offset     = 0.0;
         
xcp.events(2).id         = 1;
xcp.events(2).sampletime = 0.025;
xcp.events(2).offset     = 0.0;
    
xcp.signals(1).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN1';
    
xcp.signals(2).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN2';
    
xcp.signals(3).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN3';
    
xcp.signals(4).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN4';
    
xcp.signals(5).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_StatusWord';
    
xcp.signals(6).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent';
    
xcp.signals(7).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_Speed';
    
xcp.signals(8).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage';
    
xcp.signals(9).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp';
    
xcp.signals(10).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_Temp';
    
xcp.signals(11).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus';
    
xcp.signals(12).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_Direction';
    
xcp.signals(13).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen2Buses100us_B.Desired_Current';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN1';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN2';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN3';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN4';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen2Buses100us_B.Actual_Current';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen2Buses100us_B.MovingAverage';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent_j';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
    
xcp.signals(46).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable';
    
xcp.signals(47).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent_g';
    
xcp.signals(48).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError';
    
xcp.signals(49).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl';
    
xcp.signals(50).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode';
    
xcp.signals(51).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable';
    
xcp.signals(52).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent';
    
xcp.signals(53).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
    
xcp.signals(54).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
    
xcp.signals(55).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
    
xcp.signals(56).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent_h';
    
xcp.signals(57).symbol =  'SpeedgoatCANOpen2Buses100us_B.HB';
    
xcp.signals(58).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
    
xcp.signals(59).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
    
xcp.signals(60).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
    
xcp.signals(61).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_e';
    
xcp.signals(62).symbol =  'SpeedgoatCANOpen2Buses100us_B.button';
    
xcp.signals(63).symbol =  'SpeedgoatCANOpen2Buses100us_B.Byte0';
    
xcp.signals(64).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle3';
    
xcp.signals(65).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
    
xcp.signals(66).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
    
xcp.signals(67).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3';
    
xcp.signals(68).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain2_a';
    
xcp.signals(69).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation';
    
xcp.signals(70).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedRef';
    
xcp.signals(71).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_g';
    
xcp.signals(72).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g';
    
xcp.signals(73).symbol =  'SpeedgoatCANOpen2Buses100us_B.RoboticsConvention';
    
xcp.signals(74).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch';
    
xcp.signals(75).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch1';
    
xcp.signals(76).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch2';
    
xcp.signals(77).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch3';
    
xcp.signals(78).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch4';
    
xcp.signals(79).symbol =  'SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef';
    
xcp.signals(80).symbol =  'SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef';
    
xcp.signals(81).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngle';
    
xcp.signals(82).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle';
    
xcp.signals(83).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1';
    
xcp.signals(84).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispRight';
    
xcp.signals(85).symbol =  'SpeedgoatCANOpen2Buses100us_B.degree2m';
    
xcp.signals(86).symbol =  'SpeedgoatCANOpen2Buses100us_B.Memory';
    
xcp.signals(87).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum';
    
xcp.signals(88).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI';
    
xcp.signals(89).symbol =  'SpeedgoatCANOpen2Buses100us_B.TractionRef';
    
xcp.signals(90).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.ClearError';
    
xcp.signals(91).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.DeviceMode';
    
xcp.signals(92).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.BrakeCtrl';
    
xcp.signals(93).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.PowerEnable';
    
xcp.signals(94).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.SpeedRequest';
    
xcp.signals(95).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_jw';
    
xcp.signals(96).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant1_g';
    
xcp.signals(97).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_p';
    
xcp.signals(98).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_a';
    
xcp.signals(99).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_a';
    
xcp.signals(100).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_a';
    
xcp.signals(101).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.ClearError';
    
xcp.signals(102).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.DeviceMode';
    
xcp.signals(103).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.BrakeCtrl';
    
xcp.signals(104).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.PowerEnable';
    
xcp.signals(105).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.SpeedRequest';
    
xcp.signals(106).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant';
    
xcp.signals(107).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant1';
    
xcp.signals(108).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode';
    
xcp.signals(109).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError';
    
xcp.signals(110).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
    
xcp.signals(111).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable';
    
xcp.signals(112).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.ClearError';
    
xcp.signals(113).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.DeviceMode';
    
xcp.signals(114).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.BrakeCtrl';
    
xcp.signals(115).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.PowerEnable';
    
xcp.signals(116).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.SpeedRequest';
    
xcp.signals(117).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_a';
    
xcp.signals(118).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant1_a';
    
xcp.signals(119).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_k';
    
xcp.signals(120).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_l';
    
xcp.signals(121).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_h';
    
xcp.signals(122).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_k';
    
xcp.signals(123).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.ClearError';
    
xcp.signals(124).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.DeviceMode';
    
xcp.signals(125).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.BrakeCtrl';
    
xcp.signals(126).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.PowerEnable';
    
xcp.signals(127).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.SpeedRequest';
    
xcp.signals(128).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_j';
    
xcp.signals(129).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant1_i';
    
xcp.signals(130).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_e';
    
xcp.signals(131).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_o';
    
xcp.signals(132).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_o';
    
xcp.signals(133).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_d';
    
xcp.signals(134).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
    
xcp.signals(135).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
    
xcp.signals(136).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
    
xcp.signals(137).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
    
xcp.signals(138).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
    
xcp.signals(139).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6';
    
xcp.signals(140).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch_c';
    
xcp.signals(141).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_g';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'uint32_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'uint32_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
xcp.parameters(4).size   =  40;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'uint32_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'uint16_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'uint32_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'uint32_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real32_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'uint32_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold';     
         
xcp.parameters(17).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold';     
         
xcp.parameters(18).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold';     
         
xcp.parameters(19).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold';     
         
xcp.parameters(20).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_g';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_g';     
         
xcp.parameters(21).symbol = 'SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';     
         
xcp.parameters(22).symbol = 'SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';     
         
xcp.parameters(23).symbol = 'SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';     
         
xcp.parameters(24).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'int16_T'; 
xcp.parameters(25).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';     
         
xcp.parameters(25).symbol = 'SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'int32_T'; 
xcp.parameters(26).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';     
         
xcp.parameters(26).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real32_T'; 
xcp.parameters(27).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';     
         
xcp.parameters(27).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real32_T'; 
xcp.parameters(28).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';     
         
xcp.parameters(28).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real32_T'; 
xcp.parameters(29).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';     
         
xcp.parameters(29).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value_g';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real32_T'; 
xcp.parameters(30).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value_g';     
         
xcp.parameters(30).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real32_T'; 
xcp.parameters(31).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';     
         
xcp.parameters(31).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real32_T'; 
xcp.parameters(32).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value';     
         
xcp.parameters(32).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_g5';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'real32_T'; 
xcp.parameters(33).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_g5';     
         
xcp.parameters(33).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'real32_T'; 
xcp.parameters(34).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a';     
         
xcp.parameters(34).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_m';
xcp.parameters(34).size   =  1;       
xcp.parameters(34).dtname = 'real32_T'; 
xcp.parameters(35).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_m';     
         
xcp.parameters(35).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value_k';
xcp.parameters(35).size   =  1;       
xcp.parameters(35).dtname = 'real32_T'; 
xcp.parameters(36).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value_k';     
         
xcp.parameters(36).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
xcp.parameters(36).size   =  6;       
xcp.parameters(36).dtname = 'real_T'; 
xcp.parameters(37).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';     
         
xcp.parameters(37).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m';
xcp.parameters(37).size   =  1;       
xcp.parameters(37).dtname = 'uint8_T'; 
xcp.parameters(38).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m';     
         
xcp.parameters(38).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
xcp.parameters(38).size   =  1;       
xcp.parameters(38).dtname = 'uint8_T'; 
xcp.parameters(39).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';     
         
xcp.parameters(39).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
xcp.parameters(39).size   =  7;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';     

function n = getNumParameters
n = 39;

function n = getNumSignals
n = 141;

function n = getNumEvents
n = 2;

function n = getNumModels
n = 1;

