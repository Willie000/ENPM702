#include "environment.hpp"
#include <iostream>
#include <memory>

void robotics::Environment::simulate()
{
    std::cout << "Simulate robotic actions\n";
}

void robotics::Environment::add_robot(std::shared_ptr<robotics::Robot> robot)
{
    robots_.push_back(robot);
    std::cout << "Added the robot " << robot->get_name() << " to the environment\n";
}