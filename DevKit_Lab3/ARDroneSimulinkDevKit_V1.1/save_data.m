
%% save data
save('./data/sim_yaw_step','states')
save('./data/sim_yaw_step_desired','desired')
save('./data/sim_yaw_step_states_desired','states_desired')

%% plot trajectory
plot(states.signals.values(:,7),states.signals.values(:,8))
hold on
x_d = reshape(desired.signals.values(1,1,:),[],1);
y_d = reshape(desired.signals.values(2,1,:),[],1);

plot(x_d,y_d)
