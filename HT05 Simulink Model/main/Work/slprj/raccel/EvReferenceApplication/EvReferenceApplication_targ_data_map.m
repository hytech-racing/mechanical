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
    ;% Auto data (konn1m5pjf)
    ;%
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% konn1m5pjf.LongitudinalDriverModel_GearInit
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% konn1m5pjf.SignalHold_IC
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_Kpt
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_L
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_aR
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_bR
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_cR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_m
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_tShift
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% konn1m5pjf.LongitudinalDriverModel_tau
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% konn1m5pjf.u1_UpperSat
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% konn1m5pjf.u1_LowerSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% konn1m5pjf.u0_UpperSat
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% konn1m5pjf.u0_LowerSat
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% konn1m5pjf.Constant_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% konn1m5pjf.Constant_Value_nhp3htkj21
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% konn1m5pjf.Switch_Threshold
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% konn1m5pjf.uDLookupTable_tableData
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% konn1m5pjf.uDLookupTable_bp01Data
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 2492;
	
	  ;% konn1m5pjf.MotorCouplingDynamics_A
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 4966;
	
	  ;% konn1m5pjf.MotorCouplingDynamics_C
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 4967;
	
	  ;% konn1m5pjf.RateTransition3_InitialCondition
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 4968;
	
	  ;% konn1m5pjf.mstomph_Gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 4969;
	
	  ;% konn1m5pjf.radstoRPM_Gain
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 4970;
	
	  ;% konn1m5pjf.BatteryDischargeDynamics_A
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 4971;
	
	  ;% konn1m5pjf.BatteryDischargeDynamics_C
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 4972;
	
	  ;% konn1m5pjf.RateTransition5_InitialCondition
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 4973;
	
	  ;% konn1m5pjf.Integrator_IC
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 4974;
	
	  ;% konn1m5pjf.mtomile_Gain
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 4975;
	
	  ;% konn1m5pjf.Integrator1_IC
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 4976;
	
	  ;% konn1m5pjf.m3toUSGal_Gain
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 4977;
	
	  ;% konn1m5pjf.Saturation1_UpperSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 4978;
	
	  ;% konn1m5pjf.Saturation1_LowerSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 4979;
	
	  ;% konn1m5pjf.mto100Km_Gain
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 4980;
	
	  ;% konn1m5pjf.Saturation_UpperSat
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 4981;
	
	  ;% konn1m5pjf.Saturation_LowerSat
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 4982;
	
	  ;% konn1m5pjf.m3pergal_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 4983;
	
	  ;% konn1m5pjf.Integrator1_IC_ajivek24xs
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 4984;
	
	  ;% konn1m5pjf.Saturation_UpperSat_ejlhkaxvm3
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 4985;
	
	  ;% konn1m5pjf.Saturation_LowerSat_jq5vbx40o3
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 4986;
	
	  ;% konn1m5pjf.Saturation_UpperSat_n5cfzewtp3
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 4987;
	
	  ;% konn1m5pjf.Saturation_LowerSat_jdvecoiqp4
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 4988;
	
	  ;% konn1m5pjf.HitCrossing_Offset
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 4989;
	
	  ;% konn1m5pjf.Integrator2_IC
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 4990;
	
	  ;% konn1m5pjf.UnitDelay_InitialCondition
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 4991;
	
	  ;% konn1m5pjf.USEPAkwhUSgalequivalent_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 4993;
	
	  ;% konn1m5pjf.sperh_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 4994;
	
	  ;% konn1m5pjf.wperkw_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 4995;
	
	  ;% konn1m5pjf.repeat_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 4996;
	
	  ;% konn1m5pjf.tFinal_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 4997;
	
	  ;% konn1m5pjf.Constant2_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 4998;
	
	  ;% konn1m5pjf.Constant3_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 4999;
	
	  ;% konn1m5pjf.Constant6_Value
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 5000;
	
	  ;% konn1m5pjf.Constant_Value_mg0ii2c5jx
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 5001;
	
	  ;% konn1m5pjf.Constant_Value_lfd1si2n0l
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 5002;
	
	  ;% konn1m5pjf.Constant_Value_fb5mg350bv
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 5003;
	
	  ;% konn1m5pjf.Constant1_Value
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
    ;% Auto data (cuhiq2he3xv)
    ;%
      section.nData     = 64;
      section.data(64)  = dumData; %prealloc
      
	  ;% cuhiq2he3xv.hjd5omgeuw
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% cuhiq2he3xv.cwygjkza2r
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% cuhiq2he3xv.bht55s5qq3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% cuhiq2he3xv.ixkrfe1hwl
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% cuhiq2he3xv.lrkperxqkh
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% cuhiq2he3xv.f32ubspqi4
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% cuhiq2he3xv.m0tb3cmvqc
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% cuhiq2he3xv.map0t5ix2o
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% cuhiq2he3xv.fkf3rt5vqk
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% cuhiq2he3xv.iqvbtbayt4
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% cuhiq2he3xv.g33we1ojyj
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% cuhiq2he3xv.aam4cx4xp2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% cuhiq2he3xv.gt2syxhd4c
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% cuhiq2he3xv.lxuceqt2ja
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% cuhiq2he3xv.f3xfryzo45
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% cuhiq2he3xv.i23fozl0mw
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% cuhiq2he3xv.jxekas3gp2
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% cuhiq2he3xv.h5wul2xtfx
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% cuhiq2he3xv.lwwxzl5qzf
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% cuhiq2he3xv.iojh51uf0y
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% cuhiq2he3xv.eqrqll4gp5
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% cuhiq2he3xv.hshnxf4vn0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% cuhiq2he3xv.lcipcfvg1x
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% cuhiq2he3xv.p53k4c5eze
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% cuhiq2he3xv.mfbcndbdnw
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% cuhiq2he3xv.cxitkzrhmf
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% cuhiq2he3xv.hvrssnnlxd
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% cuhiq2he3xv.pdyyylm0jj
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% cuhiq2he3xv.igi0euk0rx
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% cuhiq2he3xv.jznbtj1tyh
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% cuhiq2he3xv.jhfdxylvg0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% cuhiq2he3xv.glcchrtl4h
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% cuhiq2he3xv.kmsp0cd1e1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% cuhiq2he3xv.fvfcqphwub
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% cuhiq2he3xv.akt4wnhg4a
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% cuhiq2he3xv.dju2bvbvhc
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% cuhiq2he3xv.ab4upgrnrw
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% cuhiq2he3xv.pkdo1hmzxy
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% cuhiq2he3xv.ndktxclyhy
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% cuhiq2he3xv.o1kmrtruhq
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 42;
	
	  ;% cuhiq2he3xv.kun3jdfvr3
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 43;
	
	  ;% cuhiq2he3xv.ohau2brkru
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 44;
	
	  ;% cuhiq2he3xv.bxvt3tt5d3
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% cuhiq2he3xv.o0nvkut2oz
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% cuhiq2he3xv.oigt4h5oa0
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% cuhiq2he3xv.eaez13ma04
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% cuhiq2he3xv.ncqjwkf1sm
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% cuhiq2he3xv.ft3zshehfj
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% cuhiq2he3xv.ceif11edac
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% cuhiq2he3xv.b0xsyyulsa
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% cuhiq2he3xv.jcja03y2ta
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% cuhiq2he3xv.eyxsiaqd30
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% cuhiq2he3xv.klgwp0bl1e
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% cuhiq2he3xv.hyeok2w0lk
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% cuhiq2he3xv.as3zb4xmb3
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% cuhiq2he3xv.nxipfqo4ge
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% cuhiq2he3xv.bgyxx3obeb
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% cuhiq2he3xv.mapbxuiz5v
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% cuhiq2he3xv.kyoewhwiba
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% cuhiq2he3xv.kj51ocjbc3
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 63;
	
	  ;% cuhiq2he3xv.imnt2v1zkq
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 65;
	
	  ;% cuhiq2he3xv.o5bbi4nmva
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 66;
	
	  ;% cuhiq2he3xv.hdwnkycvte
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 67;
	
	  ;% cuhiq2he3xv.bd2ndavyho
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 68;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% cuhiq2he3xv.l3da1b0tbm
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% cuhiq2he3xv.fjngm2jfcz
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% cuhiq2he3xv.ide52jc1xl
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
	  ;% cuhiq2he3xv.by2opoctqb
	  section.data(4).logicalSrcIdx = 67;
	  section.data(4).dtTransOffset = 3;
	
	  ;% cuhiq2he3xv.h4vbxbl4u1
	  section.data(5).logicalSrcIdx = 68;
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
    ;% Auto data (giqt2tul5wr)
    ;%
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.l4pn2msb3d
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.inuzqqxqnu
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% giqt2tul5wr.gyxsg3hoeg
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% giqt2tul5wr.cl5jwb0b3t
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% giqt2tul5wr.jayy2p4zdf
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% giqt2tul5wr.cvspgr5it1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% giqt2tul5wr.mntoorellr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 9;
	
	  ;% giqt2tul5wr.jsjjbflcse
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% giqt2tul5wr.dzxddx5cen
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% giqt2tul5wr.ie0iddjxra
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% giqt2tul5wr.cj4gapd3fs
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% giqt2tul5wr.okzsrfvbia
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% giqt2tul5wr.fdvg1z1mda
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% giqt2tul5wr.lqnixiqshl
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% giqt2tul5wr.maq5mhfrmp
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% giqt2tul5wr.ahhxtrgluu
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% giqt2tul5wr.iaae4xgy2r
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% giqt2tul5wr.ipsejbdjkv
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% giqt2tul5wr.kr24afjbvy
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% giqt2tul5wr.mgyqdv05fz
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% giqt2tul5wr.hvilkifux1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.hp0aqxmuww.LoggedData
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.pvlwtgcy5f.AQHandles
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.j5l3uscjdf
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.mqtf040bbg
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.kn3tgruv1d
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.k2ai2ikwjg
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.njnayzb45j
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.fryzyq5tfx
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.liwdzlex20
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
	  ;% giqt2tul5wr.fumd4zvnkk
	  section.data(3).logicalSrcIdx = 30;
	  section.data(3).dtTransOffset = 2;
	
	  ;% giqt2tul5wr.hgwywptnzf
	  section.data(4).logicalSrcIdx = 31;
	  section.data(4).dtTransOffset = 3;
	
	  ;% giqt2tul5wr.l3wo0yhou2
	  section.data(5).logicalSrcIdx = 32;
	  section.data(5).dtTransOffset = 4;
	
	  ;% giqt2tul5wr.jfct23tlbn
	  section.data(6).logicalSrcIdx = 33;
	  section.data(6).dtTransOffset = 5;
	
	  ;% giqt2tul5wr.mwgqdelv1f
	  section.data(7).logicalSrcIdx = 34;
	  section.data(7).dtTransOffset = 6;
	
	  ;% giqt2tul5wr.kltct411us
	  section.data(8).logicalSrcIdx = 35;
	  section.data(8).dtTransOffset = 7;
	
	  ;% giqt2tul5wr.osl3qr4gmy
	  section.data(9).logicalSrcIdx = 36;
	  section.data(9).dtTransOffset = 8;
	
	  ;% giqt2tul5wr.im4sg3gugq
	  section.data(10).logicalSrcIdx = 37;
	  section.data(10).dtTransOffset = 9;
	
	  ;% giqt2tul5wr.fde5kmnnd2
	  section.data(11).logicalSrcIdx = 38;
	  section.data(11).dtTransOffset = 10;
	
	  ;% giqt2tul5wr.jkb4mvplww
	  section.data(12).logicalSrcIdx = 39;
	  section.data(12).dtTransOffset = 11;
	
	  ;% giqt2tul5wr.idncfbsifc
	  section.data(13).logicalSrcIdx = 40;
	  section.data(13).dtTransOffset = 12;
	
	  ;% giqt2tul5wr.ogx3kqoxnw
	  section.data(14).logicalSrcIdx = 41;
	  section.data(14).dtTransOffset = 13;
	
	  ;% giqt2tul5wr.fcscllrj1v
	  section.data(15).logicalSrcIdx = 42;
	  section.data(15).dtTransOffset = 14;
	
	  ;% giqt2tul5wr.ade3ahyo1e
	  section.data(16).logicalSrcIdx = 43;
	  section.data(16).dtTransOffset = 15;
	
	  ;% giqt2tul5wr.jt1cbcvoyd
	  section.data(17).logicalSrcIdx = 44;
	  section.data(17).dtTransOffset = 16;
	
	  ;% giqt2tul5wr.iqmyanxtr1
	  section.data(18).logicalSrcIdx = 45;
	  section.data(18).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.cjbl1xx1vv
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.o23aklsczm
	  section.data(2).logicalSrcIdx = 47;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.j32evmbeac
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
	  ;% giqt2tul5wr.mc3fhmonso
	  section.data(2).logicalSrcIdx = 49;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.igqkoslatl
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.isvmsyyglk
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.ag4bz0o52w
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% giqt2tul5wr.ekun4ztdyk
	  section.data(1).logicalSrcIdx = 53;
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


  targMap.checksum0 = 335141954;
  targMap.checksum1 = 1526359446;
  targMap.checksum2 = 1863528200;
  targMap.checksum3 = 2630416121;

