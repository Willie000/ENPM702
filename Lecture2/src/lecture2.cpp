#include <iostream>
#include <typeinfo>

// slide 33
// int main() {
//     short s{1};
//     int num1 = s;               // short promoted to int
//     int num2 = 'a';             // char promoted to int
//     int num3 = true;            // bool promoted to int
//     std::cout << num1 << '\n';  // 1
//     std::cout << num2 << '\n';  // 97
//     std::cout << num3 << '\n';  // 1
// }

// slide 40
// int main() {
//     // int and long double are on the priority list
//     // rule1: int converted to long double
//     int a{4};
//     long double b{3.323223};
//     std::cout << typeid(a + b).name() << ' ' << a + b << '\n';  // long double 7.32322

//     // double is on the priority list
//     // short is not on the priority list
//     // rule1: short is converted to double
//     double c{1.5};
//     short d{1};
//     std::cout << typeid(c + d).name() << ' ' << c + d << '\n';  // double 2.5

//     // short is not on the priority list
//     // rule2: short is promoted to int
//     short e{1};
//     short f{1};
//     std::cout << typeid(e + f).name() << ' ' << e + f << '\n';  // int 2
// }

// slide 42
// int main() {
//     int x{1};
//     std::cout << x << '\n';  // print a variable
//     std::cout << "hello, "
//               << "world\n";  // print more than one thing
//     std::cout << x << " hello, "
//               << "world\n";  // print different data types
// }

// slide 43-1
// int main() {
//     std::cout << "Enter your age: ";  // ask user for their age
//     unsigned short age{};             // init variable to hold user input
//     std::cin >> age;                  // store input in variable age
//     std::cout << "Your age is " << age << '\n';
// }

// slide 43-2
// int main() {
//     std::cout << "Enter two integers separated by a space: ";
//     int a{};             // init variable to hold the first number
//     int b{};             // init variable to hold the second number
//     std::cin >> a >> b;  // store inputs in variables a and b
//     std::cout << "a: " << a << ", b: " << b << '\n';
// }

// slide 44
// int main() {
//     std::cout << "Enter two integers separated by a space: ";
//     int a{};             // init variable to hold the first number
//     double b{};          // init variable to hold the second number
//     std::cin >> a >> b;  // store inputs in variables a and b
//     std::cout << "a: " << a << ", b: " << b << '\n';
// }

// slide 58
// int main() {
//     int a{1};
//     {
//         int b{2};
//         {
//             int c{3};
//             std::cout << a << '\n';  // 1
//             std::cout << b << '\n';  // 2
//             std::cout << c << '\n';  // 3
//         }                            // c goes out of scope here.
//         std::cout << c << '\n';      // c is out of scope
//     }                                // b goes out of scope here.
//     std::cout << b << '\n';          // b is out of scope
//     int d{4};
// }  // d and a go out of scope here.


// slide 61
// int global_var{1};

// void my_function() {
//     global_var++;
//     std::cout << global_var << '\n';
// }

// int main() {
//     std::cout << global_var << '\n';  // 1
//     global_var++;                     // global variable can be modified
//     my_function();
// }

// namespace a
// namespace a {
// int x{3};
// int y{4};
// }  // end namespace a

// using a::x;

// int main() {
//     std::cout << x << '\n';  // no need to use a::x
//     std::cout << y << '\n';  
// }