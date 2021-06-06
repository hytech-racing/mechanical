%%
%The following script determines an ideal drivetrain reduction. It takes
%the input variables and uses a starting acceleration to determine the
%vehicle weight shift, then uses that weight shift to determine a new
%acceleration, and likewise a new weight shift. The weight shift is used in
%determining the ideal gear reduction (a reduction which will push the tire
%to the point of wheel slip for the given normal load. The new acceleration
%value determines a new weight shift and therefore a new normal load/gear
%reduction. This process iterates until the approximate error of the gear
%reduction is within the specified value. 

%Author: Ajay Sukhwani

%Improvements: More work should be done to validate the u value. I don't
%know shit about tires and it doesn't seem like anyone I've spoken to does
%either.
%%

%initialize variables

L = 1.53;        %wheelbase(m)
r = 0.2032;      %radius(m)
cgz = 0.2286;    %center of gravity height(m)
u = 2;           %coeff of friction
tmax = 150;      %max torque(N/m)
m = 227;         %vehicle mass(kg). This includes 68kg for driver
g = 9.81;        %acceleration due to gravity(m/s^2)
iter = 0;        %tracks number of iterations required
gearRatio = 2;   %initial guess for gear ratio
a = 9.81;        %longitudinal acceleration
ea = 100;        %approximate error in percent
Fr = m/2*g;      %Normal force on rear tires

while ea > 0.0001
    deltaNf = (cgz*m*a)/L;                                     %change in normal force caused by shift in cg
    Fr1 = (Fr + deltaNf)*u;                                    %new force on rear tires
    a = Fr1/m;                                                 %new acceleration given the added force before tire slip
    tr = Fr1*r;                                                %new tire slip torque
    gearRatioNew = tr/tmax;                                    %new gear ratio
    ea = abs(((gearRatio - gearRatioNew)/gearRatioNew))*100;   %error between gear ratio calculations
    gearRatio = gearRatioNew;                                  %updated gear ratio with newest calculated value
    iter = iter + 1;
end
zeroToSixty = 60/(0.5*a);
topSpeed = 6500/gearRatioNew*3.14159*(16/12)/5280*60
