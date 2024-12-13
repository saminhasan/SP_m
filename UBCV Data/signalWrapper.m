function warpedSignal = signalWrapper(time, Signal)
    wT = warpTime(time, 1);
    warpedSignal = interp1(time,Signal, wT,"spline");
end