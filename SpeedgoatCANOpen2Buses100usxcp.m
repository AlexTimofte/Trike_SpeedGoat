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
         
xcp.events(3).id         = 2;
xcp.events(3).sampletime = 0.015;
xcp.events(3).offset     = 0.0;
    
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
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen2Buses100us_B.xAngle';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen2Buses100us_B.yAngle';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen2Buses100us_B.Enable_l';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen2Buses100us_B.xS';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen2Buses100us_B.xH';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen2Buses100us_B.xL';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen2Buses100us_B.yS';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen2Buses100us_B.yH';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen2Buses100us_B.yL';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_01';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_02';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_03';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN_04';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave1';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave2';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen2Buses100us_B.SineWave3';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl';
    
xcp.signals(46).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode';
    
xcp.signals(47).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable';
    
xcp.signals(48).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent';
    
xcp.signals(49).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError';
    
xcp.signals(50).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl';
    
xcp.signals(51).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode';
    
xcp.signals(52).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
    
xcp.signals(53).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable';
    
xcp.signals(54).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent';
    
xcp.signals(55).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError';
    
xcp.signals(56).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl';
    
xcp.signals(57).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode';
    
xcp.signals(58).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable';
    
xcp.signals(59).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent';
    
xcp.signals(60).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
    
xcp.signals(61).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
    
xcp.signals(62).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
    
xcp.signals(63).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent';
    
xcp.signals(64).symbol =  'SpeedgoatCANOpen2Buses100us_B.HB';
    
xcp.signals(65).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
    
xcp.signals(66).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
    
xcp.signals(67).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
    
xcp.signals(68).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_e';
    
xcp.signals(69).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord';
    
xcp.signals(70).symbol =  'SpeedgoatCANOpen2Buses100us_B.Button';
    
xcp.signals(71).symbol =  'SpeedgoatCANOpen2Buses100us_B.Enable';
    
xcp.signals(72).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p';
    
xcp.signals(73).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
    
xcp.signals(74).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
    
xcp.signals(75).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3';
    
xcp.signals(76).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n';
    
xcp.signals(77).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n';
    
xcp.signals(78).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n';
    
xcp.signals(79).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o';
    
xcp.signals(80).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4';
    
xcp.signals(81).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInitmA';
    
xcp.signals(82).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum4_e';
    
xcp.signals(83).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedReq';
    
xcp.signals(84).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle';
    
xcp.signals(85).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1';
    
xcp.signals(86).symbol =  'SpeedgoatCANOpen2Buses100us_B.DirectionReq';
    
xcp.signals(87).symbol =  'SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad';
    
xcp.signals(88).symbol =  'SpeedgoatCANOpen2Buses100us_B.dem';
    
xcp.signals(89).symbol =  'SpeedgoatCANOpen2Buses100us_B.DirectionFb';
    
xcp.signals(90).symbol =  'SpeedgoatCANOpen2Buses100us_B.Memory1';
    
xcp.signals(91).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_p';
    
xcp.signals(92).symbol =  'SpeedgoatCANOpen2Buses100us_B.MovingAverage';
    
xcp.signals(93).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch';
    
xcp.signals(94).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch1';
    
xcp.signals(95).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch2';
    
xcp.signals(96).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch3';
    
xcp.signals(97).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch4';
    
xcp.signals(98).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngle';
    
xcp.signals(99).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle_p';
    
xcp.signals(100).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1_a';
    
xcp.signals(101).symbol =  'SpeedgoatCANOpen2Buses100us_B.LeftTiltMotor_SpeedReqrpm';
    
xcp.signals(102).symbol =  'SpeedgoatCANOpen2Buses100us_B.PosReqm';
    
xcp.signals(103).symbol =  'SpeedgoatCANOpen2Buses100us_B.n';
    
xcp.signals(104).symbol =  'SpeedgoatCANOpen2Buses100us_B.Product2_a';
    
xcp.signals(105).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation_a';
    
xcp.signals(106).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngle_sinreqdeg';
    
xcp.signals(107).symbol =  'SpeedgoatCANOpen2Buses100us_B.Fb_Angledeg';
    
xcp.signals(108).symbol =  'SpeedgoatCANOpen2Buses100us_B.ManualSwitch3';
    
xcp.signals(109).symbol =  'SpeedgoatCANOpen2Buses100us_B.ManualSwitch4';
    
xcp.signals(110).symbol =  'SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k';
    
xcp.signals(111).symbol =  'SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg_p';
    
xcp.signals(112).symbol =  'SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold2';
    
xcp.signals(113).symbol =  'SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold3';
    
xcp.signals(114).symbol =  'SpeedgoatCANOpen2Buses100us_B.Fb_Angle_Filtdeg';
    
xcp.signals(115).symbol =  'SpeedgoatCANOpen2Buses100us_B.TractionReq';
    
xcp.signals(116).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle1_e';
    
xcp.signals(117).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle2';
    
xcp.signals(118).symbol =  'SpeedgoatCANOpen2Buses100us_B.CastToSingle3';
    
xcp.signals(119).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1_e';
    
xcp.signals(120).symbol =  'SpeedgoatCANOpen2Buses100us_B.Speed_SI';
    
xcp.signals(121).symbol =  'SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI';
    
xcp.signals(122).symbol =  'SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh';
    
xcp.signals(123).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_k';
    
xcp.signals(124).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_b';
    
xcp.signals(125).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n';
    
xcp.signals(126).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_au';
    
xcp.signals(127).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit';
    
xcp.signals(128).symbol =  'SpeedgoatCANOpen2Buses100us_B.InitStatus_a';
    
xcp.signals(129).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_g';
    
xcp.signals(130).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_g';
    
xcp.signals(131).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_m';
    
xcp.signals(132).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k';
    
xcp.signals(133).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_p';
    
xcp.signals(134).symbol =  'SpeedgoatCANOpen2Buses100us_B.CurrentInit';
    
xcp.signals(135).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_b';
    
xcp.signals(136).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_n';
    
xcp.signals(137).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_o';
    
xcp.signals(138).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b';
    
xcp.signals(139).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_a';
    
xcp.signals(140).symbol =  'SpeedgoatCANOpen2Buses100us_B.InitStatus_f';
    
xcp.signals(141).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant';
    
xcp.signals(142).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_e';
    
xcp.signals(143).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_mc';
    
xcp.signals(144).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu';
    
xcp.signals(145).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4';
    
xcp.signals(146).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_h';
    
xcp.signals(147).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_f';
    
xcp.signals(148).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m';
    
xcp.signals(149).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_m';
    
xcp.signals(150).symbol =  'SpeedgoatCANOpen2Buses100us_B.InitStatus_k';
    
xcp.signals(151).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_m';
    
xcp.signals(152).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_h';
    
xcp.signals(153).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_j';
    
xcp.signals(154).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj';
    
xcp.signals(155).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar';
    
xcp.signals(156).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError';
    
xcp.signals(157).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode';
    
xcp.signals(158).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
    
xcp.signals(159).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable';
    
xcp.signals(160).symbol =  'SpeedgoatCANOpen2Buses100us_B.InitStatus';
    
xcp.signals(161).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_e';
    
xcp.signals(162).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode_d';
    
xcp.signals(163).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError_jv';
    
xcp.signals(164).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0';
    
xcp.signals(165).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable_i';
    
xcp.signals(166).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
    
xcp.signals(167).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
    
xcp.signals(168).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
    
xcp.signals(169).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
    
xcp.signals(170).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
    
xcp.signals(171).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6';
    
xcp.signals(172).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch_c';
    
xcp.signals(173).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_ge';
    
xcp.signals(174).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b';
    
xcp.signals(175).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e';
    
xcp.signals(176).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m';
    
xcp.signals(177).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a';
    
xcp.signals(178).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h';
    
xcp.signals(179).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h';
    
xcp.signals(180).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch_g';
    
xcp.signals(181).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant_em';
    
xcp.signals(182).symbol =  'SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq';
    
xcp.signals(183).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion';
    
xcp.signals(184).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1';
    
xcp.signals(185).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq';
    
xcp.signals(186).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1';
    
xcp.signals(187).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain2';
    
xcp.signals(188).symbol =  'SpeedgoatCANOpen2Buses100us_B.br_percent2';
    
xcp.signals(189).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation';
    
xcp.signals(190).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation1';
    
xcp.signals(191).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation2';
    
xcp.signals(192).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum';
    
xcp.signals(193).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum1';
    
xcp.signals(194).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum2';
    
xcp.signals(195).symbol =  'SpeedgoatCANOpen2Buses100us_B.Delay_o';
    
xcp.signals(196).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftVolt';
    
xcp.signals(197).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftm';
    
xcp.signals(198).symbol =  'SpeedgoatCANOpen2Buses100us_B.Memory1_l';
    
xcp.signals(199).symbol =  'SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt';
    
xcp.signals(200).symbol =  'SpeedgoatCANOpen2Buses100us_B.DiscreteFilter';
    
xcp.signals(201).symbol =  'SpeedgoatCANOpen2Buses100us_B.ud';
    
xcp.signals(202).symbol =  'SpeedgoatCANOpen2Buses100us_B.yf';
    
xcp.signals(203).symbol =  'SpeedgoatCANOpen2Buses100us_B.Integral';
    
xcp.signals(204).symbol =  'SpeedgoatCANOpen2Buses100us_B.AntiWindup';
    
xcp.signals(205).symbol =  'SpeedgoatCANOpen2Buses100us_B.kd';
    
xcp.signals(206).symbol =  'SpeedgoatCANOpen2Buses100us_B.IntegralGain';
    
xcp.signals(207).symbol =  'SpeedgoatCANOpen2Buses100us_B.ProportionalGain';
    
xcp.signals(208).symbol =  'SpeedgoatCANOpen2Buses100us_B.c1';
    
xcp.signals(209).symbol =  'SpeedgoatCANOpen2Buses100us_B.Product1';
    
xcp.signals(210).symbol =  'SpeedgoatCANOpen2Buses100us_B.Product2';
    
xcp.signals(211).symbol =  'SpeedgoatCANOpen2Buses100us_B.Saturation_c';
    
xcp.signals(212).symbol =  'SpeedgoatCANOpen2Buses100us_B.Derivative_sat';
    
xcp.signals(213).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_c';
    
xcp.signals(214).symbol =  'SpeedgoatCANOpen2Buses100us_B.e';
    
xcp.signals(215).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum2_d';
    
xcp.signals(216).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum4';
    
xcp.signals(217).symbol =  'SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold';
    
xcp.signals(218).symbol =  'SpeedgoatCANOpen2Buses100us_B.Delay';
    
xcp.signals(219).symbol =  'SpeedgoatCANOpen2Buses100us_B.kd_ma';
    
xcp.signals(220).symbol =  'SpeedgoatCANOpen2Buses100us_B.Proportional';
    
xcp.signals(221).symbol =  'SpeedgoatCANOpen2Buses100us_B.Clock';
    
xcp.signals(222).symbol =  'SpeedgoatCANOpen2Buses100us_B.Output';
    
xcp.signals(223).symbol =  'SpeedgoatCANOpen2Buses100us_B.LookUpTable1';
    
xcp.signals(224).symbol =  'SpeedgoatCANOpen2Buses100us_B.MathFunction';
    
xcp.signals(225).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum_f';
    
xcp.signals(226).symbol =  'SpeedgoatCANOpen2Buses100us_B.Compare';
    
xcp.signals(227).symbol =  'SpeedgoatCANOpen2Buses100us_B.Diff';
    
xcp.signals(228).symbol =  'SpeedgoatCANOpen2Buses100us_B.TSamp';
    
xcp.signals(229).symbol =  'SpeedgoatCANOpen2Buses100us_B.Uk1';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'uint8_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_e';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain_Gain';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'int32_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain_Gain';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_j';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'int32_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_j';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_p';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'uint8_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_p';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
xcp.parameters(5).size   =  40;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Amp';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Bias';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Freq';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave_Phase';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp';     
         
xcp.parameters(17).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias';     
         
xcp.parameters(18).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq';     
         
xcp.parameters(19).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase';     
         
xcp.parameters(20).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp';     
         
xcp.parameters(21).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias';     
         
xcp.parameters(22).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq';     
         
xcp.parameters(23).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase';     
         
xcp.parameters(24).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain5_Gain';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'int16_T'; 
xcp.parameters(25).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain5_Gain';     
         
xcp.parameters(25).symbol = 'SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value';     
         
xcp.parameters(26).symbol = 'SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real32_T'; 
xcp.parameters(27).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain';     
         
xcp.parameters(27).symbol = 'SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real32_T'; 
xcp.parameters(28).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain';     
         
xcp.parameters(28).symbol = 'SpeedgoatCANOpen2Buses100us_P.dem_Gain';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real32_T'; 
xcp.parameters(29).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.dem_Gain';     
         
xcp.parameters(29).symbol = 'SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real_T'; 
xcp.parameters(30).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain';     
         
xcp.parameters(30).symbol = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real_T'; 
xcp.parameters(31).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition';     
         
xcp.parameters(31).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real_T'; 
xcp.parameters(32).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';     
         
xcp.parameters(32).symbol = 'SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kp';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'real_T'; 
xcp.parameters(33).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kp';     
         
xcp.parameters(33).symbol = 'SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Ki';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'real_T'; 
xcp.parameters(34).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Ki';     
         
xcp.parameters(34).symbol = 'SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kd';
xcp.parameters(34).size   =  1;       
xcp.parameters(34).dtname = 'real_T'; 
xcp.parameters(35).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kd';     
         
xcp.parameters(35).symbol = 'SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim';
xcp.parameters(35).size   =  1;       
xcp.parameters(35).dtname = 'real_T'; 
xcp.parameters(36).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim';     
         
xcp.parameters(36).symbol = 'SpeedgoatCANOpen2Buses100us_P.RepeatingSequence1_rep_seq_y';
xcp.parameters(36).size   =  8;       
xcp.parameters(36).dtname = 'real_T'; 
xcp.parameters(37).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.RepeatingSequence1_rep_seq_y[0]';     
         
xcp.parameters(37).symbol = 'SpeedgoatCANOpen2Buses100us_P.Offset_Value';
xcp.parameters(37).size   =  1;       
xcp.parameters(37).dtname = 'real_T'; 
xcp.parameters(38).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Offset_Value';     
         
xcp.parameters(38).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l';
xcp.parameters(38).size   =  1;       
xcp.parameters(38).dtname = 'int32_T'; 
xcp.parameters(39).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l';     
         
xcp.parameters(39).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_k';
xcp.parameters(39).size   =  1;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_k';     
         
xcp.parameters(40).symbol = 'SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';
xcp.parameters(40).size   =  1;       
xcp.parameters(40).dtname = 'real_T'; 
xcp.parameters(41).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.degree2m_Gain';     
         
xcp.parameters(41).symbol = 'SpeedgoatCANOpen2Buses100us_P.n_Gain';
xcp.parameters(41).size   =  1;       
xcp.parameters(41).dtname = 'real32_T'; 
xcp.parameters(42).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.n_Gain';     
         
xcp.parameters(42).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat_i';
xcp.parameters(42).size   =  1;       
xcp.parameters(42).dtname = 'real_T'; 
xcp.parameters(43).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat_i';     
         
xcp.parameters(43).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat_f';
xcp.parameters(43).size   =  1;       
xcp.parameters(43).dtname = 'real_T'; 
xcp.parameters(44).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat_f';     
         
xcp.parameters(44).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n';
xcp.parameters(44).size   =  1;       
xcp.parameters(44).dtname = 'real_T'; 
xcp.parameters(45).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n';     
         
xcp.parameters(45).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n';
xcp.parameters(45).size   =  1;       
xcp.parameters(45).dtname = 'real_T'; 
xcp.parameters(46).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n';     
         
xcp.parameters(46).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d';
xcp.parameters(46).size   =  1;       
xcp.parameters(46).dtname = 'real_T'; 
xcp.parameters(47).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d';     
         
xcp.parameters(47).symbol = 'SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m';
xcp.parameters(47).size   =  1;       
xcp.parameters(47).dtname = 'real_T'; 
xcp.parameters(48).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m';     
         
xcp.parameters(48).symbol = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting';
xcp.parameters(48).size   =  1;       
xcp.parameters(48).dtname = 'uint8_T'; 
xcp.parameters(49).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting';     
         
xcp.parameters(49).symbol = 'SpeedgoatCANOpen2Buses100us_P.ManualSwitch4_CurrentSetting';
xcp.parameters(49).size   =  1;       
xcp.parameters(49).dtname = 'uint8_T'; 
xcp.parameters(50).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.ManualSwitch4_CurrentSetting';     
         
xcp.parameters(50).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
xcp.parameters(50).size   =  1;       
xcp.parameters(50).dtname = 'real_T'; 
xcp.parameters(51).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';     
         
xcp.parameters(51).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';
xcp.parameters(51).size   =  1;       
xcp.parameters(51).dtname = 'real_T'; 
xcp.parameters(52).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k';     
         
xcp.parameters(52).symbol = 'SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';
xcp.parameters(52).size   =  1;       
xcp.parameters(52).dtname = 'real_T'; 
xcp.parameters(53).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain';     
         
xcp.parameters(53).symbol = 'SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain';
xcp.parameters(53).size   =  1;       
xcp.parameters(53).dtname = 'real_T'; 
xcp.parameters(54).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain';     
         
xcp.parameters(54).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';
xcp.parameters(54).size   =  1;       
xcp.parameters(54).dtname = 'real32_T'; 
xcp.parameters(55).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_h';     
         
xcp.parameters(55).symbol = 'SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';
xcp.parameters(55).size   =  1;       
xcp.parameters(55).dtname = 'real32_T'; 
xcp.parameters(56).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const';     
         
xcp.parameters(56).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';
xcp.parameters(56).size   =  1;       
xcp.parameters(56).dtname = 'real32_T'; 
xcp.parameters(57).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_l';     
         
xcp.parameters(57).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';
xcp.parameters(57).size   =  1;       
xcp.parameters(57).dtname = 'real32_T'; 
xcp.parameters(58).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_j';     
         
xcp.parameters(58).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';
xcp.parameters(58).size   =  1;       
xcp.parameters(58).dtname = 'real32_T'; 
xcp.parameters(59).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_n';     
         
xcp.parameters(59).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
xcp.parameters(59).size   =  6;       
xcp.parameters(59).dtname = 'real_T'; 
xcp.parameters(60).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';     
         
xcp.parameters(60).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
xcp.parameters(60).size   =  1;       
xcp.parameters(60).dtname = 'uint8_T'; 
xcp.parameters(61).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';     
         
xcp.parameters(61).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
xcp.parameters(61).size   =  1;       
xcp.parameters(61).dtname = 'uint8_T'; 
xcp.parameters(62).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';     
         
xcp.parameters(62).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
xcp.parameters(62).size   =  7;       
xcp.parameters(62).dtname = 'real_T'; 
xcp.parameters(63).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';     
         
xcp.parameters(63).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n';
xcp.parameters(63).size   =  6;       
xcp.parameters(63).dtname = 'real_T'; 
xcp.parameters(64).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0]';     
         
xcp.parameters(64).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';
xcp.parameters(64).size   =  1;       
xcp.parameters(64).dtname = 'uint8_T'; 
xcp.parameters(65).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l';     
         
xcp.parameters(65).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';
xcp.parameters(65).size   =  1;       
xcp.parameters(65).dtname = 'uint8_T'; 
xcp.parameters(66).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv';     
         
xcp.parameters(66).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h';
xcp.parameters(66).size   =  7;       
xcp.parameters(66).dtname = 'real_T'; 
xcp.parameters(67).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0]';     
         
xcp.parameters(67).symbol = 'SpeedgoatCANOpen2Buses100us_P.offset_Value';
xcp.parameters(67).size   =  1;       
xcp.parameters(67).dtname = 'real_T'; 
xcp.parameters(68).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.offset_Value';     
         
xcp.parameters(68).symbol = 'SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';
xcp.parameters(68).size   =  1;       
xcp.parameters(68).dtname = 'real_T'; 
xcp.parameters(69).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain';     
         
xcp.parameters(69).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c';
xcp.parameters(69).size   =  1;       
xcp.parameters(69).dtname = 'real_T'; 
xcp.parameters(70).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c';     
         
xcp.parameters(70).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
xcp.parameters(70).size   =  1;       
xcp.parameters(70).dtname = 'real_T'; 
xcp.parameters(71).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';     
         
xcp.parameters(71).symbol = 'SpeedgoatCANOpen2Buses100us_P.GetInPercent_Gain';
xcp.parameters(71).size   =  1;       
xcp.parameters(71).dtname = 'real_T'; 
xcp.parameters(72).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.GetInPercent_Gain';     
         
xcp.parameters(72).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';
xcp.parameters(72).size   =  1;       
xcp.parameters(72).dtname = 'real_T'; 
xcp.parameters(73).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat';     
         
xcp.parameters(73).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';
xcp.parameters(73).size   =  1;       
xcp.parameters(73).dtname = 'real_T'; 
xcp.parameters(74).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat';     
         
xcp.parameters(74).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';
xcp.parameters(74).size   =  1;       
xcp.parameters(74).dtname = 'uint16_T'; 
xcp.parameters(75).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat';     
         
xcp.parameters(75).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';
xcp.parameters(75).size   =  1;       
xcp.parameters(75).dtname = 'uint16_T'; 
xcp.parameters(76).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat';     
         
xcp.parameters(76).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat';
xcp.parameters(76).size   =  1;       
xcp.parameters(76).dtname = 'real_T'; 
xcp.parameters(77).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat';     
         
xcp.parameters(77).symbol = 'SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat';
xcp.parameters(77).size   =  1;       
xcp.parameters(77).dtname = 'real_T'; 
xcp.parameters(78).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat';     
         
xcp.parameters(78).symbol = 'SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength';
xcp.parameters(78).size   =  1;       
xcp.parameters(78).dtname = 'uint32_T'; 
xcp.parameters(79).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength';     
         
xcp.parameters(79).symbol = 'SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition_m';
xcp.parameters(79).size   =  1;       
xcp.parameters(79).dtname = 'real32_T'; 
xcp.parameters(80).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition_m';     
         
xcp.parameters(80).symbol = 'SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg_Value';
xcp.parameters(80).size   =  1;       
xcp.parameters(80).dtname = 'real_T'; 
xcp.parameters(81).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg_Value';     
         
xcp.parameters(81).symbol = 'SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';
xcp.parameters(81).size   =  1;       
xcp.parameters(81).dtname = 'int16_T'; 
xcp.parameters(82).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain';     
         
xcp.parameters(82).symbol = 'SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';
xcp.parameters(82).size   =  1;       
xcp.parameters(82).dtname = 'real_T'; 
xcp.parameters(83).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain';     
         
xcp.parameters(83).symbol = 'SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k';
xcp.parameters(83).size   =  1;       
xcp.parameters(83).dtname = 'real_T'; 
xcp.parameters(84).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k';     
         
xcp.parameters(84).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef';
xcp.parameters(84).size   =  3;       
xcp.parameters(84).dtname = 'real_T'; 
xcp.parameters(85).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0]';     
         
xcp.parameters(85).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef';
xcp.parameters(85).size   =  3;       
xcp.parameters(85).dtname = 'real_T'; 
xcp.parameters(86).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0]';     
         
xcp.parameters(86).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates';
xcp.parameters(86).size   =  1;       
xcp.parameters(86).dtname = 'real_T'; 
xcp.parameters(87).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates';     
         
xcp.parameters(87).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteDerivative_ICPrevScaled';
xcp.parameters(87).size   =  1;       
xcp.parameters(87).dtname = 'real_T'; 
xcp.parameters(88).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteDerivative_ICPrevScaled';     
         
xcp.parameters(88).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
xcp.parameters(88).size   =  1;       
xcp.parameters(88).dtname = 'real_T'; 
xcp.parameters(89).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';     
         
xcp.parameters(89).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
xcp.parameters(89).size   =  1;       
xcp.parameters(89).dtname = 'real_T'; 
xcp.parameters(90).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';     
         
xcp.parameters(90).symbol = 'SpeedgoatCANOpen2Buses100us_P.c1_Gain';
xcp.parameters(90).size   =  1;       
xcp.parameters(90).dtname = 'real_T'; 
xcp.parameters(91).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.c1_Gain';     
         
xcp.parameters(91).symbol = 'SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength_c';
xcp.parameters(91).size   =  1;       
xcp.parameters(91).dtname = 'uint32_T'; 
xcp.parameters(92).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength_c';     
         
xcp.parameters(92).symbol = 'SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition';
xcp.parameters(92).size   =  1;       
xcp.parameters(92).dtname = 'real_T'; 
xcp.parameters(93).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition';     
         
xcp.parameters(93).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';
xcp.parameters(93).size   =  1;       
xcp.parameters(93).dtname = 'real_T'; 
xcp.parameters(94).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_c';     
         
xcp.parameters(94).symbol = 'SpeedgoatCANOpen2Buses100us_P.LookUpTable1_bp01Data';
xcp.parameters(94).size   =  8;       
xcp.parameters(94).dtname = 'real_T'; 
xcp.parameters(95).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.LookUpTable1_bp01Data[0]';     
         
xcp.parameters(95).symbol = 'SpeedgoatCANOpen2Buses100us_P.TSamp_WtEt';
xcp.parameters(95).size   =  1;       
xcp.parameters(95).dtname = 'real_T'; 
xcp.parameters(96).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.TSamp_WtEt';     

function n = getNumParameters
n = 95;

function n = getNumSignals
n = 229;

function n = getNumEvents
n = 3;

function n = getNumModels
n = 1;

