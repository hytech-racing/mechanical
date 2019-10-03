%% SCRIPT:  Make_Endurance

clc
clear
close all

%% Inputs
filename = 'Schedule_Autocross.mat';
dt = 0.01; % [s]
v_break = 15; % [m/s]
endurance_km = 22;

%% Load Data
load(filename)
t_old_s = Sch_Cycle(:,1);
v_old_mps = Sch_Cycle(:,2)*0.44704;
dist_km_old = trapz(t_old_s,v_old_mps)/1000;

%% Interpolate Data to 0.001 Time Scale
t_s = (0:dt:t_old_s(end))';
v_mps = interp1(t_old_s,v_old_mps,t_s);

%% Make Autocross 1 km Long
logical_above = v_mps >= v_break; index_above = find(logical_above);
logical_below = v_mps <= v_break; index_below = find(logical_below);
t_s = t_s(index_above(1):index_below(end));
v_mps = v_mps(index_above(1):index_below(end));
dist_km = trapz(t_s,v_mps)/1000;

%% Plot Result
figure('units','normalized','outerposition',[0 0 1 1])

subplot(2,1,1); plot(t_old_s,v_old_mps,'LineWidth',2); grid minor
title(['Old Lap: ' num2str(dist_km_old) ' [km]'],'FontSize',40)
xlabel('Time [s]','FontSize',30); ylabel('Speed [m/s]','FontSize',30)
set(gca,'FontSize',25); x1 = xlim; y1 = ylim; xlim(x1); ylim(y1)

subplot(2,1,2); plot(t_s,v_mps,'LineWidth',2); grid minor
title(['New Lap: ' num2str(dist_km) ' [km]'],'FontSize',40)
xlabel('Time [s]','FontSize',30); ylabel('Speed [m/s]','FontSize',30)
set(gca,'FontSize',25); xlim(x1); ylim(y1)

%% Change mps to mph
v_mph = v_mps/0.44704;

%% Zero t to zero
t_s = t_s - t_s(1);

%% Clear Old Variables
clearvars -except endurance_km t_s v_mph dt

%% Make 1km Autocross Cycle
Sch_Cycle = [t_s, v_mph];
save('Schedule_Autocross_1km.mat','Sch_Cycle');

%% Make 22km Endurance Cycle
t_endurance = []; v_endurance = [];
for i = 1:endurance_km
    if i == 1
        t_endurance = t_s;
        v_endurance = v_mph;
    else
        t_endurance = [t_endurance; t_s + t_endurance(end) + dt];
        v_endurance = [v_endurance; v_mph];
    end
end
Sch_Cycle = [t_endurance, v_endurance];
save('Schedule_Endurance_22km.mat','Sch_Cycle');

%% Plot Full Endurance
dist_endurance_km = trapz(t_endurance,v_endurance*0.44704)/1000;

figure('units','normalized','outerposition',[0 0 1 1])
plot(Sch_Cycle(:,1),Sch_Cycle(:,2));
title(['Endurance: ' num2str(dist_endurance_km) ' [km]'],'FontSize',40)
xlabel('Time [s]','FontSize',30); ylabel('Speed [mph]','FontSize',30)
set(gca,'FontSize',25);