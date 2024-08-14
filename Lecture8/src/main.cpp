#include <iostream>

#include "component.hpp"

//========================
/******* slide 51 *******/
//========================
// class A {
//  public:
//   A() { std::cout << "default ctor A\n"; }
//   A(int x) : v_{x} { std::cout << "param ctor A\n"; }

//  private:
//   int v_;
// };  // class A

// class B {
//  public:
//   B() {
//     std::cout << "default ctor B\n";
//     a_ = A(2);  // calls param ctor for A
//   }

//  private:
//   A a_;  // calls default ctor for A
// };  // class B

// int main() { B b; }

//========================
/******* slide 52 *******/
//========================
// class DemoConstAndRef {
//  public:
//   DemoConstAndRef(int constant, int reference) {
//     const_ = constant;  // error
//     ref_ = reference;   // error
//     std::cout << "const_: " << const_ << '\n';
//     std::cout << "ref_: " << ref_ << '\n';
//   }

//  private:
//   const int const_;
//   int &ref_;

// };  // class DemoConstAndRef

// int main() {
//   int some_value{43};
//   DemoConstAndRef demo(10, some_value);
// }

//========================
/******* slide 56 *******/
//========================
// void printComponent(const robotics::Component& comp) {
//     std::cout << "Component name: " << comp.get_name() << '\n';
// }

// int main() {
//     // Implicit conversion from std::string to Component
//     robotics::Component c1 = "ImplicitConversion";
//     // Implicit conversion in function call
//     printComponent("AnotherImplicitConversion");
// }

//========================
/******* slide 60 *******/
//========================
// class DemoThis {
//  private:
//   int number;

//  public:
//   // using 'this' to differentiate attributes from parameters.
//   void set_number(int number) { this->number = number; }
//   int get_number() { return this->number; }

//   DemoThis& initialize(int val) {
//     this->number = val;
//     return *this;
//   }

//   void print_value() { std::cout << "Number: " << this->number << '\n'; }
// };

// int main() {
//   DemoThis demo_this;
//   demo_this.initialize(5).print_value();  // chaining function calls
// }

//========================
/******* slide 62 *******/
//========================
// class DemoStaticAttribute {
//  public:
//   static int count;  // declaration of class attribute

//   DemoStaticAttribute() { count++; }

//   int get_count() {  // object method
//     return count;    // OK: non static method accessing static attribute
//   }
// };  // class DemoStaticAttribute

// int DemoStaticAttribute::count = 0;  // initialization of class attribute

// int main() {
//   DemoStaticAttribute demo1;  // default ctor called
//   std::cout << "Initial count: " << demo1.get_count() << '\n';  // 1

//   DemoStaticAttribute demo2;
//   std::cout << "After creating two objects: " << demo2.get_count()
//             << '\n';  // 2
//   DemoStaticAttribute demo3;
//   std::cout << "After creating three objects: " << demo3.get_count()
//             << '\n';  // 3
// }

//========================
/******* slide 65 *******/
//========================
// class DemoStaticMethod {
//  public:
//   static int count;

//   DemoStaticMethod() { count++; }

//   static int get_count() {  // class method
//     return count;
//   }
// };  // class DemoStaticMethod

// int DemoStaticMethod::count = 0;  // initialize class attribute

// int main() {
//   std::cout << "Initial count: " << DemoStaticMethod::get_count() << '\n';

//   DemoStaticMethod d1;
//   DemoStaticMethod d2;
//   DemoStaticMethod d3;
//   std::cout << "After creating 3 objects: " << DemoStaticMethod::get_count()
//             << '\n';
// }