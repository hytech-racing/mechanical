  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
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
    ;% Auto data (rtP)
    ;%
      section.nData     = 228;
      section.data(228)  = dumData; %prealloc
      
	  ;% rtP.Af
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Cd
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Cl
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Cpm
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.FZMAX
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.FZMIN
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.FsbF
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.FsbR
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtP.FskF
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 20;
	
	  ;% rtP.FskR
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 26;
	
	  ;% rtP.Iyy
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 32;
	
	  ;% rtP.Iyy_Whl
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 33;
	
	  ;% rtP.Jmotor
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 34;
	
	  ;% rtP.Lrel
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 35;
	
	  ;% rtP.Mass
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 36;
	
	  ;% rtP.Pabs
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 37;
	
	  ;% rtP.Re
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 38;
	
	  ;% rtP.Rm
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 39;
	
	  ;% rtP.T
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 40;
	
	  ;% rtP.UNLOADED_RADIUS
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 41;
	
	  ;% rtP.VXLOW
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 42;
	
	  ;% rtP.aMy
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 43;
	
	  ;% rtP.a_CG
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 44;
	
	  ;% rtP.alphaMy
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 45;
	
	  ;% rtP.b
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 46;
	
	  ;% rtP.bMy
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 47;
	
	  ;% rtP.b_CG
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 48;
	
	  ;% rtP.betaMy
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 49;
	
	  ;% rtP.br
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% rtP.cMy
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 51;
	
	  ;% rtP.disk_abore
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 52;
	
	  ;% rtP.domega_o
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 53;
	
	  ;% rtP.dzdotsF
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 54;
	
	  ;% rtP.dzdotsR
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 61;
	
	  ;% rtP.dzsF
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% rtP.dzsR
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 74;
	
	  ;% rtP.g
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 80;
	
	  ;% rtP.h
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 81;
	
	  ;% rtP.k
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% rtP.kappamax
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 83;
	
	  ;% rtP.lam_x
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 84;
	
	  ;% rtP.mu_kinetic
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 85;
	
	  ;% rtP.mu_static
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 86;
	
	  ;% rtP.num_pads
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 87;
	
	  ;% rtP.omega_c
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 88;
	
	  ;% rtP.omega_o
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 89;
	
	  ;% rtP.omegao
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 90;
	
	  ;% rtP.press
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 91;
	
	  ;% rtP.q_o
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 92;
	
	  ;% rtP.theta_o
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 93;
	
	  ;% rtP.theta_o_Veh
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 94;
	
	  ;% rtP.xdot_o
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 95;
	
	  ;% rtP.zdot_o
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 96;
	
	  ;% rtP.DragForce_Cs
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 97;
	
	  ;% rtP.DragForce_Cym
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 99;
	
	  ;% rtP.LimitedSlipDifferential_Fc
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 101;
	
	  ;% rtP.LimitedSlipDifferential_Jd
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 102;
	
	  ;% rtP.LimitedSlipDifferential_Jw1
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 103;
	
	  ;% rtP.LimitedSlipDifferential_Jw2
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 104;
	
	  ;% rtP.LimitedSlipDifferential_Ndiff
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 105;
	
	  ;% rtP.LimitedSlipDifferential_Ndisks
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 106;
	
	  ;% rtP.DragForce_R
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 107;
	
	  ;% rtP.HardPointCoordinateTransformFront_R_T2
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 108;
	
	  ;% rtP.HardPointCoordinateTransformRear_R_T2
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 109;
	
	  ;% rtP.LimitedSlipDifferential_Reff
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 110;
	
	  ;% rtP.RotationalInertia_b
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 111;
	
	  ;% rtP.LimitedSlipDifferential_bd
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 112;
	
	  ;% rtP.DragForce_beta_w
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 113;
	
	  ;% rtP.LimitedSlipDifferential_bw1
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 115;
	
	  ;% rtP.LimitedSlipDifferential_bw2
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 116;
	
	  ;% rtP.LimitedSlipDifferential_dw
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 117;
	
	  ;% rtP.LimitedSlipDifferential_eta
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 124;
	
	  ;% rtP.uDOFBodyAxes_g
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 125;
	
	  ;% rtP.LimitedSlipDifferential_muc
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 126;
	
	  ;% rtP.LimitedSlipDifferential_omegaw1o
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 133;
	
	  ;% rtP.LimitedSlipDifferential_omegaw2o
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 134;
	
	  ;% rtP.uDOFBodyAxes_pos_ini
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 135;
	
	  ;% rtP.LimitedSlipDifferential_tauC
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 137;
	
	  ;% rtP.div0protectabspoly_thresh
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 138;
	
	  ;% rtP.uDOFBodyAxes_v_ini
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 139;
	
	  ;% rtP.LimitedSlipDifferential_shaftSwitchMask
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 140;
	
	  ;% rtP.Integrator_IC
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 141;
	
	  ;% rtP.Theta_WrappedStateUpperValue
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 142;
	
	  ;% rtP.Theta_WrappedStateLowerValue
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 143;
	
	  ;% rtP.NFNR_Gain
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 144;
	
	  ;% rtP.uNF_Gain
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 146;
	
	  ;% rtP.Integrator_IC_cnx1wxjvuo
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 147;
	
	  ;% rtP.Signconvention_Gain
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 148;
	
	  ;% rtP.FrontBias_Gain
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 149;
	
	  ;% rtP.DisallowNegativeBrakeTorque_UpperSat
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 150;
	
	  ;% rtP.DisallowNegativeBrakeTorque_LowerSat
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 151;
	
	  ;% rtP.uNR_Gain
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 152;
	
	  ;% rtP.Memory_InitialCondition
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 153;
	
	  ;% rtP.Integrator_IC_ie22qiuarn
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 154;
	
	  ;% rtP.Signconvention_Gain_i5iwgnmbdg
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 155;
	
	  ;% rtP.RearBias1_Gain
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 156;
	
	  ;% rtP.DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 157;
	
	  ;% rtP.DisallowNegativeBrakeTorque_LowerSat_etj13r0dm4
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 158;
	
	  ;% rtP.Crm_tableData
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 159;
	
	  ;% rtP.Crm_bp01Data
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 161;
	
	  ;% rtP.Switch_Threshold
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 163;
	
	  ;% rtP.MatrixGain_Gain
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 164;
	
	  ;% rtP.NFNRb_Gain
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 168;
	
	  ;% rtP.NFNRk_Gain
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 170;
	
	  ;% rtP.Memory_InitialCondition_fzolzaguge
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 172;
	
	  ;% rtP.Integrator_UpperSat
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 173;
	
	  ;% rtP.Integrator_LowerSat
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 174;
	
	  ;% rtP.Gain1_Gain
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 175;
	
	  ;% rtP.Switch_Threshold_fkgz22tddd
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 176;
	
	  ;% rtP.Switch_Threshold_exzp10ezln
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 177;
	
	  ;% rtP.Switch_Threshold_npanpsygul
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 178;
	
	  ;% rtP.Integrator_IC_lewcleyhsc
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 179;
	
	  ;% rtP.Gain_Gain
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 180;
	
	  ;% rtP.FExtConstant_Value
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 181;
	
	  ;% rtP.MExtConstant_Value
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 184;
	
	  ;% rtP.Constant2_Value
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 187;
	
	  ;% rtP.Constant_Value
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 188;
	
	  ;% rtP.Constant1_Value
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 189;
	
	  ;% rtP.Constant12_Value
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 190;
	
	  ;% rtP.Constant2_Value_gowhp30m5w
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 191;
	
	  ;% rtP.Constant_Value_ful2bhsbsr
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 192;
	
	  ;% rtP.Constant4_Value
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 193;
	
	  ;% rtP.FxType_Value
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 196;
	
	  ;% rtP.Constant_Value_gwdg5epxbj
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 197;
	
	  ;% rtP.Constant1_Value_dknu4stzhh
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 198;
	
	  ;% rtP.Constant7_Value
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 199;
	
	  ;% rtP.Constant6_Value
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 200;
	
	  ;% rtP.Constant2_Value_cz4ittyvrh
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 201;
	
	  ;% rtP.Constant19_Value
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 235;
	
	  ;% rtP.Constant12_Value_proh0kgbum
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 238;
	
	  ;% rtP.Constant14_Value
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 241;
	
	  ;% rtP.Constant5_Value
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 250;
	
	  ;% rtP.Constant2_Value_lwhwyyeuxk
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 251;
	
	  ;% rtP.Constant16_Value
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 252;
	
	  ;% rtP.Constant7_Value_gxccvaxnbj
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 253;
	
	  ;% rtP.Constant9_Value
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 254;
	
	  ;% rtP.Constant11_Value
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 255;
	
	  ;% rtP.Constant10_Value
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 256;
	
	  ;% rtP.Constant1_Value_ojyzymfvdf
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 257;
	
	  ;% rtP.Constant3_Value
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 258;
	
	  ;% rtP.Constant19_Value_njgerszt24
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 259;
	
	  ;% rtP.Constant12_Value_p5hf31jr3e
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 262;
	
	  ;% rtP.Constant14_Value_aba3ooix0p
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 265;
	
	  ;% rtP.Constant14_Value_i4532q1mpk
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 274;
	
	  ;% rtP.Constant1_Value_ct2oikhell
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 275;
	
	  ;% rtP.Constant19_Value_a0uhprsrne
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 276;
	
	  ;% rtP.Constant2_Value_lut4znz5ox
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 277;
	
	  ;% rtP.Constant3_Value_hfdzbleowk
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 278;
	
	  ;% rtP.Constant4_Value_f1kh5fqc5r
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 279;
	
	  ;% rtP.Constant5_Value_cbkmzfhmey
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 280;
	
	  ;% rtP.Constant6_Value_prvgxkhyqy
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 281;
	
	  ;% rtP.Constant7_Value_a4zujb3rpa
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 282;
	
	  ;% rtP.Constant8_Value
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 283;
	
	  ;% rtP.Constant9_Value_fyveuupisu
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 284;
	
	  ;% rtP.Constant10_Value_md0t0tsexk
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 285;
	
	  ;% rtP.Constant11_Value_c1g5k2falu
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 286;
	
	  ;% rtP.Constant16_Value_ngoog4lshw
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 287;
	
	  ;% rtP.Constant17_Value
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 288;
	
	  ;% rtP.Constant13_Value
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 289;
	
	  ;% rtP.Constant15_Value
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 290;
	
	  ;% rtP.Constant21_Value
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 291;
	
	  ;% rtP.Constant22_Value
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 292;
	
	  ;% rtP.Constant18_Value
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 293;
	
	  ;% rtP.Constant20_Value
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 294;
	
	  ;% rtP.Constant24_Value
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 295;
	
	  ;% rtP.Constant23_Value
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 296;
	
	  ;% rtP.rollType_Value
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 297;
	
	  ;% rtP.vertType_Value
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 298;
	
	  ;% rtP.TorqueConversion1_Gain
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 299;
	
	  ;% rtP.FxType_Value_lufvzgmz0j
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 300;
	
	  ;% rtP.Constant_Value_jtawhtsysr
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 301;
	
	  ;% rtP.Constant1_Value_fjaudrjhdl
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 302;
	
	  ;% rtP.Constant7_Value_pixa3rqdjd
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 303;
	
	  ;% rtP.Constant6_Value_kedjcf23fy
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 304;
	
	  ;% rtP.Constant2_Value_ahxqsxq3tu
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 305;
	
	  ;% rtP.Constant19_Value_lqhzgejtie
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 339;
	
	  ;% rtP.Constant12_Value_ekkzpqixof
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 342;
	
	  ;% rtP.Constant14_Value_bybhg4ohya
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 345;
	
	  ;% rtP.Constant5_Value_corjlakafh
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 354;
	
	  ;% rtP.Constant2_Value_gi1emdzvsk
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 355;
	
	  ;% rtP.Constant16_Value_dfgzubkfqq
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 356;
	
	  ;% rtP.Constant7_Value_iuio0bhswj
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 357;
	
	  ;% rtP.Constant9_Value_mqlbfqzvp4
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 358;
	
	  ;% rtP.Constant11_Value_pauyoxiidd
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 359;
	
	  ;% rtP.Constant10_Value_behsis2gkb
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 360;
	
	  ;% rtP.Constant1_Value_lozhj4hfg4
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 361;
	
	  ;% rtP.Constant3_Value_ixz2bdxktj
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 362;
	
	  ;% rtP.Constant19_Value_cjkss2p31v
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 363;
	
	  ;% rtP.Constant12_Value_jjodmq5x4f
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 366;
	
	  ;% rtP.Constant14_Value_bmmxa54qsf
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 369;
	
	  ;% rtP.Constant14_Value_i4kwnrkv3h
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 378;
	
	  ;% rtP.Constant1_Value_dn53nszxpb
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 379;
	
	  ;% rtP.Constant19_Value_osodq1xdbo
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 380;
	
	  ;% rtP.Constant2_Value_lqgwunbbft
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 381;
	
	  ;% rtP.Constant3_Value_ngurra14in
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 382;
	
	  ;% rtP.Constant4_Value_bbzkuzilzq
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 383;
	
	  ;% rtP.Constant5_Value_i4lm1emseb
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 384;
	
	  ;% rtP.Constant6_Value_gemqs5gkeb
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 385;
	
	  ;% rtP.Constant7_Value_npz0eazso3
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 386;
	
	  ;% rtP.Constant8_Value_fvkoq4lt4g
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 387;
	
	  ;% rtP.Constant9_Value_dkanzsokxj
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 388;
	
	  ;% rtP.Constant10_Value_datoxoevhn
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 389;
	
	  ;% rtP.Constant11_Value_pizwvw1rzs
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 390;
	
	  ;% rtP.Constant16_Value_mk3andc4xt
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 391;
	
	  ;% rtP.Constant17_Value_fjpjpdrunn
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 392;
	
	  ;% rtP.Constant13_Value_dwnk2235vn
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 393;
	
	  ;% rtP.Constant15_Value_flu5ou3ydx
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 394;
	
	  ;% rtP.Constant21_Value_e0lxcbmexj
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 395;
	
	  ;% rtP.Constant22_Value_kpbolgth1z
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 396;
	
	  ;% rtP.Constant18_Value_ngbpjrqfcn
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 397;
	
	  ;% rtP.Constant20_Value_hnrc5vlofu
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 398;
	
	  ;% rtP.Constant24_Value_bf3qpd1yub
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 399;
	
	  ;% rtP.Constant23_Value_b0h5b3oyri
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 400;
	
	  ;% rtP.rollType_Value_d4ppucsvxa
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 401;
	
	  ;% rtP.vertType_Value_cpqcctvc03
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 402;
	
	  ;% rtP.TorqueConversion1_Gain_d5kxwp3ghy
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 403;
	
	  ;% rtP.upi_Gain
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 404;
	
	  ;% rtP.Constant_Value_iyvd2nipbn
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 405;
	
	  ;% rtP.Constant2_Value_evj0aohnzb
	  section.data(219).logicalSrcIdx = 218;
	  section.data(219).dtTransOffset = 406;
	
	  ;% rtP.Switch_Threshold_ndiyw3awdg
	  section.data(220).logicalSrcIdx = 219;
	  section.data(220).dtTransOffset = 407;
	
	  ;% rtP.Constant_Value_nmlkfmyo3q
	  section.data(221).logicalSrcIdx = 220;
	  section.data(221).dtTransOffset = 408;
	
	  ;% rtP.Constant_Value_ggkgw5e4ms
	  section.data(222).logicalSrcIdx = 221;
	  section.data(222).dtTransOffset = 409;
	
	  ;% rtP.Constant_Value_glbkitsq4x
	  section.data(223).logicalSrcIdx = 222;
	  section.data(223).dtTransOffset = 410;
	
	  ;% rtP.Constant_Value_cwq12cxfny
	  section.data(224).logicalSrcIdx = 223;
	  section.data(224).dtTransOffset = 411;
	
	  ;% rtP.Constant1_Value_g2bu1bfzgh
	  section.data(225).logicalSrcIdx = 224;
	  section.data(225).dtTransOffset = 412;
	
	  ;% rtP.Switch_Threshold_cg5jpvuvn1
	  section.data(226).logicalSrcIdx = 225;
	  section.data(226).dtTransOffset = 413;
	
	  ;% rtP.Reset_Value
	  section.data(227).logicalSrcIdx = 226;
	  section.data(227).dtTransOffset = 414;
	
	  ;% rtP.Reset_Value_ltqw1krttf
	  section.data(228).logicalSrcIdx = 227;
	  section.data(228).dtTransOffset = 415;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.Constant_Value
	  section.data(1).logicalSrcIdx = 228;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.locked_Value
	  section.data(2).logicalSrcIdx = 229;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.locked1_Value
	  section.data(3).logicalSrcIdx = 230;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.locked2_Value
	  section.data(4).logicalSrcIdx = 231;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.u_Gain
	  section.data(5).logicalSrcIdx = 232;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.yn_Y0
	  section.data(1).logicalSrcIdx = 233;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.yn_Y0_iz3dygeyuh
	  section.data(2).logicalSrcIdx = 234;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.UnitDelay_InitialCondition
	  section.data(3).logicalSrcIdx = 235;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.nt1qt43cpp.azxqoevuvc.lkn4jcwpit.CombinatorialLogic_table
	  section.data(4).logicalSrcIdx = 236;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.Constant_Value
	  section.data(1).logicalSrcIdx = 237;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.locked_Value
	  section.data(2).logicalSrcIdx = 238;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.locked1_Value
	  section.data(3).logicalSrcIdx = 239;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.locked2_Value
	  section.data(4).logicalSrcIdx = 240;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.u_Gain
	  section.data(5).logicalSrcIdx = 241;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.yn_Y0
	  section.data(1).logicalSrcIdx = 242;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.yn_Y0_iz3dygeyuh
	  section.data(2).logicalSrcIdx = 243;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.UnitDelay_InitialCondition
	  section.data(3).logicalSrcIdx = 244;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.g0qms2rrt2g.azxqoevuvc.lkn4jcwpit.CombinatorialLogic_table
	  section.data(4).logicalSrcIdx = 245;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.lkkyw1qsdn.phi_Value
	  section.data(1).logicalSrcIdx = 246;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.lkkyw1qsdn.psi_Value
	  section.data(2).logicalSrcIdx = 247;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
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
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 201;
      section.data(201)  = dumData; %prealloc
      
	  ;% rtB.bvvs4fnpae
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hbvagjoehw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtB.fl3w3jvdsi
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtB.napknbkquk
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtB.lmyq34sf0g
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 9;
	
	  ;% rtB.aufjnco1bm
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 11;
	
	  ;% rtB.b4224qf4tv
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 13;
	
	  ;% rtB.kv3osjbizo
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% rtB.gaek01rrr3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 17;
	
	  ;% rtB.jhj3zz42j4
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 20;
	
	  ;% rtB.f2ueewkbjc
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 23;
	
	  ;% rtB.dvzu21xwhx
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 32;
	
	  ;% rtB.nctohqsvwh
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 41;
	
	  ;% rtB.msa0c5sdpt
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 44;
	
	  ;% rtB.oipqkobspt
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 47;
	
	  ;% rtB.kaebigjgd4
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 56;
	
	  ;% rtB.he340y04vs
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 65;
	
	  ;% rtB.ph0tpe5if5
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 68;
	
	  ;% rtB.oorww1wcg3
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 71;
	
	  ;% rtB.i5rrf0mxdx
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 73;
	
	  ;% rtB.arhf0clxqd
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 75;
	
	  ;% rtB.kpql35e3jx
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 77;
	
	  ;% rtB.ehplbjsl2s
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 78;
	
	  ;% rtB.pfxb5cp324
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 81;
	
	  ;% rtB.cjf0g1m02r
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 82;
	
	  ;% rtB.lniie22aca
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 83;
	
	  ;% rtB.pgdiss5r2m
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 84;
	
	  ;% rtB.hf22yy5y1q
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 85;
	
	  ;% rtB.edhzlsgf2y
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 86;
	
	  ;% rtB.hvfsoaq5ld
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 87;
	
	  ;% rtB.js34n2lyrx
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 90;
	
	  ;% rtB.audvaxq0d4
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 93;
	
	  ;% rtB.ax0lh0rex0
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 94;
	
	  ;% rtB.l4kkea5xp2
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 95;
	
	  ;% rtB.ey3jisgadc
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 96;
	
	  ;% rtB.gbtcjmplpx
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 97;
	
	  ;% rtB.lv1h0u3agv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 98;
	
	  ;% rtB.me2bqjjbgm
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 99;
	
	  ;% rtB.bp5oyyiqlm
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 102;
	
	  ;% rtB.mpypmsgyi1
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 105;
	
	  ;% rtB.otz30dqwqs
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 107;
	
	  ;% rtB.nairdbyqp1
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 109;
	
	  ;% rtB.hythrdl4q2
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 111;
	
	  ;% rtB.o3id5sdn4p
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 113;
	
	  ;% rtB.lwno5xammy
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 115;
	
	  ;% rtB.a443qjuymv
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 127;
	
	  ;% rtB.hngolbfjxs
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 131;
	
	  ;% rtB.hhx0yapiru
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 134;
	
	  ;% rtB.kg2fpgf5gs
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 137;
	
	  ;% rtB.bulmsnibdh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 138;
	
	  ;% rtB.oxzcy2p53x
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 141;
	
	  ;% rtB.gt2zfa4a1s
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 144;
	
	  ;% rtB.fti1lk5vjw
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 145;
	
	  ;% rtB.o0omv4lhyr
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 151;
	
	  ;% rtB.oge4pedyvk
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 154;
	
	  ;% rtB.f1gv0k550c
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 155;
	
	  ;% rtB.dmus3c4xmj
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 156;
	
	  ;% rtB.ileilbufb2
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 157;
	
	  ;% rtB.jg2roxx5bs
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 158;
	
	  ;% rtB.bw244p3q0q
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 159;
	
	  ;% rtB.bxpazjxklu
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 160;
	
	  ;% rtB.d34xk5ykmh
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 161;
	
	  ;% rtB.ax54sddcaw
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 162;
	
	  ;% rtB.hqvukv2xsp
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 163;
	
	  ;% rtB.finh0wc4da
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 164;
	
	  ;% rtB.fc2wrfay4e
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 165;
	
	  ;% rtB.oyc1al4h1w
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 166;
	
	  ;% rtB.ip3nkmhbmh
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 169;
	
	  ;% rtB.fc21izfzx4
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 170;
	
	  ;% rtB.ia0ojskpxs
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 171;
	
	  ;% rtB.aaxsvkqai0
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 172;
	
	  ;% rtB.mbn5ixhvjf
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 173;
	
	  ;% rtB.fjgrzm4gzz
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 174;
	
	  ;% rtB.f12frx44r4
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 175;
	
	  ;% rtB.ddppy23mxp
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 176;
	
	  ;% rtB.bserwztahf
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 177;
	
	  ;% rtB.earfrwf0hr
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 178;
	
	  ;% rtB.bep5golme5
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 179;
	
	  ;% rtB.hlf1acubd5
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 180;
	
	  ;% rtB.gmna1ac1wl
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 181;
	
	  ;% rtB.b3mk52fmiw
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 182;
	
	  ;% rtB.ius1e2jprf
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 183;
	
	  ;% rtB.ew44hdju13
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 184;
	
	  ;% rtB.nszyb3hol0
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 185;
	
	  ;% rtB.jfgqtvutxu
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 186;
	
	  ;% rtB.l3uikgbb3b
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 187;
	
	  ;% rtB.obiqeibdxg
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 189;
	
	  ;% rtB.in24fxjjbm
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 190;
	
	  ;% rtB.d4liyxsdf3
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 191;
	
	  ;% rtB.hq340ksp50
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 192;
	
	  ;% rtB.dkru0kjfjp
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 195;
	
	  ;% rtB.hs03wuldth
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 198;
	
	  ;% rtB.jiojizdhep
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 201;
	
	  ;% rtB.b2lhkjzml4
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 202;
	
	  ;% rtB.cisxqujvum
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 203;
	
	  ;% rtB.lhlooh5fkc
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 206;
	
	  ;% rtB.jc5lgzz344
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 212;
	
	  ;% rtB.hhz4t34e2g
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 218;
	
	  ;% rtB.gxnvrkca2h
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 224;
	
	  ;% rtB.mptksaxj4h
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 227;
	
	  ;% rtB.ksvzqk05tq
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 228;
	
	  ;% rtB.lqho4qf5m3
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 229;
	
	  ;% rtB.j4zwcvum4v
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 230;
	
	  ;% rtB.c4paxuk0gc
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 231;
	
	  ;% rtB.iinnocqymd
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 233;
	
	  ;% rtB.ek20uulqhd
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 235;
	
	  ;% rtB.dcdu0sstq5
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 237;
	
	  ;% rtB.nkuvi2wir1
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 238;
	
	  ;% rtB.kfv1jnxdcb
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 241;
	
	  ;% rtB.a34vsr4icm
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 244;
	
	  ;% rtB.m5zcbblxpv
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 247;
	
	  ;% rtB.blbatpv3jn
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 248;
	
	  ;% rtB.kjjkugtces
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 249;
	
	  ;% rtB.afh4emj1nn
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 251;
	
	  ;% rtB.ogvrkt53m0
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 253;
	
	  ;% rtB.c5hd41ef1x
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 255;
	
	  ;% rtB.ffh4nyfsmr
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 258;
	
	  ;% rtB.l5akcup4jj
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 267;
	
	  ;% rtB.mf1mzpm0t3
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 276;
	
	  ;% rtB.byxw4oacat
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 279;
	
	  ;% rtB.lb5dx4b3jk
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 282;
	
	  ;% rtB.emlvbttdyz
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 284;
	
	  ;% rtB.btryepb3lp
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 285;
	
	  ;% rtB.bf43kefmfh
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 286;
	
	  ;% rtB.pweyi4u1zx
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 287;
	
	  ;% rtB.nsglwteu5v
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 288;
	
	  ;% rtB.fw0g4ey4fo
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 289;
	
	  ;% rtB.kdkxysqm0t
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 290;
	
	  ;% rtB.ew1reedbnv
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 291;
	
	  ;% rtB.cbr3oyt3lb
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 292;
	
	  ;% rtB.jxcgxst2is
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 293;
	
	  ;% rtB.l3kqf3ebdp
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 294;
	
	  ;% rtB.omo5i3z4hj
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 295;
	
	  ;% rtB.adqsh2k4ic
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 296;
	
	  ;% rtB.nuqisryxie
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 297;
	
	  ;% rtB.n4ylimvkll
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 298;
	
	  ;% rtB.loxwvwrcia
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 299;
	
	  ;% rtB.cztrdqhftf
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 300;
	
	  ;% rtB.ixk3hxcurq
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 301;
	
	  ;% rtB.fzgx2tufv1
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 302;
	
	  ;% rtB.gsvjzha0ac
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 303;
	
	  ;% rtB.gnacurz3w5
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 304;
	
	  ;% rtB.nlphchuiom
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 305;
	
	  ;% rtB.hj2blpaerv
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 306;
	
	  ;% rtB.dmdfff1fpp
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 307;
	
	  ;% rtB.carktevnct
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 308;
	
	  ;% rtB.izyfxqhqcz
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 312;
	
	  ;% rtB.ci1mx445b5
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 313;
	
	  ;% rtB.num3ib20gq
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 315;
	
	  ;% rtB.iya5tp4cdn
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 317;
	
	  ;% rtB.b1jodlhboe
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 319;
	
	  ;% rtB.bourbfwnuv
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 320;
	
	  ;% rtB.dtdini0pef
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 322;
	
	  ;% rtB.cx0yxkcry4
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 323;
	
	  ;% rtB.pufuucy0fb
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 327;
	
	  ;% rtB.lulkwzk1on
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 328;
	
	  ;% rtB.hd1scyomug
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 329;
	
	  ;% rtB.ao0tmcfamz
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 330;
	
	  ;% rtB.o3l2toprpn
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 331;
	
	  ;% rtB.otfutxs4mr
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 332;
	
	  ;% rtB.gz1skuswsk
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 333;
	
	  ;% rtB.bkdlmlnojz
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 334;
	
	  ;% rtB.mqbrmoxrar
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 335;
	
	  ;% rtB.jcwtpqnasc
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 336;
	
	  ;% rtB.facust4yjk
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 337;
	
	  ;% rtB.kiay1ycxcl
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 338;
	
	  ;% rtB.ky2l1btjfj
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 339;
	
	  ;% rtB.ndk4xlqpf1
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 340;
	
	  ;% rtB.ogzwtt0uth
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 341;
	
	  ;% rtB.aav3ryaivc
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 342;
	
	  ;% rtB.mtxbvc4f5c
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 343;
	
	  ;% rtB.ewjyokkn1d
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 344;
	
	  ;% rtB.fnrs5gvhc4
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 345;
	
	  ;% rtB.gofcinmsl2
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 346;
	
	  ;% rtB.awg4dtdgtn
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 347;
	
	  ;% rtB.jwoypvyz3y
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 348;
	
	  ;% rtB.asa4c401qh
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 349;
	
	  ;% rtB.iwj2aio34h
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 350;
	
	  ;% rtB.jldjif2bkl
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 351;
	
	  ;% rtB.po32laksrz
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 354;
	
	  ;% rtB.c1dlqtm02p
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 357;
	
	  ;% rtB.npguaw4amt
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 360;
	
	  ;% rtB.mywr3gtqt3
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 363;
	
	  ;% rtB.m5ku5csxya
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 364;
	
	  ;% rtB.ftuivg3ybn
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 365;
	
	  ;% rtB.hmfp21fvok
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 366;
	
	  ;% rtB.knygbp5qud
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 367;
	
	  ;% rtB.ihgs3schr1
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 368;
	
	  ;% rtB.dgob255otz
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 369;
	
	  ;% rtB.pigob0blb3
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 370;
	
	  ;% rtB.iw4ps3gqvq
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 372;
	
	  ;% rtB.jbv5m1xncl
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 373;
	
	  ;% rtB.hr50ll3oqj
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 374;
	
	  ;% rtB.mnna5hwg3f
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 375;
	
	  ;% rtB.c5ixvkkdja
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 376;
	
	  ;% rtB.kptpbclfwk
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 377;
	
	  ;% rtB.pv2oncoizs
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 378;
	
	  ;% rtB.ko2j33jveu
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 379;
	
	  ;% rtB.jysmct5dke
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 391;
	
	  ;% rtB.mcaqczbuom
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 394;
	
	  ;% rtB.glnjftgoht
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 398;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.amlomrh5pe
	  section.data(1).logicalSrcIdx = 201;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.pko5zv0gxh
	  section.data(2).logicalSrcIdx = 202;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.kvpcq24csf
	  section.data(3).logicalSrcIdx = 203;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.grabw3r2s4
	  section.data(4).logicalSrcIdx = 204;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.fqnbs42x2r
	  section.data(5).logicalSrcIdx = 205;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.ocvy1l4023
	  section.data(6).logicalSrcIdx = 206;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.idh10nqjbu
	  section.data(7).logicalSrcIdx = 207;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.jahnvx3kqt
	  section.data(8).logicalSrcIdx = 208;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.inrtpw2cx1
	  section.data(9).logicalSrcIdx = 209;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.m4gvzn05xv
	  section.data(10).logicalSrcIdx = 210;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.m4kwqt0weh
	  section.data(11).logicalSrcIdx = 211;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.lgc5y05bba
	  section.data(12).logicalSrcIdx = 212;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.jdin3zvg0f
	  section.data(13).logicalSrcIdx = 213;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.eqiwbbwx2h
	  section.data(14).logicalSrcIdx = 214;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.borgqrxodu
	  section.data(15).logicalSrcIdx = 215;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.ejvkch2wis
	  section.data(1).logicalSrcIdx = 216;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.legzb2sclz
	  section.data(2).logicalSrcIdx = 217;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.jlep0zzj4c.a4qhmksov4
	  section.data(1).logicalSrcIdx = 218;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jlep0zzj4c.jp04hhuxax
	  section.data(2).logicalSrcIdx = 219;
	  section.data(2).dtTransOffset = 5;
	
	  ;% rtB.jlep0zzj4c.njnuel0xeb
	  section.data(3).logicalSrcIdx = 220;
	  section.data(3).dtTransOffset = 21;
	
	  ;% rtB.jlep0zzj4c.odbylawxnz
	  section.data(4).logicalSrcIdx = 221;
	  section.data(4).dtTransOffset = 45;
	
	  ;% rtB.jlep0zzj4c.istsrpdzon
	  section.data(5).logicalSrcIdx = 222;
	  section.data(5).dtTransOffset = 46;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.amlomrh5pe
	  section.data(1).logicalSrcIdx = 223;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.pko5zv0gxh
	  section.data(2).logicalSrcIdx = 224;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.kvpcq24csf
	  section.data(3).logicalSrcIdx = 225;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.grabw3r2s4
	  section.data(4).logicalSrcIdx = 226;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.fqnbs42x2r
	  section.data(5).logicalSrcIdx = 227;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.ocvy1l4023
	  section.data(6).logicalSrcIdx = 228;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.idh10nqjbu
	  section.data(7).logicalSrcIdx = 229;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.jahnvx3kqt
	  section.data(8).logicalSrcIdx = 230;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.inrtpw2cx1
	  section.data(9).logicalSrcIdx = 231;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.m4gvzn05xv
	  section.data(10).logicalSrcIdx = 232;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.m4kwqt0weh
	  section.data(11).logicalSrcIdx = 233;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.lgc5y05bba
	  section.data(12).logicalSrcIdx = 234;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.jdin3zvg0f
	  section.data(13).logicalSrcIdx = 235;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.eqiwbbwx2h
	  section.data(14).logicalSrcIdx = 236;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.borgqrxodu
	  section.data(15).logicalSrcIdx = 237;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.ejvkch2wis
	  section.data(1).logicalSrcIdx = 238;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.legzb2sclz
	  section.data(2).logicalSrcIdx = 239;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.kkrjlu4uvo.a4qhmksov4
	  section.data(1).logicalSrcIdx = 240;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kkrjlu4uvo.jp04hhuxax
	  section.data(2).logicalSrcIdx = 241;
	  section.data(2).dtTransOffset = 5;
	
	  ;% rtB.kkrjlu4uvo.njnuel0xeb
	  section.data(3).logicalSrcIdx = 242;
	  section.data(3).dtTransOffset = 21;
	
	  ;% rtB.kkrjlu4uvo.odbylawxnz
	  section.data(4).logicalSrcIdx = 243;
	  section.data(4).dtTransOffset = 45;
	
	  ;% rtB.kkrjlu4uvo.istsrpdzon
	  section.data(5).logicalSrcIdx = 244;
	  section.data(5).dtTransOffset = 46;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.lkkyw1qsdn[3].hg0uepzdlr
	  section.data(1).logicalSrcIdx = 245;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lkkyw1qsdn[3].iftka2hl45
	  section.data(2).logicalSrcIdx = 246;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.lkkyw1qsdn[3].iny0n31qca
	  section.data(3).logicalSrcIdx = 247;
	  section.data(3).dtTransOffset = 12;
	
	  ;% rtB.lkkyw1qsdn[3].lsxufha4ar
	  section.data(4).logicalSrcIdx = 248;
	  section.data(4).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
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
    nTotSects     = 20;
    sectIdxOffset = 8;
    
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
    ;% Auto data (rtDW)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.l5oro1zbdt
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jswox1jizv
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtDW.kpovkdto0q
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.ccv2xnvywn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.kd2ov54egg.AQHandles
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.heooubpmub.AQHandles
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.eyz2b5jfld.AQHandles
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.mika2fhpql
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.appmqjbhea
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cmjpzycq5g
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.jowjuwqghw
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.oecqsnuhib
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.kx1gvg3l0l
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.bs2px0f0vf
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.dwlnal5cpf
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.d4m3dcxee3
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.ipcup3puci
	  section.data(3).logicalSrcIdx = 16;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.feltoykxxu
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.oq0zjzu2fx
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.kncpfxn0zs
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.k54dnhlmkd
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.dhmxzbxrdi
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.lypwhpzhjk
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.k11upcr4nu
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.aoynv25rbl
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.pb3tcu34d5
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.pji4wdzuww
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.pe5tlefx4c
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.frhewkvqk5
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nt1qt43cpp[0].azxqoevuvc.lkn4jcwpit.molk5qdn4x
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.dwlnal5cpf
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.d4m3dcxee3
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.ipcup3puci
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.feltoykxxu
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.oq0zjzu2fx
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.kncpfxn0zs
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.k54dnhlmkd
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.dhmxzbxrdi
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.lypwhpzhjk
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.k11upcr4nu
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.aoynv25rbl
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.pb3tcu34d5
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.pji4wdzuww
	  section.data(5).logicalSrcIdx = 42;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.pe5tlefx4c
	  section.data(6).logicalSrcIdx = 43;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.frhewkvqk5
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g0qms2rrt2g[0].azxqoevuvc.lkn4jcwpit.molk5qdn4x
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
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


  targMap.checksum0 = 2619392151;
  targMap.checksum1 = 320912082;
  targMap.checksum2 = 503821592;
  targMap.checksum3 = 3124188914;

