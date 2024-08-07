% function qs_final = calcQ_sim()
out = sim('hp_val.slx');
tf = out.tip;
tf(:,:,1)
% 
% ans =
% 
%   -0.500000000000000
%                    0
%    0.866025403784439
%                    0

% ans =
% 
%   -0.496253778341452
%    0.105813810277773
%    0.859536757535418
%   -0.061091631847852






























% qs = reshape(out.q_data, 24, []);
% qs_avg = mean(qs, 2);
% qs_avg = reshape(qs_avg, 6, 4);
% qs_final = qs_avg ./vecnorm(qs_avg,2);


