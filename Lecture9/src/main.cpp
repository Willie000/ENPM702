#include <iostream>
#include <memory>
#include <vector>

#include "controller.hpp"
#include "environment.hpp"
// #include "inheritance_types.hpp"
#include "robot.hpp"
#include "task.hpp"
#include "constructors.hpp"

//==============================
// Dependency
//==============================

// int main(){
//     robotics::Controller controller("robot_controller");
//     robotics::Robot robot("ceiling_robot");
//     controller.move_robot(robot, 45.4);
// }

//==============================
// Aggregation
//==============================
// int main() {
//     robotics::Environment environment("NIST Robotics Lab");
//     auto ceiling_robot = std::make_shared<robotics::Robot>("ceiling_robot");
//     auto floor_robot = std::make_shared<robotics::Robot>("floor_robot");
//     environment.add_robot(ceiling_robot);
//     environment.add_robot(floor_robot);
// }

//==============================
// Composition
//==============================
// int main() {
//     robotics::Robot robot("ceiling_robot");
//     robot.add_component(std::make_unique<robotics::Component>("UR10e", "Universal Robots", "123WWS"));
// }

//==============================
// Inheritance types
//==============================
// int main(){
//     Base base;
//     DerivedPublic derived_public;
//     derived_public.print_members();
//     DerivedPrivate derived_private;
//     derived_private.print_members();
//     DerivedProtected derived_protected;
//     derived_protected.print_members();
// }

//==============================
// Constructors
//==============================
// int main() {
//     Base base(10);
//     // Derived derived(20.5);
// }


//==============================
// Static Polymorphism
//==============================

// void operate(const std::vector<std::unique_ptr<robotics::Arm>> &arms) {
//     for (auto &arm : arms) {
//         arm->operate();
//     }
// }

// void operate(const std::vector<std::unique_ptr<robotics::Sensor>> &sensors) {
//     for (auto &sensor : sensors) {
//         sensor->operate();
//     }
// }



// int main() {
//     // list of robotic arms
//     std::vector<std::unique_ptr<robotics::Arm>> arms;
//     auto kuka_kr3 = std::make_unique<robotics::Arm>("Kuka Roboter KR 3", "Kuka", "33JG4FT", 3500);
//     auto fanuc_r_200ib = std::make_unique<robotics::Arm>("R-200IB 165F R-301A", "Fanuc", "123SSD3", 7500);
//     arms.push_back(std::move(kuka_kr3));
//     arms.push_back(std::move(fanuc_r_200ib));
//     operate(arms);

//     // list of sensors
//     std::vector<std::unique_ptr<robotics::Sensor>> sensors;
//     auto phx200s = std::make_unique<robotics::Sensor>("PHX200S", "LUCID Vision Labs", "1DDSSD3", 3000);
//     auto vlp16 = std::make_unique<robotics::Sensor>("Velodyne VLP-16", "Velodyne", "22XSS", 20000);
//     sensors.push_back(std::move(phx200s));
//     sensors.push_back(std::move(vlp16));
//     operate(sensors);
// }


//==============================
// Dynamic Polymorphism
//==============================

// void operate(const std::vector<std::unique_ptr<robotics::Component>> &components) {
//     for (auto &component : components) {
//         component->operate();
//     }
// }

// int main() {
//     // list of components
//     std::vector<std::unique_ptr<robotics::Component>> components;

//     // robotic arms
//     std::unique_ptr<robotics::Component> kuka_kr3 = std::make_unique<robotics::Arm>("Kuka Roboter KR 3", "Kuka", "33JG4FT", 3500);
//     std::unique_ptr<robotics::Component> fanuc_r_200ib = std::make_unique<robotics::Arm>("R-200IB 165F R-301A", "Fanuc", "123SSD3", 7500);
//     components.push_back(std::move(kuka_kr3));
//     components.push_back(std::move(fanuc_r_200ib));

//     // sensors
//     std::unique_ptr<robotics::Component> phx200s = std::make_unique<robotics::Sensor>("PHX200S", "LUCID Vision Labs", "1DDSSD3", 3000);
//     std::unique_ptr<robotics::Component> vlp16 = std::make_unique<robotics::Sensor>("Velodyne VLP-16", "Velodyne", "22XSS", 20000);
//     components.push_back(std::move(phx200s));
//     components.push_back(std::move(vlp16));

//     operate(components);
// }