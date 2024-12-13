function arr_ret = smoothCycle(idxs, arr, ts)
    A = [-0.5, 2, -3;
         0.5, -2, 0.5;
         -3, 2, -0.5];

    for i = 1:length(idxs)
        idx = idxs(i);
        disp(idx);
        % Check that the current index has enough surrounding data points
        if idx > 3 && idx < length(arr) - 3
            f1 = -2 * arr(idx - 2) + arr(idx - 3) / 2;
            f2 = arr(idx + 3)/2 - arr(idx + 2) - arr(idx - 2) + arr(idx - 3)/2;
            f3 = arr(idx + 3)/2 - 2 * arr(idx + 2);

            % Construct vector f
            f = [f1; f2; f3];

            % Solve the system of equations
            x = A \ f;

            % Update values in arr at the specified indices

            arr(idx + 1) = x(3);
            arr(idx) = x(2);
            arr(idx - 1) = x(1);
            disp(x);
            break
            disp([arr(idx + 1), arr(idx ), arr(idx - 1)]);

        else
            warning('Index %d is too close to the boundary to apply patching.', idx);
        end
    end
    arr_ret = arr;

    figure;
    subplot(3,1,1)
    plot( arr_ret);
    title('data vs Time');
    xlabel('Time (s)');
    ylabel('Z Measured (m)');
    grid on;
    
    subplot(3,1,2)
    plot(filter([1,0,1], 2*ts, arr_ret));
    title('data_dot vs Time');
    xlabel('Time (s)');
    ylabel('data_dot');
    grid on;
    
    subplot(3,1,3)
    plot(filter([1,-2,1], ts^2, arr_ret));
    title('data_dd vs Time');
    xlabel('Time (s)');
    ylabel('data_dd');
    grid on;
end
