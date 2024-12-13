function position = computeZ(acceleration_z, dt)
    %   acceleration_z - Z-axis acceleration in m/s^2
    %   dt           - Sampling time in s
    %   fc           - High-pass filter cutoff frequency in Hz
    %   position     - Position vector without drift

    % Remove drift using a high-pass filter
    fc = 1.0; % Hz cutoff frequency 1 Hz
    accelerationHP = HPFilter(acceleration_z, dt, fc);
    position = filter(dt^2, [1, -2, 1], accelerationHP);
end


