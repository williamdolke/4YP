  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
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
    ;% Auto data (q_qube2_bal_rl_hw_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.alpha_bal_threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.HILWriteAnalog_channels
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.u0V_Value
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_OOTerminate
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_OOExit
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_OOStart
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_OOEnter
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOFinal
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOHigh
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOLow
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOInitial
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOWatchdog
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_qube2_bal_rl_hw_P.Pendulumcountstorad_Gain
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_qube2_bal_rl_hw_P.Constant2_Value
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_qube2_bal_rl_hw_P.Bias_Bias
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_qube2_bal_rl_hw_P.Gain_Gain
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_qube2_bal_rl_hw_P.Armcountstorad_Gain
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_qube2_bal_rl_hw_P.Gain_Gain_a
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_qube2_bal_rl_hw_P.Step2_Time
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_qube2_bal_rl_hw_P.Step2_Y0
	  section.data(18).logicalSrcIdx = 19;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_qube2_bal_rl_hw_P.Step2_YFinal
	  section.data(19).logicalSrcIdx = 20;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_qube2_bal_rl_hw_P.SetpointStateXd2_Value
	  section.data(20).logicalSrcIdx = 21;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_qube2_bal_rl_hw_P.Step1_Time
	  section.data(21).logicalSrcIdx = 22;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_qube2_bal_rl_hw_P.Step1_Y0
	  section.data(22).logicalSrcIdx = 23;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_qube2_bal_rl_hw_P.Step1_YFinal
	  section.data(23).logicalSrcIdx = 24;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_qube2_bal_rl_hw_P.SetpointStateXd1_Value
	  section.data(24).logicalSrcIdx = 25;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_qube2_bal_rl_hw_P.u0V_UpperSat
	  section.data(25).logicalSrcIdx = 26;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_qube2_bal_rl_hw_P.u0V_LowerSat
	  section.data(26).logicalSrcIdx = 27;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_qube2_bal_rl_hw_P.ForveCCW_Gain
	  section.data(27).logicalSrcIdx = 28;
	  section.data(27).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIInitial
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_Clock
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.action_Y0
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_P.Scaling_Gain
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOChannels
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIChannels
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIQuadrature
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_Channels
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 4;
	
	  ;% q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_SamplesI
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 40;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 41;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 42;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 43;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 44;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 45;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 46;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 47;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 48;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 49;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 50;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 51;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 52;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 53;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 54;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 55;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 56;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 57;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 58;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 59;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 60;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 61;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 62;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 63;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 64;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 65;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 66;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 67;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 68;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 69;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 70;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_qube2_bal_rl_hw_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 71;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_Active
	  section.data(34).logicalSrcIdx = 72;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_qube2_bal_rl_hw_P.HILWriteAnalog_Active
	  section.data(35).logicalSrcIdx = 73;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_Overflow
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
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
    nTotSects     = 2;
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
    ;% Auto data (q_qube2_bal_rl_hw_B)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_B.Bias
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_B.Gain
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_B.Armcountstorad
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_bal_rl_hw_B.Gain_i
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_B.Sum3
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_bal_rl_hw_B.theta_dot
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_bal_rl_hw_B.alpha_dot
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_bal_rl_hw_B.u0V
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_bal_rl_hw_B.Sum
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_B.Scaling
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    nTotSects     = 8;
    sectIdxOffset = 2;
    
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
    ;% Auto data (q_qube2_bal_rl_hw_DW)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.HILInitialize_FilterFrequency
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_DW.TimeStampA
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% q_qube2_bal_rl_hw_DW.LastUAtTimeA
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_DW.TimeStampB
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% q_qube2_bal_rl_hw_DW.LastUAtTimeB
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% q_qube2_bal_rl_hw_DW.TimeStampA_k
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% q_qube2_bal_rl_hw_DW.LastUAtTimeA_f
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% q_qube2_bal_rl_hw_DW.TimeStampB_f
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% q_qube2_bal_rl_hw_DW.LastUAtTimeB_o
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.HILReadEncoderTimebase_Task
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.InvertedPendulumdeg_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_DW.RotaryArmdeg_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_DW.VmV_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_bal_rl_hw_DW.HILWriteAnalog_PWORK
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_DW.Scope_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_bal_rl_hw_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_bal_rl_hw_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_bal_rl_hw_DW.HILReadEncoderTimebase_Buffer
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.Agent_SubsysRanBC
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.network_not_empty
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_bal_rl_hw_DW.network
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
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


  targMap.checksum0 = 3386728568;
  targMap.checksum1 = 1008617804;
  targMap.checksum2 = 203297031;
  targMap.checksum3 = 3055971058;

