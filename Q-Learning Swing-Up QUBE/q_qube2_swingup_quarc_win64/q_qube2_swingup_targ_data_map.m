  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
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
    ;% Auto data (q_qube2_swingup_P)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.Q_init
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.actInfo
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 12288;
	
	  ;% q_qube2_swingup_P.buckets
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12291;
	
	  ;% q_qube2_swingup_P.episode
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 12292;
	
	  ;% q_qube2_swingup_P.tau_max
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12293;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.HILWriteAnalog_channels
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.HILInitialize_OOTerminate
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.HILInitialize_OOExit
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_P.HILInitialize_OOStart
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_swingup_P.HILInitialize_OOEnter
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOFinal
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOHigh
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOLow
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOInitial
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOWatchdog
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_qube2_swingup_P.Delay_InitialCondition
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_qube2_swingup_P.u0V_UpperSat
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_qube2_swingup_P.u0V_LowerSat
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_qube2_swingup_P.Armcountstorad_Gain
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_qube2_swingup_P.theta_dot_A
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_qube2_swingup_P.theta_dot_C
	  section.data(15).logicalSrcIdx = 20;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_qube2_swingup_P.theta_dot_D
	  section.data(16).logicalSrcIdx = 21;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_qube2_swingup_P.Pendulumcountstorad_Gain
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_qube2_swingup_P.alpha_dot_A
	  section.data(18).logicalSrcIdx = 23;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_qube2_swingup_P.alpha_dot_C
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_qube2_swingup_P.alpha_dot_D
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_qube2_swingup_P.Constant4_Value
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_qube2_swingup_P.Bias3_Bias
	  section.data(22).logicalSrcIdx = 27;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_qube2_swingup_P.Constant2_Value
	  section.data(23).logicalSrcIdx = 28;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_qube2_swingup_P.Bias2_Bias
	  section.data(24).logicalSrcIdx = 29;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_qube2_swingup_P.Constant3_Value
	  section.data(25).logicalSrcIdx = 30;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_qube2_swingup_P.Constant_Value
	  section.data(26).logicalSrcIdx = 31;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_qube2_swingup_P.Bias1_Bias
	  section.data(27).logicalSrcIdx = 32;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_qube2_swingup_P.Gain4_Gain
	  section.data(28).logicalSrcIdx = 33;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_qube2_swingup_P.Gain_Gain
	  section.data(29).logicalSrcIdx = 34;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_qube2_swingup_P.Gain5_Gain
	  section.data(30).logicalSrcIdx = 35;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_qube2_swingup_P.Gain3_Gain
	  section.data(31).logicalSrcIdx = 36;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_qube2_swingup_P.Gain1_Gain
	  section.data(32).logicalSrcIdx = 37;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_qube2_swingup_P.Constant1_Value
	  section.data(33).logicalSrcIdx = 38;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_qube2_swingup_P.Memory2_InitialCondition
	  section.data(34).logicalSrcIdx = 39;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_qube2_swingup_P.Memory3_InitialCondition
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 37;
	
	  ;% q_qube2_swingup_P.Memory1_InitialCondition
	  section.data(36).logicalSrcIdx = 41;
	  section.data(36).dtTransOffset = 38;
	
	  ;% q_qube2_swingup_P.ForveCCW_Gain
	  section.data(37).logicalSrcIdx = 42;
	  section.data(37).dtTransOffset = 39;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIInitial
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_P.HILReadEncoderTimebase_Clock
	  section.data(3).logicalSrcIdx = 45;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.HILInitialize_AOChannels
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIChannels
	  section.data(2).logicalSrcIdx = 47;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIQuadrature
	  section.data(3).logicalSrcIdx = 48;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_P.HILReadEncoderTimebase_Channels
	  section.data(4).logicalSrcIdx = 49;
	  section.data(4).dtTransOffset = 4;
	
	  ;% q_qube2_swingup_P.HILReadEncoderTimebase_SamplesI
	  section.data(5).logicalSrcIdx = 50;
	  section.data(5).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 52;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 53;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 54;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 55;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_swingup_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 56;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_swingup_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 57;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_swingup_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 58;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_swingup_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 59;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_qube2_swingup_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 60;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_qube2_swingup_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 61;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_qube2_swingup_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 62;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_qube2_swingup_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 63;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 64;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 65;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 66;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 67;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_qube2_swingup_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 68;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 69;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 70;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 71;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 72;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_qube2_swingup_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 73;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 74;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 75;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 76;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_qube2_swingup_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 77;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_qube2_swingup_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 78;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_qube2_swingup_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 79;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_qube2_swingup_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 80;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_qube2_swingup_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 81;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_qube2_swingup_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 82;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_qube2_swingup_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 83;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_qube2_swingup_P.HILReadEncoderTimebase_Active
	  section.data(34).logicalSrcIdx = 84;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_qube2_swingup_P.HILWriteAnalog_Active
	  section.data(35).logicalSrcIdx = 85;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_P.Gain6_Gain
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_P.HILReadEncoderTimebase_Overflow
	  section.data(2).logicalSrcIdx = 87;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
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
    ;% Auto data (q_qube2_swingup_B)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_B.Memory
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_B.Delay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 12288;
	
	  ;% q_qube2_swingup_B.u0V
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12289;
	
	  ;% q_qube2_swingup_B.Armcountstorad
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 12290;
	
	  ;% q_qube2_swingup_B.theta_dot
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12291;
	
	  ;% q_qube2_swingup_B.RateTransition
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 12292;
	
	  ;% q_qube2_swingup_B.Pendulumcountstorad
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12293;
	
	  ;% q_qube2_swingup_B.alpha_dot
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12294;
	
	  ;% q_qube2_swingup_B.RateTransition1
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12295;
	
	  ;% q_qube2_swingup_B.Bias2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 12296;
	
	  ;% q_qube2_swingup_B.Bias1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12297;
	
	  ;% q_qube2_swingup_B.Add
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12298;
	
	  ;% q_qube2_swingup_B.CumulativeSum
	  section.data(13).logicalSrcIdx = 16;
	  section.data(13).dtTransOffset = 12299;
	
	  ;% q_qube2_swingup_B.action
	  section.data(14).logicalSrcIdx = 18;
	  section.data(14).dtTransOffset = 12300;
	
	  ;% q_qube2_swingup_B.Q
	  section.data(15).logicalSrcIdx = 19;
	  section.data(15).dtTransOffset = 12301;
	
	  ;% q_qube2_swingup_B.discreteState
	  section.data(16).logicalSrcIdx = 20;
	  section.data(16).dtTransOffset = 24589;
	
	  ;% q_qube2_swingup_B.maxQ
	  section.data(17).logicalSrcIdx = 21;
	  section.data(17).dtTransOffset = 24593;
	
	  ;% q_qube2_swingup_B.maxIndex
	  section.data(18).logicalSrcIdx = 22;
	  section.data(18).dtTransOffset = 24594;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_B.Gain6
	  section.data(1).logicalSrcIdx = 23;
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
    nTotSects     = 6;
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
    ;% Auto data (q_qube2_swingup_DW)
    ;%
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.Delay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_DW.HILInitialize_FilterFrequency
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_DW.Memory_PreviousInput
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_DW.Memory2_PreviousInput
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 12291;
	
	  ;% q_qube2_swingup_DW.Memory3_PreviousInput
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12295;
	
	  ;% q_qube2_swingup_DW.Memory1_PreviousInput
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 12296;
	
	  ;% q_qube2_swingup_DW.CumulativeSum_RunningCumVal
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12297;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.HILReadEncoderTimebase_Task
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.ToWorkspace2_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_DW.VmV_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_DW.HILWriteAnalog_PWORK
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_swingup_DW.Scope_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_DW.Scope1_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_qube2_swingup_DW.Scope2_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_qube2_swingup_DW.Scope3_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_qube2_swingup_DW.Scope4_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_qube2_swingup_DW.Scope5_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_qube2_swingup_DW.Scope6_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_qube2_swingup_DW.Scope7_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_qube2_swingup_DW.Scope9_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_qube2_swingup_DW.ToWorkspace3_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 3;
	
	  ;% q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_qube2_swingup_DW.method
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_qube2_swingup_DW.state
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_qube2_swingup_DW.state_n
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_qube2_swingup_DW.state_m
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
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


  targMap.checksum0 = 23202989;
  targMap.checksum1 = 2967210451;
  targMap.checksum2 = 2684489686;
  targMap.checksum3 = 2545215438;

