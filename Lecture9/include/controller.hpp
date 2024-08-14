#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "robot.hpp"

namespace robotics {
class Controller {
   public:
    Controller(std::string name) : name_{name} {
    }
    std::string get_name() {
        return name_;
    }
    /**
     * @brief Attach a list of components to a robot
     *
     * @param components List of components to attach to the robot
     */
    void move_robot(robotics::Robot& robot, double position);

   private:
    std::string name_;
};  // class Controller
}  // namespace robotics