function [] = torque_calc_3d(out, N)
    % Define colors for different motors
    colors = ['r', 'g', 'b', 'm', 'c', 'k'];

    % Motor parameters
    % Max T 0.4, continuous T 0.27

    % Retrieve simulation data
    sim_time = out.simout.Time;
    omegas = out.simout.Data(:, 2:4:22);
    alphas = out.simout.Data(:, (2:4:22) + 1); %#ok<NASGU>
    taus_load = out.simout.Data(:, (2:4:22) + 2);
    omegas_rpm = omegas * (60 / (2 * pi));
    tau_motor = taus_load / N; % Torque required in motor frame

    % Create the 3D plot
    figure;
    hold on;
    plots = gobjects(1, 6); 
    labels = cell(1, 6);
    for i = 1:6
        % Plot data for each motor in 3D
        plots(i) = plot3(omegas_rpm(:, i) * N, tau_motor(:, i), sim_time, 'Color', colors(i));
        labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
    end

    % Add legend with motor labels
    legend(plots, labels, 'Location', 'northwest');

    % Add surfaces for motor peaks and rated values
    [X, Z] = meshgrid(linspace(min(omegas_rpm(:)) * N, max(omegas_rpm(:)) * N, 100), linspace(min(sim_time), max(sim_time), 100));
    Y_peak_pos = 0.4 * ones(size(X));
    Y_peak_neg = -0.4 * ones(size(X));
    Y_rated_pos = 0.27 * ones(size(X));
    Y_rated_neg = -0.27 * ones(size(X));

    % Create surfaces with 'HandleVisibility' set to 'off'
    surf(X, Y_peak_pos, Z, 'FaceAlpha', 0.2, 'EdgeColor', 'none', 'FaceColor', 'r', 'HandleVisibility', 'off');
    surf(X, Y_peak_neg, Z, 'FaceAlpha', 0.2, 'EdgeColor', 'none', 'FaceColor', 'r', 'HandleVisibility', 'off');
    surf(X, Y_rated_pos, Z, 'FaceAlpha', 0.2, 'EdgeColor', 'none', 'FaceColor', 'g', 'HandleVisibility', 'off');
    surf(X, Y_rated_neg, Z, 'FaceAlpha', 0.2, 'EdgeColor', 'none', 'FaceColor', 'g', 'HandleVisibility', 'off');

    % Labels and title
    xlabel('Angular Velocity (RPM)');
    ylabel('Torque (Nm)');
    zlabel('Time (s)');
    title('Torque (Nm) vs Angular Velocity (RPM) vs Time (s)');
    grid on;
    view(2);
    hold off;
end
