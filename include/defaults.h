#pragma once

#define PLAYER_NAME_MAX_LENGTH 32

#define DEFAULT_PLAYER_ACCELERATION_X 10
#define DEFAULT_PLAYER_ACCELERATION_Y 10

// These variables set the dimensions of the rectanglar region we wish to view.
const double Xmin = 0, Xmax = 1024;
const double Ymin = 0, Ymax = 256;


//Ball
#define DEFAULT_BALL_STARTING_POS_X ((DEFAULT_PLAYER_LEFT_STARTING_X + DEFAULT_PLAYER_RIGHT_STARTING_X)/2)
#define DEFAULT_BALL_STARTING_POS_Y (DEFAULT_PLAYER_LEFT_STARTING_Y + DEFAULT_PLAYER_STARTING_HEIGHT/2)
#define DEFAULT_BALL_ACC 10
#define DEFAULT_BALL_RADIUS 50


//Left player
#define DEFAULT_PLAYER_LEFT_STARTING_X 50
#define DEFAULT_PLAYER_LEFT_STARTING_Y 0

//Right player
#define DEFAULT_PLAYER_RIGHT_STARTING_X 900
#define DEFAULT_PLAYER_RIGHT_STARTING_Y 0

//Both players
#define DEFAULT_PLAYER_STARTING_WIDTH 50
#define DEFAULT_PLAYER_STARTING_HEIGHT 150

//Delta of moving players
#define DeltaY 32

#define DEFAULT_BALL_ACC_DX 10
#define DEFAULT_BALL_ACC_DY 10