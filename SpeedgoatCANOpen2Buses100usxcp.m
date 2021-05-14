function xcp = SpeedgoatCANOpen2Buses100usxcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'SpeedgoatCANOpen2Buses100us';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.0001;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN1';
    
xcp.signals(2).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN2';
    
xcp.signals(3).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN3';
    
xcp.signals(4).symbol =  'SpeedgoatCANOpen2Buses100us_B.Channel_AN4';
    
xcp.signals(5).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
    
xcp.signals(6).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
    
xcp.signals(7).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
    
xcp.signals(8).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
    
xcp.signals(9).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
    
xcp.signals(10).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
    
xcp.signals(11).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
    
xcp.signals(12).symbol =  'SpeedgoatCANOpen2Buses100us_B.ClearError';
    
xcp.signals(13).symbol =  'SpeedgoatCANOpen2Buses100us_B.DeviceMode';
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen2Buses100us_B.PowerEnable';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedRequest';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen2Buses100us_B.button';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion10';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion11';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen2Buses100us_B.button_h';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion13';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen2Buses100us_B.Desired_Current';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN1';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN2';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN3';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen2Buses100us_B.AN4';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen2Buses100us_B.Actual_Current';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain3';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen2Buses100us_B.MovingAverage';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen2Buses100us_B.DataTypeConversion18';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain1_k';
    
xcp.signals(46).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain2_i';
    
xcp.signals(47).symbol =  'SpeedgoatCANOpen2Buses100us_B.Gain3_o';
    
xcp.signals(48).symbol =  'SpeedgoatCANOpen2Buses100us_B.SpeedLimit';
    
xcp.signals(49).symbol =  'SpeedgoatCANOpen2Buses100us_B.error';
    
xcp.signals(50).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum2';
    
xcp.signals(51).symbol =  'SpeedgoatCANOpen2Buses100us_B.Sum3';
    
xcp.signals(52).symbol =  'SpeedgoatCANOpen2Buses100us_B.UnitDelay';
    
xcp.signals(53).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
    
xcp.signals(54).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
    
xcp.signals(55).symbol =  'SpeedgoatCANOpen2Buses100us_B.CCaller_o3';
    
xcp.signals(56).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
    
xcp.signals(57).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
    
xcp.signals(58).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
    
xcp.signals(59).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
    
xcp.signals(60).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
    
xcp.signals(61).symbol =  'SpeedgoatCANOpen2Buses100us_B.CANRead_o6';
    
xcp.signals(62).symbol =  'SpeedgoatCANOpen2Buses100us_B.Switch';
    
xcp.signals(63).symbol =  'SpeedgoatCANOpen2Buses100us_B.Constant';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_Kp';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real32_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_Kp';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_Ki';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real32_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_Ki';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_max_speed';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real32_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_max_speed';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen2Buses100us_P.Subsystem_min_speed';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real32_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Subsystem_min_speed';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real32_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain1_Gain';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'uint32_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain2_Gain';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'real32_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'uint32_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain4_Gain';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P1';
xcp.parameters(10).size   =  40;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0]';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P2';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANSetup_P3';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real32_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real32_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen2Buses100us_P.Gain3_Gain_d';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real32_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Gain3_Gain_d';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'real32_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.UnitDelay_InitialCondition';     
         
xcp.parameters(17).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANRead_P1';
xcp.parameters(17).size   =  6;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0]';     
         
xcp.parameters(18).symbol = 'SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'uint8_T'; 
xcp.parameters(19).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Switch_Threshold';     
         
xcp.parameters(19).symbol = 'SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'uint8_T'; 
xcp.parameters(20).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.Constant_Value_k';     
         
xcp.parameters(20).symbol = 'SpeedgoatCANOpen2Buses100us_P.CANWrite_P1';
xcp.parameters(20).size   =  7;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0]';     

function n = getNumParameters
n = 20;

function n = getNumSignals
n = 63;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

