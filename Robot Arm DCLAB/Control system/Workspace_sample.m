% Define workspace parameters
R_min = 200; % Minimum radius in mm
R_max = 700; % Maximum radius in mm
theta_min = -pi/2; % Minimum rotation around z-axis (-90 degrees)
theta_max = pi/2;  % Maximum rotation around z-axis (+90 degrees)

% Create mesh grid
[theta, phi] = meshgrid(linspace(theta_min, theta_max, 50), linspace(0, pi/2, 25));

% Convert spherical coordinates to Cartesian
X_outer = R_max * cos(phi) .* cos(theta);
Y_outer = R_max * cos(phi) .* sin(theta);
Z_outer = R_max * sin(phi);
X_inner = R_min * cos(phi) .* cos(theta);
Y_inner = R_min * cos(phi) .* sin(theta);
Z_inner = R_min * sin(phi);

% Create figure
figure('Name', 'Robot Workspace');
hold on; % Allows multiple plots on the same figure
surf(X_outer, Y_outer, Z_outer, 'FaceAlpha', 0.3, 'FaceColor', 'blue', 'EdgeColor', 'none');
surf(X_inner, Y_inner, Z_inner, 'FaceAlpha', 0.3, 'FaceColor', 'red', 'EdgeColor', 'none');

% Add plot properties
axis equal; % Ensures equal scaling for all axes
grid on; % Enables grid for better visualization
xlabel('X (mm)'); % X-axis label
ylabel('Y (mm)'); % Y-axis label
zlabel('Z (mm)'); % Z-axis label
title('Robot Workspace '); % Title for the plot
legend({'Outer Bound', 'Inner Bound'}, 'Location', 'best'); % Adds legend
hold off; % Stops adding plots to the figure


% Limit calculation
REACH_MAX = sqrt((max(X_outer)).^2 + (max(Y_outer)).^2 + (max(Z_outer)).^2);
REACH_MIN = sqrt((max(X_inner)).^2 + (max(Y_inner)).^2 + (max(Z_inner)).^2);

%Use this in the simulink instead
Reach_max = max(REACH_MAX);
Reach_min = max(REACH_MIN);
