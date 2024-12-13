function data = force_calc_coupler(out, hexapod, excenter_mass, J_m, N)
    excenter = hexapod.excenter;
    coupler = hexapod.coupler; %#ok<NASGU>
    base = hexapod.base;
    platform = hexapod.platform;
    I_sa = (excenter_mass * excenter.R^2)/3;
    I_m = J_m * N^2;
    I = I_sa + I_m;

    %retrive simulation data
    sim_time = out.simout.Time;
    thetas = out.simout.Data(:, (2:4:22)-1);
    omegas = out.simout.Data(:, 2:4:22);
    alphas = out.simout.Data(:, (2:4:22)+1);
    taus_load = out.simout.Data(:, (2:4:22) + 2);
    xs = out.pose_simscape.Data(:,1);
    ys = out.pose_simscape.Data(:,2);
    zs = out.pose_simscape.Data(:,3);
    Rxs = -out.pose_simscape.Data(:,4) - pi/2;
    Rys = -out.pose_simscape.Data(:,6) - pi/2;
    Rzs = out.pose_simscape.Data(:,5);
    excenter_vector = [0, excenter.h, excenter.b]';

    % % Loop through each time step
    for i = 1:length(sim_time)
        % Current time step
        current_time = sim_time(i);
        translation = [xs(i), ys(i), zs(i)]';
        rotation = -[Rxs(i), Rys(i), Rzs(i)]';
        R = rotz(rad2deg(rotation(3))) * roty(rad2deg(rotation(2))) * rotx(rad2deg(rotation(1)));
        platform_points = repmat(translation, 1, 6)  + (R * platform.bearings);
        excenter_tips = zeros(3, 6); % Preallocate the array
        ux = zeros(1, 6);
        uy = zeros(1, 6);
        uz = zeros(1, 6);
        for j = 1:6
            excenter_tips(:, j) = base.bearings(:, j) + roty(rad2deg(base.beta(j))) *rotx(rad2deg(thetas(i,j)))...
            * excenter_vector;
            ux(j) = roty(rad2deg(base.beta(j)))*rotx(rad2deg(thetas(i,j)))*[0, 0, 1]';
            uy(j) = rotx(rad2deg(thetas(i,j)))*rotx(rad2deg(thetas(i,j)))*[0, 1, 0]';
            uz(j) = cross(ux, uy);


        end
        forceDir = platform_points - excenter_tips;

        break
    end
    data = 0;
end