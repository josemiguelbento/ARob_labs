% clc
% clear all

while(1)
    
    pause(1)
    
    pos=import_QTM(1)
    pos{1}(1);
    
    x = pos{1}(1)
    y = pos{1}(2)
    z = pos{1}(3)
    roll = pos{1}(4)
    pitch = pos{1}(5)
    yaw = pos{1}(6)
    
    [x, y, z, roll, pitch, yaw]
    
end