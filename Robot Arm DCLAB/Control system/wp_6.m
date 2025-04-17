% The box size 3D
Length = 50;
Width = 50;
Height = 25;
spacing = 1;
ED = 1;
Ed_length = ED * Length;
Ed_width = ED * Width;
Xo = 100;
Yo = 100;  % This variable is not used for Y anymore, can be kept for reference.
Zo = 0;
flip = 1;

% Define waypoints
waypoints_6 = [];

% Generate waypoints for the box
for Z = 0:2:Height
    if flip > 0
        for X = Xo:(spacing * 2):(Xo + Width)
            waypoints_6 = [waypoints_6; X, 0, Z];  % Set Y to 0
            waypoints_6 = [waypoints_6; X, 0, Z];  % Set Y to 0
            waypoints_6 = [waypoints_6; X + spacing, 0, Z];  % Set Y to 0
        end
    else
        for Y = 0:(spacing * 2):(Length)  % Set Y to iterate from 0 to Length but still store Y as 0
            waypoints_6 = [waypoints_6; Xo, 0, Z];  % Set Y to 0
            waypoints_6 = [waypoints_6; Xo, 0, Z];  % Set Y to 0
            waypoints_6 = [waypoints_6; Xo + spacing, 0, Z];  % Set Y to 0
            waypoints_6 = [waypoints_6; Xo + spacing, 0, Z];  % Set Y to 0
        end
    end
    flip = -flip; % Alternate direction
end

% Open the file for writing G-code
filename = 'RobotArmTrajectory_01.gcode';
fileID = fopen(filename, 'w');

% Write the setup commands
fprintf(fileID, 'G90 ; Absolute positioning\n');
fprintf(fileID, 'M83 ; E relative positioning\n');
fprintf(fileID, 'M302 ; Allow cold extrusion\n');
fprintf(fileID, 'M119 ; Set endstops\n');
fprintf(fileID, 'M104 S23 ; Set extruder temp (set to 23)\n');
fprintf(fileID, 'M119 S23 ; Set bed temp (set to 23)\n');
fprintf(fileID, '\n');
fprintf(fileID, 'G1 X0.0 Y0.0 Z0.2\n');
fprintf(fileID, 'G1 X0.0 Y0.0 E-5.0\n');
fprintf(fileID, 'G1 X100.0 Y0.0 Z30.0\n');  % Ensure Y is also set to 0 here
fprintf(fileID, '\n');

% Generate the G-code for the waypoints
for i = 1:size(waypoints_6, 1)
    fprintf(fileID, 'G1 X%.1f Y%.1f Z%.1f\n', waypoints_6(i, 1), 0, waypoints_6(i, 3));  % Set Y to 0
end

% Close the file
fclose(fileID);

disp('G-code generation complete. Check the file RobotArmTrajectory_01.gcode.');


% Define time intervals for each segment
numWaypoints = size(waypoints_6, 1);
t = linspace(0, 10, numWaypoints);  % 10 seconds total duration

% Generate trapezoidal velocity trajectory
[traj, vel, acc] = trapveltraj(waypoints_6', numWaypoints, 'EndTime', t);

% traj: positions, vel: velocities, acc: accelerations for each time step

