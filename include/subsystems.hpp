#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include "pros/misc.hpp"

extern Drive chassis;

// Your motors, sensors, etc. shoulds go here.  Below are examples

inline pros::Motor intake(10);
inline pros::Motor midRoller(2);
inline pros::Motor outake(3);
inline pros::Controller master(pros::E_CONTROLLER_MASTER);


inline pros::adi::DigitalOut hook('E');
inline pros::adi::DigitalOut shovel('G');


inline pros::IMU imu (5);