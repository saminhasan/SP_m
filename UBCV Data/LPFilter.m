% function filteredSignal = LPFilter(signal, dt, fc)
%     [b, a] = butter(2, fc / ((1/dt) / 2), 'low'); % 2nd order Butterworth filter, cutoff freq - fc, sampling freq - 1 / dt
%     filteredSignal = filtfilt(b, a, signal);
% end