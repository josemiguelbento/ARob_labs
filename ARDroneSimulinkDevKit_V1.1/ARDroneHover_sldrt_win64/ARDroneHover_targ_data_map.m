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
    ;% Auto data (ARDroneHover_P)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.UDPReceive1_localPort
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.UDPSend_remotePort
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.UDPSend_remotePort_a
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 32;
      section.data(32)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.commandsenabled_Value
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.commandsdisabled_Value
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.takeoff_Value
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.land_Value
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_P.stop_Value
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_P._Value
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_P.Constant1_Value
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ARDroneHover_P.UnitDelaytoavoidalgebraicloop_InitialCondition
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 8;
	
	  ;% ARDroneHover_P.deg2rad_Gain
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 9;
	
	  ;% ARDroneHover_P.deg2rad1_Gain
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 10;
	
	  ;% ARDroneHover_P.Heightrefm_Value
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 11;
	
	  ;% ARDroneHover_P.proportionalcontrolgain_Gain
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 12;
	
	  ;% ARDroneHover_P.Saturation4_UpperSat
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 13;
	
	  ;% ARDroneHover_P.Saturation4_LowerSat
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 14;
	
	  ;% ARDroneHover_P.InertialXrefm_Value
	  section.data(15).logicalSrcIdx = 17;
	  section.data(15).dtTransOffset = 15;
	
	  ;% ARDroneHover_P.InertialYrefm_Value
	  section.data(16).logicalSrcIdx = 18;
	  section.data(16).dtTransOffset = 16;
	
	  ;% ARDroneHover_P.Gain3_Gain
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 17;
	
	  ;% ARDroneHover_P.Gain1_Gain
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 18;
	
	  ;% ARDroneHover_P.Saturation1_UpperSat
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 19;
	
	  ;% ARDroneHover_P.Saturation1_LowerSat
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 20;
	
	  ;% ARDroneHover_P.Gain2_Gain
	  section.data(21).logicalSrcIdx = 23;
	  section.data(21).dtTransOffset = 21;
	
	  ;% ARDroneHover_P.Gain_Gain
	  section.data(22).logicalSrcIdx = 24;
	  section.data(22).dtTransOffset = 22;
	
	  ;% ARDroneHover_P.Saturation2_UpperSat
	  section.data(23).logicalSrcIdx = 25;
	  section.data(23).dtTransOffset = 23;
	
	  ;% ARDroneHover_P.Saturation2_LowerSat
	  section.data(24).logicalSrcIdx = 26;
	  section.data(24).dtTransOffset = 24;
	
	  ;% ARDroneHover_P.Headingrefrad_Value
	  section.data(25).logicalSrcIdx = 27;
	  section.data(25).dtTransOffset = 25;
	
	  ;% ARDroneHover_P.proportionalcontrolgainyaw_Gain
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 26;
	
	  ;% ARDroneHover_P.Saturation3_UpperSat
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 27;
	
	  ;% ARDroneHover_P.Saturation3_LowerSat
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 28;
	
	  ;% ARDroneHover_P.SimulationPace_P1
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 29;
	
	  ;% ARDroneHover_P.SimulationPace_P2
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 30;
	
	  ;% ARDroneHover_P.SimulationPace_P3
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 31;
	
	  ;% ARDroneHover_P.SimulationPace_P4
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_P.ManualSwitch2_CurrentSetting
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_P.ManualSwitch1_CurrentSetting
	  section.data(2).logicalSrcIdx = 36;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_P.KillSwitch_CurrentSetting
	  section.data(3).logicalSrcIdx = 37;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_P.Constant_Value
	  section.data(4).logicalSrcIdx = 38;
	  section.data(4).dtTransOffset = 3;
	
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
    ;% Auto data (ARDroneHover_B)
    ;%
      section.nData     = 44;
      section.data(44)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.TypeConversion
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.TypeConversion4
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.Constant1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.Integrator
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.TypeConversion1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% ARDroneHover_B.TypeConversion2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% ARDroneHover_B.UnitDelaytoavoidalgebraicloop
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% ARDroneHover_B.ManualSwitch2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% ARDroneHover_B.TypeConversion3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% ARDroneHover_B.deg2rad
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% ARDroneHover_B.TypeConversion5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% ARDroneHover_B.TypeConversion6
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% ARDroneHover_B.TypeConversion7
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% ARDroneHover_B.deg2rad1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 26;
	
	  ;% ARDroneHover_B.Heightrefm
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% ARDroneHover_B.Sum3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 28;
	
	  ;% ARDroneHover_B.proportionalcontrolgain
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 29;
	
	  ;% ARDroneHover_B.Saturation4
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 30;
	
	  ;% ARDroneHover_B.Sum4
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 31;
	
	  ;% ARDroneHover_B.Gain3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 33;
	
	  ;% ARDroneHover_B.Sum5
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 34;
	
	  ;% ARDroneHover_B.Gain1
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 35;
	
	  ;% ARDroneHover_B.Saturation1
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 36;
	
	  ;% ARDroneHover_B.Gain2
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 37;
	
	  ;% ARDroneHover_B.Sum2
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 38;
	
	  ;% ARDroneHover_B.Gain
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 39;
	
	  ;% ARDroneHover_B.Saturation2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 40;
	
	  ;% ARDroneHover_B.Sum1
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 41;
	
	  ;% ARDroneHover_B.proportionalcontrolgainyaw
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 42;
	
	  ;% ARDroneHover_B.Saturation3
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 43;
	
	  ;% ARDroneHover_B.ManualSwitch1
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 44;
	
	  ;% ARDroneHover_B.KillSwitch
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 45;
	
	  ;% ARDroneHover_B.TmpSignalConversionAtSFunctionInport1
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 46;
	
	  ;% ARDroneHover_B.Vel_xy
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 48;
	
	  ;% ARDroneHover_B.Vec_xy
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 50;
	
	  ;% ARDroneHover_B.angleOut
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 52;
	
	  ;% ARDroneHover_B.yawOut
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 53;
	
	  ;% ARDroneHover_B.isFlying
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 54;
	
	  ;% ARDroneHover_B.error
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 55;
	
	  ;% ARDroneHover_B.flagOut
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 56;
	
	  ;% ARDroneHover_B.status
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 57;
	
	  ;% ARDroneHover_B.height
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 89;
	
	  ;% ARDroneHover_B.cksumError
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 90;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.battery
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.rollAngle
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.pitchAngle
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_B.yawAngle
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_B.u
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_B.v
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_B.w
	  section.data(6).logicalSrcIdx = 50;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.UDPReceive1_o2
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_B.UDPReceive1_o1
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_B.RateTransition
	  section.data(2).logicalSrcIdx = 53;
	  section.data(2).dtTransOffset = 500;
	
	  ;% ARDroneHover_B.dataControl
	  section.data(3).logicalSrcIdx = 54;
	  section.data(3).dtTransOffset = 502;
	
	  ;% ARDroneHover_B.frameOut
	  section.data(4).logicalSrcIdx = 55;
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
    ;% Auto data (ARDroneHover_DW)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.UDPReceive1_NetworkLib
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.UDPSend_NetworkLib
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 138;
	
	  ;% ARDroneHover_DW.UDPSend_NetworkLib_h
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 275;
	
	  ;% ARDroneHover_DW.yaw0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 412;
	
	  ;% ARDroneHover_DW.mode
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 413;
	
	  ;% ARDroneHover_DW.SequenceNumber
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 414;
	
	  ;% ARDroneHover_DW.count
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 415;
	
	  ;% ARDroneHover_DW.countHeader
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 416;
	
	  ;% ARDroneHover_DW.countBuffer
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 417;
	
	  ;% ARDroneHover_DW.hPrev
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 418;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.Heightm_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.InertialpositionalongXem_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ARDroneHover_DW.InertialpositionalongYem_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ARDroneHover_DW.ToWorkspace_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ARDroneHover_DW.headingdeg_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ARDroneHover_DW.Scope_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ARDroneHover_DW.ToWorkspace_PWORK_j.LoggedData
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 8;
	
	  ;% ARDroneHover_DW.Scope_PWORK_e.LoggedData
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.Integrator_IWORK
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% ARDroneHover_DW.frame
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ARDroneHover_DW.lastFrame
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 496;
	
	  ;% ARDroneHover_DW.buffer
	  section.data(3).logicalSrcIdx = 22;
	  section.data(3).dtTransOffset = 992;
	
	  ;% ARDroneHover_DW.dataPrev
	  section.data(4).logicalSrcIdx = 23;
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


  targMap.checksum0 = 4074309667;
  targMap.checksum1 = 2833079020;
  targMap.checksum2 = 2852712602;
  targMap.checksum3 = 2512653965;

