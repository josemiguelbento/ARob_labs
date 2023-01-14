  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (ARDroneHover_P)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.PacketInput_MaxMissedTicks
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.PacketInput1_MaxMissedTicks
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.PacketOutput_MaxMissedTicks
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.PacketOutput1_MaxMissedTicks
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.PacketInput_YieldWhenWaiting
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P.PacketInput1_YieldWhenWaiting
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.PacketOutput_YieldWhenWaiting
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_P.PacketOutput1_YieldWhenWaiting
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.PacketInput_PacketID
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.PacketInput1_PacketID
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.PacketOutput_PacketID
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.PacketOutput1_PacketID
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 34;
      section.data(34)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.commandsenabled_Value
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.commandsdisabled_Value
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.takeoff_Value
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.land_Value
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.stop_Value
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P._Value
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.proportionalcontrolgainyaw_Gain
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_P.Gain2_Gain
	  section.data(8).logicalSrcIdx = 23;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_P.Gain_Gain
	  section.data(9).logicalSrcIdx = 24;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_P.Gain3_Gain
	  section.data(10).logicalSrcIdx = 25;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ARDroneHover_P.Gain1_Gain
	  section.data(11).logicalSrcIdx = 26;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ARDroneHover_P.UnitDelaytoavoidalgebraicloop_InitialCondition
	  section.data(12).logicalSrcIdx = 27;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ARDroneHover_P.Constant1_Value
	  section.data(13).logicalSrcIdx = 28;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ARDroneHover_P.deg2rad_Gain
	  section.data(14).logicalSrcIdx = 29;
	  section.data(14).dtTransOffset = 14;
	
	  ;% ARDroneHover_P.deg2rad1_Gain
	  section.data(15).logicalSrcIdx = 30;
	  section.data(15).dtTransOffset = 15;
	
	  ;% ARDroneHover_P.Headingrefrad_Value
	  section.data(16).logicalSrcIdx = 31;
	  section.data(16).dtTransOffset = 16;
	
	  ;% ARDroneHover_P.proportionalcontrolgain_Gain
	  section.data(17).logicalSrcIdx = 32;
	  section.data(17).dtTransOffset = 19;
	
	  ;% ARDroneHover_P.InertialYrefm_Value
	  section.data(18).logicalSrcIdx = 33;
	  section.data(18).dtTransOffset = 20;
	
	  ;% ARDroneHover_P.Heightrefm_Value
	  section.data(19).logicalSrcIdx = 34;
	  section.data(19).dtTransOffset = 21;
	
	  ;% ARDroneHover_P.InertialXrefm_Value
	  section.data(20).logicalSrcIdx = 35;
	  section.data(20).dtTransOffset = 24;
	
	  ;% ARDroneHover_P.Constant_Value
	  section.data(21).logicalSrcIdx = 36;
	  section.data(21).dtTransOffset = 27;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_gainval
	  section.data(22).logicalSrcIdx = 37;
	  section.data(22).dtTransOffset = 28;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_IC
	  section.data(23).logicalSrcIdx = 38;
	  section.data(23).dtTransOffset = 29;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_UpperSat
	  section.data(24).logicalSrcIdx = 39;
	  section.data(24).dtTransOffset = 33;
	
	  ;% ARDroneHover_P.DiscreteTimeIntegrator_LowerSat
	  section.data(25).logicalSrcIdx = 40;
	  section.data(25).dtTransOffset = 34;
	
	  ;% ARDroneHover_P.Saturation1_UpperSat
	  section.data(26).logicalSrcIdx = 41;
	  section.data(26).dtTransOffset = 35;
	
	  ;% ARDroneHover_P.Saturation1_LowerSat
	  section.data(27).logicalSrcIdx = 42;
	  section.data(27).dtTransOffset = 36;
	
	  ;% ARDroneHover_P.Saturation2_UpperSat
	  section.data(28).logicalSrcIdx = 43;
	  section.data(28).dtTransOffset = 37;
	
	  ;% ARDroneHover_P.Saturation2_LowerSat
	  section.data(29).logicalSrcIdx = 44;
	  section.data(29).dtTransOffset = 38;
	
	  ;% ARDroneHover_P.Saturation3_UpperSat
	  section.data(30).logicalSrcIdx = 45;
	  section.data(30).dtTransOffset = 39;
	
	  ;% ARDroneHover_P.Saturation3_LowerSat
	  section.data(31).logicalSrcIdx = 46;
	  section.data(31).dtTransOffset = 40;
	
	  ;% ARDroneHover_P.Saturation4_UpperSat
	  section.data(32).logicalSrcIdx = 47;
	  section.data(32).dtTransOffset = 41;
	
	  ;% ARDroneHover_P.Saturation4_LowerSat
	  section.data(33).logicalSrcIdx = 48;
	  section.data(33).dtTransOffset = 42;
	
	  ;% ARDroneHover_P.Constant1_Value_p
	  section.data(34).logicalSrcIdx = 49;
	  section.data(34).dtTransOffset = 43;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.Gain_Gain_n
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.Gain1_Gain_p
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.Gain9_Gain
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.Gain2_Gain_m
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.Gain10_Gain
	  section.data(5).logicalSrcIdx = 54;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P.Gain6_Gain
	  section.data(6).logicalSrcIdx = 55;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.Gain7_Gain
	  section.data(7).logicalSrcIdx = 56;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.ManualSwitch2_CurrentSetting
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.ManualSwitch3_CurrentSetting
	  section.data(2).logicalSrcIdx = 58;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.ManualSwitch1_CurrentSetting
	  section.data(3).logicalSrcIdx = 59;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.ManualSwitch_CurrentSetting
	  section.data(4).logicalSrcIdx = 60;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.Constant_Value_k
	  section.data(5).logicalSrcIdx = 61;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
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
    nTotSects     = 10;
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
      section.nData     = 30;
      section.data(30)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.TypeConversion
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.TypeConversion1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.TypeConversion2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.TypeConversion4
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_B.Constant1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.Integrator
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% ARDroneHover_B.deg2rad
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% ARDroneHover_B.TypeConversion5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% ARDroneHover_B.TypeConversion6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% ARDroneHover_B.TypeConversion7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% ARDroneHover_B.deg2rad1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 23;
	
	  ;% ARDroneHover_B.proportionalcontrolgain
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 24;
	
	  ;% ARDroneHover_B.InertialYrefm
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 25;
	
	  ;% ARDroneHover_B.Saturation1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 26;
	
	  ;% ARDroneHover_B.Saturation2
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% ARDroneHover_B.Saturation3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 28;
	
	  ;% ARDroneHover_B.Saturation4
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 29;
	
	  ;% ARDroneHover_B.Add1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 30;
	
	  ;% ARDroneHover_B.Add
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 33;
	
	  ;% ARDroneHover_B.Clock1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 36;
	
	  ;% ARDroneHover_B.Vel_xy
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 37;
	
	  ;% ARDroneHover_B.w_r
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 39;
	
	  ;% ARDroneHover_B.dot_psi_r
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 40;
	
	  ;% ARDroneHover_B.theta_r
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 41;
	
	  ;% ARDroneHover_B.phi_r
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% ARDroneHover_B.dot_xi
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 43;
	
	  ;% ARDroneHover_B.angleOut
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 47;
	
	  ;% ARDroneHover_B.yawOut
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 48;
	
	  ;% ARDroneHover_B.isFlying
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 49;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.Gain
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.Gain9
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.Gain10
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.Gain6
	  section.data(4).logicalSrcIdx = 33;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_B.Gain7
	  section.data(5).logicalSrcIdx = 34;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.Roll
	  section.data(6).logicalSrcIdx = 35;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.PacketInput_o1
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.PacketInput1_o1
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 500;
	
	  ;% ARDroneHover_B.RateTransition
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 564;
	
	  ;% ARDroneHover_B.dataControl
	  section.data(4).logicalSrcIdx = 39;
	  section.data(4).dtTransOffset = 566;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.PacketInput_o2
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.Compare
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat5.y
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat4.y
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat3.y
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat2.y
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat1.y
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.BitConcat.y
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
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
    nTotSects     = 5;
    sectIdxOffset = 10;
    
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
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.yaw0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 5;
	
	  ;% ARDroneHover_DW.mode
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% ARDroneHover_DW.SequenceNumber
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% ARDroneHover_DW.count
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% ARDroneHover_DW.countHeader
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 9;
	
	  ;% ARDroneHover_DW.countBuffer
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 10;
	
	  ;% ARDroneHover_DW.hPrev
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.PacketInput_PWORK
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.PacketInput1_PWORK
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.Euleranglesdeg_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_DW.Heightm_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_DW.InertialpotitionalongXem_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_DW.InertialpotitionalongYem_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_DW.ToWorkspace_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_DW.headingdeg_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ARDroneHover_DW.PacketOutput_PWORK
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ARDroneHover_DW.PacketOutput1_PWORK
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 10;
	
	  ;% ARDroneHover_DW.error_phi_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 12;
	
	  ;% ARDroneHover_DW.error_psi_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 13;
	
	  ;% ARDroneHover_DW.error_theta_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 14;
	
	  ;% ARDroneHover_DW.errorx_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 22;
	  section.data(14).dtTransOffset = 15;
	
	  ;% ARDroneHover_DW.errory_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 23;
	  section.data(15).dtTransOffset = 16;
	
	  ;% ARDroneHover_DW.errorz_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 24;
	  section.data(16).dtTransOffset = 17;
	
	  ;% ARDroneHover_DW.psipsi_d_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 25;
	  section.data(17).dtTransOffset = 18;
	
	  ;% ARDroneHover_DW.integralstate_PWORK.LoggedData
	  section.data(18).logicalSrcIdx = 26;
	  section.data(18).dtTransOffset = 19;
	
	  ;% ARDroneHover_DW.ToWorkspace6_PWORK.LoggedData
	  section.data(19).logicalSrcIdx = 27;
	  section.data(19).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.Integrator_IWORK
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.frame
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.lastFrame
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 496;
	
	  ;% ARDroneHover_DW.buffer
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 992;
	
	  ;% ARDroneHover_DW.dataPrev
	  section.data(4).logicalSrcIdx = 33;
	  section.data(4).dtTransOffset = 2016;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
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


  targMap.checksum0 = 3815497446;
  targMap.checksum1 = 4030339132;
  targMap.checksum2 = 46755770;
  targMap.checksum3 = 3497617164;

