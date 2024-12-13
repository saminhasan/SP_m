function plot_fft(t, signal1)
    freq_range = [0, 50]; % Frequency range to plot (e.g., 0 to 50 Hz)
    
    % Sampling parameters
    Fs = 1 / mean(diff(t));  % Sampling frequency (Hz)
    L = length(t);           % Length of the signal (assumes both signals have same length)
    NFFT = 2^nextpow2(L);    % Next power of 2 for zero-padding
    f = Fs / 2 * linspace(0, 1, NFFT / 2 + 1); % Frequency vector
    
    % FFT computation and magnitude in dB for signal1
    Y1 = fft(signal1, NFFT) / L;               % Compute FFT and normalize for signal1
    magnitude_db1 = 20 * log10(abs(Y1(1:NFFT/2+1))); % Magnitude in dB for signal1



    % Plot for the specified frequency range
    freq_indices = f >= freq_range(1) & f <= freq_range(2); % Indices within range
    figure('Name', 'FFT Magnitude (dB)', 'NumberTitle', 'off');
    hold on;
    plot(f(freq_indices), magnitude_db1(freq_indices), 'LineWidth', 1.5, 'DisplayName', 'Ref');
    title('FFT Magnitude Spectrum (dB)');
    xlabel('Frequency (Hz)');
    ylabel('Magnitude (dB)');
    legend('show'); % Show legend to distinguish the two signals
    grid on;
    xlim(freq_range);
    hold off;
end
