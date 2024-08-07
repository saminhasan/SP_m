function qs_final = calcQ_sim()
    qs_final = zeros(6, 4);
    out = sim('quat_calc.slx');
    u_sim= [out.tip1.Data(:,:,1),out.tip2.Data(:,:,1),out.tip3.Data(:,:,1),...
        out.tip4.Data(:,:,1),out.tip5.Data(:,:,1),out.tip6.Data(:,:,1)];
    U = [1, 0, 0];
    for i = 1:6
        v2 = u_sim(:,i);
        qs_final(i, :) = calculate_quaternion(U, v2);
    end
end




























% qs = reshape(out.q_data, 24, []);
% qs_avg = mean(qs, 2);
% qs_avg = reshape(qs_avg, 6, 4);
% qs_final = qs_avg ./vecnorm(qs_avg,2);


