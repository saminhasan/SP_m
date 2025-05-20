function [pose, tf, Ts] = genaratePoseTK()
    n = 12; % number of cycles
    data = readtable('Rots100.csv', 'CommentStyle', '#');

    Ts = mean(diff(data.time));
    t = (0:Ts:(data.time(end) + Ts) * n - Ts)';
    
    % Replicate and process signals
    x = zeros(size(t));
    y = repmat(data.Z - mean(data.Z), n, 1);
    z = zeros(size(t));
    
    Rx = repmat(deg2rad(data.Y_rot), n, 1);    
    Ry = repmat(deg2rad(data.Z_rot - mean(data.Z_rot)), n, 1);
    Rz = repmat(deg2rad(data.X_rot - mean(data.X_rot)), n, 1);

    raw_pose = [t, x, y, z, Rx, Ry, Rz];

    % Resample at 1kHz using spline
    te = t(1):1e-3:t(end);
    tf = te(end);
    % data_new = interp1(t, raw_pose(:,2:end), te, 'spline');
    data_new = spline(t, raw_pose(:,2:end)', te)';

    pose = [te', data_new];
end

% function [pose, tf, Ts] = genaratePoseTK()
% n = 12; % number of full cycles.
% 
% % Read data
% filename = 'Rots100.csv';
% data = readtable(filename, 'CommentStyle', '#');
% 
% time = data.time;
% Ts = mean(diff(time));
% t = (0:Ts:(time(end)+ Ts)*n -Ts)';
% x = zeros(length(t),1);
% y =  repmat(data.Z, n, 1);
% y = y - mean(y);
% z = zeros(length(t),1);
% Rx = repmat(deg2rad(data.Y_rot), n, 1);
% Rx = Rx - max(Rx) + deg2rad(15);
% Ry = repmat(deg2rad(data.Z_rot), n, 1);
% Ry = Ry - mean(Ry);
% Rz = repmat(deg2rad(data.X_rot), n, 1);
% Rz = Rz - mean(Rz);
% p = [t, x, y, z, Rx, Ry, Rz];
% 
% data = p(:,2:end);
% % Generate new time vector at 1kHz
% t_new = t(1):1e-3:t(end);
% tf = t_new(end);
% % Preallocate interpolated data
% data_new = zeros(length(t_new), size(data,2));
% 
% % Spline interpolate each column
% for i = 1:size(data,2)
%     data_new(:,i) = spline(t, data(:,i), t_new);
% end
% pose = [t_new', data_new];
% % for i = 2:7
% %     pose(:,i) = signalWrapper(pose(:,1),pose(:,i));
% % end
% end