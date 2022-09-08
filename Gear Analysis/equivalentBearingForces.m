%Equivalent radial and axial force calculator
%Eq 11-13
load('lapSimResult_8.14.22.mat');

%RI, RO, FI, FO
%small angle approximation used
%wheel turn angle small so bearing angle relative to Fx, Fy, and Fz
%negligible
%R1 = outer bearing
%R2 = inner bearing

%pulling all directional forces
F_x = Result.Fx(2:end,:);
F_y = Result.Fy(2:end,:);
F_z = Result.Fz(2:end,:);

dist = Result.dist;
dist_delta = dist(2:end) - dist(1:end-1);
dist_total = dist(end) - dist(1);

a = 3; %Constant for ball bearings

%Coordinates
%Axis System: Wheel Center@Ground
loc_F_data = [0, 0, 0];
loc_bearing1 = [0, 0.02975, 0.2];
loc_bearing2 = [0, 0.08075, 0.2];
loc_b1_b2 = abs(loc_bearing2-loc_bearing1);


%Moment Formulas
R_2z = (F_z.*loc_bearing1(2) - F_y.*loc_bearing1(3)) / loc_b1_b2(2);
R_1z = -1.*(F_z.*loc_bearing2(2) - F_y.*loc_bearing2(3)) / loc_b1_b2(2);
R_2x = (F_x.*loc_bearing1(2)) / loc_b1_b2(2);
R_1x = -1.*(F_x.*loc_bearing2(2)) / loc_b1_b2(2);

R_1y = F_y/2;
R_2y = F_y/2;

%separating axial and radial
F_1rad = abs(sqrt(R_1x.^2 + R_1z.^2));
F_1ax = abs(R_1y);

F_2rad = abs(sqrt(R_2x.^2 + R_2z.^2));
F_2ax = abs(R_2y);

%Shigley's Eq 11-13
F_1rad_eq_v = (sum(F_1rad.^a.*dist_delta) ./ dist_total).^(1/a);
F_1ax_eq_v = (sum(F_1ax.^a.*dist_delta) ./ dist_total).^(1/a);

F_2rad_eq_v = (sum(F_2rad.^a.*dist_delta) ./ dist_total).^(1/a);
F_2ax_eq_v = (sum(F_2ax.^a.*dist_delta) ./ dist_total).^(1/a);

F_rad_eq = max([F_1rad_eq_v, F_2rad_eq_v]);
F_ax_eq = max([F_1ax_eq_v, F_2ax_eq_v]);

fprintf('Radial F_eq = %d Newtons\n',F_rad_eq)
fprintf('Axial F_eq = %d Newtons\n',F_ax_eq)

