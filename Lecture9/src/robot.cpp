#include "robot.hpp"

#include <iostream>

void robotics::Robot::add_component(std::unique_ptr<robotics::Component> component) {
    std::cout << "Adding " << component->get_name() << " to " << name_ << '\n';

    component->set_attached(true);
    components_.push_back(std::move(component));
}

void robotics::Robot::display_components() {
    std::cout << "Robot " << name_ << " has the following components:\n";
    for (const auto &component : components_) {
        std::cout << '\t' << component->get_name() << '\n';
        std::cout << '\t' << component->get_brand() << '\n';
        std::cout << '\t' << component->get_sku() << '\n';
    }
}

void robotics::Robot::perform_tasks(std::vector<std::shared_ptr<robotics::Task>> tasks) {
    for (const auto &task : tasks) {
        std::cout << "Performing the task " << task->get_name() << '\n';
        task->execute();
    }
}

void robotics::Robot::move(double position) {
    std::cout << "Robot " << name_ << " moving to position " << position << '\n';
}
