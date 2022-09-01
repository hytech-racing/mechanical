%Equivalent radial and axial force calculator
%Eq 11-13
load('lapSimResult_8.14.22.mat');

%RI, RO, FI, FO
%small angle approximation used
%wheel turn angle small so bearing angle relative to Fx, Fy, and Fz
%negligible

%pulling all directional forces
F_x = Result.Fx(2:end,:);
F_y = Result.Fy(2:end,:);
F_z = Result.Fz(2:end,:);

dist = Result.dist;
dist_delta = dist(2:end) - dist(1:end-1);
dist_total = dist(end) - dist(1);

a = 3; %Constant for ball bearings

%separating axial and radial
F_rad = abs(sqrt(F_x.^2 + F_z.^2));
F_ax = abs(F_y);

%Shigley's Eq 11-13
F_rad_eq_v = (sum(F_rad.^a.*dist_delta) ./ dist_total).^(1/a);
F_ax_eq_v = (sum(F_ax.^a.*dist_delta) ./ dist_total).^(1/a);

F_rad_eq = max(F_rad_eq_v);
F_ax_eq = max(F_ax_eq_v);

fprintf('Radial F_eq = %d Newtons\n',F_rad_eq)
fprintf('Axial F_eq = %d Newtons\n',F_ax_eq)

