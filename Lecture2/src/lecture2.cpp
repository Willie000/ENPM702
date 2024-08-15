#include <iostream>
#include <iomanip> // for std::setprecision

// int main(){

//     // declaration and initialization
//     // 1. declar each variabe in diff lines
//     // 2. no need to declar all at once

//     int a = 0;  // copy initialization (X)
//     int b();   // direct initialization (X)
//     int c{};   // uniform initialization (O)

//     // assign value
//     c = 20;
//     std::cout << sizeof(c) << "\n"; // 4 bytes on my machine
//     std::cout << sizeof(int) << "\n"; // 4 bytes on my machine
//     std::cout << &c << '\n'; //show address of c

//     double d{};             // initializedto 0.0
//     std::cout << d << '\n'; // 0: Omit unnecessary trailing decimal places and zeroes
//     std::cout << std::fixed << std::setprecision(1) <<  d << '\n'; // 0.0

//     int e;  // uninitialized, avoid this
//     std::cout << e << '\n';   // garbage data

// }

/*
Type        Size(byte)  Range
char        1           0-255 
int         4           0-4,294,967,295
short       2           0-65,535
long        8           18,446,744,073,709,551,615
longlong    8           18,446,744,073,709,551,615

Signed = -(unsign+1)/2 - (unsign+1)/2

flot        4           土1.18x10^-38 to 土3.4x10^38        6-9 significant digits, typically 7
double      8           士2.23×10^-308 to 土1.80×10^308     15-18 significant digits, typically 16
long double 8,12, or 16 士3.36x10^-4932 to 士1.18x10^4932   33-36 significant digits

 */

//--------- std::setprecision()
// int main(){
//     std::cout << std::setprecision(9);      // show 9 digits of precision
//     std::cout << 0.33333339333f << '\n';    // 0.333333343, because flot typically have 7 significant digits
//     std::cout << std::setprecision(15) << '\n'; 
//     std::cout << 8.3642343534322323232322 << '\n'; // 8.36423435343223 (15 digits) as double
// }

// //--------- booling 1,0 true, false
// int main(){
//     bool is_today_sunny{true};
//     bool is_today_cloudy{false};
//     std::cout << std::boolalpha << is_today_sunny << "\n";  // true
//     std::cout << std::boolalpha << true << "\n";            // true
//     std::cout << std::noboolalpha << true << "\n";          // 1
//     std::cout << std::boolalpha << is_today_cloudy << "\n"; // false
//     std::cout << std::boolalpha << false << "\n";           // false
//     std::cout << std::noboolalpha << false << "\n";         // 0
// }


// // --------- Convertion
// int main(){
//     double num1 = 1.5;
//     int num2 = num1; // 1.5 converted to 1
//     std::cout << "Value of num1 : " << num1 << '\n'; // 1.5
//     std::cout << "Type of num1 : " << typeid(num1).name() << '\n'; // double
//     std::cout << "Value of num2 : " << num2 << '\n';
// }


// // --------- Example
// int main() {
//     std::cout << 3 / 2 << '\n'; //result is 1 because 3 is a int.
//     std::cout << 3.0f / 2 << '\n'; // To get 1.5, must use flot or double. 
// }

// // --------- Convertion
// int main() {
//     short s{1};
//     int num1 = s;                   // short promoted to int
//     int num2 = 'a';                 // char promoted to int
//     int num3 = true;                // bool promoted to int
//     std::cout << num1 << '\n';      // 1
//     std::cout << num2 << '\n';      // 97
//     std::cout << num3 << '\n';      // 1
//     std::cout << sizeof(s) << '\n'; // 2
// }

// // --------- ASCII (char)
// int main() {
//     short s = 2;
//     char c = 65;
//     std::cout << c << '\n'; // dec of char
//     std::cout << static_cast<int>(c) << '\n';  // print char
//     int d = static_cast<int>(c);
//     std::cout << d << std::endl;
//     std::cout << s << '\n';
// }

// // --------- int, short, double
// int main(){
//     // int and long double are on the priority list
//     // Rule #1: int converted to long double
//     int a{4};
//     long double b{3.323223};
//     std::cout << typeid(a + b).name() << ' ' << a + b << '\n'; // long double 7.32322
    
//     // double is on the priority list
//     // short is not on the priority list
//     // Rule #1: short is converted to double
//     double c{1.5};
//     short d{1};
//     std::cout << typeid(c + d).name() << ' ' << c + d << '\n'; // double 2.5
    
//     // short is not on the priority list
//     // Rule #2: short is promoted to int
//     short e{1};
//     short f{1};
//     std::cout << typeid(e + f).name() << ' ' << e + f << '\n'; // int 2
// }

// // --------- cout mutiple data and types
// int main() {
//     int x{1};
//     std::cout << x << '\n';                     // print a variable
//     std::cout << "hello, " << "world\n";        // print more than one thing
//     std::cout << x << " hello, " << "world\n";  // print different data types
// }

// // --------- cin
// int main() {
//     std::cout << "Enter your age: ";            // ask user for their age
//     unsigned short age{};                       // init variable to hold user input
//     std::cin >> age;                            // store input in variable age
//     std::cout << "Your age is " << age << '\n';

//     // std::cout << "Enter two integers separated by a space: ";
//     // int a{};                       // init variable to hold the first number
//     // int b{};                       // init variable to hold the second number
//     // std::cin >> a >> b;            // store inputs in variables a and b
//     // std::cout << "a: " << a << ", b: " << b <<'\n';
// }

// // --------- cin
// int main() {
//     std::cout << "Enter two integers separated by a space: ";
//     int a{};                       // init variable to hold the first number
//     double b{};                    // init variable to hold the second number
//     std::cin >> a >> b;            // store inputs in variables a and b
//     std::cout << "a: " << a << ", b: " << b <<'\n';
// }

// // --------- const
// int main() {
//     const double pi;

//     // const double pi{3.141598};  // initialization  
//     // pi = 3.14;                  // error, because pi is const cannot assign other values
// }


// // --------- constexpr
// int main() {
//     constexpr int a{1};     // OK: a is a compile-time const
//     constexpr int b{2};     // OK: b is a compile-time const
//     std::cout << "Enter an integer: ";
//     int input{};
//     std::cin >> input; // run time start
//     constexpr int c{input}; // error, exceed compile-time
// } 

// // --------- auto
// int main() {
//     auto a{3.0};    // 3.0 is a double literal, so variable a will be type double
//     auto b{1 + 2};  // 1 + 2 evaluates to an int, so b will be type int
//     auto c{b};      // variable b is an int, so c will be type int
//     std::cout << typeid(a).name() << ' ' << typeid(b).name() << ' ' << typeid(c).name() << '\n'; // int 2
// } 


// //--------- nest
// int main(){         // start outer block
//     int a{};
//     {               // start nested block 1
//         int b{};
//         {           // start nested block 2
//             int c{};
//         }           // end nested block 2
//     }               // end nested block 1
// }                   // end outer block

// // --------- inside or outside the nest
// int main() {
//     int a{1};
//     {
//         int b{2};
//         std::cout << a << '\n'; // 1
//         std::cout << b << '\n'; // 2
//     } // b goes out of scope here.
//     std::cout << b << '\n'; // error: b is out of scope
//     int c{3};
// } // a and c go out of scope here.

// // --------- function (void)
// int global_var{1};
//
// void my_function(){
//     global_var++;
// }
//
// int main() {
//     std::cout << global_var << '\n';    // 1
//     global_var++;                       // 2 
//     my_function();                      // 3
//     std::cout << global_var << '\n';    // 3
// } 

// // --------- namespace
// // namespace MyNamespace
// namespace MyNamespace {
// int x{3};
// int y{4};
// } // end namespace MyNamespace

// int main() {
//     std::cout << MyNamespace::x << '\n';  // 3
//     std::cout << MyNamespace::y << '\n';  // 4
// }

// // --------- namespace
// // namespace MyNamespace
// namespace MyNamespace {
// int x{3};
// int y{4};
// } // end namespace MyNamespace
//
//
// using namespace MyNamespace; // declear namespace to use 
//
// int main() {
//     std::cout << x << '\n';  // no need to use MyNamespace::x
//     std::cout << y << '\n';  // no need to use MyNamespace::y
// }

// // --------- using part of namespace 
// // namespace MyNamespace
// namespace MyNamespace {
// int x{3};
// int y{4};
// }  // end namespace MyNamespace
// 
// 
// using MyNamespace::x;
// 
// int main() {
//     std::cout << x << '\n';  // no need to use MyNamespace::x
//     std::cout << y << '\n';  // error: ‘y’ was not declared in this scope
// }

// // --------- custom namespace, nameing issue
// // custom namespace
// namespace MyNamespace{
// int cout{1};
// } // end namespace MyNamespace

// using namespace std;
// using namespace MyNamespace;

// int main() {
//     cout << cout << '\n'; // |\codeerror|: reference to ‘cout’ is ambiguous
// }