#include <iostream>

#include "controller.hpp"

// Component
void robotics::Controller::move_robot(robotics::Robot& robot, double position) {
    robot.move(position);
    std::cout << "Component: The component " << name_ << " is operating\n";
}