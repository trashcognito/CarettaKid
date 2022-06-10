#pragma once

// -- CONSTANTS --

//TODO: Re-Seperate these values if necessary

#define COLOR_CALCULATION_PRECISION_SCALING 10000.0

#define PUCK_RED_MAX (COLOR_CALCULATION_PRECISION_SCALING / 96.0)
#define PUCK_RED_MIN (COLOR_CALCULATION_PRECISION_SCALING / 330.0)
#define PUCK_BLUE_MAX (COLOR_CALCULATION_PRECISION_SCALING / 79.0)
#define PUCK_BLUE_MIN (COLOR_CALCULATION_PRECISION_SCALING / 287.0)

#define BASE_RED_MAX (COLOR_CALCULATION_PRECISION_SCALING / 110.0)
#define BASE_RED_MIN (COLOR_CALCULATION_PRECISION_SCALING / 545.0)
#define BASE_BLUE_MAX (COLOR_CALCULATION_PRECISION_SCALING / 95.0)
#define BASE_BLUE_MIN (COLOR_CALCULATION_PRECISION_SCALING / 470.0)


#define CORRECT_PUCK_ANGLE 130
#define WRONG_PUCK_ANGLE 10
#define OPEN_ANGLE 130
#define CLOSE_ANGLE 23

//TODO: Determine speeds

#define CRUISE_SPEED1 0
#define CRUISE_SPEED2 0
#define TURNING_SPEED 0

#define DISTANCE_MAX 50.0
#define DISTANCE_MIN 0.5

//milliseconds of time of consistent color sensor measurement required for accurate reading
#define COLOR_SENSOR_CONSISTENCY_THRESHHOLD 50
