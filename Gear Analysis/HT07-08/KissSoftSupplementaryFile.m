%% For use in KissSoft
%% Data Processing and Inputs
load('Result.mat');

m = 0.7;               %Module [mm]
phi = 20;              %Pressure angle in degrees
phi = deg2rad(phi);    %Pressure angle in rad
F = 17;                %Face width of gears [mm]

n_sun = 27;            %Number of teeth on each gear
n_planet1 = 66;
n_planet2 = 27;
n_ring = n_sun+n_planet1+n_planet2; %equation is only true if module is equal in both stages

d_sun = n_sun.*m;            %Pitch diameter of each gear [mm]
d_planet1 = n_planet1.*m;
d_planet2 = n_planet2.*m;
d_ring = n_ring.*m;
d_carrier = d_sun+d_planet1;

T_sun = mean(Result.T,2); %Taking an average of the 4 tires 
T_sun = T_sun/3; %Accounting for load sharing between 3 sun teeth
T_planet1 = (-d_planet1/d_sun) * T_sun; %Divide by 3 already taken into account in sun torque
T_planet2 = T_planet1;
T_ring = (-d_ring/d_planet2) * T_planet2;

omega_tire= Result.v/tire_radius; % rad/s
omega_sun = omega_tire * gear_ratio;  %Angular velocity in rad/s (20,000 RPM = max motor speed)
omega_carrier = omega_sun / gear_ratio;
omega_planet2 = -omega_carrier*(d_carrier/d_planet2);
omega_planet1 = omega_planet2;
omega_ring = 0;

%% Lifecycle
time_hrs = Result.t(end) * 1000 / 60 / 60;

%% Exporting Load Profile .dat File
mask = T_sun == 0;
T_sun_KS = T_sun;
T_sun_KS(mask) = 1e-9;  %KissSoft finds torque and speed =/= 0 unusal
mask = omega_sun == 0;
omega_sun_KS = omega_sun;
omega_sun_KS(mask) = 1e-9;
sunMatrix = [1/(length(T_sun_KS))*ones(length(T_sun_KS),1), T_sun_KS/21, omega_sun_KS/2094.395]; %2094.395 = (9.549297 RPM per rad/s)/20000
% writematrix(sunMatrix,'sunData.dat','Delimiter','space');


mask = T_planet2 == 0;
T_planet2_KS = T_planet2;
T_planet2_KS(mask) = 1e-9;
mask = omega_planet2 == 0;
omega_planet2_KS = omega_planet2;
omega_planet2_KS(mask) = 1e-9;
planet2Matrix = [1/(length(T_planet2_KS))*ones(length(T_planet2_KS),1), T_planet2_KS/21, omega_planet2_KS/2094.395];
% writematrix(planet2Matrix,'planet2Data.dat','Delimiter','space');

%% Calculating Alternating Bending Factor YM
T_sun_KS2 = T_sun_KS(2:end);
T_sun_KS1 = T_sun_KS(1:end-1);
loadDirectionChange = (T_sun_KS2./T_sun_KS1) < 0;
changes = find(loadDirectionChange);

changes2 = changes(2:end);
changes1 = changes(1:end-1);
cyclesBetweenChanges = mean(changes2 - changes1);

YM = 0.85 - 0.2.*((log10(cyclesBetweenChanges))/6);
