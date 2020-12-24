dischargeNormalized = [0 .1 .2 .3 .4 .5 .6 .7 .8 .9 1];
voltage = [4.19663451960785 4.10291939215686 4.00244132352941 3.95037044117647 3.88583377450980 3.82766595098039 3.79611972549020 3.77844837254902 3.75353278431372 3.70610253921569 3.58511425490196];
figure(1);
plot(dischargePercent, voltage), title("Discharge Characteristics at Room Temperature, .33C"), xlabel("1 minus SOC"), 
ylabel("Voltage");

