% HyTech Simulink Init File

clc
clear variables
close all

%Drive Cycle
load Drive_Cycles/Schedule_Endurance_22km.mat;

%Vehicle Parameters
Vehicle_Mass = 260;                 % Vehicle Mass with Driver, [kg]
Vehicle_CG_in = 14;                 % Vehicle CG, [in]
Vehicle_FrontToCG_in = 30.25;       % Vehicle Front Axle to CG, [in]
Vehicle_RearToCG_in = 30.25;        % Vehicle Rear Axle to CG, [in]
Vehicle_Cd = 1.17;                  % Vehicle Drag Coefficient, [-]
Vehicle_Frontal_Area = 1.18;        % Vehicle Frontal Area, [m^2]
Vehicle_Tire_Radius = 0.2286;       % Tire radius, [m] (9 inch)
Vehicle_Tire_Inertia = 0.26;        % Tire Inertia, [kg-m^2]
Vehicle_DShaft_Inertia = 0.2;       % Driveshaft Inertia, [kg-m^2]

%MG Parameters
load Component_Data/MG_Data_Continuous.mat;
MG_Inertia = 0.0256;                % MG Inertia, [kg-m^2]
Rear_Sprocket_Teeth = 80;           % Teeth on Front Sprocket, [-]
Front_Sprocket_Teeth = 10;          % Teeth on Rear Sprocket, [-]

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