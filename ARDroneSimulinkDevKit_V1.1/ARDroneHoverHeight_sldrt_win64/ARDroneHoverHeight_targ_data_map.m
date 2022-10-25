  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
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
    ;% Auto data (ARDroneHoverHeight_P)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_P.UDPReceive1_localPort
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_P.UDPSend_remotePort
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_P.UDPSend_remotePort_a
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 52;
      section.data(52)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_P.stepvalue_Value
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_P.ini_step_value_Value
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_P.commandsenabled_Value
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHoverHeight_P.commandsdisabled_Value
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHoverHeight_P.takeoff_Value
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHoverHeight_P.land_Value
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHoverHeight_P.stop_Value
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHoverHeight_P._Value
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHoverHeight_P.UnitDelaytoavoidalgebraicloop_InitialCondition
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHoverHeight_P.enablecommandstep_Time
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHoverHeight_P.enablecommandstep_Y0
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ARDroneHoverHeight_P.enablecommandstep_YFinal
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ARDroneHoverHeight_P.disablecommandstep_Time
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ARDroneHoverHeight_P.disablecommandstep_Y0
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ARDroneHoverHeight_P.disablecommandstep_YFinal
	  section.data(15).logicalSrcIdx = 17;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ARDroneHoverHeight_P.deg2rad_Gain
	  section.data(16).logicalSrcIdx = 18;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ARDroneHoverHeight_P.Constant1_Value
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ARDroneHoverHeight_P.Headingrefrad_Value
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 18;
	
	  ;% ARDroneHoverHeight_P.Heightrefm_Value
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 19;
	
	  ;% ARDroneHoverHeight_P.climbstep_Time
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 20;
	
	  ;% ARDroneHoverHeight_P.climbstep_Y0
	  section.data(21).logicalSrcIdx = 23;
	  section.data(21).dtTransOffset = 21;
	
	  ;% ARDroneHoverHeight_P.climbstep_YFinal
	  section.data(22).logicalSrcIdx = 24;
	  section.data(22).dtTransOffset = 22;
	
	  ;% ARDroneHoverHeight_P.descendstep_Time
	  section.data(23).logicalSrcIdx = 25;
	  section.data(23).dtTransOffset = 23;
	
	  ;% ARDroneHoverHeight_P.descendstep_Y0
	  section.data(24).logicalSrcIdx = 26;
	  section.data(24).dtTransOffset = 24;
	
	  ;% ARDroneHoverHeight_P.descendstep_YFinal
	  section.data(25).logicalSrcIdx = 27;
	  section.data(25).dtTransOffset = 25;
	
	  ;% ARDroneHoverHeight_P.InertialXrefm_Value
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 26;
	
	  ;% ARDroneHoverHeight_P.InertialYrefm_Value
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 27;
	
	  ;% ARDroneHoverHeight_P.toffstep2_Time
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 28;
	
	  ;% ARDroneHoverHeight_P.toffstep2_Y0
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 29;
	
	  ;% ARDroneHoverHeight_P.toffstep2_YFinal
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 30;
	
	  ;% ARDroneHoverHeight_P.landstep1_Time
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 31;
	
	  ;% ARDroneHoverHeight_P.landstep1_Y0
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 32;
	
	  ;% ARDroneHoverHeight_P.landstep1_YFinal
	  section.data(33).logicalSrcIdx = 35;
	  section.data(33).dtTransOffset = 33;
	
	  ;% ARDroneHoverHeight_P.deg2rad1_Gain
	  section.data(34).logicalSrcIdx = 36;
	  section.data(34).dtTransOffset = 34;
	
	  ;% ARDroneHoverHeight_P.proportionalcontrolgain_Gain
	  section.data(35).logicalSrcIdx = 37;
	  section.data(35).dtTransOffset = 35;
	
	  ;% ARDroneHoverHeight_P.Saturation4_UpperSat
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 36;
	
	  ;% ARDroneHoverHeight_P.Saturation4_LowerSat
	  section.data(37).logicalSrcIdx = 39;
	  section.data(37).dtTransOffset = 37;
	
	  ;% ARDroneHoverHeight_P.Gain3_Gain
	  section.data(38).logicalSrcIdx = 40;
	  section.data(38).dtTransOffset = 38;
	
	  ;% ARDroneHoverHeight_P.Gain1_Gain
	  section.data(39).logicalSrcIdx = 41;
	  section.data(39).dtTransOffset = 39;
	
	  ;% ARDroneHoverHeight_P.Saturation1_UpperSat
	  section.data(40).logicalSrcIdx = 42;
	  section.data(40).dtTransOffset = 40;
	
	  ;% ARDroneHoverHeight_P.Saturation1_LowerSat
	  section.data(41).logicalSrcIdx = 43;
	  section.data(41).dtTransOffset = 41;
	
	  ;% ARDroneHoverHeight_P.Gain2_Gain
	  section.data(42).logicalSrcIdx = 44;
	  section.data(42).dtTransOffset = 42;
	
	  ;% ARDroneHoverHeight_P.Gain_Gain
	  section.data(43).logicalSrcIdx = 45;
	  section.data(43).dtTransOffset = 43;
	
	  ;% ARDroneHoverHeight_P.Saturation2_UpperSat
	  section.data(44).logicalSrcIdx = 46;
	  section.data(44).dtTransOffset = 44;
	
	  ;% ARDroneHoverHeight_P.Saturation2_LowerSat
	  section.data(45).logicalSrcIdx = 47;
	  section.data(45).dtTransOffset = 45;
	
	  ;% ARDroneHoverHeight_P.proportionalcontrolgainyaw_Gain
	  section.data(46).logicalSrcIdx = 48;
	  section.data(46).dtTransOffset = 46;
	
	  ;% ARDroneHoverHeight_P.Saturation3_UpperSat
	  section.data(47).logicalSrcIdx = 49;
	  section.data(47).dtTransOffset = 47;
	
	  ;% ARDroneHoverHeight_P.Saturation3_LowerSat
	  section.data(48).logicalSrcIdx = 50;
	  section.data(48).dtTransOffset = 48;
	
	  ;% ARDroneHoverHeight_P.SimulationPace_P1
	  section.data(49).logicalSrcIdx = 51;
	  section.data(49).dtTransOffset = 49;
	
	  ;% ARDroneHoverHeight_P.SimulationPace_P2
	  section.data(50).logicalSrcIdx = 52;
	  section.data(50).dtTransOffset = 50;
	
	  ;% ARDroneHoverHeight_P.SimulationPace_P3
	  section.data(51).logicalSrcIdx = 53;
	  section.data(51).dtTransOffset = 51;
	
	  ;% ARDroneHoverHeight_P.SimulationPace_P4
	  section.data(52).logicalSrcIdx = 54;
	  section.data(52).dtTransOffset = 52;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_P.ManualSwitch1_CurrentSetting
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_P.KillSwitch_CurrentSetting
	  section.data(2).logicalSrcIdx = 56;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_P.Constant_Value
	  section.data(3).logicalSrcIdx = 57;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHoverHeight_P.ManualSwitch2_CurrentSetting
	  section.data(4).logicalSrcIdx = 58;
	  section.data(4).dtTransOffset = 4;
	
	  ;% ARDroneHoverHeight_P.step_CurrentSetting
	  section.data(5).logicalSrcIdx = 59;
	  section.data(5).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
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
    nTotSects     = 5;
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
    ;% Auto data (ARDroneHoverHeight_B)
    ;%
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_B.TypeConversion
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_B.TypeConversion1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_B.TypeConversion2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHoverHeight_B.UnitDelaytoavoidalgebraicloop
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHoverHeight_B.ManualSwitch1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHoverHeight_B.enablecommandstep
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHoverHeight_B.disablecommandstep
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHoverHeight_B.Product1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHoverHeight_B.TypeConversion3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHoverHeight_B.deg2rad
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHoverHeight_B.TypeConversion5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% ARDroneHoverHeight_B.TypeConversion6
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% ARDroneHoverHeight_B.TypeConversion7
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% ARDroneHoverHeight_B.Constant1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% ARDroneHoverHeight_B.Integrator
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% ARDroneHoverHeight_B.TypeConversion4
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% ARDroneHoverHeight_B.yawref
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% ARDroneHoverHeight_B.climbstep
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% ARDroneHoverHeight_B.descendstep
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% ARDroneHoverHeight_B.Product2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% ARDroneHoverHeight_B.altituderef
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% ARDroneHoverHeight_B.xeref
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
	  ;% ARDroneHoverHeight_B.yeref
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 26;
	
	  ;% ARDroneHoverHeight_B.toffstep2
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 27;
	
	  ;% ARDroneHoverHeight_B.landstep1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 28;
	
	  ;% ARDroneHoverHeight_B.Product
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 29;
	
	  ;% ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 30;
	
	  ;% ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 45;
	
	  ;% ARDroneHoverHeight_B.deg2rad1
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 54;
	
	  ;% ARDroneHoverHeight_B.Sum3
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 55;
	
	  ;% ARDroneHoverHeight_B.proportionalcontrolgain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% ARDroneHoverHeight_B.Saturation4
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 57;
	
	  ;% ARDroneHoverHeight_B.Sum4
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 58;
	
	  ;% ARDroneHoverHeight_B.Gain3
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 60;
	
	  ;% ARDroneHoverHeight_B.Sum5
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 61;
	
	  ;% ARDroneHoverHeight_B.Gain1
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 62;
	
	  ;% ARDroneHoverHeight_B.Saturation1
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 63;
	
	  ;% ARDroneHoverHeight_B.Gain2
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 64;
	
	  ;% ARDroneHoverHeight_B.Sum2
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 65;
	
	  ;% ARDroneHoverHeight_B.Gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 66;
	
	  ;% ARDroneHoverHeight_B.Saturation2
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 67;
	
	  ;% ARDroneHoverHeight_B.Sum1
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 68;
	
	  ;% ARDroneHoverHeight_B.proportionalcontrolgainyaw
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 69;
	
	  ;% ARDroneHoverHeight_B.Saturation3
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 70;
	
	  ;% ARDroneHoverHeight_B.KillSwitch
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 71;
	
	  ;% ARDroneHoverHeight_B.ManualSwitch2
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 72;
	
	  ;% ARDroneHoverHeight_B.step
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 73;
	
	  ;% ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 74;
	
	  ;% ARDroneHoverHeight_B.Vel_xy
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 76;
	
	  ;% ARDroneHoverHeight_B.Vec_xy
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 78;
	
	  ;% ARDroneHoverHeight_B.angleOut
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 80;
	
	  ;% ARDroneHoverHeight_B.yawOut
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 81;
	
	  ;% ARDroneHoverHeight_B.isFlying
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 82;
	
	  ;% ARDroneHoverHeight_B.error
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 83;
	
	  ;% ARDroneHoverHeight_B.flagOut
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 84;
	
	  ;% ARDroneHoverHeight_B.status
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 85;
	
	  ;% ARDroneHoverHeight_B.height
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 117;
	
	  ;% ARDroneHoverHeight_B.cksumError
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 118;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_B.battery
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_B.rollAngle
	  section.data(1).logicalSrcIdx = 59;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_B.pitchAngle
	  section.data(2).logicalSrcIdx = 60;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_B.yawAngle
	  section.data(3).logicalSrcIdx = 61;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHoverHeight_B.u
	  section.data(4).logicalSrcIdx = 62;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHoverHeight_B.v
	  section.data(5).logicalSrcIdx = 63;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHoverHeight_B.w
	  section.data(6).logicalSrcIdx = 64;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_B.UDPReceive1_o2
	  section.data(1).logicalSrcIdx = 65;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_B.UDPReceive1_o1
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_B.RateTransition
	  section.data(2).logicalSrcIdx = 67;
	  section.data(2).dtTransOffset = 500;
	
	  ;% ARDroneHoverHeight_B.dataControl
	  section.data(3).logicalSrcIdx = 68;
	  section.data(3).dtTransOffset = 502;
	
	  ;% ARDroneHoverHeight_B.frameOut
	  section.data(4).logicalSrcIdx = 69;
	  section.data(4).dtTransOffset = 652;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
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
    nTotSects     = 4;
    sectIdxOffset = 5;
    
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
    ;% Auto data (ARDroneHoverHeight_DW)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_DW.UnitDelaytoavoidalgebraicloop_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_DW.UDPReceive1_NetworkLib
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_DW.UDPSend_NetworkLib
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 138;
	
	  ;% ARDroneHoverHeight_DW.UDPSend_NetworkLib_h
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 275;
	
	  ;% ARDroneHoverHeight_DW.yaw0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 412;
	
	  ;% ARDroneHoverHeight_DW.mode
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 413;
	
	  ;% ARDroneHoverHeight_DW.SequenceNumber
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 414;
	
	  ;% ARDroneHoverHeight_DW.count
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 415;
	
	  ;% ARDroneHoverHeight_DW.countHeader
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 416;
	
	  ;% ARDroneHoverHeight_DW.countBuffer
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 417;
	
	  ;% ARDroneHoverHeight_DW.hPrev
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 418;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_DW.ToWorkspace_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_DW.Heightm_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHoverHeight_DW.InertialpositionalongXem_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHoverHeight_DW.InertialpositionalongYem_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHoverHeight_DW.ToWorkspace_PWORK_b.LoggedData
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHoverHeight_DW.headingdeg_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHoverHeight_DW.Scope_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHoverHeight_DW.ToWorkspace_PWORK_j.LoggedData
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 9;
	
	  ;% ARDroneHoverHeight_DW.Scope_PWORK_e.LoggedData
	  section.data(9).logicalSrcIdx = 19;
	  section.data(9).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_DW.Integrator_IWORK
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHoverHeight_DW.frame
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHoverHeight_DW.lastFrame
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 496;
	
	  ;% ARDroneHoverHeight_DW.buffer
	  section.data(3).logicalSrcIdx = 23;
	  section.data(3).dtTransOffset = 992;
	
	  ;% ARDroneHoverHeight_DW.dataPrev
	  section.data(4).logicalSrcIdx = 24;
	  section.data(4).dtTransOffset = 2016;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
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


  targMap.checksum0 = 3725271430;
  targMap.checksum1 = 2195939391;
  targMap.checksum2 = 3803603901;
  targMap.checksum3 = 1699805881;

