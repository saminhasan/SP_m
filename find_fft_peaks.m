function traj_f = find_fft_peaks(pose)
    % Unpack values from the pose struct array simulation input
    y = zeros(1, length(pose));
    time0 = zeros(1, length(pose));
    for i = 1:length(pose)
        time0(i) = pose(i).time0;
        y(i) = pose(i).y;
    end

    fft_y = abs(fft(y)) * 180/pi / length(y) * 2;
    fft_f = (0:1:length(fft_y)-1) / length(fft_y) * time0(end);
    % Plot FFT of y
    figure;
    hold on;
    plot(fft_f, fft_y, '-r', 'DisplayName', 'FFT Y');
    xlabel('Frequency (Hz)');
    ylabel('Amplitude');
    legend;
    grid on;
    hold off;
    % Consider only positive frequencies
    positive_freq_indices = fft_f > 1;
    fft_f = fft_f(positive_freq_indices);
    fft_y = fft_y(positive_freq_indices);

    % Find the index of the maximum value in the positive frequencies
    [~, maxIndex] = max(fft_y);

    % Corresponding frequency
    maxFrequency = fft_f(maxIndex);
    disp('Maximum Frequency:');
    disp(maxFrequency);
    traj_f = maxFrequency;
end