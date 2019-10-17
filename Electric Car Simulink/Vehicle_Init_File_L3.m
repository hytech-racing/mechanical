% HyTech Simulink Init File

clc
clear variables
close all

%Drive Cycle
load Drive_Cycles/Schedule_Endurance_22km.mat;

%Vehicle Parameters
Vehicle_Mass = 241;                 % Vehicle Mass with Driver, [kg]
Vehicle_CG_in = 14;                 % Vehicle CG, [in]
Vehicle_FrontToCG_in = 19;       % Vehicle Front Axle to CG, [in]
Vehicle_RearToCG_in = 34.6;        % Vehicle Rear Axle to CG, [in]
Vehicle_Cd = 1.17;                  % Vehicle Drag Coefficient, [-]
Vehicle_Frontal_Area = 1.32;        % Vehicle Frontal Area, [m^2]
Vehicle_Tire_Radius = 0.2286;       % Tire radius, [m] (9 inch)
Wheel_Inertia = 0.02179531;         % Wheel Inertia, [kg-m^2]
Tire_Inertia = 0.193286;            % Tire Inertia, [kg-m^2]
Wheel_Plus_Tire_Inertia = Wheel_Inertia + Tire_Inertia;         % Combined Wheel-Tire Inertia, [kg-m^2]
Halfshaft_Inertia = 0.00004717091;% Halfshaft Inertia, [kg-m^2]

%Drivetrain Parameters
%For components with masses not readily available online, masses were
%estimated using the alloy steel material density on SolidWorks
Big_Sprocket_Inertia = 0.0013908562;            % Big Sprocket Inertia, [kg-m^2]
Little_Sprocket_Inertia = 0.00002132185;        % Little Sprocket Inertia, [kg-m^2]
Differential_Inertia = 0.0021039697;            % Differential Inertia, [kg-m^2]
Inner_Piece_Bearings_Inertia = 0.00007933483;   % Inner Piece of Bearings Inertia, [kg-m^2]
Sprocket_Interface_Inertia = 0.0002190654;     % Sprocket Interface Inertia, [kg-m^2]
Rear_Sprocket_Teeth = 41;                       % Teeth on Front Sprocket, [-]
Front_Sprocket_Teeth = 8;                       % Teeth on Rear Sprocket, [-]

%Motor Parameters
load Component_Data/MG_Data_Continuous.mat;
Motor_Output_Shaft_Inertia = 0.0011480592;  % Motor Output Shaft Inertia, [kg-m^2]
Emrax188_Rotor_Inertia = 0.0134;            % Emrax 188 Rotor Inertia, [kg-m^2]
Emrax208_Rotor_Inertia = 0.0256;            % Emrax 208 Rotor Inertia, [kg-m^2]
Rotor_Inertia = Emrax188_Rotor_Inertia;     % Sprocket Interface Inertia, [kg-m^2]
Equivalent_Powertrain_Inertia = Emrax188_Rotor_Inertia + Big_Sprocket_Inertia + Little_Sprocket_Inertia + Differential_Inertia + Inner_Piece_Bearings_Inertia + Sprocket_Interface_Inertia + Motor_Output_Shaft_Inertia;

%Battery Parameters
load Component_Data/Battery_Data.mat; 
Battery_Capacity = 5800/300;        % Battery Max Capacity, [Ahr]
Battery_Initial_SOC = 0.9;          % Battery Initial SOC, [Decimal]
Max_Current_Charge = 250;           % Battery Charge Current Limit, [A]
Max_Current_Discharge = -250;       % Battery Discharge Current Limit, [A]

%Controller Parameters
battery_soc_low = 0.1;              % Battery SOC Low Value, [Decimal]
battery_soc_high = 0.9;             % Battery SOC High Value, [Decimal]

%Logging Parameters
Logging_Sample_Time_s = 0.01;          %Logging time, [s]