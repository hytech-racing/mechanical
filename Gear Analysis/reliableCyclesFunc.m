function cycles = reliableCyclesFunc(Yn,Zn)
if Yn > 2.75
    cyclesBend = 0.0001;
elseif Yn > 1
    cyclesBend = (Yn/6.1514)^(-1/0.1192);
else
    cyclesBend = (Yn/1.6831).^(-1/0.0323);
end

if Zn > 1.5
    cyclesCont = 0.0001;
else
    cyclesCont = (Zn/2.466)^(-1/0.056);
end

cycles = min(cyclesCont,cyclesBend);
