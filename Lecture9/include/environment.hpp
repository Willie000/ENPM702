#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "robot.hpp"

namespace robotics
{
class Environment
{
  public:
    // constructors
    Environment(std::string name) : name_{name}, robots_{}
    {
    }

    std::string get_name()
    {
        return name_;
    }
    void simulate();
    void add_robot(std::shared_ptr<robotics::Robot> robot);

  private:
    std::string name_;
    std::vector<std::shared_ptr<robotics::Robot>> robots_;
};
} // namespace robotics