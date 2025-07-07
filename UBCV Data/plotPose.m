function plotPose(pose)
    time = pose(:,1);
    x = pose(:,2);
    y = pose(:,3);
    z = pose(:,4);
    
    Rx = pose(:,5);
    Ry = pose(:,6);
    Rz = pose(:,7);
    f = figure('Name', 'pose vs Time (s)', 'NumberTitle', 'off');
    f.Theme = "light";
    title("Pose vs Time");
    subplot(3,2,1);
    hold on;
    plot(time, x, '-b', 'DisplayName', 'X');
    title('X Position');
    xlabel('Time (s)');
    ylabel('X Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;
    
    subplot(3,2,2);
    hold on;
    plot(time, y, '-b', 'DisplayName', 'Y');
    
    title('Y Position');
    xlabel('Time (s)');
    ylabel('Y Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;
    
    subplot(3,2,3);
    hold on;
    plot(time, z, '-b', 'DisplayName', 'Z');
    title('Y Position');
    xlabel('Time (s)');
    ylabel('Z Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;
    
    subplot(3,2,4);
    hold on;
    plot(time, rad2deg(Rx), '-b', 'DisplayName', 'Rx');
    title('Rx Orientation');
    xlabel('Time (s)');
    ylabel('Rx Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;
    
    subplot(3,2,5);
    hold on;
    plot(time, rad2deg(Ry), '-b', 'DisplayName', 'Ry');
    title('Ry Orientation');
    xlabel('Time (s)');
    ylabel('Ry Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;
    
    subplot(3,2,6);
    hold on;
    plot(time, rad2deg(Rz), '-b', 'DisplayName', 'Rz');
    title('Rz Orientation');
    xlabel('Time (s)');
    ylabel('Rz Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;

end