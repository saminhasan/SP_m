% safety_factor = 2.5;
% Pcr = max(max(abs(cl)));
% L = coupler.L;
% E = 200e9;
% R = ((4 * safety_factor * Pcr * L^2) / (E * pi^3))^(1/4);
% disp(['Radius :', num2str(R*1000), R]);
% cl = out.coupler_load.Data;
% Given inputs
safety_factor = 10; % Safety factor
Pcr = 350;%max(max(abs(cl))); % Critical load
disp(['The critical load (Pcr) is: ', num2str(Pcr,16), 'N']);
L = coupler.L; % Effective length of the column
E = 200e9; % Modulus of elasticity of steel

% Calculate radius assuming no eccentricity
R_no_eccentricity = ((4 * safety_factor * Pcr * L^2) / (E * pi^3))^(1/4);

% Display initial radius without considering eccentricity
disp(['Initial Radius (no eccentricity): ', num2str(R_no_eccentricity * 1000), ' mm']);
% % Now consider eccentricity
% e = 0.005; % Eccentricity in meters (adjust as needed)
% R = R_no_eccentricity; % Use the radius calculated from the non-eccentric case
% 
% % Define a function to calculate the effective critical load considering eccentricity
% f = @(Pcr) Pcr - (pi^2 * E * (pi / 4) * R^4 / (L^2)) / (1 + (e/R) * tan(Pcr * L / (2 * E * (pi / 4) * R^4)));
% 
% % Solve for Pcr considering eccentricity
% Pcr_eff = fsolve(f, Pcr * safety_factor);
% 
% % Recalculate the radius with the effective critical load
% R = ((4 * safety_factor * Pcr_eff * L^2) / (E * pi^3))^(1/4);
% 
% % Display the final radius considering eccentricity
% disp(['Final Radius (considering eccentricity): ', num2str(R * 1000), ' mm']);
