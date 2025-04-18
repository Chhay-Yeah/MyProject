%wp_8 = (waypoints_6)';
% wps = [0 0 0;
%       20 0 0;
%       20 5 0;
%       0  5 0;
%       0  0 0];
% t0 = 0;   % Start time
% tf = 10;  % End time
% 
% % Generate 5 evenly spaced time points between t0 and tf
% time_points = linspace(t0, tf, 5);
% velocity_bc = [0 0 0; 10 0 0; 0 10 0; 0 0 10; 0 0 0];  % Example
wps = [495, 495, 495, 495, 495, 495, 495, 495, 495, 495;
 0,   0,   150, 150, -150, -150, -150, 0,   0,   0;
 600, 550, 500, 450, 450, 450, 500, 550, 600, 600]
wps_1 = [500,  500,  500; 
  0,    100, -100; 
  700,  550,  400]; %draw circle

wps_2 = [500,   500,  500,  500,   500,  500,  500,   500,  500,  500; 
  0,     0,   100,   100,  -100, -100, -100,   0,    0,    0; 
  700,   550,  550,  400,   400,  400,  550,   550,  550,  700];

wps_3 = [493.8, 493.8, 493.8; 
 -51.68, 0, -100; 
 536.5, 550, 400]

% wps_4 =  [ [0, 0, 0],
%     [10, 10, 5],
%     [10, 10, 0],
%     [10, 20, 0],
%     [10, 20, 5],
%     [15, 20, 5],
%     [15, 20, 0],
%     [15, 10, 0],
%     [15, 10, 5],
%     [10, 10, 5],
%     [20, 10, 5],
%     [20, 10, 0],
%     [20, 20, 0],
%     [20, 20, 5],
%     [25, 20, 5],
%     [25, 20, 0],
%     [25, 10, 0],
%     [25, 10, 5],
%     [30, 15, 5],
%     [30, 15, 0],
%     [35, 10, 0],
%     [40, 15, 0],
%     [35, 20, 0],
%     [30, 15, 0],
%     [30, 15, 5],
%     [45, 20, 5],
%     [45, 20, 0],
%     [45, 10, 0],
%     [50, 20, 0],
%     [50, 20, 5],
%     [55, 10, 5],
%     [55, 10, 0],
%     [55, 20, 0],
%     [55, 20, 5],
%     [55, 20, 5],
%     [55, 20, 0],
%     [70, 20, 0],
%     [70, 20, 5],
%     [55, 20, 5],
%     [55, 20, 0],
%     [70, 15, 0],
%     [70, 15, 5],
%     [55, 15, 5],
%     [55, 15, 0],
%     [70, 20, 0],
%     [75, 20, 5],
%     [75, 20, 0],
%     [75, 10, 0],
%     [80, 10, 0],
%     [80, 20, 0],
%     [80, 20, 5],
%     [0, 0, 5]
% ];
% wps_5 = (wps_4)' ;

wps_A =[
    [10, 10, 5],
    [10, 10, 0],
    [10, 20, 0],
    [10, 20, 5],
    [15, 20, 5],
    [15, 20, 0],
    [15, 15, 0],
    [20, 15, 0],
    [20, 20, 0],
    [20, 20, 5],

    [25, 15, 5],
    [25, 15, 0],
    [30, 10, 0],
    [35, 15, 0],
    [30, 20, 0],
    [25, 15, 0],
    [25, 15, 5],

    [40, 10, 5],
    [40, 10, 0],
    [40, 20, 0],
    [40, 20, 5],
    [40, 20, 0],
    [45, 20, 0],
    [45, 15, 0],
    [40, 15, 0],
    [40, 10, 5],

    [50, 15, 5],
    [50, 15, 0],
    [55, 10, 0],
    [60, 15, 0],
    [55, 20, 0],
    [50, 15, 0],
    [50, 15, 5],

    [65, 10, 5],
    [65, 10, 0],
    [65, 20, 0],
    [65, 20, 5],
    [65, 20, 0],
    [80, 20, 0],
    [80, 20, 5],

    [0, 0, 5]
]


wps_6 = (wps_A)';


