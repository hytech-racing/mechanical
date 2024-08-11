%% Kinematics and Gear Parameters
%General Notes:
%Subscripts:
%_sun
%_planet1
%_planet2
%_ring

m = 0.7;              %Module [mm]
phi = 20;           %Pressure angle in degrees
phi = deg2rad(phi); %Pressure angle in rad
F = 15;               %Face width of gears [mm]

n_sun = 27;    %Number of teeth on each gear
n_planet1 = 66;
n_planet2 = 27;

% %current
% n_sun = 27;          
% n_planet1 = 66;
% n_planet2 = 27;

n_ring = n_sun+n_planet1+n_planet2; %equation is only true if module is equal in both stages

d_sun = n_sun.*m;            %Pitch diameter of each gear [mm]
d_planet1 = n_planet1.*m;
d_planet2 = n_planet2.*m;
d_ring = n_ring.*m;
d_carrier = d_sun+d_planet1;

%Both should be 1 so that all gear teeth wear evenly
gcd1 = gcd(n_sun, n_planet1);
gcd2 = gcd(n_planet2, n_ring);

%Min gear tooth check
n_min = 2*m/((sin(phi)).^2); %minimum to prevent undercutting
n_sun_min = (16+(m.*1.25).*2)/m;

%Even Spacing Check
spacing_int = (2*n_sun+2*n_planet1)/3;
even_spacing = floor(spacing_int) == spacing_int;
sun_spacing = floor(n_sun/3) == n_sun/3;
ring_spacing = floor(n_ring/3) == n_ring/3;

%Interference Check
n_planet1_max = (n_sun+n_planet1)*sin(pi/3)-2;

gear_ratio = ((n_planet1*n_ring) / (n_planet2*n_sun)) + 1;

omega_sun = 20000 * (2*pi/60);  %Angular velocity in rad/s (20,000 RPM = max motor speed)
omega_carrier = omega_sun / gear_ratio;
omega_planet2 = -omega_carrier*(d_carrier/d_planet2);
omega_planet1 = omega_planet2;  %FIX
omega_ring = 0;

T_motor = 21;
T_sun = T_motor/3;         %Torque at each gear tooth [Nm]
T_planet1 = (-n_planet1/n_sun) * T_sun;
T_planet2 = T_planet1;
T_ring = (-n_ring/n_planet2) * T_planet2; %using n for gear ratios only holds true if module is consistent across stages

radiusTire = 0.2; %m
distanceTraveled = 1000 * 1000; %1000km *temporarily 10,000,000km
tireRotations = distanceTraveled ./ (pi*radiusTire*2);

cycles_carrier = tireRotations;
cycles_sun = (gear_ratio-1) * cycles_carrier * 3;
cycles_planet1 = (cycles_sun/3) * n_planet1/n_sun;
cycles_ring = cycles_carrier*3;
cycles_planet2 = (cycles_ring/3) * n_planet2/n_ring;

%E = 200*10^3;    %Young's modulus of 4140 Steel
%v = 0.28;    %Poisson's ratio of 4140 Steel
Hb = 300; %Nitrided, through hardened 4140

%% Gear Tooth Forces
%Wt: Tangential force on gear tooth, force parallel to the tangent of the pitch circle (must be the same for meshing teeth):
Wt_sun_planet1 = abs(T_planet1*1000 / (0.5*d_planet1));  %Nm*1000/mm = Nm/m = N
Wt_ring_planet2 = abs(T_planet2*1000 / (0.5*d_planet2));

Wt_sun = Wt_sun_planet1;
Wt_planet1 = Wt_sun_planet1;
Wt_planet2 = Wt_ring_planet2;
Wt_ring = Wt_ring_planet2;

%Radial force on gear tooth, force perpendicular to the tangent of the pitch circle, in the direction of the radius of the gears
Wr_sun_planet1 = Wt_sun_planet1 * tan(phi);     %N
Wr_ring_planet2 = Wt_ring_planet2 * tan(phi);

%Total force on gear tooth
W_sun_planet1 = Wt_sun_planet1 / cos(phi);      %N
W_ring_planet2 = Wt_ring_planet2 / cos(phi);

%% Calculation of AGMA allowable stresses:
%St = 0.568*Hb + 83.8; %Bending strength of nitrided through hardened steel (Figure 14-3) %MPa = %MPa = N/mm^2 + MPa
%Sc = 2.22*Hb + 200; %Contact strength (Figure 14-5) %MPa = N/mm^2 + MPa

St = 517.1068;
Sc = 1896.05826;

FoS = 1.25; %Factor of safety
Sf = FoS;
Sh = FoS;

Yn_sun = 3.517*cycles_carrier^(-0.0817);	%Bending stress-cycle factor (nitrided steel) (Table 14-14)
Yn_planet1 = 3.517*cycles_carrier^(-0.0817);    %Factor, no units
Yn_planet2 = 3.517*cycles_carrier^(-0.0817);
Yn_ring = 3.517*cycles_carrier^(-0.0817);

Zn_sun = 1.249*cycles_carrier^(-0.0138);    %Contact stress-cycle factor (nitrided steel) (Table 14-15)
Zn_planet1 = 1.249*cycles_carrier^(-0.0138);    %Factor, no units
Zn_planet2 = 1.249*cycles_carrier^(-0.0138);
Zn_ring = 1.249*cycles_carrier^(-0.0138);

Ytheta_sun = 1;         %Temperature factor (=1 for under 120C) (Section 14-15)
Ytheta_planet1 = 1;     %Factor, no units
Ytheta_planet2 = 1;
Ytheta_ring = 1;

Yz_sun = 1;          %Reliability factor (Table 14-10)
Yz_planet1 = 1;      %Factor, no units
Yz_planet2 = 1;
Yz_ring = 1;

Zw_sun = 1;             %Harness ratio factor for pitting resistance (contact stress) (Figure 14-12)
Zw_planet1 = 1;         %Factor, no units
Zw_planet2 = 1;
Zw_ring = 1;

AGMA_allowable_bs_sun = (St / Sf) * (Yn_sun / (Ytheta_sun * Yz_sun));  %MPa = MPa*factors
AGMA_allowable_bs_planet1 = (St / Sf) * (Yn_planet1 / (Ytheta_planet1 * Yz_planet1));  
AGMA_allowable_bs_planet2 = (St / Sf) * (Yn_planet2 / (Ytheta_planet2 * Yz_planet2));  
AGMA_allowable_bs_ring = (St / Sf) * (Yn_ring / (Ytheta_ring * Yz_ring)); 

AGMA_allowable_cs_sun = (Sc / Sh) * ((Zn_sun * Zw_sun) / (Ytheta_sun * Yz_sun)); %MPa = MPa*factors
AGMA_allowable_cs_planet1 = (Sc / Sh) * ((Zn_planet1 * Zw_planet1) / (Ytheta_planet1 * Yz_planet1)); 
AGMA_allowable_cs_planet2 = (Sc / Sh) * ((Zn_planet2 * Zw_planet2) / (Ytheta_planet2 * Yz_planet2)); 
AGMA_allowable_cs_ring = (Sc / Sh) * ((Zn_ring * Zw_ring) / (Ytheta_ring * Yz_ring));  

%% Calculation of AGMA bending and contact stresses:

% Factors used in both AGMA bending and contact stress calculations
% Wt: Tangential transmitted load [N] (Calculated in Gear Tooth Forces section); VARIES BY GEAR
% Ko: Overload Factor; UNIFORM
% Kv: Dynamic Factor; VARIES BY GEAR
% Ks: Size Factor; VARIES BY GEAR
% b: Face width of the narrower member (chosen gears have same F in this case) => b = F; UNIFORM
% Kh: Load Distribution Factor; VARIES BY GEAR

% Factors used only in AGMA bending stress caclulation: 
% mt: Transverse metric module (Same as P for spur gears); UNIFORM
% Kb: Rim-Thickness Factor; VARIES BY GEAR
% Yj: Geometry Factor for Bending Strength; VARIES BY GEAR

% Factors used only in AGMA contact stress calculation:
% Ze: Elastic Coefficient; UNIFORM
% Zr: Surface Condition Factor; UNIFORM
% dw1: Pitch Diameter of the pinion; VARIES BY GEAR PAIRING
% Zi: Geometry Factor for Pitting Resistance; VARIES BY GEAR PAIRING

% AUTOMATED
Ko = 1.35;                          %Overload factor, uniform load on motor side, medium impact load on load side (Figure 14-17)

% AUTOMATED
V_sun = abs(d_sun/(2*1000) * omega_sun);                            %Pitch line velocity [m/s] 
V_planet1 = abs(d_planet1/(2*1000) * omega_planet1);    %mm*rad/(s*1000) = m*rad/s = m/s
V_planet2 = abs(d_planet2/(2*1000) * omega_planet2);
V_ring = abs(d_ring/(2*1000) * omega_ring);

%Lewis Kv
Kv_lsun = (6.1+V_sun)/6.1;           %Dynamic Factor for cut or milled gears (Equation 14-6b)
Kv_lplanet1 = (6.1+V_planet1)/6.1;   %Factor, no units
Kv_lplanet2 = (6.1+V_planet2)/6.1;
Kv_lring = (6.1+V_ring)/6.1;

%AGMA Kv
Q = 10;                                %Quality Factor (measure of manufacturing precision)
B = 0.25*(12-Q)^(2/3);                          %Variables for Dynamic Factor (Equation 14-28)
A = 50 + 56*(1-B);

Kv_sun = ((A+sqrt(200*V_sun))/A)^B;             %Dynamic Factor (Equation 14-27)
Kv_planet1 = ((A+sqrt(200*V_planet1))/A)^B;
Kv_planet2 = ((A+sqrt(200*V_planet2))/A)^B;
Kv_ring = ((A+sqrt(200*V_ring))/A)^B;

% AUTOMATED
Y(12) = 0.245; Y(13) = 0.261; Y(14) = 0.277; Y(15) = 0.290; Y(16) = 0.296; Y(17) = 0.303; Y(18) = 0.309; Y(19) = 0.314; Y(20) = 0.322; Y(21) = 0.328; Y(22) = 0.331; Y(24) = 0.337; Y(26) = 0.346;
Y(28) = 0.353; Y(30) = 0.359; Y(34) = 0.371; Y(38) = 0.384; Y(43) = 0.397; Y(50) = 0.409; Y(60) = 0.422; Y(75) = 0.435; Y(100) = 0.447; Y(150) = 0.460; Y(300) = 0.472; Y(400) = 0.48; Y(1000) = 0.485;
n_Y = [12,13,14,15,16,17,18,19,20,21,22,24,26,28,30,34,38,43,50,60,75,100,150,300,400,1000];
[~,closestIndex_sun] = min(abs(n_sun - n_Y));
Y_sun = Y(n_Y(closestIndex_sun));                             %Lewis form factor (Table 14-2)
[~,closestIndex_planet1] = min(abs(n_planet1 - n_Y));
Y_planet1 = Y(n_Y(closestIndex_planet1));
[~,closestIndex_planet2] = min(abs(n_planet2 - n_Y));
Y_planet2 = Y(n_Y(closestIndex_planet2));
[~,closestIndex_ring] = min(abs(n_ring - n_Y));
Y_ring = Y(n_Y(closestIndex_ring));
F_in = m/25.4;
m_in = m/25.4;
Ks_sun = 1.192*((F_in*sqrt(Y_sun)*m_in)^(0.0535));    %Size factor (Section 14-10)
Ks_planet1 = 1.192*((F_in*sqrt(Y_planet1)*m_in)^(0.0535));
Ks_planet2 = 1.192*((F_in*sqrt(Y_planet2)*m_in)^(0.0535));
Ks_ring = 1.192*((F_in*sqrt(Y_ring)*m_in)^(0.0535));
if Ks_sun < 1; Ks_sun = 1; end; if Ks_planet1 < 1; Ks_planet1 = 1; end; if Ks_planet2 < 1; Ks_planet2 = 1; end; if Ks_ring < 1; Ks_ring = 1; end

b = F;

% AUTOMATED
Cmc = 1;                            %Uncrowned teeth (Eq 14-31)
Cpf_sun = F/(10*d_sun) -0.025;      %Eq 14-32, F<1"
Cpf_planet1 = F/(10*d_planet1) -0.025;      %mm/mm = factor
Cpf_planet2 = F/(10*d_planet2) -0.025;
Cpf_ring = F/(10*d_ring) -0.025;

if F/(10*d_sun) < 0.05; Cpf_sun = 0.025; end            %Note below Eq 14-32 check
if F/(10*d_planet1) < 0.05; Cpf_planet1 = 0.025; end
if F/(10*d_planet2) < 0.05; Cpf_planet2 = 0.025; end
if F/(10*d_ring) < 0.05; Cpf_ring = 0.025; end

Cpm = 1.1;                          %For straddle-mounted pinion (Eq 14-33); NOTE: THIS IS NOT OUR CASE. DO RESEARCH
A = 0.127; B = 0.0158; C = -0.93e-4;    %Table 14-9; Commercial, enclosed units
Cma = A + B*(F/25.4) + C*(F/25.4)^2;    %Eq 14-34)
Ce = 1;                             %Eq 14-35
Kh_sun = 1 + Cmc*(Cpf_sun*Cpm + Cma*Ce);            %Load Distribution Factor, Eq. 14-30
Kh_planet1 = 1 + Cmc*(Cpf_planet1*Cpm + Cma*Ce);    %Factor, no units
Kh_planet2 = 1 + Cmc*(Cpf_planet2*Cpm + Cma*Ce);
Kh_ring = 1 + Cmc*(Cpf_ring*Cpm + Cma*Ce);

% AUTOMATED
mt = m;     %Transverse metric module = module for spur gears %mm

tr_sun = 4*m;       %Rim thickness, based on CAD
tr_planet1 = 4*m;     %mm
tr_planet2 = 4*m;
tr_ring = 4*m;
ht_sun = m*2.25;       %Tooth height, based on CAD (CALCULATE MAYBE)
ht_planet1 = m*2.25;    %mm
ht_planet2 = m*2.25;
ht_ring = m*2.25;

%added temporary values for above variables

mb_sun = tr_sun/ht_sun;     %Eq 14-39
mb_planet1 = tr_planet1/ht_planet1;     %mm/mm = factor
mb_planet2 = tr_planet2/ht_planet2;
mb_ring = tr_ring/ht_ring;
if mb_sun < 1.2; Kb_sun = 1.6*log(2.242/mb_sun); else; Kb_sun = 1; end      %Kb, rim-thickness factor (Eq 14-40)
if mb_planet1 < 1.2; Kb_planet1 = 1.6*log(2.242/mb_planet1); else; Kb_planet1 = 1; end
if mb_planet2 < 1.2; Kb_planet2 = 1.6*log(2.242/mb_planet2); else; Kb_planet2 = 1; end
if mb_ring < 1.2; Kb_ring = 1.6*log(2.242/mb_ring); else; Kb_ring = 1; end

% NOT AUTOMATED
Yj_sun = 0.36;       % Bending strength geometry factor. Figure 14-6, NOT SURE FOR PLANETARY GEARS
Yj_planet1 = 0.425;     %Factor, no units
Yj_planet2 = 0.375;
Yj_ring = 0.445;

% AUTOMATED
Ze = 191;   %Elastic Coefficient; Table 14-8, all gears are steel %Coefficient, sqrt(MPa) to get MPa

% AUTOMATED
Zr = 1;     %Not yet standardized by AGMA, section 14-9 %Factor, no units

% AUTOMATED
dw1_sun = d_sun;    %Section 14-3
dw1_planet1 = dw1_sun;  %mm
dw1_planet2 = d_planet2;
dw1_ring = dw1_planet2;

% AUTOMATED     %Factor, no units
phit = phi; %spur gears
mn = 1; %spur gears
mg_sun_planet1 = n_planet1/n_sun;  
mg_planet2_ring = n_ring/n_planet2;
Zi_sun = (cos(phit)*sin(phit)/(2*mn))*mg_sun_planet1/(mg_sun_planet1+1);    %Surface Strength Geometry Factor. Eq 14-23
Zi_planet1 = Zi_sun;
Zi_planet2 = (cos(phit)*sin(phit)/(2*mn))*mg_planet2_ring/(mg_planet2_ring-1);
Zi_ring = Zi_planet2;

%Lewis Bending Equation (Eq 14-8)
sigma_sun = (Kv_lsun*Wt_sun)/(F*m*Y_sun);    %N/(mm*mm) = MPa
sigma_planet1 = (Kv_lplanet1*Wt_planet1)/(F*m*Y_planet1);
sigma_planet2 = (Kv_lplanet2*Wt_planet2)/(F*m*Y_planet2);
sigma_ring = (Kv_lring*Wt_ring)/(F*m*Y_ring);

% AUTOMATED     %N/(mm*mm) = MPa
AGMA_bs_sun = abs(Wt_sun*Ko*Kv_sun*Ks_sun*(1/(b*mt))*(Kh_sun*Kb_sun/Yj_sun));   
AGMA_bs_planet1 = abs(Wt_planet1*Ko*Kv_planet1*Ks_planet1*(1/(b*mt))*(Kh_planet1*Kb_planet1/Yj_planet1));
AGMA_bs_planet2 = abs(Wt_planet2*Ko*Kv_planet2*Ks_planet2*(1/(b*mt))*(Kh_planet2*Kb_planet2/Yj_planet2));
AGMA_bs_ring = abs(Wt_ring*Ko*Kv_ring*Ks_ring*(1/(b*mt))*(Kh_ring*Kb_ring/Yj_ring));
                                                                                    
AGMA_cs_sun = Ze*sqrt(abs(Wt_sun*Ko*Kv_sun*Ks_sun*Kh_sun*Zr/(dw1_sun*b*Zi_sun)));   %sqrt(MPa) * sqrt(N/(mm*mm)) = MPa
AGMA_cs_planet1 = Ze*sqrt(abs(Wt_planet1*Ko*Kv_planet1*Ks_planet1*Kh_planet1*Zr/(dw1_planet1*b*Zi_planet1)));
AGMA_cs_planet2 = Ze*sqrt(abs(Wt_planet2*Ko*Kv_planet2*Ks_planet2*Kh_planet2*Zr/(dw1_planet2*b*Zi_planet2)));
AGMA_cs_ring = Ze*sqrt(abs(Wt_ring*Ko*Kv_ring*Ks_ring*Kh_ring*Zr/(dw1_ring*b*Zi_ring)));

if AGMA_bs_sun > AGMA_allowable_bs_sun || AGMA_cs_sun > AGMA_allowable_cs_sun
    fprintf('The sun gear failed!');
end
if AGMA_bs_planet1 > AGMA_allowable_bs_planet1 || AGMA_cs_planet1 > AGMA_allowable_cs_planet1
    fprintf('Planet gear 1 failed!');
end
if AGMA_bs_planet2 > AGMA_allowable_bs_planet2 || AGMA_cs_planet2 > AGMA_allowable_cs_planet2
    fprintf('Planet gear 2 failed!');
end
if AGMA_bs_ring > AGMA_allowable_bs_ring || AGMA_cs_ring > AGMA_allowable_cs_ring
    fprintf('The ring gear failed!');
end
if AGMA_bs_sun < AGMA_allowable_bs_sun && AGMA_cs_sun < AGMA_allowable_cs_sun && AGMA_bs_planet1 < AGMA_allowable_bs_planet1 && AGMA_cs_planet1 < AGMA_allowable_cs_planet1 && AGMA_bs_planet2 < AGMA_allowable_bs_planet2 && AGMA_cs_planet2 < AGMA_allowable_cs_planet2 && AGMA_bs_ring < AGMA_allowable_bs_ring && AGMA_cs_ring < AGMA_allowable_cs_ring
    fprintf('The gears succeeded!');
end
fprintf('\n');


if even_spacing
    even_spacing_txt = 'Yes';
else
    even_spacing_txt = 'No';
end
even_spacing_txt = 'ignore';
if sun_spacing
    sun_spacing_txt = 'Yes';
else
    sun_spacing_txt = 'No';
end
if ring_spacing
    ring_spacing_txt = 'Yes';
else
    ring_spacing_txt = 'No';
end
fprintf('Gear Ratio: %2.4f \ngcd1: %d, gcd2: %d\nEven Spacing: %s\nSun Spacing: %s\nRing Spacing: %s\n', gear_ratio, gcd1, gcd2, even_spacing_txt, sun_spacing_txt, ring_spacing_txt);

% %% Minimum Brinell Hardness
% 
% St_min_sun = AGMA_bs_sun*Sf*Ytheta*Yz/(Yn);
% St_min_sun = AGMA_bs_sun*Sf*Ytheta*Yz/(Yn);
% St_min_sun = AGMA_bs_sun*Sf*Ytheta*Yz/(Yn);
% St_min_sun = AGMA_bs_sun*Sf*Ytheta*Yz/(Yn);
% 
% Sc_min_sun = AGMA_cs_sun*Sh*Ytheta*Yz/(Zn*Zw);
% Sc_min_sun = AGMA_cs_sun*Sh*Ytheta*Yz/(Zn*Zw);
% Sc_min_sun = AGMA_cs_sun*Sh*Ytheta*Yz/(Zn*Zw);
% Sc_min_sun = AGMA_cs_sun*Sh*Ytheta*Yz/(Zn*Zw);
% 
% HB_min_bs_sun = (St_min_sun - 83.8)  / 0.568;
% HB_min_bs_sun = (St_min_sun - 83.8)  / 0.568;
% HB_min_bs_sun = (St_min_sun - 83.8)  / 0.568;
% HB_min_bs_sun = (St_min_sun - 83.8)  / 0.568;
% 
% HB_min_cs_sun = (Sc_min_sun - 200) / 2.22;
% HB_min_cs_sun = (Sc_min_sun - 200) / 2.22;
% HB_min_cs_sun = (Sc_min_sun - 200) / 2.22;
% HB_min_cs_sun = (Sc_min_sun - 200) / 2.22;
% 
% HB_min = max(
