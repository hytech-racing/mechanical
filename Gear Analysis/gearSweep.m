%% Notes
% There are a couple items in gearStressesFunc which do not run
% automatically (some of the factors come from graphs which could not be
% programmed). Therefore, after selecting a gear train, rerun
% gearStressesPlanetary with chosen parameters, checking that each factor
% is accurately computed.

% results_table:
% Column 1 | Gear Ratio
% Column 2:5 | sun,, planet1, planet2, ring teeth, respectively
% Column 6 | all gears pass? (boolean)
% Column 7:26 | sun, planet1, planet2, ring:
    % 1st Column | allowable AGMA bending stress
    % 2nd Column | AGMA bending stress
    % 3rd Column | allowable AGMA contact stress
    % 4th Column | AGMA contact stress
    % 5th Column | gear passes? (boolean)

%% Inputs
gear_ratio = 12;
F = 14;
m = 0.7;
Q = 12;

n_sun_min = 20;
n_sun_max = 60;
n_planet1_min = 40;
n_planet1_max = 80;
n_planet2_min = 28;

range = 10;

%% Sweep
results_table = [];

for n_sun = n_sun_min:n_sun_max
   for n_planet1 = n_planet1_min:n_planet1_max
    if n_planet1 > n_sun
   
        n_ring = ((gear_ratio*n_planet1*n_sun) + (gear_ratio*n_sun^2) +1) / (gear_ratio*n_sun - n_planet1);
        
        %round both up and down        
        
        n_ring_1 = floor(n_ring);
        n_planet2_1 = n_ring_1 - (n_planet1 + n_sun);
        gear_ratio_1 = ((n_planet1*n_ring_1) / (n_planet2_1*n_sun)) + 1;
        results = gearStressesFunc(n_planet1,n_planet2_1,n_sun,n_ring_1,F,m,Q);
        check_gear_ratio = gear_ratio_1 >= 12 && gear_ratio_1 <= 13;
        check_planet2 = n_planet2_1 >= n_planet2_min;
        if results(1) && check_planet2 && check_gear_ratio
            results_table = [results_table; gear_ratio_1, n_sun, n_planet1, n_planet2_1, n_ring_1, results];
        end        
        
        n_ring_2 = ceil(n_ring);
        n_planet2_2 = n_ring_2 - (n_planet1 + n_sun);
        gear_ratio_2 = ((n_planet1*n_ring_2) / (n_planet2_2*n_sun)) + 1;        
        results = gearStressesFunc(n_planet1,n_planet2_2,n_sun,n_ring_2,F,m,Q);
        check_gear_ratio = gear_ratio_2 >= 12 && gear_ratio_2 <= 13;
        check_planet2 = n_planet2_2 >= n_planet2_min;
        if results(1) && check_planet2 && check_gear_ratio
            results_table = [results_table; gear_ratio_2, n_sun, n_planet1, n_planet2_2, n_ring_2, results];
        end
        
        
        for i = 1:range
            n_ring_ceil_i = ceil(n_ring)+i;
            n_planet2_ceil_i = n_ring_ceil_i - (n_planet1 + n_sun);
            gear_ratio_ceil_i = ((n_planet1*n_ring_ceil_i) / (n_planet2_ceil_i*n_sun)) + 1;        
            results = gearStressesFunc(n_planet1,n_planet2_ceil_i,n_sun,n_ring_ceil_i,F,m,Q);
            check_gear_ratio = gear_ratio_ceil_i >= 12 && gear_ratio_ceil_i <= 13;
            check_planet2 = n_planet2_ceil_i >= n_planet2_min;
            if results(1) && check_planet2 && check_gear_ratio
                results_table = [results_table; gear_ratio_ceil_i, n_sun, n_planet1, n_planet2_ceil_i, n_ring_ceil_i, results];
            end    
            
            n_ring_floor_i = floor(n_ring)-i;
            n_planet2_floor_i = n_ring_floor_i - (n_planet1 + n_sun);
            gear_ratio_floor_i = ((n_planet1*n_ring_floor_i) / (n_planet2_floor_i*n_sun)) + 1;
            results = gearStressesFunc(n_planet1,n_planet2_floor_i,n_sun,n_ring_floor_i,F,m,Q);
            check_gear_ratio = gear_ratio_floor_i >= 12 && gear_ratio_floor_i <= 13;
            check_planet2 = n_planet2_floor_i >= n_planet2_min;
            if results(1) && check_planet2 && check_gear_ratio
                results_table = [results_table; gear_ratio_floor_i, n_sun, n_planet1, n_planet2_floor_i, n_ring_floor_i, results];
            end  
        end    
        
    end
   end
end
