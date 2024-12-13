function [extended_time_sec, filtered_z_rad, filtered_x_rad, filtered_y_rad, filtered_z_m, ts] = filter_signal(filename, tf, cutoff_frequency)
    % Read the CSV file
    data = readtable(filename, 'CommentStyle','#');

    % Extract data into variables
    time_sec = data{:, 'time'};
    z_measured_deg = data{:, 'Z_rot'};
    x_measured_deg = data{:, 'X_rot'};
    y_measured_deg = data{:, 'Y_rot'};
    z_measured_m = data{:, 'Z'};

    % Calculate the time step
    ts = time_sec(2) - time_sec(1);

    % Calculate the number of rows needed to reach tf
    num_rows = ceil(tf / ts) + 1;

    % Preallocate arrays
    extended_time_sec = zeros(num_rows, 1);
    extended_z_measured_deg = zeros(num_rows, 1);
    extended_x_measured_deg = zeros(num_rows, 1);
    extended_y_measured_deg = zeros(num_rows, 1);
    extended_z_measured_m = zeros(num_rows, 1);

    % Fill the preallocated arrays
    for i = 1:num_rows
        index = mod(i-1, length(time_sec)) + 1;
        extended_time_sec(i) = (i-1) * ts;
        extended_z_measured_deg(i) = z_measured_deg(index) - mean(z_measured_deg);
        extended_x_measured_deg(i) = x_measured_deg(index) - mean(x_measured_deg);
        extended_y_measured_deg(i) = y_measured_deg(index) - mean(y_measured_deg);
        extended_z_measured_m(i) = z_measured_m(index) - mean(z_measured_m);
    end

    extended_z_measured_rad = deg2rad(extended_z_measured_deg);
    extended_x_measured_rad = deg2rad(extended_x_measured_deg);
    extended_y_measured_rad = deg2rad(extended_y_measured_deg);

    fft_z_rad = fft(extended_z_measured_rad);
    fft_x_rad = fft(extended_x_measured_rad);
    fft_y_rad = fft(extended_y_measured_rad);
    fft_z_m = fft(extended_z_measured_m);
    n = length(extended_time_sec);

    % Define the frequency axis
    f = (0:n-1) * (1/(n * ts)); % Frequency axis in Hz
% % Take the magnitude of the FFT
% mag_fft_z_rad = abs(fft_z_rad / n);
% mag_fft_x_rad = abs(fft_x_rad / n);
% mag_fft_y_rad = abs(fft_y_rad / n);
% mag_fft_z_m = abs(fft_z_m / n);
% % % Only plot the first half of the spectrum (positive frequencies)
% half_n = floor(n/2);
% 
% f = f(1:half_n);
% mag_fft_z_rad = mag_fft_z_rad(1:half_n);
% mag_fft_x_rad = mag_fft_x_rad(1:half_n);
% mag_fft_y_rad = mag_fft_y_rad(1:half_n);
% mag_fft_z_m = mag_fft_z_m(1:half_n);
% % Plot FFT of Z rotation (radians)
% figure;
% subplot(2,2,1);
% plot(f, mag_fft_z_rad);
% title('FFT of Z Rotation (rad)');
% xlabel('Frequency (Hz)');
% ylabel('Magnitude (rad)');
% 
% % Plot FFT of X rotation (radians)
% subplot(2,2,2);
% plot(f, mag_fft_x_rad);
% title('FFT of X Rotation (rad)');
% xlabel('Frequency (Hz)');
% ylabel('Magnitude (rad)');
% 
% % Plot FFT of Y rotation (radians)
% subplot(2,2,3);
% plot(f, mag_fft_y_rad);
% title('FFT of Y Rotation (rad)');
% xlabel('Frequency (Hz)');
% ylabel('Magnitude (rad)');
% 
% % Plot FFT of Z displacement (meters)
% subplot(2,2,4);
% plot(f, mag_fft_z_m);
% title('FFT of Z Displacement (m)');
% xlabel('Frequency (Hz)');
% ylabel('Magnitude (m)');
% 
% % Adjust plot layout
% sgtitle('FFT Analysis of Measured Signals (in Radians and Meters)');
    % Handle different cases for cutoff_frequency input
    if isscalar(cutoff_frequency)
        % Low-pass filter case (only keep frequencies <= cutoff_frequency)
        filter_mask = f <= cutoff_frequency;
    elseif length(cutoff_frequency) == 2
        % Band-stop filter case (remove frequencies within the range)
        filter_mask = ~(f >= cutoff_frequency(1) & f <= cutoff_frequency(2));
    else
        error('cutoff_frequency must be either a scalar or a 2-element vector');
    end

    % Apply the filter mask to the FFT results
    fft_z_rad_filtered = fft_z_rad;
    fft_z_rad_filtered(~filter_mask) = 0;

    fft_x_rad_filtered = fft_x_rad;
    fft_x_rad_filtered(~filter_mask) = 0;

    fft_y_rad_filtered = fft_y_rad;
    fft_y_rad_filtered(~filter_mask) = 0;

    fft_z_m_filtered = fft_z_m;
    fft_z_m_filtered(~filter_mask) = 0;

    % Perform inverse FFT (ifft) to get the filtered signals back in time domain
    filtered_z_rad = ifft(fft_z_rad_filtered, 'symmetric');
    filtered_x_rad = ifft(fft_x_rad_filtered, 'symmetric');
    filtered_y_rad = ifft(fft_y_rad_filtered, 'symmetric');
    filtered_z_m = ifft(fft_z_m_filtered, 'symmetric');

    % % Plot the filtered signals
    % figure;
    % subplot(2,2,1);
    % plot(extended_time_sec, filtered_z_rad);
    % title('Filtered Z Rotation (rad)');
    % xlabel('Time (s)');
    % ylabel('Amplitude (rad)');
    % 
    % subplot(2,2,2);
    % plot(extended_time_sec, filtered_x_rad);
    % title('Filtered X Rotation (rad)');
    % xlabel('Time (s)');
    % ylabel('Amplitude (rad)');
    % 
    % subplot(2,2,3);
    % plot(extended_time_sec, filtered_y_rad);
    % title('Filtered Y Rotation (rad)');
    % xlabel('Time (s)');
    % ylabel('Amplitude (rad)');
    % 
    % subplot(2,2,4);
    % plot(extended_time_sec, filtered_z_m);
    % title('Filtered Z Displacement (m)');
    % xlabel('Time (s)');
    % ylabel('Amplitude (m)');
    % 
    % % Adjust plot layout
    % sgtitle('Filtered Signals (With Frequency Filtering)');
    % 
    % % Plot all extended variables vs time for reference
    % figure;
    % subplot(2,2,1);
    % plot(extended_time_sec, extended_z_measured_deg);
    % title('Z Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('Z Measured (deg)');
    % grid on;
    % 
    % subplot(2,2,2);
    % plot(extended_time_sec, extended_x_measured_deg);
    % title('X Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('X Measured (deg)');
    % grid on;
    % 
    % subplot(2,2,3);
    % plot(extended_time_sec, extended_y_measured_deg);
    % title('Y Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('Y Measured (deg)');
    % grid on;
    % 
    % subplot(2,2,4);
    % plot(extended_time_sec, extended_z_measured_m);
    % title('Z Measured (m) vs Time');
    % xlabel('Time (s)');
    % ylabel('Z Measured (m)');
    % grid on;

end
