


% Inclinometer_A

roll_raw_A = atan(sensor_A.signals.values(:,2)./sensor_A.signals.values(:,3));
pitch_raw_A = atan(sensor_A.signals.values(:,1)./(sqrt(sensor_A.signals.values(:,2).^2 + sensor_A.signals.values(:,3).^2)));


%Kalman filter
%dx = Ax+Bu+Gw_1
%y = Cx + Du + Hw_1 + w_2
%x = theta
%u = q (porque se usa-se como estados, tinha que ter uma equação para
%       definir o q)
%w_1 process noise
%w_2 measurement noise

A = 0;
B = 1;
C = 1;
D = 0;
G = 1;
H = 0;

Q = 1e-2;
R = 1e-1;

sys = ss(A, [B G], C, [D H]);
% Kalman filter
[kalmf, L, P] = kalman(sys, Q, R);


