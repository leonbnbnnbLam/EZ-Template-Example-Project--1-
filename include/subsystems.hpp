#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"
#include "pros/misc.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor outake_outermost(11);
inline pros::Motor midRoller(16);
inline pros::Motor outake(15);
inline pros::Controller master(pros::E_CONTROLLER_MASTER);


inline pros::adi::Pneumatics hookPneumatic('A', false);
inline pros::adi::Pneumatics shovelPneumatic('B', false);
inline pros::adi::Pneumatics bordPneumatic('C', false);