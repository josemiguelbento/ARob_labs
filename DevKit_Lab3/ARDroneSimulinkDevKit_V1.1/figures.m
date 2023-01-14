close all

%% altitude controller
load('./data/sim_alt_step.mat')
load('./data/sim_alt_step_desired.mat')
load('./data/sim_alt_step_states_desired.mat')

ini_time = 15;
final_time = 50;
states_time_span = (ini_time/0.005):(final_time/0.005);
d_states_time_span = round(ini_time/0.03):(final_time/0.03);
% requested states
figure
plot(states.time(states_time_span)-ini_time,states.signals.values(states_time_span,9))
hold on

h = -reshape(desired.signals.values(3,1,:),[],1);
plot(desired.time(d_states_time_span)-ini_time,h(d_states_time_span))

title("Simulated real and requested height")
legend('real','reference', 'Location','northwest')
ylabel('height (m)')
xlabel('time (s)')
ylim([-0.2 1.2])
xlim([0 20])

vert_vel = cat(1,[0],diff(states.signals.values(states_time_span,9)))/0.005;
figure
plot(states.time(states_time_span)-ini_time,vert_vel)
hold on

plot(states_desired.time(d_states_time_span)-ini_time,states_desired.signals.values(d_states_time_span,1))

title("Simulated real and requested vertical velocity")
ylabel('vertical velocity (m/s)')
xlabel('time (s)')
xlim([0 20])
ylim([-0.2 1.2])

yline(1,'--')
legend('real','reference','saturation')

%% yaw controller

%% altitude controller
load('./data/sim_yaw_step.mat')
load('./data/sim_yaw_step_desired.mat')
load('./data/sim_yaw_step_states_desired.mat')

ini_time = 15;
final_time = 70;
states_time_span = (ini_time/0.005):(final_time/0.005);
d_states_time_span = round(ini_time/0.03):(final_time/0.03);
% requested states
figure
plot(states.time(states_time_span)-ini_time,states.signals.values(states_time_span,3)*180/pi)
hold on

yaw_d = reshape(desired.signals.values(10,1,:),[],1);
plot(desired.time(d_states_time_span)-ini_time,yaw_d(d_states_time_span)*180/pi)

title("Simulated real and requested yaw")
legend('real','reference', 'Location','southeast')
ylabel('Yaw (deg)')
xlabel('time (s)')
%ylim([-0.2 1.2])
xlim([0 40])

% yaw_vel = cat(1,[0],diff(states.signals.values(states_time_span,3))*180/pi)/0.005;
figure
% plot(states.time(states_time_span)-ini_time,yaw_vel)
% hold on

plot(states_desired.time(d_states_time_span)-ini_time,states_desired.signals.values(d_states_time_span,2)*180/pi)

title("Simulated requested yaw rate")
ylabel('yaw rate (deg/s)')
xlabel('time (s)')
xlim([0 40])
%ylim([-0.2 1.2])

yline(1*180/pi,'--')
legend('reference','saturation')

%% straight line experimental
load('./data/sim_reta_1_m.mat')
load('./data/sim_reta_1_m_desired.mat')
load('./data/sim_reta_1_m_states_desired.mat')

final_time = 50;
states_time_span = 1:(final_time/0.005);
d_states_time_span = 1:(final_time/0.03);
% requested states
figure
plot(states.time(states_time_span),states.signals.values(states_time_span,1)*180/pi)
hold on

plot(states_desired.time(d_states_time_span),states_desired.signals.values(d_states_time_span,4)*180/pi)

title("Simulated real and requested roll")
legend('real','reference')
ylabel('roll (deg)')
xlabel('time (s)')

figure
plot(states.time(states_time_span),states.signals.values(states_time_span,2)*180/pi)
hold on

plot(states_desired.time(d_states_time_span),states_desired.signals.values(d_states_time_span,3)*180/pi)

title("Simulated real and requested pitch")
legend('real','reference')
ylabel('pitch (deg)')
xlabel('time (s)')

% path
figure
plot(states.signals.values(states_time_span,7),states.signals.values(states_time_span,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d(d_states_time_span),y_d(d_states_time_span))

axis equal

title("Simulated straight line following")
legend('real','reference')
ylabel('Y (m)')
xlabel('X (m)')

%% straight line real
% path
load('./data/exp_reta_v2_1_m.mat')
load('./data/exp_reta_v2_1_m_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Experimental straight line following")
legend('real','reference')
ylabel('Y (m)')
xlabel('X (m)')

%% straight line with LOS
% path
load('./data/exp_reta_LOS_0_2.mat')
load('./data/exp_reta_LOS_0_2_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Experimental straight line following with LOS")
legend('real','desired')
ylabel('Y (m)')
xlabel('X (m)')

%% circle yaw = 0 sim
% path
load('./data/sim_circulo_sem_yaw.mat')
load('./data/sim_circulo_sem_yaw_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Simulated circle tracking with constant yaw")
legend('real','desired')
ylabel('Y (m)')
xlabel('X (m)')

% arrows
%yaw = reshape(desired.signals.values(10,1,:),[],1);
yaw = states.signals.values(:,3);
U = cos(yaw);
V = sin(yaw);
x_real = states.signals.values(:,7);
y_real = states.signals.values(:,8);

n_div = 50;
arrows = 1000:round(length(x_real)/n_div):length(x_real)-31000;
quiver(x_real(arrows),y_real(arrows),U(arrows),V(arrows))

legend('real','desired', 'yaw', 'Location', 'southeast')


%% circle yaw = 0 real
% path
load('./data/exp_circulo_sem_yaw.mat')
load('./data/exp_circulo_sem_yaw_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Experimental circle tracking with constant yaw")
legend('real','desired')
ylabel('Y (m)')
xlabel('X (m)')

% arrows
%yaw = reshape(desired.signals.values(10,1,:),[],1);
yaw = states.signals.values(:,3);
U = cos(yaw);
V = sin(yaw);
x_real = states.signals.values(:,7);
y_real = states.signals.values(:,8);

n_div = 20;
arrows = 400:round(length(x_real)/n_div):length(x_real)-200;
quiver(x_real(arrows),y_real(arrows),U(arrows),V(arrows))

legend('real','desired', 'yaw', 'Location', 'southwest')


%% circle yaw tracking sim
% path
load('./data/sim_circulo_com_yaw.mat')
load('./data/sim_circulo_com_yaw_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Simulated circle tracking while pointing to the center")

ylabel('Y (m)')
xlabel('X (m)')

% arrows
%yaw = reshape(desired.signals.values(10,1,:),[],1);
yaw = states.signals.values(:,3);
U = cos(yaw);
V = sin(yaw);
x_real = states.signals.values(:,7);
y_real = states.signals.values(:,8);

n_div = 50;
arrows = 1000:round(length(x_real)/n_div):length(x_real)-31000;
quiver(x_real(arrows),y_real(arrows),U(arrows),V(arrows))

legend('real','desired', 'yaw', 'Location', 'southwest')


%% circle yaw tracking real
% path
load('./data/exp_circulo_com_yaw.mat')
load('./data/exp_circulo_com_yaw_desired.mat')

figure
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on

x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);
plot(x_d,y_d)

axis equal

title("Experimental circle tracking while pointing to the center")

ylabel('Y (m)')
xlabel('X (m)')

% arrows
%yaw = reshape(desired.signals.values(10,1,:),[],1);
yaw = states.signals.values(:,3);
U = cos(yaw);
V = sin(yaw);
x_real = states.signals.values(:,7);
y_real = states.signals.values(:,8);

n_div = 20;
arrows = 400:round(length(x_real)/n_div):length(x_real)-200;
quiver(x_real(arrows),y_real(arrows),U(arrows),V(arrows))

legend('real','desired', 'yaw', 'Location', 'southwest')

