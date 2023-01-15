close all

%% root locus yaw controller
s = tf('s');

internal_yaw_controller = 1.265/(s+5.879*10^-3);

kp = 1;
ki = 0.1;
a = 5.879*10^-3;
b = 1.265;

cl_total_yaw_controller = b*kp*(s+ki)/(s^2+(a+kp*b)*s+b*kp*ki);

ol_total_yaw_controller = (1+ki/s)*internal_yaw_controller;
rlocus(ol_total_yaw_controller)

title('Root locus for k_i = 0.1')
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
ylabel('Y (m)')
xlabel('X (m)')

%tracking yaw
% yaw_d = reshape(desired.signals.values(10,1,:),[],1);
% for i = 1:length(yaw_d)
%     if yaw_d(i) > pi
%         yaw_d(i) = yaw_d(i)-2*pi;
%     end
%     if yaw_d(i) < -pi
%         yaw_d(i) = yaw_d(i)+2*pi;
%     end      
% end
% figure
% plot(desired.time,states.signals.values(:,3)*180/pi)
% hold on
% plot(desired.time,yaw_d*180/pi)
% legend('real','reference')
% xlim([10 30])
% title('Yaw tracking')
% xlabel('time (s)')
% ylabel('yaw (deg)')

[X,Y] = meshgrid(0.2:0.5:4,-1.5+0.2527:0.2:1.5+0.2527);
%U = 0.25*X;
%V = 0.5*Y;

v_abs = 0.3;
v_corr = 0.1;
delta = 1;
chi_d = atan(-(Y-0.2527)/delta);
U = v_corr*cos(chi_d);
V = v_corr*sin(chi_d);
%n_div = 10;
%arrows = 1:round(length(y_d)/n_div):length(y_d);
%quiver(states.signals.values(arrows,7),states.signals.values(arrows,8),U(arrows),V(arrows))

scale = 1.2;
quiver(X,Y,scale*U,scale*V,'b','AutoScale','off')
legend('real','desired','correction heading')

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

%erro X Y
time_dif = 1;
interv_real = 335:1501;
interv_d = round(interv_real-time_dif/0.03);

%plot(x_d(round(932-time_dif/0.03)),y_d(round(932-time_dif/0.03)),'o')
%plot(states.signals.values(932,7),states.signals.values(932,8),'x')

figure
plot(desired.time(interv_real),x_d(interv_d)-states.signals.values(interv_real,7))
hold on
plot(desired.time(interv_real),y_d(interv_d)-states.signals.values(interv_real,8))
legend('X error','Y error')
%xlim([10 46])
title('Position error (X and Y)')
xlabel('time(s)')
ylabel('error (m)')
%tracking yaw
yaw_d = reshape(desired.signals.values(10,1,:),[],1);
for i = 1:length(yaw_d)
    if yaw_d(i) > pi
        yaw_d(i) = yaw_d(i)-2*pi;
    end
    if yaw_d(i) < -pi
        yaw_d(i) = yaw_d(i)+2*pi;
    end      
end
figure
plot(desired.time,states.signals.values(:,3)*180/pi)
hold on
plot(desired.time,yaw_d*180/pi)
legend('real','reference')
xlim([10 46])
title('Yaw tracking')
xlabel('time (s)')
ylabel('yaw (deg)')


