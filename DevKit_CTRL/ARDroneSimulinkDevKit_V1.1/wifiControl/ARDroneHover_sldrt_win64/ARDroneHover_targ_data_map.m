  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (ARDroneHover_P)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.UDPReceive1_localPort
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.UDPReceive_localPort
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.UDPSend_remotePort
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.UDPSend_remotePort_a
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 39;
      section.data(39)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.Gain_Gain
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.Gain1_Gain
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P._Value
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.stop_Value
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.land_Value
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P.takeoff_Value
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.commandsdisabled_Value
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_P.commandsenabled_Value
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_P.Constant_Value
	  section.data(9).logicalSrcIdx = 12;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_P.Constant1_Value
	  section.data(10).logicalSrcIdx = 13;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHover_P.Gain1_Gain_b
	  section.data(11).logicalSrcIdx = 14;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ARDroneHover_P.Gain2_Gain
	  section.data(12).logicalSrcIdx = 15;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ARDroneHover_P.Gain3_Gain
	  section.data(13).logicalSrcIdx = 16;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ARDroneHover_P.Gain_Gain_n
	  section.data(14).logicalSrcIdx = 17;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ARDroneHover_P.Gain_Gain_l
	  section.data(15).logicalSrcIdx = 18;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ARDroneHover_P.Gain_Gain_i
	  section.data(16).logicalSrcIdx = 19;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ARDroneHover_P.Gain4_Gain
	  section.data(17).logicalSrcIdx = 20;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ARDroneHover_P.Gain_Gain_f
	  section.data(18).logicalSrcIdx = 21;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ARDroneHover_P.Constant1_Value_b
	  section.data(19).logicalSrcIdx = 22;
	  section.data(19).dtTransOffset = 18;
	
	  ;% ARDroneHover_P.UnitDelaytoavoidalgebraicloop_InitialCondition
	  section.data(20).logicalSrcIdx = 23;
	  section.data(20).dtTransOffset = 20;
	
	  ;% ARDroneHover_P.deg2rad_Gain
	  section.data(21).logicalSrcIdx = 24;
	  section.data(21).dtTransOffset = 21;
	
	  ;% ARDroneHover_P.deg2rad1_Gain
	  section.data(22).logicalSrcIdx = 25;
	  section.data(22).dtTransOffset = 22;
	
	  ;% ARDroneHover_P.Gain_Gain_p
	  section.data(23).logicalSrcIdx = 26;
	  section.data(23).dtTransOffset = 23;
	
	  ;% ARDroneHover_P.proportionalcontrolgain_Gain
	  section.data(24).logicalSrcIdx = 27;
	  section.data(24).dtTransOffset = 24;
	
	  ;% ARDroneHover_P.proportionalcontrolgainyaw_Gain
	  section.data(25).logicalSrcIdx = 28;
	  section.data(25).dtTransOffset = 25;
	
	  ;% ARDroneHover_P.Gain2_Gain_b
	  section.data(26).logicalSrcIdx = 29;
	  section.data(26).dtTransOffset = 26;
	
	  ;% ARDroneHover_P.Gain3_Gain_l
	  section.data(27).logicalSrcIdx = 30;
	  section.data(27).dtTransOffset = 27;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_gainval
	  section.data(28).logicalSrcIdx = 31;
	  section.data(28).dtTransOffset = 28;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_IC
	  section.data(29).logicalSrcIdx = 32;
	  section.data(29).dtTransOffset = 29;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_UpperSat
	  section.data(30).logicalSrcIdx = 33;
	  section.data(30).dtTransOffset = 33;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_LowerSat
	  section.data(31).logicalSrcIdx = 34;
	  section.data(31).dtTransOffset = 34;
	
	  ;% ARDroneHover_P.Saturation1_UpperSat
	  section.data(32).logicalSrcIdx = 35;
	  section.data(32).dtTransOffset = 35;
	
	  ;% ARDroneHover_P.Saturation1_LowerSat
	  section.data(33).logicalSrcIdx = 36;
	  section.data(33).dtTransOffset = 36;
	
	  ;% ARDroneHover_P.Saturation2_UpperSat
	  section.data(34).logicalSrcIdx = 37;
	  section.data(34).dtTransOffset = 37;
	
	  ;% ARDroneHover_P.Saturation2_LowerSat
	  section.data(35).logicalSrcIdx = 38;
	  section.data(35).dtTransOffset = 38;
	
	  ;% ARDroneHover_P.Saturation3_UpperSat
	  section.data(36).logicalSrcIdx = 39;
	  section.data(36).dtTransOffset = 39;
	
	  ;% ARDroneHover_P.Saturation3_LowerSat
	  section.data(37).logicalSrcIdx = 40;
	  section.data(37).dtTransOffset = 40;
	
	  ;% ARDroneHover_P.Saturation4_UpperSat
	  section.data(38).logicalSrcIdx = 41;
	  section.data(38).dtTransOffset = 41;
	
	  ;% ARDroneHover_P.Saturation4_LowerSat
	  section.data(39).logicalSrcIdx = 42;
	  section.data(39).dtTransOffset = 42;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.Gain6_Gain
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.Gain7_Gain
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.Gain_Gain_nh
	  section.data(3).logicalSrcIdx = 45;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.Gain1_Gain_p
	  section.data(4).logicalSrcIdx = 46;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.Gain9_Gain
	  section.data(5).logicalSrcIdx = 47;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P.Gain2_Gain_m
	  section.data(6).logicalSrcIdx = 48;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.Gain10_Gain
	  section.data(7).logicalSrcIdx = 49;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.ManualSwitch2_CurrentSetting
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.ManualSwitch3_CurrentSetting
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.ManualSwitch1_CurrentSetting
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.KillSwitch_CurrentSetting
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.Constant_Value_k
	  section.data(5).logicalSrcIdx = 54;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 21;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (ARDroneHover_B)
    ;%
      section.nData     = 83;
      section.data(83)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.TypeConversion
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.rollanglerad
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.Gain1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.pitchanglerad
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_B.Gain2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.yawanglerad
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_B.Gain3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_B.X_em
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_B.Integrator
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_B.Sum
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHover_B.Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ARDroneHover_B.Y_em
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ARDroneHover_B.Integrator_c
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ARDroneHover_B.Sum_c
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ARDroneHover_B.Gain_d
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ARDroneHover_B.hm
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ARDroneHover_B.Integrator_a
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ARDroneHover_B.Sum_b
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ARDroneHover_B.Gain_f
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% ARDroneHover_B.Gain4
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% ARDroneHover_B.Gain_l
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% ARDroneHover_B.TypeConversion4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% ARDroneHover_B.Constant1
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% ARDroneHover_B.Integrator_g
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 24;
	
	  ;% ARDroneHover_B.TypeConversion1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% ARDroneHover_B.TypeConversion2
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% ARDroneHover_B.UnitDelaytoavoidalgebraicloop
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% ARDroneHover_B.ManualSwitch2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% ARDroneHover_B.TypeConversion3
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% ARDroneHover_B.deg2rad
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% ARDroneHover_B.TypeConversion5
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 34;
	
	  ;% ARDroneHover_B.TypeConversion6
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 35;
	
	  ;% ARDroneHover_B.TypeConversion7
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 36;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 37;
	
	  ;% ARDroneHover_B.deg2rad1
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 46;
	
	  ;% ARDroneHover_B.Clock1
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 47;
	
	  ;% ARDroneHover_B.Gain_j
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 48;
	
	  ;% ARDroneHover_B.Sum3
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 49;
	
	  ;% ARDroneHover_B.proportionalcontrolgain
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 50;
	
	  ;% ARDroneHover_B.Sum1
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 51;
	
	  ;% ARDroneHover_B.proportionalcontrolgainyaw
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 52;
	
	  ;% ARDroneHover_B.Sum4
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 53;
	
	  ;% ARDroneHover_B.Gain2_o
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 55;
	
	  ;% ARDroneHover_B.Gain3_m
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 56;
	
	  ;% ARDroneHover_B.DiscreteTimeIntegrator
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 57;
	
	  ;% ARDroneHover_B.ManualSwitch3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 61;
	
	  ;% ARDroneHover_B.Saturation1
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 65;
	
	  ;% ARDroneHover_B.Saturation2
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 66;
	
	  ;% ARDroneHover_B.Saturation3
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 67;
	
	  ;% ARDroneHover_B.Saturation4
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 68;
	
	  ;% ARDroneHover_B.ManualSwitch1
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 69;
	
	  ;% ARDroneHover_B.KillSwitch
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 70;
	
	  ;% ARDroneHover_B.Add1
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 71;
	
	  ;% ARDroneHover_B.Add
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 74;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtSFunctionInport1
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 77;
	
	  ;% ARDroneHover_B.Vel_xy
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 79;
	
	  ;% ARDroneHover_B.Sum2
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 81;
	
	  ;% ARDroneHover_B.Gain_h
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 82;
	
	  ;% ARDroneHover_B.Sum5
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 83;
	
	  ;% ARDroneHover_B.Gain1_j
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 84;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 85;
	
	  ;% ARDroneHover_B.w_r
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 94;
	
	  ;% ARDroneHover_B.dot_psi_r
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 95;
	
	  ;% ARDroneHover_B.theta_r
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 96;
	
	  ;% ARDroneHover_B.phi_r
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 97;
	
	  ;% ARDroneHover_B.dot_xi
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 98;
	
	  ;% ARDroneHover_B.angleOut
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 102;
	
	  ;% ARDroneHover_B.Vec_xy
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 103;
	
	  ;% ARDroneHover_B.angleOut_f
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 105;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtSFunctionInport2
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 106;
	
	  ;% ARDroneHover_B.pd
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 115;
	
	  ;% ARDroneHover_B.dot_pd
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 118;
	
	  ;% ARDroneHover_B.ddot_pd
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 121;
	
	  ;% ARDroneHover_B.psi_d
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 124;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 125;
	
	  ;% ARDroneHover_B.v_b
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 128;
	
	  ;% ARDroneHover_B.yawOut
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 131;
	
	  ;% ARDroneHover_B.isFlying
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 132;
	
	  ;% ARDroneHover_B.error
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 133;
	
	  ;% ARDroneHover_B.flagOut
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 134;
	
	  ;% ARDroneHover_B.status
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 135;
	
	  ;% ARDroneHover_B.height
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 167;
	
	  ;% ARDroneHover_B.cksumError
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 168;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.battery
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.Gain6
	  section.data(1).logicalSrcIdx = 84;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.Gain7
	  section.data(2).logicalSrcIdx = 85;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.Gain_n
	  section.data(3).logicalSrcIdx = 86;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.Gain1_c
	  section.data(4).logicalSrcIdx = 87;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_B.Gain9
	  section.data(5).logicalSrcIdx = 88;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.Gain2_d
	  section.data(6).logicalSrcIdx = 89;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_B.Gain10
	  section.data(7).logicalSrcIdx = 90;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_B.X
	  section.data(8).logicalSrcIdx = 91;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_B.Y
	  section.data(9).logicalSrcIdx = 92;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_B.Z
	  section.data(10).logicalSrcIdx = 93;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHover_B.Roll
	  section.data(11).logicalSrcIdx = 94;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ARDroneHover_B.Pitch
	  section.data(12).logicalSrcIdx = 95;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ARDroneHover_B.Yaw
	  section.data(13).logicalSrcIdx = 96;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ARDroneHover_B.rollAngle
	  section.data(14).logicalSrcIdx = 97;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ARDroneHover_B.pitchAngle
	  section.data(15).logicalSrcIdx = 98;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ARDroneHover_B.yawAngle
	  section.data(16).logicalSrcIdx = 99;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ARDroneHover_B.u
	  section.data(17).logicalSrcIdx = 100;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ARDroneHover_B.v
	  section.data(18).logicalSrcIdx = 101;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ARDroneHover_B.w
	  section.data(19).logicalSrcIdx = 102;
	  section.data(19).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.UDPReceive1_o2
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.UDPReceive_o2
	  section.data(2).logicalSrcIdx = 104;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 53;
      section.data(53)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.UDPReceive1_o1
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.UDPReceive_o1
	  section.data(2).logicalSrcIdx = 106;
	  section.data(2).dtTransOffset = 500;
	
	  ;% ARDroneHover_B.DataTypeConversion3
	  section.data(3).logicalSrcIdx = 107;
	  section.data(3).dtTransOffset = 755;
	
	  ;% ARDroneHover_B.DataTypeConversion4
	  section.data(4).logicalSrcIdx = 108;
	  section.data(4).dtTransOffset = 756;
	
	  ;% ARDroneHover_B.DataTypeConversion5
	  section.data(5).logicalSrcIdx = 109;
	  section.data(5).dtTransOffset = 757;
	
	  ;% ARDroneHover_B.DataTypeConversion6
	  section.data(6).logicalSrcIdx = 110;
	  section.data(6).dtTransOffset = 758;
	
	  ;% ARDroneHover_B.DataTypeConversion1
	  section.data(7).logicalSrcIdx = 111;
	  section.data(7).dtTransOffset = 759;
	
	  ;% ARDroneHover_B.DataTypeConversion2
	  section.data(8).logicalSrcIdx = 112;
	  section.data(8).dtTransOffset = 760;
	
	  ;% ARDroneHover_B.DataTypeConversion7
	  section.data(9).logicalSrcIdx = 113;
	  section.data(9).dtTransOffset = 761;
	
	  ;% ARDroneHover_B.DataTypeConversion8
	  section.data(10).logicalSrcIdx = 114;
	  section.data(10).dtTransOffset = 762;
	
	  ;% ARDroneHover_B.DataTypeConversion9
	  section.data(11).logicalSrcIdx = 115;
	  section.data(11).dtTransOffset = 763;
	
	  ;% ARDroneHover_B.DataTypeConversion10
	  section.data(12).logicalSrcIdx = 116;
	  section.data(12).dtTransOffset = 764;
	
	  ;% ARDroneHover_B.DataTypeConversion11
	  section.data(13).logicalSrcIdx = 117;
	  section.data(13).dtTransOffset = 765;
	
	  ;% ARDroneHover_B.DataTypeConversion12
	  section.data(14).logicalSrcIdx = 118;
	  section.data(14).dtTransOffset = 766;
	
	  ;% ARDroneHover_B.DataTypeConversion16
	  section.data(15).logicalSrcIdx = 119;
	  section.data(15).dtTransOffset = 767;
	
	  ;% ARDroneHover_B.DataTypeConversion13
	  section.data(16).logicalSrcIdx = 120;
	  section.data(16).dtTransOffset = 768;
	
	  ;% ARDroneHover_B.DataTypeConversion14
	  section.data(17).logicalSrcIdx = 121;
	  section.data(17).dtTransOffset = 769;
	
	  ;% ARDroneHover_B.DataTypeConversion15
	  section.data(18).logicalSrcIdx = 122;
	  section.data(18).dtTransOffset = 770;
	
	  ;% ARDroneHover_B.DataTypeConversion20
	  section.data(19).logicalSrcIdx = 123;
	  section.data(19).dtTransOffset = 771;
	
	  ;% ARDroneHover_B.DataTypeConversion17
	  section.data(20).logicalSrcIdx = 124;
	  section.data(20).dtTransOffset = 772;
	
	  ;% ARDroneHover_B.DataTypeConversion18
	  section.data(21).logicalSrcIdx = 125;
	  section.data(21).dtTransOffset = 773;
	
	  ;% ARDroneHover_B.DataTypeConversion19
	  section.data(22).logicalSrcIdx = 126;
	  section.data(22).dtTransOffset = 774;
	
	  ;% ARDroneHover_B.DataTypeConversion24
	  section.data(23).logicalSrcIdx = 127;
	  section.data(23).dtTransOffset = 775;
	
	  ;% ARDroneHover_B.DataTypeConversion21
	  section.data(24).logicalSrcIdx = 128;
	  section.data(24).dtTransOffset = 776;
	
	  ;% ARDroneHover_B.DataTypeConversion22
	  section.data(25).logicalSrcIdx = 129;
	  section.data(25).dtTransOffset = 777;
	
	  ;% ARDroneHover_B.DataTypeConversion23
	  section.data(26).logicalSrcIdx = 130;
	  section.data(26).dtTransOffset = 778;
	
	  ;% ARDroneHover_B.RateTransition
	  section.data(27).logicalSrcIdx = 131;
	  section.data(27).dtTransOffset = 779;
	
	  ;% ARDroneHover_B.yaw4
	  section.data(28).logicalSrcIdx = 132;
	  section.data(28).dtTransOffset = 781;
	
	  ;% ARDroneHover_B.yaw3
	  section.data(29).logicalSrcIdx = 133;
	  section.data(29).dtTransOffset = 782;
	
	  ;% ARDroneHover_B.yaw2
	  section.data(30).logicalSrcIdx = 134;
	  section.data(30).dtTransOffset = 783;
	
	  ;% ARDroneHover_B.yaw1
	  section.data(31).logicalSrcIdx = 135;
	  section.data(31).dtTransOffset = 784;
	
	  ;% ARDroneHover_B.pitch4
	  section.data(32).logicalSrcIdx = 136;
	  section.data(32).dtTransOffset = 785;
	
	  ;% ARDroneHover_B.pitch3
	  section.data(33).logicalSrcIdx = 137;
	  section.data(33).dtTransOffset = 786;
	
	  ;% ARDroneHover_B.pitch2
	  section.data(34).logicalSrcIdx = 138;
	  section.data(34).dtTransOffset = 787;
	
	  ;% ARDroneHover_B.pitch1
	  section.data(35).logicalSrcIdx = 139;
	  section.data(35).dtTransOffset = 788;
	
	  ;% ARDroneHover_B.roll4
	  section.data(36).logicalSrcIdx = 140;
	  section.data(36).dtTransOffset = 789;
	
	  ;% ARDroneHover_B.roll3
	  section.data(37).logicalSrcIdx = 141;
	  section.data(37).dtTransOffset = 790;
	
	  ;% ARDroneHover_B.roll2
	  section.data(38).logicalSrcIdx = 142;
	  section.data(38).dtTransOffset = 791;
	
	  ;% ARDroneHover_B.roll1
	  section.data(39).logicalSrcIdx = 143;
	  section.data(39).dtTransOffset = 792;
	
	  ;% ARDroneHover_B.z4
	  section.data(40).logicalSrcIdx = 144;
	  section.data(40).dtTransOffset = 793;
	
	  ;% ARDroneHover_B.z3
	  section.data(41).logicalSrcIdx = 145;
	  section.data(41).dtTransOffset = 794;
	
	  ;% ARDroneHover_B.z2
	  section.data(42).logicalSrcIdx = 146;
	  section.data(42).dtTransOffset = 795;
	
	  ;% ARDroneHover_B.z1
	  section.data(43).logicalSrcIdx = 147;
	  section.data(43).dtTransOffset = 796;
	
	  ;% ARDroneHover_B.y4
	  section.data(44).logicalSrcIdx = 148;
	  section.data(44).dtTransOffset = 797;
	
	  ;% ARDroneHover_B.y3
	  section.data(45).logicalSrcIdx = 149;
	  section.data(45).dtTransOffset = 798;
	
	  ;% ARDroneHover_B.y2
	  section.data(46).logicalSrcIdx = 150;
	  section.data(46).dtTransOffset = 799;
	
	  ;% ARDroneHover_B.y1
	  section.data(47).logicalSrcIdx = 151;
	  section.data(47).dtTransOffset = 800;
	
	  ;% ARDroneHover_B.x4
	  section.data(48).logicalSrcIdx = 152;
	  section.data(48).dtTransOffset = 801;
	
	  ;% ARDroneHover_B.x3
	  section.data(49).logicalSrcIdx = 153;
	  section.data(49).dtTransOffset = 802;
	
	  ;% ARDroneHover_B.x2
	  section.data(50).logicalSrcIdx = 154;
	  section.data(50).dtTransOffset = 803;
	
	  ;% ARDroneHover_B.x1
	  section.data(51).logicalSrcIdx = 155;
	  section.data(51).dtTransOffset = 804;
	
	  ;% ARDroneHover_B.dataControl
	  section.data(52).logicalSrcIdx = 156;
	  section.data(52).dtTransOffset = 805;
	
	  ;% ARDroneHover_B.frameOut
	  section.data(53).logicalSrcIdx = 157;
	  section.data(53).dtTransOffset = 955;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.Compare
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.sf_MATLABFunction2_l.y
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.sf_MATLABFunction1_a.y
	  section.data(1).logicalSrcIdx = 160;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.sf_MATLABFunction.y
	  section.data(1).logicalSrcIdx = 161;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat5.y
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat5.y_l
	  section.data(2).logicalSrcIdx = 163;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat5.y_c
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat4.y
	  section.data(1).logicalSrcIdx = 165;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat4.y_l
	  section.data(2).logicalSrcIdx = 166;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat4.y_c
	  section.data(1).logicalSrcIdx = 167;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat3.y
	  section.data(1).logicalSrcIdx = 168;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat3.y_l
	  section.data(2).logicalSrcIdx = 169;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat3.y_c
	  section.data(1).logicalSrcIdx = 170;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(15) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat2.y
	  section.data(1).logicalSrcIdx = 171;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat2.y_l
	  section.data(2).logicalSrcIdx = 172;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat2.y_c
	  section.data(1).logicalSrcIdx = 173;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(17) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat1.y
	  section.data(1).logicalSrcIdx = 174;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat1.y_l
	  section.data(2).logicalSrcIdx = 175;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat1.y_c
	  section.data(1).logicalSrcIdx = 176;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(19) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat.y
	  section.data(1).logicalSrcIdx = 177;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.BitConcat.y_l
	  section.data(2).logicalSrcIdx = 178;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat.y_c
	  section.data(1).logicalSrcIdx = 179;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(21) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 21;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (ARDroneHover_DW)
    ;%
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.UDPReceive1_NetworkLib
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 5;
	
	  ;% ARDroneHover_DW.UDPReceive_NetworkLib
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 142;
	
	  ;% ARDroneHover_DW.UDPSend_NetworkLib
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 279;
	
	  ;% ARDroneHover_DW.UDPSend_NetworkLib_h
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 416;
	
	  ;% ARDroneHover_DW.t0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 553;
	
	  ;% ARDroneHover_DW.p0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 554;
	
	  ;% ARDroneHover_DW.previous_status
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 557;
	
	  ;% ARDroneHover_DW.yaw0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 558;
	
	  ;% ARDroneHover_DW.mode
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 559;
	
	  ;% ARDroneHover_DW.SequenceNumber
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 560;
	
	  ;% ARDroneHover_DW.count
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 561;
	
	  ;% ARDroneHover_DW.countHeader
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 562;
	
	  ;% ARDroneHover_DW.countBuffer
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 563;
	
	  ;% ARDroneHover_DW.hPrev
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 564;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.Euler1_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.Heightm_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.InertialpositionalongXem_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_DW.InertialpositionalongYem_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_DW.ToWorkspace_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_DW.headingdeg_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_DW.Euler1_PWORK_h.LoggedData
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_DW.Euler2_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 23;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_DW.Euler3_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 24;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_DW.error_phi_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 25;
	  section.data(10).dtTransOffset = 11;
	
	  ;% ARDroneHover_DW.error_psi_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 26;
	  section.data(11).dtTransOffset = 12;
	
	  ;% ARDroneHover_DW.error_theta_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 27;
	  section.data(12).dtTransOffset = 13;
	
	  ;% ARDroneHover_DW.errorx_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 28;
	  section.data(13).dtTransOffset = 14;
	
	  ;% ARDroneHover_DW.errory_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 29;
	  section.data(14).dtTransOffset = 15;
	
	  ;% ARDroneHover_DW.errorz_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 30;
	  section.data(15).dtTransOffset = 16;
	
	  ;% ARDroneHover_DW.psipsi_d_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 31;
	  section.data(16).dtTransOffset = 17;
	
	  ;% ARDroneHover_DW.ToWorkspace6_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 32;
	  section.data(17).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.Integrator_IWORK
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.Integrator_IWORK_c
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.Integrator_IWORK_f
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_DW.Integrator_IWORK_p
	  section.data(4).logicalSrcIdx = 36;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.frame
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.lastFrame
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 496;
	
	  ;% ARDroneHover_DW.buffer
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 992;
	
	  ;% ARDroneHover_DW.dataPrev
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 2016;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.t0_not_empty
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.previous_status_not_empty
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.sf_MATLABFunction2_l.u_
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.sf_MATLABFunction1_a.u_
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.sf_MATLABFunction.u_
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 40893877;
  targMap.checksum1 = 4027954335;
  targMap.checksum2 = 4061695294;
  targMap.checksum3 = 3534872955;

