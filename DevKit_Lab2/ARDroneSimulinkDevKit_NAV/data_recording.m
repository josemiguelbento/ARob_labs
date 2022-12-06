file_name = 'dados_teste_roll_pitch_v1.mat';

data = struct;
data.time = res_phys_accs.time;
data.accs = res_phys_accs.signals.values;
data.gyros = res_phys_gyros.signals.values;
data.euler = res_euler_angles.signals.values;

file_name = strcat('./data/',file_name);
save(file_name,'data')

clear data