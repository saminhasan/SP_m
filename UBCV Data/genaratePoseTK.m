function [pose, tf, ts] = genaratePoseTK()
n = 10; % number of full cycles.

% Read data
filename = 'Rots_raw.csv';
data = readtable(filename, 'CommentStyle', '#');

t = data{:, 'time'};

y = data{:, 'Z'};

Rx = data{:, 'Y_rot'};
Ry = data{:, 'Z_rot'};
Rz = data{:, 'X_rot'};

ts = mean(diff(t));

te = (0:ts:(length(data.Variables)*n - 1) * ts)';
tf = te(end);
xe = zeros(length(te),1);
ye = extend_signal(y,ts,n);
ze = zeros(length(te),1);
Rxe = extend_signal(Rx,ts,n);
Rye = extend_signal(Ry,ts,n);
Rze = extend_signal(Rz,ts,n);
% plot_data(Rx, Rxe, t, te);

ye = ye - mean(ye);
Rxe = Rxe - mean(Rxe)/4; % don't mean center pitch
Rye = Rye - mean(Rye);
Rze = Rze - mean(Rze);

pose = [te, xe, ye, ze, deg2rad(Rxe), deg2rad(Rye), deg2rad(Rze)];
for i = 2:7
    pose(:,i) = signalWrapper(pose(:,1),pose(:,i));
end
% Local function for processing signals
    function data_extended = extend_signal(data, ts, n)
        N = length(data);
        % Extend the signal over `n` cycles
        data_extended = repmat(data, n, 1);

        % Calculate acceleration-like terms
        % acc = filter([1, -2, 1], ts^2, data);
        acc_extended = filter([1, -2, 1], ts^2, data_extended);

        % Define indices for interpolation
        idx = (N-1):N:N*(n-1);
        acc_extended(idx+2) = NaN;
        acc_extended(idx+3) = NaN;

        % Identify known and missing points
        known_mask = ~isnan(acc_extended);
        missing_mask = isnan(acc_extended);
        t_known = find(known_mask);
        acc_known = acc_extended(known_mask);
        t_missing = find(missing_mask);

        % Perform spline interpolation for missing values
        acc_interp = spline(t_known, acc_known, t_missing);
        acc_extended(missing_mask) = acc_interp;

        % Solve the acceleration data
        data_extended = acc_solver(data_extended, acc_extended, ts);
        data_extended = detrend(data_extended,2); % removing trend from numerical integration.
        offset = data_extended(N - 1) - data(N - 1);
        data_extended = data_extended - offset;
        data_extended(1) = data(1);
    end

    function plot_data(data, data_e, t, te) %#ok<DEFNU>
        ts = mean(diff(t));
        % % plots
        ae = filter([1, -2, 1], ts^2, data_e);
        a = filter([1, -2, 1], ts^2, data);

        figure(1);
        hold on;
        plot(te, data_e, 'Color', 'g', 'DisplayName', 'Extended data');
        plot(t, data, 'Color', 'b', 'DisplayName', 'Base data');
        grid on;
        legend;

        figure(3);
        hold on;
        plot(te(3:end), ae(3:end), 'Color', 'r', 'DisplayName', 'Extended data');
        plot(t(3:end),a(3:end), 'Color', 'b', 'DisplayName', 'Base data');
        grid on;
        legend;
    end
end