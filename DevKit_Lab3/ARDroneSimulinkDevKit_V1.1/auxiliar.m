%% Trajectory stuff
%!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
% replace with the necessary code to define adequate desired trajectories
% use dt, p0, and any additional parameters
    hd = 0;    % the coordinate p(3) is the symmetric of h
    
    %pd = [p0(1);p0(2);-hd];
    pd = [10;10;-hd];
    dot_pd = [0;0;0];
    ddot_pd = [0;0;0];
    psi_d = 0;
%!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



%% Controller stuff
% ------------------------------------------------------------------------

lambda = states(1:3,1); % Euler angles
psi = lambda(3);
R=euler2R(lambda);
Rz = [cos(psi) -sin(psi) 0; sin(psi) cos(psi) 0; 0 0 1];
psi_e = normalize_angle(psi-psi_d);

p = states(7:9,1); % position vector
vb = states(4:6,1); % velocity vector in body coordinates
dot_p = R*vb; % body velocity rotated to inertial frame

x_til = [p-pd ; dot_p-dot_pd];
e3 = [0;0;1];
g = 9.81;
rho = 1;


%!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
% replace with the necessary code to implement the trajectory tracking
% controller
dot_psi_r = 0;
w_r= 0;

% ganhos
k1 = 5;
k2 = 10;

K = [k1*eye(3) k2*eye(3)];

kw = 0.5;

dot_xi = [0; 0; 0; 0];
dot_xi(1:3) = kw*rho*K*x_til;
dot_xi(4) = 0;

u_virtual = Rz' *(K*x_til + g*e3 + xi(1:3) - ddot_pd);

theta_r = atan(u_virtual(1)/u_virtual(3));
phi_r = -asin(u_virtual(2)/norm(u_virtual));



%!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
