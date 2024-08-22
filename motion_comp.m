function [] = motion_comp(out, pose)
    % Extract data from simulation output
    tssim = out.pose_simscape.Time;
    xs = out.pose_simscape.Data(:,1);
    ys = out.pose_simscape.Data(:,2);
    zs = out.pose_simscape.Data(:,3);
    Rxs = -out.pose_simscape.Data(:,4) - pi/2;
    Rys = -out.pose_simscape.Data(:,6) - pi/2;
    Rzs = out.pose_simscape.Data(:,5);

    % Unpack values from the pose struct array simulation input
    [x, y, z, Rx, Ry, Rz, time0] = deal(zeros(1, length(pose)));
    for i = 1:length(pose)
        x(i) = pose(i).x;
        y(i) = pose(i).y;
        z(i) = pose(i).z;
        Rx(i) = pose(i).Rx;
        Ry(i) = pose(i).Ry;
        Rz(i) = pose(i).Rz;
        time0(i) = pose(i).time0;
    end

    % % Calculate FFT of rotational components
    % fft_rx = abs(fft(Rx)) * 180/pi / length(Rx) * 2;
    % fft_ry = abs(fft(Ry)) * 180/pi / length(Ry) * 2;
    % fft_rz = abs(fft(Rz)) * 180/pi / length(Rz) * 2;
    % fft_f = (0:1:length(fft_rx)-1) / length(fft_rx) * 240;
    % 
    % % Plot FFT of rotational components
    % figure;
    % hold on;
    % plot(fft_f, fft_rx, '-r', 'DisplayName', 'FFT Rx');
    % plot(fft_f, fft_ry, '-g', 'DisplayName', 'FFT Ry');
    % plot(fft_f, fft_rz, '-b', 'DisplayName', 'FFT Rz');
    % title('FFT of Rotational Components');
    % xlabel('Frequency (Hz)');
    % ylabel('Amplitude');
    % legend;
    % grid on;
    % grid minor
    % hold off;

    % Plot position and orientation components separately
    figure('Name', 'pose vs Time (s)', 'NumberTitle', 'off');

    subplot(3,2,1);
    hold on;
    plot(tssim, xs, '-r', 'DisplayName', 'Simscape X');
    plot(time0, x, '-b', 'DisplayName', 'Setpoint X');
    title('X Position');
    xlabel('Time (s)');
    ylabel('X Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,2);
    hold on;
    plot(tssim, ys, '-r', 'DisplayName', 'Simscape Y');
    plot(time0, y, '-b', 'DisplayName', 'Setpoint Y');
    title('Y Position');
    xlabel('Time (s)');
    ylabel('Y Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,3);
    hold on;
    plot(tssim, zs, '-r', 'DisplayName', 'Simscape Z');
    plot(time0, z, '-b', 'DisplayName', 'Setpoint Z');
    title('Z Position');
    xlabel('Time (s)');
    ylabel('Z Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,4);
    hold on;
    plot(tssim, Rxs, '-r', 'DisplayName', 'Simscape Rx');
    plot(time0, Rx, '-b', 'DisplayName', 'Setpoint Rx');
    title('Rx Orientation');
    xlabel('Time (s)');
    ylabel('Rx Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,5);
    hold on;
    plot(tssim, Rys, '-r', 'DisplayName', 'Simscape Ry');
    plot(time0, Ry, '-b', 'DisplayName', 'Setpoint Ry');
    title('Ry Orientation');
    xlabel('Time (s)');
    ylabel('Ry Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,6);
    hold on;
    plot(tssim, Rzs, '-r', 'DisplayName', 'Simscape Rz');
    plot(time0, Rz, '-b', 'DisplayName', 'Setpoint Rz');
    title('Rz Orientation');
    xlabel('Time (s)');
    ylabel('Rz Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

    % % Combined plot for all components
    % figure;
    % hold on;
    % 
    % % Plot X position
    % plot(ts, xs, '-r', 'DisplayName', 'Simscape X');
    % plot(time0, x, '-b', 'DisplayName', 'Setpoint X');
    % 
    % % Plot Y position
    % plot(ts, ys, '--r', 'DisplayName', 'Simscape Y');
    % plot(time0, y, '--b', 'DisplayName', 'Setpoint Y');
    % 
    % % Plot Z position
    % plot(ts, zs, '-.r', 'DisplayName', 'Simscape Z');
    % plot(time0, z, '-.b', 'DisplayName', 'Setpoint Z');
    % 
    % % Plot Rx orientation
    % plot(ts, Rxs, ':r', 'DisplayName', 'Simscape Rx');
    % plot(time0, Rx, ':b', 'DisplayName', 'Setpoint Rx');
    % 
    % % Plot Ry orientation
    % plot(ts, Rys, '-r', 'DisplayName', 'Simscape Ry');
    % plot(time0, Ry, '-b', 'DisplayName', 'Setpoint Ry');
    % 
    % % Plot Rz orientation
    % plot(ts, Rzs, '--r', 'DisplayName', 'Simscape Rz');
    % plot(time0, Rz, '--b', 'DisplayName', 'Setpoint Rz');
    % 
    % title('Platform Position and Orientation');
    % xlabel('Time (s)');
    % ylabel('Values');
    % legend;
    % grid on;
    % grid minor;
    % hold off;
    % % Calculate tracking performance metrics
    % rmse_x = sqrt(mean((interp1(time0, x, ts) - xs).^2));
    % rmse_y = sqrt(mean((interp1(time0, y, ts) - ys).^2));
    % rmse_z = sqrt(mean((interp1(time0, z, ts) - zs).^2));
    % rmse_Rx = sqrt(mean((interp1(time0, Rx, ts) - Rxs).^2));
    % rmse_Ry = sqrt(mean((interp1(time0, Ry, ts) - Rys).^2));
    % rmse_Rz = sqrt(mean((interp1(time0, Rz, ts) - Rzs).^2));
    % 
    % mae_x = mean(abs(interp1(time0, x, ts) - xs));
    % mae_y = mean(abs(interp1(time0, y, ts) - ys));
    % mae_z = mean(abs(interp1(time0, z, ts) - zs));
    % mae_Rx = mean(abs(interp1(time0, Rx, ts) - Rxs));
    % mae_Ry = mean(abs(interp1(time0, Ry, ts) - Rys));
    % mae_Rz = mean(abs(interp1(time0, Rz, ts) - Rzs));
    % fprintf('RMSE and MAE Metrics:\n');
    % fprintf('X Position: RMSE = %.16f, MAE = %.16f\n', rmse_x, mae_x);
    % fprintf('Y Position: RMSE = %.16f, MAE = %.16f\n', rmse_y, mae_y);
    % fprintf('Z Position: RMSE = %.16f, MAE = %.16f\n',  rmse_z, mae_z);
    % fprintf('Rx Orientation: RMSE = %.16f, MAE = %.16f\n', rmse_Rx, mae_Rx);
    % fprintf('Ry Orientation: RMSE = %.16f, MAE = %.16f\n', rmse_Ry, mae_Ry);
    % fprintf('Rz Orientation: RMSE = %.16f, MAE = %.16f\n', rmse_Rz, mae_Rz);

end
