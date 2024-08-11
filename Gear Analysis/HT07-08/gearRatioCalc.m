%% Gear Ratio Calculator
% by Jacob Dane

m = 0.7;              %Module [mm]
phi = 20;           %Pressure angle in degrees
phi = deg2rad(phi); %Pressure angle in rad
F = 15;               %Face width of gears [mm]

%% Modify These ----------------------------------------------------------
n_sun = 25;    %Number of teeth on each gear
n_planet1 = 84;
n_planet2 = 26;
%% -----------------------------------------------------------------------

% %current
% n_sun = 27;          
% n_planet1 = 66;
% n_planet2 = 27;

n_ring = n_sun+n_planet1+n_planet2; %equation is only true if module is equal in both stages

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
