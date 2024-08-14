#pragma once

#include <iostream>

namespace robotics
{
class Task
{
  public:
    Task(std::string name, std::string description) : name_{name}, description_{description}{}
    std::string get_name(){
        return name_;
    }
    std::string get_description(){
        return description_;
    }
    void execute();

  private:
    std::string name_;
    std::string description_;
};
} // namespace robotics