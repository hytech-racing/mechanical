%% Please run script 'gearStressesPlanetary' before running this script
%% Needle Bearings

% Refer to Shigley's Mechanical Engineering Design Chapter 11 for more
% detailed explanations of the analysis strategy

C = 4.57e3; %Dynamic load rating in N
C0 = 5.7e3; %Static load rating in N
L10 = 1e6; %L10 life at C is 10^6 revolutions

F = Wr_sun_planet1*2; %Radial load on bearing, from Wr from gearStressesPlanetary, the number is equal for both stages, so multiply by 2
a = 10/3; %Constant for roller bearings

L = ((C*L10^(1/a))/F)^a; %Equation 11-1 and 11-2
Lreq = cycles_sun/12; %Unsure of exact number of revolutions of bearing relative to sun, this seems to be a safe estimate
fprintf('Needle planet bearing: L = %f revolutions\n', L);
fprintf('Needle planet bearing: L/Lreq = %f\n', L/Lreq);

%% Wheel Bearings
C = 49.4e3; %Dynamic load rating in N
C0 = 40e3; %Static load rating in N
L10 = 1e6; %L10 life at C is 10^6 revolutions

Fr = 3.627261e+03; %Expected radial load on bearings
Fa = 5.325829e+02; %Expected axial load on bearings

a = 3; %Constant for ball bearings 
V = 1; %Rotation factor for inner ring rotating

comp = Fa/C0;
table_Fa_C0 = [0.014 0.021 0.028 0.042 0.056 0.070 0.084 0.110 0.17 0.28 0.42 0.56];
table_e = [0.19 0.21 0.22 0.24 0.26 0.27 0.28 0.30 0.34 0.38 0.42 0.44];

if comp <= table_Fa_C0(1)
    e = table_e(1);
elseif comp >= table_Fa_C0(end)
    e = table_e(end);
else
    i = 1;
    while (Fa/C0-table_Fa_C0(i))<0
        i = i+1;
    end
    slope = (table_e(i+1)-table_e(i))/(table_Fa_C0(i+1)-table_Fa_C0(i));
    e = slope*(table_Fa_C0(i+1)-table_Fa_C0(i)) + table_e(i);
end

table_X2 = 0.56;
table_Y2 = [2.30 2.15 1.99 1.85 1.71 1.63 1.55 1.45 1.31 1.15 1.04 1.00];

if (Fa/(V*Fr)) <= e
    Fe = V*Fr; %Equation 11-9, equivalent load
else
    slope = (table_Y2(i+1)-table_Y2(i)) / (table_Fa_C0(i+1)-table_Fa_C0(i));
    Y2 = slope*(table_Fa_C0(i+1)-table_Fa_C0(i)) + table_Y2(i);
    Fe = X2*V*Fr + Y2*Fa; %Equation 11-9, equivalent load
end
        
L = ((C*L10^(1/a))/Fe)^a; %Equation 11-1 and 11-2;
Lreq = tireRotations;

fprintf('Wheel Bearing: L = %f revolutions\n', L);
fprintf('Wheel Bearing: L/Lreq = %f\n', L/Lreq);
