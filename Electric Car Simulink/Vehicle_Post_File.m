%% Post Processing

%% Constants
Distance_Endurance = 22;                                     % km

%% Calculate Total Distance and Delta SOC
Distance_km = Vehicle_Distance_miles(end)*1.609;             % km
delta_SOC = Battery_SOC(end)-Battery_Initial_SOC;            % non-dim

%% See If We Would Finish Endurance
Laps_Required = Distance_Endurance/Distance_km;              % laps
delta_SOC_enduro = Laps_Required*delta_SOC;                  % non-dim
FOS = -(battery_soc_high-battery_soc_low)/delta_SOC_enduro;  % non-dim

%Dialogbox
msg1=sprintf('Simulation Results: \n\n');
msg2=sprintf('Total Distance Traveled (km) = %g\n',Distance_km);
msg3=sprintf('Delta SOC = %g\n',delta_SOC);
h=msgbox([msg1,msg2,msg3]);