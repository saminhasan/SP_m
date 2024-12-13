function ramp = smoothStep(t, t1, t2)
    % Generate the linear ramp
    ramp = max(0, min(1, (t - t1) / (t2 - t1)));
    % Find indices where ramp is in the range (0, 1)
    idxs = ramp > 0 & ramp < 1;
    % Apply the sine smooting for the ramp in this range
    % frequency and phase is calculated in such a way, so that, starts
    % smoothly rising(t2>t1) or falling(t1>t2) at interval. 
    ramp(idxs) = (1 - sin((pi * (2 * t(idxs) - 5 * t1 + 3 * t2)) / (2 * (t1 - t2)))) / 2;
end