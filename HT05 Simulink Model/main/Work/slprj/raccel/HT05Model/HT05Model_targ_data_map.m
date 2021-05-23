  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
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
    ;% Auto data (ihnh5ag1lp)
    ;%
      section.nData     = 54;
      section.data(54)  = dumData; %prealloc
      
	  ;% ihnh5ag1lp.SignalHold_IC
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ihnh5ag1lp.SignalHold_IC_i4j3zendoc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_Kpt
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_L
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_aR
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_bR
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_cR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_m
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ihnh5ag1lp.LongitudinalDriver_tau
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ihnh5ag1lp.u1_UpperSat
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ihnh5ag1lp.u1_LowerSat
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ihnh5ag1lp.u0_UpperSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ihnh5ag1lp.u0_LowerSat
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ihnh5ag1lp.Switch_Threshold
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ihnh5ag1lp.uDLookupTable_tableData
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ihnh5ag1lp.uDLookupTable_bp01Data
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 416;
	
	  ;% ihnh5ag1lp.MotorCouplingDynamics_A
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 817;
	
	  ;% ihnh5ag1lp.MotorCouplingDynamics_C
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 818;
	
	  ;% ihnh5ag1lp.RateTransition3_InitialCondition
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 819;
	
	  ;% ihnh5ag1lp.mstomph_Gain
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 820;
	
	  ;% ihnh5ag1lp.radstoRPM_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 821;
	
	  ;% ihnh5ag1lp.BatteryDischargeDynamics_A
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 822;
	
	  ;% ihnh5ag1lp.BatteryDischargeDynamics_C
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 823;
	
	  ;% ihnh5ag1lp.RateTransition5_InitialCondition
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 824;
	
	  ;% ihnh5ag1lp.Integrator_IC
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 825;
	
	  ;% ihnh5ag1lp.mtomile_Gain
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 826;
	
	  ;% ihnh5ag1lp.Integrator1_IC
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 827;
	
	  ;% ihnh5ag1lp.m3toUSGal_Gain
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 828;
	
	  ;% ihnh5ag1lp.Saturation1_UpperSat
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 829;
	
	  ;% ihnh5ag1lp.Saturation1_LowerSat
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 830;
	
	  ;% ihnh5ag1lp.Integrator_IC_c3j2xauzq0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 831;
	
	  ;% ihnh5ag1lp.mto100Km_Gain
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 832;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 833;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 834;
	
	  ;% ihnh5ag1lp.m3pergal_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 835;
	
	  ;% ihnh5ag1lp.Integrator1_IC_kyv4sp114t
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 836;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat_bmv04wlgug
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 837;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat_k4oqasoblp
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 838;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat_ekydxm2ndj
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 839;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat_ijnrsojihl
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 840;
	
	  ;% ihnh5ag1lp.HitCrossing_Offset
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 841;
	
	  ;% ihnh5ag1lp.Integrator2_IC
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 842;
	
	  ;% ihnh5ag1lp.UnitDelay_InitialCondition
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 843;
	
	  ;% ihnh5ag1lp.USEPAkwhUSgalequivalent_Value
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 845;
	
	  ;% ihnh5ag1lp.sperh_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 846;
	
	  ;% ihnh5ag1lp.wperkw_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 847;
	
	  ;% ihnh5ag1lp.repeat_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 848;
	
	  ;% ihnh5ag1lp.tFinal_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 849;
	
	  ;% ihnh5ag1lp.Constant2_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 850;
	
	  ;% ihnh5ag1lp.Constant3_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 851;
	
	  ;% ihnh5ag1lp.Constant6_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 852;
	
	  ;% ihnh5ag1lp.Constant_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 853;
	
	  ;% ihnh5ag1lp.Constant_Value_azk0zfkyc5
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 854;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
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
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (hfe00hbwscw)
    ;%
      section.nData     = 63;
      section.data(63)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.etwgbqvkif
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfe00hbwscw.kwter11yih
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hfe00hbwscw.cvgkryez0y
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hfe00hbwscw.k2nvq1dfvz
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hfe00hbwscw.krfdbjpt0e
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hfe00hbwscw.hnqecwtek3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hfe00hbwscw.gz5o4hus3a
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% hfe00hbwscw.nou3xfrkex
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% hfe00hbwscw.bejosqgptz
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% hfe00hbwscw.k0jcwtesdh
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% hfe00hbwscw.hawg1v30vs
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 13;
	
	  ;% hfe00hbwscw.awbv4lz2br
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 14;
	
	  ;% hfe00hbwscw.cawpxxfynl
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% hfe00hbwscw.op2bbilkhu
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% hfe00hbwscw.i4av10pedr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% hfe00hbwscw.k5wjbiecdv
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% hfe00hbwscw.jcnijfpmie
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 19;
	
	  ;% hfe00hbwscw.hs1nxcdsu1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% hfe00hbwscw.kpv1qapnbc
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 21;
	
	  ;% hfe00hbwscw.pb4y5y3noy
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% hfe00hbwscw.gxpwwcihxi
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 23;
	
	  ;% hfe00hbwscw.kwlhepleti
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 24;
	
	  ;% hfe00hbwscw.egwqx4bk1t
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 25;
	
	  ;% hfe00hbwscw.jglg55uozd
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 26;
	
	  ;% hfe00hbwscw.bki5dqleao
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 27;
	
	  ;% hfe00hbwscw.jtp5gfufnu
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 28;
	
	  ;% hfe00hbwscw.ajoldyqnvn
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 29;
	
	  ;% hfe00hbwscw.gslrwelsee
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 30;
	
	  ;% hfe00hbwscw.o035i4hwxg
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 32;
	
	  ;% hfe00hbwscw.pue040sedo
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 33;
	
	  ;% hfe00hbwscw.egun0lxqwh
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 34;
	
	  ;% hfe00hbwscw.fssj4vhwqd
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 35;
	
	  ;% hfe00hbwscw.fqgurvz30p
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 36;
	
	  ;% hfe00hbwscw.jaqygtbwrp
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 37;
	
	  ;% hfe00hbwscw.juedzmwz13
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 38;
	
	  ;% hfe00hbwscw.kpjtu3yzip
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 39;
	
	  ;% hfe00hbwscw.kmcqv24afd
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 40;
	
	  ;% hfe00hbwscw.l1thberrgp
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 41;
	
	  ;% hfe00hbwscw.lfrzqxjyja
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 42;
	
	  ;% hfe00hbwscw.o5n5eexjon
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 43;
	
	  ;% hfe00hbwscw.e51yutiqek
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 44;
	
	  ;% hfe00hbwscw.fbfzjqwa5a
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 45;
	
	  ;% hfe00hbwscw.mkqparta3r
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 46;
	
	  ;% hfe00hbwscw.a2zj1koo4k
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 47;
	
	  ;% hfe00hbwscw.ldaenjp42v
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 48;
	
	  ;% hfe00hbwscw.f53jjpuuxm
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 49;
	
	  ;% hfe00hbwscw.hhj0p0jony
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 50;
	
	  ;% hfe00hbwscw.kftazr0hxl
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 51;
	
	  ;% hfe00hbwscw.ciswg50jx3
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 52;
	
	  ;% hfe00hbwscw.dptryos4oj
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 53;
	
	  ;% hfe00hbwscw.hqkezymrab
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 54;
	
	  ;% hfe00hbwscw.gubzcq5ria
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 55;
	
	  ;% hfe00hbwscw.dbbyin35a2
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 56;
	
	  ;% hfe00hbwscw.mddysgelnk
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 57;
	
	  ;% hfe00hbwscw.gsta4lel3i
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 58;
	
	  ;% hfe00hbwscw.nmwnavsv0t
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 59;
	
	  ;% hfe00hbwscw.a5hkkkfjhl
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 60;
	
	  ;% hfe00hbwscw.bruwu4miax
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 61;
	
	  ;% hfe00hbwscw.kpzjlc45u3
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 62;
	
	  ;% hfe00hbwscw.h104oeui3c
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 63;
	
	  ;% hfe00hbwscw.f4ilyp355v
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 65;
	
	  ;% hfe00hbwscw.kp4tq4fada
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 67;
	
	  ;% hfe00hbwscw.j3ea3swoth
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 68;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.aq22d4vedt
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfe00hbwscw.lr0af5qksa
	  section.data(2).logicalSrcIdx = 64;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hfe00hbwscw.ottghukoth
	  section.data(3).logicalSrcIdx = 65;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hfe00hbwscw.drvm4uwfmo
	  section.data(4).logicalSrcIdx = 66;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.ovj5vn4ci5.kifcmajf5q
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.g31xp5tryrk.kifcmajf5q
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
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
    nTotSects     = 13;
    sectIdxOffset = 4;
    
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
    ;% Auto data (bcuvylxhefc)
    ;%
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.mrofomoj1z
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.k0zcask0cc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% bcuvylxhefc.ngtzwyl1pu
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% bcuvylxhefc.e4gjlzj1lq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% bcuvylxhefc.i5uql30i2j
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% bcuvylxhefc.kap0odr3kj
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% bcuvylxhefc.klgv0izvyu
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 9;
	
	  ;% bcuvylxhefc.hp5pufrajm
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% bcuvylxhefc.j1c3q5x2i4
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% bcuvylxhefc.cptmanfsa1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% bcuvylxhefc.j5bb1yym0w
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% bcuvylxhefc.nos2ft3sic
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% bcuvylxhefc.n3mkw34cn5
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% bcuvylxhefc.h1tau0ecpq
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% bcuvylxhefc.kmrimj41ij
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% bcuvylxhefc.kebrerroqx
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.geedj4d40x.LoggedData
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.akwmyi3elg.LoggedData
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 6;
	
	  ;% bcuvylxhefc.dbduharpby.AQHandles
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 7;
	
	  ;% bcuvylxhefc.dkmsy4vtjq.AQHandles
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 8;
	
	  ;% bcuvylxhefc.o142ktwdad.AQHandles
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 9;
	
	  ;% bcuvylxhefc.cbpif1banu.AQHandles
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 10;
	
	  ;% bcuvylxhefc.ks1fvl1d0d.AQHandles
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.odmqgoxpmf
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.hn5nuy0lbc
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.nxsdzjpe5i
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ep2boc231g
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.piumrtffmp
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bcuvylxhefc.oijmj1tdxd
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
	  ;% bcuvylxhefc.anfmogqnpx
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 3;
	
	  ;% bcuvylxhefc.jse5bdwgjj
	  section.data(5).logicalSrcIdx = 30;
	  section.data(5).dtTransOffset = 4;
	
	  ;% bcuvylxhefc.fqundvylsh
	  section.data(6).logicalSrcIdx = 31;
	  section.data(6).dtTransOffset = 5;
	
	  ;% bcuvylxhefc.egwjbtmbyq
	  section.data(7).logicalSrcIdx = 32;
	  section.data(7).dtTransOffset = 6;
	
	  ;% bcuvylxhefc.bsjrzyb4mr
	  section.data(8).logicalSrcIdx = 33;
	  section.data(8).dtTransOffset = 7;
	
	  ;% bcuvylxhefc.llz0iknlo0
	  section.data(9).logicalSrcIdx = 34;
	  section.data(9).dtTransOffset = 8;
	
	  ;% bcuvylxhefc.a5czhakwii
	  section.data(10).logicalSrcIdx = 35;
	  section.data(10).dtTransOffset = 9;
	
	  ;% bcuvylxhefc.l1ffn0wiag
	  section.data(11).logicalSrcIdx = 36;
	  section.data(11).dtTransOffset = 10;
	
	  ;% bcuvylxhefc.fiqovchppi
	  section.data(12).logicalSrcIdx = 37;
	  section.data(12).dtTransOffset = 11;
	
	  ;% bcuvylxhefc.oxgd34m1rt
	  section.data(13).logicalSrcIdx = 38;
	  section.data(13).dtTransOffset = 12;
	
	  ;% bcuvylxhefc.i51uahy2gc
	  section.data(14).logicalSrcIdx = 39;
	  section.data(14).dtTransOffset = 13;
	
	  ;% bcuvylxhefc.jtthydvh1h
	  section.data(15).logicalSrcIdx = 40;
	  section.data(15).dtTransOffset = 14;
	
	  ;% bcuvylxhefc.kgr2bmvhtp
	  section.data(16).logicalSrcIdx = 41;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.iajxel3ezk
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ondfxuidp3
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.enbv0wioc4
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.alzb1lqr5t
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ovj5vn4ci5.knuormdudr
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ovj5vn4ci5.dl3ftk2vvc
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.g31xp5tryrk.knuormdudr
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.g31xp5tryrk.dl3ftk2vvc
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
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


  targMap.checksum0 = 3610673230;
  targMap.checksum1 = 947650704;
  targMap.checksum2 = 2779343099;
  targMap.checksum3 = 416087025;

