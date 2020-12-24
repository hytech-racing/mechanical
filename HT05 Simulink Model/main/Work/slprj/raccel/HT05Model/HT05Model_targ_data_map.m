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
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% ihnh5ag1lp.LongitudinalDriverModel_GearInit
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ihnh5ag1lp.SignalHold_IC
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_Kpt
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_L
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_aR
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_bR
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_cR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_m
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_tShift
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ihnh5ag1lp.LongitudinalDriverModel_tau
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ihnh5ag1lp.u1_UpperSat
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ihnh5ag1lp.u1_LowerSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ihnh5ag1lp.u0_UpperSat
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ihnh5ag1lp.u0_LowerSat
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ihnh5ag1lp.Constant_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ihnh5ag1lp.Constant_Value_nhp3htkj21
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ihnh5ag1lp.Switch_Threshold
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ihnh5ag1lp.uDLookupTable_tableData
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% ihnh5ag1lp.uDLookupTable_bp01Data
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 2492;
	
	  ;% ihnh5ag1lp.MotorCouplingDynamics_A
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 4966;
	
	  ;% ihnh5ag1lp.MotorCouplingDynamics_C
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 4967;
	
	  ;% ihnh5ag1lp.RateTransition3_InitialCondition
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 4968;
	
	  ;% ihnh5ag1lp.mstomph_Gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 4969;
	
	  ;% ihnh5ag1lp.radstoRPM_Gain
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 4970;
	
	  ;% ihnh5ag1lp.BatteryDischargeDynamics_A
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 4971;
	
	  ;% ihnh5ag1lp.BatteryDischargeDynamics_C
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 4972;
	
	  ;% ihnh5ag1lp.RateTransition5_InitialCondition
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 4973;
	
	  ;% ihnh5ag1lp.Integrator_IC
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 4974;
	
	  ;% ihnh5ag1lp.mtomile_Gain
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 4975;
	
	  ;% ihnh5ag1lp.Integrator1_IC
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 4976;
	
	  ;% ihnh5ag1lp.m3toUSGal_Gain
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 4977;
	
	  ;% ihnh5ag1lp.Saturation1_UpperSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 4978;
	
	  ;% ihnh5ag1lp.Saturation1_LowerSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 4979;
	
	  ;% ihnh5ag1lp.mto100Km_Gain
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 4980;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 4981;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 4982;
	
	  ;% ihnh5ag1lp.m3pergal_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 4983;
	
	  ;% ihnh5ag1lp.Integrator1_IC_ajivek24xs
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 4984;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat_ejlhkaxvm3
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 4985;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat_jq5vbx40o3
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 4986;
	
	  ;% ihnh5ag1lp.Saturation_UpperSat_n5cfzewtp3
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 4987;
	
	  ;% ihnh5ag1lp.Saturation_LowerSat_jdvecoiqp4
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 4988;
	
	  ;% ihnh5ag1lp.HitCrossing_Offset
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 4989;
	
	  ;% ihnh5ag1lp.Integrator2_IC
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 4990;
	
	  ;% ihnh5ag1lp.UnitDelay_InitialCondition
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 4991;
	
	  ;% ihnh5ag1lp.USEPAkwhUSgalequivalent_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 4993;
	
	  ;% ihnh5ag1lp.sperh_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 4994;
	
	  ;% ihnh5ag1lp.wperkw_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 4995;
	
	  ;% ihnh5ag1lp.repeat_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 4996;
	
	  ;% ihnh5ag1lp.tFinal_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 4997;
	
	  ;% ihnh5ag1lp.Constant2_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 4998;
	
	  ;% ihnh5ag1lp.Constant3_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 4999;
	
	  ;% ihnh5ag1lp.Constant6_Value
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 5000;
	
	  ;% ihnh5ag1lp.Constant_Value_mg0ii2c5jx
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 5001;
	
	  ;% ihnh5ag1lp.Constant_Value_lfd1si2n0l
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 5002;
	
	  ;% ihnh5ag1lp.Constant_Value_fb5mg350bv
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 5003;
	
	  ;% ihnh5ag1lp.Constant1_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 5004;
	
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
    ;% Auto data (hfe00hbwscw)
    ;%
      section.nData     = 65;
      section.data(65)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.dn2ipr3mo1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfe00hbwscw.e4yqhpgtcf
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hfe00hbwscw.kwter11yih
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hfe00hbwscw.cvgkryez0y
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hfe00hbwscw.k2nvq1dfvz
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hfe00hbwscw.krfdbjpt0e
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hfe00hbwscw.bejosqgptz
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% hfe00hbwscw.k0jcwtesdh
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% hfe00hbwscw.hawg1v30vs
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% hfe00hbwscw.awbv4lz2br
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% hfe00hbwscw.cawpxxfynl
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% hfe00hbwscw.op2bbilkhu
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% hfe00hbwscw.i4av10pedr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% hfe00hbwscw.k5wjbiecdv
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% hfe00hbwscw.jcnijfpmie
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% hfe00hbwscw.hs1nxcdsu1
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% hfe00hbwscw.kpv1qapnbc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% hfe00hbwscw.pb4y5y3noy
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% hfe00hbwscw.kwlhepleti
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% hfe00hbwscw.egwqx4bk1t
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% hfe00hbwscw.jglg55uozd
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% hfe00hbwscw.bki5dqleao
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% hfe00hbwscw.jtp5gfufnu
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% hfe00hbwscw.ajoldyqnvn
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% hfe00hbwscw.o035i4hwxg
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% hfe00hbwscw.pue040sedo
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% hfe00hbwscw.egun0lxqwh
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% hfe00hbwscw.fssj4vhwqd
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% hfe00hbwscw.fqgurvz30p
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% hfe00hbwscw.jaqygtbwrp
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% hfe00hbwscw.juedzmwz13
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% hfe00hbwscw.kpjtu3yzip
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% hfe00hbwscw.hd0j3gmmyn
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% hfe00hbwscw.ewcpkcxybh
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% hfe00hbwscw.jnfihtxxde
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% hfe00hbwscw.cmthjlvx0t
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% hfe00hbwscw.fx1tl3pc5j
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% hfe00hbwscw.lfrzqxjyja
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% hfe00hbwscw.o5n5eexjon
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% hfe00hbwscw.e51yutiqek
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 42;
	
	  ;% hfe00hbwscw.fbfzjqwa5a
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 43;
	
	  ;% hfe00hbwscw.mkqparta3r
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 44;
	
	  ;% hfe00hbwscw.a2zj1koo4k
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% hfe00hbwscw.ldaenjp42v
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% hfe00hbwscw.f53jjpuuxm
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% hfe00hbwscw.hhj0p0jony
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% hfe00hbwscw.fkmxmxweyx
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% hfe00hbwscw.j3cdx1rby1
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% hfe00hbwscw.hfrndgtdvk
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% hfe00hbwscw.bekklopwz5
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% hfe00hbwscw.gdkws0vsws
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% hfe00hbwscw.dkyaehby1j
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% hfe00hbwscw.p50dphabzy
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% hfe00hbwscw.feadjgjni4
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% hfe00hbwscw.adqo2rpmqv
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% hfe00hbwscw.gb4x2xlbw3
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% hfe00hbwscw.l511ehwbyg
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% hfe00hbwscw.d01a5ocxx2
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% hfe00hbwscw.asokvlgnxe
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% hfe00hbwscw.kmgjdorlmx
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 63;
	
	  ;% hfe00hbwscw.kp4tq4fada
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 65;
	
	  ;% hfe00hbwscw.lldsxsxwpp
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 66;
	
	  ;% hfe00hbwscw.etuneoeubc
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 67;
	
	  ;% hfe00hbwscw.dxi5ejdpzr
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 68;
	
	  ;% hfe00hbwscw.l152uhfy44
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 69;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% hfe00hbwscw.nmnvokqd32
	  section.data(1).logicalSrcIdx = 65;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfe00hbwscw.bm52wmv1x5
	  section.data(2).logicalSrcIdx = 66;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hfe00hbwscw.b1mzxh50u5
	  section.data(3).logicalSrcIdx = 67;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hfe00hbwscw.chtbrnbren
	  section.data(4).logicalSrcIdx = 68;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hfe00hbwscw.lqeerwztoi
	  section.data(5).logicalSrcIdx = 69;
	  section.data(5).dtTransOffset = 4;
	
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
    nTotSects     = 12;
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
    ;% Auto data (bcuvylxhefc)
    ;%
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.cnrnbvpn5m
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
	
	  ;% bcuvylxhefc.a2qtt2hfe5
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% bcuvylxhefc.hm0lgp00gr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% bcuvylxhefc.d2sayk0vr5
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% bcuvylxhefc.ojbxwztebs
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% bcuvylxhefc.ggyum1qn3e
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.geedj4d40x.LoggedData
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.o142ktwdad.AQHandles
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 6;
	
	  ;% bcuvylxhefc.cbpif1banu.AQHandles
	  section.data(3).logicalSrcIdx = 23;
	  section.data(3).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.itzcefxwhd
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.hrypfmrlkd
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.ln4xezh4u1
	  section.data(2).logicalSrcIdx = 26;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.hn5nuy0lbc
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.nxsdzjpe5i
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ep2boc231g
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.piumrtffmp
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bcuvylxhefc.oijmj1tdxd
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 2;
	
	  ;% bcuvylxhefc.anfmogqnpx
	  section.data(4).logicalSrcIdx = 32;
	  section.data(4).dtTransOffset = 3;
	
	  ;% bcuvylxhefc.jse5bdwgjj
	  section.data(5).logicalSrcIdx = 33;
	  section.data(5).dtTransOffset = 4;
	
	  ;% bcuvylxhefc.fqundvylsh
	  section.data(6).logicalSrcIdx = 34;
	  section.data(6).dtTransOffset = 5;
	
	  ;% bcuvylxhefc.egwjbtmbyq
	  section.data(7).logicalSrcIdx = 35;
	  section.data(7).dtTransOffset = 6;
	
	  ;% bcuvylxhefc.bsjrzyb4mr
	  section.data(8).logicalSrcIdx = 36;
	  section.data(8).dtTransOffset = 7;
	
	  ;% bcuvylxhefc.llz0iknlo0
	  section.data(9).logicalSrcIdx = 37;
	  section.data(9).dtTransOffset = 8;
	
	  ;% bcuvylxhefc.a5czhakwii
	  section.data(10).logicalSrcIdx = 38;
	  section.data(10).dtTransOffset = 9;
	
	  ;% bcuvylxhefc.l1ffn0wiag
	  section.data(11).logicalSrcIdx = 39;
	  section.data(11).dtTransOffset = 10;
	
	  ;% bcuvylxhefc.fiqovchppi
	  section.data(12).logicalSrcIdx = 40;
	  section.data(12).dtTransOffset = 11;
	
	  ;% bcuvylxhefc.oxgd34m1rt
	  section.data(13).logicalSrcIdx = 41;
	  section.data(13).dtTransOffset = 12;
	
	  ;% bcuvylxhefc.i51uahy2gc
	  section.data(14).logicalSrcIdx = 42;
	  section.data(14).dtTransOffset = 13;
	
	  ;% bcuvylxhefc.jtthydvh1h
	  section.data(15).logicalSrcIdx = 43;
	  section.data(15).dtTransOffset = 14;
	
	  ;% bcuvylxhefc.kgr2bmvhtp
	  section.data(16).logicalSrcIdx = 44;
	  section.data(16).dtTransOffset = 15;
	
	  ;% bcuvylxhefc.ffrv3krqdc
	  section.data(17).logicalSrcIdx = 45;
	  section.data(17).dtTransOffset = 16;
	
	  ;% bcuvylxhefc.gwhutwksvk
	  section.data(18).logicalSrcIdx = 46;
	  section.data(18).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.dfwyqajqi3
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.hztxj1g4oa
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.eo2oguksvj
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bcuvylxhefc.kc02azdlcj
	  section.data(2).logicalSrcIdx = 50;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.iajxel3ezk
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.ondfxuidp3
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.enbv0wioc4
	  section.data(1).logicalSrcIdx = 53;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% bcuvylxhefc.alzb1lqr5t
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
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


  targMap.checksum0 = 1284232737;
  targMap.checksum1 = 3961008968;
  targMap.checksum2 = 3492614050;
  targMap.checksum3 = 1102623904;

