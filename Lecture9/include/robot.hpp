#pragma once
#include "component.hpp"
#include "task.hpp"
#include <iostream>
#include <memory>
#include <vector>

namespace robotics
{
class Robot
{
  public:
    Robot(std::string name) : name_{name}
    {
    }
    std::string get_name()
    {
        return name_;
    }
    /**
     * @brief Attach a list of components to a robot
     *
     * @param components List of components to attach to the robot
     */
    void add_component(std::unique_ptr<robotics::Component> component);
    void display_components();
    void perform_tasks(std::vector<std::shared_ptr<robotics::Task>> tasks);
    void move(double position);

   private:
    std::string name_;
    std::vector<std::shared_ptr<robotics::Component>> components_;
};
} // namespace robotics