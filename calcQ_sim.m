function qs_final = calcQ_sim()
out = sim('hp_val.slx');
qs = reshape(out.qq.Data, 24, []);
qs_avg = mean(qs, 2);
qs_avg = reshape(qs_avg, 6, 4);
qs_final = qs_avg ./vecnorm(qs_avg,2);


