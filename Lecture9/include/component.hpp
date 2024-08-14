#pragma once

#include <iostream>
#include <string>
#include <array>

namespace robotics {
class Component {
   public:
    // constructors
    Component(std::string name, std::string brand, std::string sku) : name_{name}, brand_{brand}, sku_{sku} {
    }

    void operate();

    std::string get_name() {
        return name_;
    }
    std::string get_brand() {
        return brand_;
    }
    std::string get_sku() {
        return sku_;
    }
    bool is_attached() {
        return attached_;
    }
    void set_attached(bool value) {
        attached_ = value;
    }

   protected:
    std::string name_;
    std::string brand_;
    std::string sku_;
    bool attached_{false};
};
}  // namespace robotics