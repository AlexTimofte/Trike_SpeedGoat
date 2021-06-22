function pt=SpeedgoatCANOpen03pt
pt = [];

  
pt(1).blockname = 'CANOpen Slave  Protocol Stack/CAN Setup ';
pt(1).paramname = 'P1';
pt(1).class     = 'vector';
pt(1).nrows     = 1;
pt(1).ncols     = 40;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'SpeedgoatCANOpen03_P.CANSetup_P1';
pt(1).baseaddr   = '&SpeedgoatCANOpen03_P.CANSetup_P1[0]';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'CANOpen Slave  Protocol Stack/CAN Setup ';
pt(2).paramname = 'P2';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'SpeedgoatCANOpen03_P.CANSetup_P2';
pt(2).baseaddr   = '&SpeedgoatCANOpen03_P.CANSetup_P2';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'CANOpen Slave  Protocol Stack/CAN Setup ';
pt(3).paramname = 'P3';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'SpeedgoatCANOpen03_P.CANSetup_P3';
pt(3).baseaddr   = '&SpeedgoatCANOpen03_P.CANSetup_P3';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Simulink Application Layer/Gain1';
pt(4).paramname = 'Gain';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_SINGLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'SpeedgoatCANOpen03_P.Gain1_Gain';
pt(4).baseaddr   = '&SpeedgoatCANOpen03_P.Gain1_Gain';
pt(4).dtname     = 'real32_T';



  
pt(5).blockname = 'Simulink Application Layer/Gain2';
pt(5).paramname = 'Gain';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_SINGLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'SpeedgoatCANOpen03_P.Gain2_Gain';
pt(5).baseaddr   = '&SpeedgoatCANOpen03_P.Gain2_Gain';
pt(5).dtname     = 'real32_T';



  
pt(6).blockname = 'Simulink Application Layer/Gain3';
pt(6).paramname = 'Gain';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_UINT16';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'SpeedgoatCANOpen03_P.Gain3_Gain';
pt(6).baseaddr   = '&SpeedgoatCANOpen03_P.Gain3_Gain';
pt(6).dtname     = 'uint16_T';



  
pt(7).blockname = 'Simulink Application Layer/Gain4';
pt(7).paramname = 'Gain';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_INT16';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'SpeedgoatCANOpen03_P.Gain4_Gain';
pt(7).baseaddr   = '&SpeedgoatCANOpen03_P.Gain4_Gain';
pt(7).dtname     = 'int16_T';



  
pt(8).blockname = 'Simulink Application Layer/Gain5';
pt(8).paramname = 'Gain';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_INT16';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'SpeedgoatCANOpen03_P.Gain5_Gain';
pt(8).baseaddr   = '&SpeedgoatCANOpen03_P.Gain5_Gain';
pt(8).dtname     = 'int16_T';



  
pt(9).blockname = 'CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read';
pt(9).paramname = 'P1';
pt(9).class     = 'vector';
pt(9).nrows     = 1;
pt(9).ncols     = 6;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'SpeedgoatCANOpen03_P.CANRead_P1';
pt(9).baseaddr   = '&SpeedgoatCANOpen03_P.CANRead_P1[0]';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'CANOpen Slave  Protocol Stack/CAN RX Wrapper/Switch';
pt(10).paramname = 'Threshold';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_UINT8';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'SpeedgoatCANOpen03_P.Switch_Threshold';
pt(10).baseaddr   = '&SpeedgoatCANOpen03_P.Switch_Threshold';
pt(10).dtname     = 'uint8_T';



  
pt(11).blockname = 'CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read';
pt(11).paramname = 'P1';
pt(11).class     = 'vector';
pt(11).nrows     = 1;
pt(11).ncols     = 6;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'SpeedgoatCANOpen03_P.CANRead_P1_i';
pt(11).baseaddr   = '&SpeedgoatCANOpen03_P.CANRead_P1_i[0]';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'CANOpen Slave  Protocol Stack/CAN RX Wrapper1/Switch';
pt(12).paramname = 'Threshold';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_UINT8';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'SpeedgoatCANOpen03_P.Switch_Threshold_p';
pt(12).baseaddr   = '&SpeedgoatCANOpen03_P.Switch_Threshold_p';
pt(12).dtname     = 'uint8_T';



  
pt(13).blockname = 'CANOpen Slave  Protocol Stack/CAN TX Wrapper/Constant';
pt(13).paramname = 'Value';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_UINT8';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'SpeedgoatCANOpen03_P.Constant_Value';
pt(13).baseaddr   = '&SpeedgoatCANOpen03_P.Constant_Value';
pt(13).dtname     = 'uint8_T';



  
pt(14).blockname = 'CANOpen Slave  Protocol Stack/CAN TX Wrapper/CAN Write';
pt(14).paramname = 'P1';
pt(14).class     = 'vector';
pt(14).nrows     = 1;
pt(14).ncols     = 7;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'SpeedgoatCANOpen03_P.CANWrite_P1';
pt(14).baseaddr   = '&SpeedgoatCANOpen03_P.CANWrite_P1[0]';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'CANOpen Slave  Protocol Stack/CAN TX Wrapper1/Constant';
pt(15).paramname = 'Value';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_UINT8';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'SpeedgoatCANOpen03_P.Constant_Value_l';
pt(15).baseaddr   = '&SpeedgoatCANOpen03_P.Constant_Value_l';
pt(15).dtname     = 'uint8_T';



  
pt(16).blockname = 'CANOpen Slave  Protocol Stack/CAN TX Wrapper1/CAN Write';
pt(16).paramname = 'P1';
pt(16).class     = 'vector';
pt(16).nrows     = 1;
pt(16).ncols     = 7;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'SpeedgoatCANOpen03_P.CANWrite_P1_m';
pt(16).baseaddr   = '&SpeedgoatCANOpen03_P.CANWrite_P1_m[0]';
pt(16).dtname     = 'real_T';


function len = getlenPT
len = 16;

