
%% save data
save('./data/exp_reta_v2_1_m','states')
save('./data/exp_reta_v2_1_m_desired','desired')

%% plot trajectory
plot(states.signals.values(:,7),states.signals.values(:,8))