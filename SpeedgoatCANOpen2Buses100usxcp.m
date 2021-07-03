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
xcp.events(2).sampletime = 0.005;
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
    
xcp.signals(13).symbol =  'SpeedgoatCANOpen2Buses100us_B.Enable_c';
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_01';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_02';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_03';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_04';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave1';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave2';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave3';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen2Buses100us_B.Desired_Current';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN1';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN2';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN3';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN4';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen2Buses100us_B.Actual_Current';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen2Buses100us_B.MovingAverage_o';
    
xcp.signals(46).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError';
    
xcp.signals(47).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl';
    
xcp.signals(48).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode';
    
xcp.signals(49).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable';
    
xcp.signals(50).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent';
    
xcp.signals(51).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError';
    
xcp.signals(52).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl';
    
xcp.signals(53).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode';
    
xcp.signals(54).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
    
xcp.signals(55).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable';
    
xcp.signals(56).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent';
    
xcp.signals(57).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError';
    
xcp.signals(58).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl';
    
xcp.signals(59).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode';
    
xcp.signals(60).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable';
    
xcp.signals(61).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent';
    
xcp.signals(62).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
    
xcp.signals(63).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
    
xcp.signals(64).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
    
xcp.signals(65).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent';
    
xcp.signals(66).symbol =  'SpeedgoatCANOpen2Buses100us_B.HB';
    
xcp.signals(67).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
    
xcp.signals(68).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
    
xcp.signals(69).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
    
xcp.signals(70).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_e';
    
xcp.signals(71).symbol =  'SpeedgoatCANOpen2Buses100us_B.Enable';
    
xcp.signals(72).symbol =  'SpeedgoatCANOpen2Buses100us_B.button';
    
xcp.signals(73).symbol =  'SpeedgoatCANOpen2Buses100us_B.Byte0';
    
xcp.signals(74).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle3';
    
xcp.signals(75).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
    
xcp.signals(76).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
    
xcp.signals(77).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3';
    
xcp.signals(78).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n';
    
xcp.signals(79).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n';
    
xcp.signals(80).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n';
    
xcp.signals(81).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion';
    
xcp.signals(82).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrCurrentRef';
    
xcp.signals(83).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1';
    
xcp.signals(84).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain2_a';
    
xcp.signals(85).symbol =  'SpeedgoatCANOpen2Buses100us_B.br_percent';
    
xcp.signals(86).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation';
    
xcp.signals(87).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation1';
    
xcp.signals(88).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum';
    
xcp.signals(89).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedRef';
    
xcp.signals(90).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_g';
    
xcp.signals(91).symbol =  'SpeedgoatCANOpen2Buses100us_B.DirectionAvg';
    
xcp.signals(92).symbol =  'SpeedgoatCANOpen2Buses100us_B.DirectionRef';
    
xcp.signals(93).symbol =  'SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad';
    
xcp.signals(94).symbol =  'SpeedgoatCANOpen2Buses100us_B.DirectionReq';
    
xcp.signals(95).symbol =  'SpeedgoatCANOpen2Buses100us_B.Direction';
    
xcp.signals(96).symbol =  'SpeedgoatCANOpen2Buses100us_B.Memory1';
    
xcp.signals(97).symbol =  'SpeedgoatCANOpen2Buses100us_B.Pos_out';
    
xcp.signals(98).symbol =  'SpeedgoatCANOpen2Buses100us_B.MovingAverage';
    
xcp.signals(99).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch';
    
xcp.signals(100).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch1';
    
xcp.signals(101).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch2';
    
xcp.signals(102).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch3';
    
xcp.signals(103).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch4';
    
xcp.signals(104).symbol =  'SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef';
    
xcp.signals(105).symbol =  'SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef';
    
xcp.signals(106).symbol =  'SpeedgoatCANOpen2Buses100us_B.eP';
    
xcp.signals(107).symbol =  'SpeedgoatCANOpen2Buses100us_B.eI';
    
xcp.signals(108).symbol =  'SpeedgoatCANOpen2Buses100us_B.eD';
    
xcp.signals(109).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngle';
    
xcp.signals(110).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle';
    
xcp.signals(111).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1';
    
xcp.signals(112).symbol =  'SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1';
    
xcp.signals(113).symbol =  'SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2';
    
xcp.signals(114).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftVolt';
    
xcp.signals(115).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftm';
    
xcp.signals(116).symbol =  'SpeedgoatCANOpen2Buses100us_B.PosRefm';
    
xcp.signals(117).symbol =  'SpeedgoatCANOpen2Buses100us_B.n';
    
xcp.signals(118).symbol =  'SpeedgoatCANOpen2Buses100us_B.Memory';
    
xcp.signals(119).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg';
    
xcp.signals(120).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt';
    
xcp.signals(121).symbol =  'SpeedgoatCANOpen2Buses100us_B.err';
    
xcp.signals(122).symbol =  'SpeedgoatCANOpen2Buses100us_B.ManualSwitch';
    
xcp.signals(123).symbol =  'SpeedgoatCANOpen2Buses100us_B.ManualSwitch1';
    
xcp.signals(124).symbol =  'SpeedgoatCANOpen2Buses100us_B.TractionRef';
    
xcp.signals(125).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1_e';
    
xcp.signals(126).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI';
    
xcp.signals(127).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError';
    
xcp.signals(128).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode';
    
xcp.signals(129).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl';
    
xcp.signals(130).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable';
    
xcp.signals(131).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus';
    
xcp.signals(132).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_g';
    
xcp.signals(133).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_g';
    
xcp.signals(134).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_mj';
    
xcp.signals(135).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k';
    
xcp.signals(136).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_p';
    
xcp.signals(137).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError';
    
xcp.signals(138).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode';
    
xcp.signals(139).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
    
xcp.signals(140).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable';
    
xcp.signals(141).symbol =  'SpeedgoatCANOpen2Buses100us_B.InitStatus';
    
xcp.signals(142).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant';
    
xcp.signals(143).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_e';
    
xcp.signals(144).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_m';
    
xcp.signals(145).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m';
    
xcp.signals(146).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_i';
    
xcp.signals(147).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_bp';
    
xcp.signals(148).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError';
    
xcp.signals(149).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode';
    
xcp.signals(150).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl';
    
xcp.signals(151).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable';
    
xcp.signals(152).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus';
    
xcp.signals(153).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_e';
    
xcp.signals(154).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_d';
    
xcp.signals(155).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_jv';
    
xcp.signals(156).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0';
    
xcp.signals(157).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir';
    
xcp.signals(158).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError';
    
xcp.signals(159).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode';
    
xcp.signals(160).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl';
    
xcp.signals(161).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable';
    
xcp.signals(162).symbol =  'SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus';
    
xcp.signals(163).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_m';
    
xcp.signals(164).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_h';
    
xcp.signals(165).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_j';
    
xcp.signals(166).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b';
    
xcp.signals(167).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_a';
    
xcp.signals(168).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
    
xcp.signals(169).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
    
xcp.signals(170).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
    
xcp.signals(171).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
    
xcp.signals(172).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
    
xcp.signals(173).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6';
    
xcp.signals(174).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch_c';
    
xcp.signals(175).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_ge';
    
xcp.signals(176).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b';
    
xcp.signals(177).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e';
    
xcp.signals(178).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m';
    
xcp.signals(179).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a';
    
xcp.signals(180).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h';
    
xcp.signals(181).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h';
    
xcp.signals(182).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch_g';
    
xcp.signals(183).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_em';
    
xcp.signals(184).symbol =  'SpeedgoatCANOpen2Buses100us_B.Compare';
    
xcp.signals(185).symbol =  'SpeedgoatCANOpen2Buses100us_B.g';
    
xcp.signals(186).symbol =  'SpeedgoatCANOpen2Buses100us_B.a';
    
xcp.signals(187).symbol =  'SpeedgoatCANOpen2Buses100us_B.Product1';
    
xcp.signals(188).symbol =  'SpeedgoatCANOpen2Buses100us_B.Product4';
    
xcp.signals(189).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_b';
    
xcp.signals(190).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum1';
    
xcp.signals(191).symbol =  'SpeedgoatCANOpen2Buses100us_B.UnitDelay';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'uint8_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain_Gain';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'int32_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain_Gain';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
xcp.parameters(3).size   =  40;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';     
         
xcp.parameters(17).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';     
         
xcp.parameters(18).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';     
         
xcp.parameters(19).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';     
         
xcp.parameters(20).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';     
         
xcp.parameters(21).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';     
         
xcp.parameters(22).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';     
         
xcp.parameters(23).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'uint32_T'; 
xcp.parameters(24).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p';     
         
xcp.parameters(24).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'uint32_T'; 
xcp.parameters(25).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';     
         
xcp.parameters(25).symbol = 'SpeedgoatCANOpen2Buses100us_P.offset_Value';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.offset_Value';     
         
xcp.parameters(26).symbol = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real_T'; 
xcp.parameters(27).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';     
         
xcp.parameters(27).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real_T'; 
xcp.parameters(28).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';     
         
xcp.parameters(28).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real_T'; 
xcp.parameters(29).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';     
         
xcp.parameters(29).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real_T'; 
xcp.parameters(30).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';     
         
xcp.parameters(30).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real_T'; 
xcp.parameters(31).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';     
         
xcp.parameters(31).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real_T'; 
xcp.parameters(32).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';     
         
xcp.parameters(32).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'uint16_T'; 
xcp.parameters(33).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';     
         
xcp.parameters(33).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'uint16_T'; 
xcp.parameters(34).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';     
         
xcp.parameters(34).symbol = 'SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';
xcp.parameters(34).size   =  1;       
xcp.parameters(34).dtname = 'real_T'; 
xcp.parameters(35).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';     
         
xcp.parameters(35).symbol = 'SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
xcp.parameters(35).size   =  1;       
xcp.parameters(35).dtname = 'real32_T'; 
xcp.parameters(36).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';     
         
xcp.parameters(36).symbol = 'SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
xcp.parameters(36).size   =  1;       
xcp.parameters(36).dtname = 'real32_T'; 
xcp.parameters(37).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';     
         
xcp.parameters(37).symbol = 'SpeedgoatCANOpen2Buses100us_P.dem_Gain';
xcp.parameters(37).size   =  1;       
xcp.parameters(37).dtname = 'real32_T'; 
xcp.parameters(38).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.dem_Gain';     
         
xcp.parameters(38).symbol = 'SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
xcp.parameters(38).size   =  1;       
xcp.parameters(38).dtname = 'real_T'; 
xcp.parameters(39).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';     
         
xcp.parameters(39).symbol = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
xcp.parameters(39).size   =  1;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';     
         
xcp.parameters(40).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
xcp.parameters(40).size   =  1;       
xcp.parameters(40).dtname = 'real_T'; 
xcp.parameters(41).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';     
         
xcp.parameters(41).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';
xcp.parameters(41).size   =  1;       
xcp.parameters(41).dtname = 'real_T'; 
xcp.parameters(42).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';     
         
xcp.parameters(42).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant1_Value';
xcp.parameters(42).size   =  1;       
xcp.parameters(42).dtname = 'real_T'; 
xcp.parameters(43).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant1_Value';     
         
xcp.parameters(43).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant2_Value';
xcp.parameters(43).size   =  1;       
xcp.parameters(43).dtname = 'real_T'; 
xcp.parameters(44).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant2_Value';     
         
xcp.parameters(44).symbol = 'SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg316V5254mm_Value';
xcp.parameters(44).size   =  1;       
xcp.parameters(44).dtname = 'real_T'; 
xcp.parameters(45).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg316V5254mm_Value';     
         
xcp.parameters(45).symbol = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain';
xcp.parameters(45).size   =  1;       
xcp.parameters(45).dtname = 'real_T'; 
xcp.parameters(46).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain';     
         
xcp.parameters(46).symbol = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain';
xcp.parameters(46).size   =  1;       
xcp.parameters(46).dtname = 'real_T'; 
xcp.parameters(47).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain';     
         
xcp.parameters(47).symbol = 'SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';
xcp.parameters(47).size   =  1;       
xcp.parameters(47).dtname = 'int16_T'; 
xcp.parameters(48).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';     
         
xcp.parameters(48).symbol = 'SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
xcp.parameters(48).size   =  1;       
xcp.parameters(48).dtname = 'real_T'; 
xcp.parameters(49).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';     
         
xcp.parameters(49).symbol = 'SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
xcp.parameters(49).size   =  1;       
xcp.parameters(49).dtname = 'real_T'; 
xcp.parameters(50).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';     
         
xcp.parameters(50).symbol = 'SpeedgoatCANOpen2Buses100us_P.n_Gain';
xcp.parameters(50).size   =  1;       
xcp.parameters(50).dtname = 'real32_T'; 
xcp.parameters(51).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.n_Gain';     
         
xcp.parameters(51).symbol = 'SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';
xcp.parameters(51).size   =  1;       
xcp.parameters(51).dtname = 'real_T'; 
xcp.parameters(52).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition';     
         
xcp.parameters(52).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_d';
xcp.parameters(52).size   =  1;       
xcp.parameters(52).dtname = 'real_T'; 
xcp.parameters(53).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_d';     
         
xcp.parameters(53).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_f';
xcp.parameters(53).size   =  1;       
xcp.parameters(53).dtname = 'real_T'; 
xcp.parameters(54).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_f';     
         
xcp.parameters(54).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_d';
xcp.parameters(54).size   =  1;       
xcp.parameters(54).dtname = 'real_T'; 
xcp.parameters(55).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_d';     
         
xcp.parameters(55).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_d';
xcp.parameters(55).size   =  1;       
xcp.parameters(55).dtname = 'real_T'; 
xcp.parameters(56).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_d';     
         
xcp.parameters(56).symbol = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting';
xcp.parameters(56).size   =  1;       
xcp.parameters(56).dtname = 'uint8_T'; 
xcp.parameters(57).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting';     
         
xcp.parameters(57).symbol = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting';
xcp.parameters(57).size   =  1;       
xcp.parameters(57).dtname = 'uint8_T'; 
xcp.parameters(58).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting';     
         
xcp.parameters(58).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n';
xcp.parameters(58).size   =  1;       
xcp.parameters(58).dtname = 'real32_T'; 
xcp.parameters(59).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n';     
         
xcp.parameters(59).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
xcp.parameters(59).size   =  1;       
xcp.parameters(59).dtname = 'int16_T'; 
xcp.parameters(60).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';     
         
xcp.parameters(60).symbol = 'SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
xcp.parameters(60).size   =  1;       
xcp.parameters(60).dtname = 'int32_T'; 
xcp.parameters(61).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';     
         
xcp.parameters(61).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
xcp.parameters(61).size   =  1;       
xcp.parameters(61).dtname = 'real32_T'; 
xcp.parameters(62).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';     
         
xcp.parameters(62).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
xcp.parameters(62).size   =  1;       
xcp.parameters(62).dtname = 'real32_T'; 
xcp.parameters(63).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';     
         
xcp.parameters(63).symbol = 'SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
xcp.parameters(63).size   =  1;       
xcp.parameters(63).dtname = 'real32_T'; 
xcp.parameters(64).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';     
         
xcp.parameters(64).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
xcp.parameters(64).size   =  1;       
xcp.parameters(64).dtname = 'real32_T'; 
xcp.parameters(65).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';     
         
xcp.parameters(65).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
xcp.parameters(65).size   =  1;       
xcp.parameters(65).dtname = 'real32_T'; 
xcp.parameters(66).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';     
         
xcp.parameters(66).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
xcp.parameters(66).size   =  6;       
xcp.parameters(66).dtname = 'real_T'; 
xcp.parameters(67).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';     
         
xcp.parameters(67).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
xcp.parameters(67).size   =  1;       
xcp.parameters(67).dtname = 'uint8_T'; 
xcp.parameters(68).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';     
         
xcp.parameters(68).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';
xcp.parameters(68).size   =  1;       
xcp.parameters(68).dtname = 'uint8_T'; 
xcp.parameters(69).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp';     
         
xcp.parameters(69).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
xcp.parameters(69).size   =  7;       
xcp.parameters(69).dtname = 'real_T'; 
xcp.parameters(70).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';     
         
xcp.parameters(70).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n';
xcp.parameters(70).size   =  6;       
xcp.parameters(70).dtname = 'real_T'; 
xcp.parameters(71).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0]';     
         
xcp.parameters(71).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
xcp.parameters(71).size   =  1;       
xcp.parameters(71).dtname = 'uint8_T'; 
xcp.parameters(72).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';     
         
xcp.parameters(72).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
xcp.parameters(72).size   =  1;       
xcp.parameters(72).dtname = 'uint8_T'; 
xcp.parameters(73).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';     
         
xcp.parameters(73).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h';
xcp.parameters(73).size   =  7;       
xcp.parameters(73).dtname = 'real_T'; 
xcp.parameters(74).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0]';     
         
xcp.parameters(74).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';
xcp.parameters(74).size   =  1;       
xcp.parameters(74).dtname = 'real_T'; 
xcp.parameters(75).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_i';     
         
xcp.parameters(75).symbol = 'SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';
xcp.parameters(75).size   =  1;       
xcp.parameters(75).dtname = 'real_T'; 
xcp.parameters(76).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';     

function n = getNumParameters
n = 75;

function n = getNumSignals
n = 191;

function n = getNumEvents
n = 2;

function n = getNumModels
n = 1;

