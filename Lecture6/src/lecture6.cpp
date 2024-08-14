#include <iostream>
#include <vector>

//========================
/******* slide 6 *******/
//========================

// int main(){}

//========================
/******* slide 8 *******/
//========================
// // function prototypes
// void print_hello();
// void print_world();

// // function definitions
// void print_world() { std::cout << "world\n"; }

// void print_hello() {
//   std::cout << "hello, ";
//   print_world();
// }

// int main() {
//   print_hello();
//   std::cout << "exit main\n";
// }

//========================
/******* slide 9 *******/
//========================

// // function definitions
// void print_hello() {
//   std::cout << "hello, ";
//   print_world();
// }

// void print_world() { std::cout << "world\n"; }

// int main() {
//   print_hello();
//   std::cout << "exit main\n";
// }

//========================
/******* slide 10 *******/
//========================
// void prompt_user(){
//   std::cout << "Enter a number: ";
//   int num{};
//   std::cin >> num;
//   print_number(num);
// }

// void print_number(int number){
//   if (number > 0)
//     std::cout << "The number is: " << number << "\n";
//   else
//     prompt_user();
// }

// int main(){
//   prompt_user();
// }

//========================
/******* slide 15 *******/
//========================
// void modify(int x) {
//     // int x{a};
//     x = x + 10;  // 15
// }

// int main() {
//     int a{5};
//     modify(a);
//     // a is still 5
// }

//========================
/******* slide 17 *******/
//========================
// void modify(int &x) {
//     // int &x{a};
//     x = x + 10;  //15
// }

// int main() {
//     int a{5};
//     modify(a);
//     // a is now 15
// }

//========================
/******* slide 18 *******/
//========================
// void modify(std::vector<int> &v) {  // Passed by reference
//   // implicit: std::vector<int> &v{numbers};
//   int n{v.back()};
//   n++;
//   v.push_back(n);
// }

// int main() {
//   std::vector<int> vect = {1, 2, 3, 4, 5};
//   modify(vect);
//   for (const auto &item : vect) {
//     std::cout << item << " ";  // 1 2 3 4 5 6
//   }
// }

//========================
/******* slide 20 *******/
//========================

// void print_vector(const std::vector<int> &v) {  // Passed by const reference
//   // implicit: const std::vector<int> &v{numbers};
//   for (const int &num : v) {
//     std::cout << num << " ";  // 1 2 3 4 5
//   }
// //   v.push_back(100);  // This would be an error since v is const
// }

// int main() {
//   std::vector<int> vect = {1, 2, 3, 4, 5};
//   print_vector(vect);
// }

//========================
/******* slide 21 *******/
//========================
// void modify(int* p) {
//     // int* p{&a};
//     *p = *p + 10;
// }

// int main() {
//     int a{5};
//     modify(&a);
//     // a is now 15
// }

//========================
/******* slide 24 *******/
//========================
// void count_calls() {
//     // static variable
//     static int count{0};
//     count++;
//     std::cout << count << " times\n";
// }

// int main() {
//     count_calls();  // 1 times;
//     count_calls();  // 2 times;
//     count_calls();  // 3 times;
// }

//========================
/******* slide 25 *******/
//========================

// // write your function here

// int main() {
//     add_to_sum(1); // 1
//     add_to_sum(2); // 3
//     add_to_sum(3); // 6
//     add_to_sum(4); // 10
// }

//========================
/******* slide 26 *******/
//========================
// int return_value(int a) {
//     if (a>1)
//         return 2;
//     else
//         return 0;
// }

// int main() {
//     int a{5};
//     std::cout << return_value(a) << '\n'; // 2
// }

//========================
/******* slide 27 *******/
//========================
// int add(int a, int b) {
//   int c{a + b};
//   return c;
// }

// int main() {
//   int result{add(1, 2)};
//   std::cout << result << '\n';  // 3
// }

//========================
/******* slide 30 *******/
//========================
// std::vector<int> create_vectors() {
//   std::vector<int> vect1{1, 2, 3};
//   std::cout << "&vec1: " << &vect1 << '\n';  //@1
//   std::vector<int> vect2{10, 20, 30};
//   std::cout << "&vec2: " << &vect2 << '\n';  //@2
//   return vect1;
// }

// int main() {
//   std::vector vect{create_vectors()};
//   std::cout << "&vect: " << &vect << '\n';  //@1
// }

//========================
/******* slide 32 *******/
//========================
// std::vector<int> create_vector1() {
//   std::vector<int> function_vector{1, 2, 3};
//   std::cout << "&function_vector: " << &function_vector
//             << '\n';  //@1
//   return function_vector;
// }

// std::vector<int> create_vector2() { return std::vector<int>{1, 2, 3}; }

// int main() {
//   std::vector<int> vect1{};
//   vect1 = create_vector1();
//   std::cout << "&vect1: " << &vect1 << '\n';  //@2

//   std::vector<int> vect2{};
//   vect2 = create_vector2();
// }

//========================
/******* slide 35 *******/
//========================
// // Function to return a reference to the element at a given index
// int& get_element(std::vector<int>& vec, int index) {
//   return vec[index];  // Returning a reference to the element
// }

// int main() {
//   std::vector<int> my_vector = {1, 2, 3, 4, 5};

//   // Get a reference to the element at index 2
//   int& ref = get_element(my_vector, 2);

//   // Modify the element via the reference
//   ref = 10;

//   // Print the modified vector
//   for (const int& val : my_vector) {
//     std::cout << val << " ";
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 36 *******/
//========================
// // Function to return a const reference to the element at a given index
// const int& get_element(std::vector<int>& vec, int index) {
//   return vec[index];  // Returning a reference to the element
// }

// int main() {
//   std::vector<int> my_vector = {1, 2, 3, 4, 5};

//   // Get a reference to the element at index 2
//   const int& ref = get_element(my_vector, 2);

//   // No intention of modifying the returned reference
//   std::cout << ref << '\n';
// }

//========================
/******* slide 37 *******/
//========================
// // Function to return a reference to a static variable
// int& f() {
//   static int var{1};
//   std::cout << var << '\n';
//   return var;
// }

// // usage
// int main() {
//   f() = 5;          // 1
//   auto& ref = f();  // 5
//   ref = 10;
//   f();  // 10
// }

//========================
/******* slide 38 *******/
//========================
// int& get_value() {
//     int local_value = 10;
//     return local_value;  // Dangerous: local_value goes out of scope
// }

// int main() {
//     int& ref = get_value();
//     std::cout << ref << '\n';  // UB
// }

//========================
/******* slide 40 *******/
//========================
// int add(int a, int b) { return a + b; }
// double add(double a, double b) { return a + b; }
// double add(int a, double b) { return a + b; }
// double add(double a, int b) { return a + b; }
// double add(double a, double b, double c) { return a + b + c; }

// int main() {
//   std::cout << add(2, 3) << '\n';            // add(int, int)
//   std::cout << add(2, 3.5) << '\n';          // add(int, double)
//   std::cout << add(2.5, 3) << '\n';          // add(double, int)
//   std::cout << add(2.5, 3.2) << '\n';        // add(double, double)
//   std::cout << add(2.5, 3.2, 4.75) << '\n';  // add(double, double, double)
// }

//========================
/******* slide 42 *******/
//========================
// int add(int a, int b) { return a + b; }

// int main() {
//   std::cout << add(2, 3) << '\n';     // add(int, int)
//   std::cout << add(2, 3.5f) << '\n';  // add(int, double) -- promotion
//   std::cout << add(2.5, 3) << '\n';   // add(double, int) -- conversion
// }

//========================
/******* slide 43 *******/
//========================
// double return_value(double a) { return a; }

// int return_value(double a) {  // error: redefinition of 'return_value'
//   return a;
// }

// int main() {
//   std::cout << return_value(2) << '\n';
//   std::cout << return_value(2.5) << '\n';
// }

//========================
/******* slide 44 *******/
//========================
// void add(int a, int b = 0, int c = 0) { std::cout << a + b + c << '\n'; }

// int main() {
//   add(1);        // a=1, b=0, c=0
//   add(1, 2);     // a=1, b=2, c=0
//   add(1, 2, 3);  // a=1, b=2, c=3
//   add();         // error: no matching function for call to 'add()'
// }

//========================
/******* slide 45 *******/
//========================
// void add(int a, int b=0, int c=0);

// void add(int a, int b=0, int c=0){
//     std::cout << a + b + c << '\n';
// }

//========================
/******* slide 46 *******/
//========================
// int add(int a, int b){
//   return a + b;
// }

// int add(int a, int b=0){ //@\codeerror: redefinition of \emph{int add(int,
// int)}@
//   return a + b;
// }

//========================
/******* slide 49 *******/
//========================
// void f(int& x, int y, int z) { x += y + z; }

// int g(int a, int b) {
//   int result{};
//   result = a + b;
//   f(result, a, b);
//   return result;
// }

// int main() {
//   int x{10};
//   int y{20};
//   int z{};
//   z = g(x, y);
//   std::cout << z << '\n';
// }


//========================
/******* slide 50 *******/
//========================
// long long factorial(int n) {
//     if (n <= 1) return 1;      // Base case: 0! or 1! is 1
//     return n * factorial(n-1); // Recursive call
// }

// int main() {
//     int n{};
//     std::cout << "Enter a number: ";
//     std::cin >> n;
//     std::cout << "Factorial of " << n << " is " << factorial(n) << '\n';
// }

//========================
/******* slide 53 *******/
//========================
int main(int argc, char *argv[]) {
    std::cout << "Number of arguments: " << argc << '\n';
    for (int i{0}; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << '\n';
    }
}