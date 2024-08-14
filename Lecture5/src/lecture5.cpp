#include <array>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

// using namespace std::literals::string_literals;

//========================
/******* slide 15 *******/
//========================
int main() {
  std::cout << typeid("hello, world\n").name() << '\n';
  auto my_string{"hello, world\n"};
  std::cout << typeid(my_string).name() << '\n';
}

//========================
/******* slide 18 *******/
//========================
// int main() {
//   int number;                                 // garbage value
//   std::cout << "number: " << number << '\n';  // garbage

//   std::string name;                       // empty string
//   std::cout << "name: " << name << '\n';  // empty string
// }

//========================
/******* slide 19 *******/
//========================
// int main() {
//   std::string s0{"Initial string"};  // initialized from a C string
//   std::string s1;                    // empty string
//   std::string s2{s0};                // initialized from another string
//   std::string s3(s0, 8, 3);          // "str"
//   std::string s4("Another character sequence", 12);  // "Another char"
//   std::string s5a(10, 'x');                          // "xxxxxxxxxx"
//   std::string s5b(10, 42);                           // "**********"
//   std::string s6(s0.begin(), s0.begin() + 7);        // "Initial"

//   std::cout << "s0: " << s0 << '\n';
//   std::cout << "s1: " << s1 << '\n';
//   std::cout << "s2: " << s2 << '\n';
//   std::cout << "s3: " << s3 << '\n';
//   std::cout << "s4: " << s4 << '\n';
//   std::cout << "s5a: " << s5a << '\n';
//   std::cout << "s5b: " << s5b << '\n';
//   std::cout << "s6: " << s6 << '\n';
// }

//========================
/******* slide 20 *******/
//========================
// int main() {
//   auto greeting1{"hello"};
//   auto greeting2{"hello"s};
//   std::cout << typeid(greeting1).name() << '\n';
//   std::cout << typeid(greeting2).name() << '\n';
//   std::cout << "hello" << '\n';
//   std::cout << "hello"s << '\n';
// }

//========================
/******* slide 21 *******/
//========================
// int main() {
//   std::string my_string{"short string"};
//   std::cout << sizeof(my_string) << '\n';
//   my_string = "This is now a longer string";
//   std::cout << sizeof(my_string) << '\n';
//   my_string = "This is now an even longer string";
//   std::cout << sizeof(my_string) << '\n';
// }

//========================
/******* slide 22 *******/
//========================
// int main() {
//   std::string my_string{"Life is so good"};
//   std::cout << my_string.capacity() << '\n';
//   my_string = "Life is so good!";
//   std::cout << my_string.capacity() << '\n';
// }

//========================
/******* slide 25 *******/
//========================
// union Data {
//   int int_value;
//   char char_value;
// };

// int main() {
//   // Declare a union variable
//   Data data;

//   // Store an integer in the union
//   data.int_value = 42;
//   // Store a char in the union (overwrites the double)
//   data.char_value = 'H';

//   // Demonstrate that only the last assigned value is valid
//   std::cout << "char: " << data.char_value << '\n';
//   std::cout << "integer: " << data.int_value << '\n';
// }

//========================
/******* slide 26 *******/
//========================
// int main() {
//   std::string greeting{"hello"};
//   std::cout << greeting.length() << '\n';  // 5
//   // or
//   std::cout << greeting.size() << '\n';  // 5
// }

//========================
/******* slide 28 *******/
//========================
// int main() {
//   // initialization
//   std::string quote{"Just a flesh wound"};

//   // access characters
//   std::cout << quote.front() << '\n';  // return a ref to 1st char
//   quote.front() = 'j';                 // modify the 1st char
//   std::cout << quote[0] << '\n';       // return the 1st char
//   std::cout << quote[5] << '\n';       // return the 6th char
//   std::cout << quote.at(5) << '\n';    // return the 6th char
//   std::cout << quote.back() << '\n';   // return a ref to the last char
//   quote.back() = 'D';                  // modify the last char
//   std::cout << quote.back() << '\n';
//   quote[6] = 'A';     // modify the 7th character
//   quote.at(6) = 'a';  // modify the 7th character// initialization
// }

//========================
/******* slide 29 *******/
//========================
// int main() {
//   std::string greeting{"Hi"};
//   std::cout << greeting[2] << '\n';  // UB
// }

//========================
/******* slide 30 *******/
//========================
// int main() {
//   std::string greeting{"Hi"};
//   std::cout << greeting.at(2) << '\n';  // error
// }

//========================
/******* slide 32 *******/
//========================
// int main() {
//   std::string quote{"Just a flesh wound!"};
//   /*
//       write a for loop to print each character of the string
//   */
// }

//========================
/******* slide 34 *******/
//========================
// int main() {
//   std::string quote{"Just a flesh wound!"};

//   for (char c : quote) {
//     std::cout << c << ' ';
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 38 *******/
//========================
// int main() {
//   std::string greeting{"Hi"};
//   for (auto it{greeting.begin()}; it != greeting.end(); ++it)
//     std::cout << *it << '\n';
// }

//========================
/******* slide 39 *******/
//========================
// int main() {
//   std::cout << "Enter your full name: ";  // e.g., John Doe
//   std::string name{};
//   std::cin >> name;  // John

//   std::cout << "Enter your student id: ";  // e.g., 123223LUJ
//   std::string student_id{};
//   std::cin >> student_id;  // Doe

//   std::cout << "Name: " << name << ", ID: " << student_id << '\n';
// }

//========================
/******* slide 40 *******/
//========================
// int main(){
//   std::cout << "Enter your full name: ";
//   std::string name{};
//   std::getline(std::cin >> std::ws, name);

//   std::cout << "Enter your student id: ";
//   std::string student_id{};
//   std::getline(std::cin >> std::ws, student_id);

//   std::cout << "Name: " << name << ", ID: " << student_id << '\n';
// }

//========================
/******* slide 41 *******/
//========================

// int main() {
//   std::string s{"Hello"};
//   s += " World";  // append a string
//   s += '!';       // append a character
//   std::cout << s << '\n';

//   std::string s1{"Hello"};
//   std::string s2{"World"};
//   std::string s3{s1 + " " + s2};
//   std::cout << s3 << '\n';

//   std::string s4{"Hello"};
//   s4.append(" World!");
//   std::cout << s4 << '\n';

//   std::string s5{"Hello"};
//   s5.push_back('!');
//   std::cout << s5 << '\n';
// }

//========================
/******* slide 42 *******/
//========================

// int main() {
//   std::string s1{"Hello World"};
//   std::string s2{"Big "};
//   s1.insert(6, s2);  // Inserts at position 6
//   std::cout << s1 << '\n';
// }

// int main() {
//   std::string s1 = "Hello World";
//   std::string s2 = "Wonderful Big Day";
//   s1.insert(6, s2, 10, 4);  // Inserts "Big " at the 6th position in s1
//   std::cout << s1 << '\n';
// }

// int main() {
//   std::string s1 = "Hello World";
//   std::string s2 = "Beautiful ";
//   s1.insert(s1.begin() + 6, s2.begin(), s2.end());
//   std::cout << s1 << '\n';
// }

//========================
/******* slide 43 *******/
//========================
// int main() {
//   std::string s{"Hello World"};
//   s.erase(s.size() - 6, 6);  // remove 6 characters starting from index 5
//   std::cout << s << '\n';
// }

// int main() {
//   std::string s{"Hello World"};
//   s.erase(s.begin() + 6, s.end());
//   std::cout << s << '\n';
// }

// int main() {
//   std::string s = "Hello";
//   s.erase(4);
//   std::cout << s << '\n';
// }

// int main() {
//   std::string s{"Hello World"};
//   s.clear();
//   std::cout << s << '\n';
// }

// int main() {
//   std::string s{"Hello"};
//   s.pop_back();
//   std::cout << s << '\n';
// }

//========================
/******* slide 45 *******/
//========================

// int main() {
//   //------ SSO: STACK Allocation
//   std::string s(3, 'A');              // "AAA"
//   std::cout << s.size() << '\n';      // 3
//   std::cout << s.capacity() << '\n';  // 15

//   //------- HEAP allocation
//   s.assign(16, 'B');                  // BBBBBBBBBBBBBBBB
//   std::cout << s.size() << '\n';      // 16
//   std::cout << s.capacity() << '\n';  // 30???
//   s.assign(31, 'C');                  // CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
//   std::cout << s.size() << '\n';      // 31
//   std::cout << s.capacity() << '\n';  // 60???
// }

// int main() {
//   std::string str;
//   size_t previous_capacity = str.capacity();

//   for (auto i{0}; i < 100; ++i) {
//     str += 'a';  // Add one character at a time
//     size_t new_capacity = str.capacity();

//     if (new_capacity != previous_capacity) {
//       std::cout << "Size: " << str.size() << " | New Capacity: " <<
//       new_capacity
//                 << " | Growth Factor: "
//                 << static_cast<float>(new_capacity) / previous_capacity
//                 << std::endl;
//       previous_capacity = new_capacity;
//     }
//   }
// }

//========================
/******* slide 48 *******/
//========================

// int main() {
//   std::string full_name;
//   full_name.reserve(100);  // allocate memory for 100 characters

//   std::cout << "Enter your first name: ";  // Albus
//   std::string first_name;
//   std::cin >> first_name;

//   std::cout << "Enter your middle name: ";  // Percival
//   std::string middle_name;
//   std::cin >> middle_name;

//   std::cout << "Enter your last name: ";  // Dumbledore
//   std::string last_name;
//   std::cin >> last_name;

//   // only the first character is kept
//   middle_name.resize(1);

//   full_name = first_name + " " + middle_name + ". " + last_name;
//   full_name.shrink_to_fit();  // capacity is now equal to size

//   std::cout << full_name << '\n';  // Albus P. Dumbledore
// }

//========================
/******* slide 55 *******/
//========================
// int main() {
//   std::string greeting{"Hello"};
//   auto it = greeting.end();
//   std::cout << *it << '\n';
// }

//========================
/******* slide 58 *******/
//========================
// int main() {
//   std::array<int, 5> a1{1, 2, 3, 4, 5};  // [1, 2, 3, 4, 5]
//   std::array<int, 10> a2{1, 2, 3, 4, 5,
//                          6, 7, 8, 9};  // [1, 2, 3, 4, 5, 6, 7, 8, 9]

//   std::cout << sizeof(a1) << '\n';
//   std::cout << sizeof(a2) << '\n';
// }

//========================
/******* slide 62 *******/
//========================
// int main() {
//   //========================
//   // zero initialization
//   int a1[2]{};  // [0, 0]
//   // explicit initialization
//   int a2[2]{1, 2};
//   // partial initialization
//   int a3[2]{1};  // [1, 0]
//   // size deduction
//   int a4[]{1, 2};

//   // fill with explicit initialization
//   // up to but not including
//   int a5[3]{};               // [0, 0, 0]
//   std::fill(a5, a5 + 2, 3);  //[3, 3, 0]

//   // fill with partial initialization
//   // up to but not including
//   int a6[3]{};               // [0, 0, 0]
//   std::fill(a6, a6 + 2, 1);  //[1, 1, 0]
// }

// int main() {
//   // zero initialization
//   std::array<int, 2> a1{};  // [0, 0]
//   // explicit initialization
//   std::array<int, 2> a2 = {1, 2};
//   // partial initialization
//   std::array<int, 2> a3 = {1};  // [1, 0]
//   // no size inference

//   // fill with explicit initialization
//   // up to but not including
//   std::array<int, 2> a4;
//   std::fill(a4.begin(), a4.end(), 3);  //[3, 3]

//   // fill with partial initialization
//   // up to but not including
//   std::array<int, 3> a5{};
//   std::fill(a5.begin(), a5.begin() + 2, 1);  //[1, 1, 0]
// }

//========================
/******* slide 63 *******/
//========================
// int main() {
//   int my_array[5]{1, 2, 3, 4, 5};
//   std::cout << my_array << '\n';
//   int* ptr = my_array;
//   // first element using pointer
//   int first_number = *ptr;
//   std::cout << first_number << '\n';
//   // second element using pointer arithmetic
//   int second_number = *(ptr + 1);
//   std::cout << second_number << '\n';

//   for (auto i{0}; i < std::size(my_array); ++i) {
//     std::cout << my_array[i] << ' ';
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 64 *******/
//========================
// int main() {
//   int my_array[5]{1, 2, 3, 4, 5};
//   int* ptr = my_array;

//   for (size_t i{0}; i < std::size(my_array); ++i) {
//     // write code here
//     std::cout << *(ptr + i) << '\n';
//   }
// }

//========================
/******* slide 65 *******/
//========================
// int main() {
//   constexpr size_t length1{3};
//   size_t length2{3};

//   // C-style array
//   int a1[3]{};        // ok: 3 is a compile-time constant
//   int a2[length1]{};  // ok: length1 is a compile-time constant
//   int a3[length2]{};  // error: length2 is not a compile-time constant

//   // C++ style array
//   // std::array<int, 3> a4{};        // ok: 3 is a compile-time constant
//   // std::array<int, length1> a5{};  // ok: length1 is a compile-time
//   constant
//   // std::array<int, length2> a6{};  // error: not a compile-time constant
// }

//========================
/******* slide 68 *******/
//========================

// int main() {
//   constexpr size_t length{3};

//   int a1[length]{1, 2, 3};
//   std::cout << a1[0] << '\n';  // 1
//   a1[0] = 10;                  // [10, 2, 3]

//   // regular for loop
//   for (size_t i{0}; i < length; ++i) {
//     std::cout << a1[i] << ' ';
//   }
//   std::cout << '\n';

//   // range-based for loop
//   for (const auto &item : a1) {
//     std::cout << item << ' ';
//   }
//   std::cout << '\n';
// }

// int main() {
//   constexpr size_t length{3};

//   std::array<int, length> a2{10, 20, 30};
//   std::cout << a2.at(0) << '\n';    // 10
//   std::cout << a2.empty() << '\n';  // 0 (false)
//   std::cout << a2.size() << '\n';   // 3
//   std::cout << a2.front() << '\n';  // 10
//   std::cout << a2.back() << '\n';   // 30
//   a2.at(0) = 100;                   // [100, 20, 30]

//   // regular for loop
//   std::cout << a2.at(i) << ' ';
//   for (size_t i{0}; i < length; ++i) {
//   }
//   std::cout << '\n';

//   // range-based for loop
//   for (const auto &item : a2) {
//     std::cout << item << ' ';
//   }
//   std::cout << '\n';

//   a2.fill(0);  // [0, 0, 0]
// }

//========================
/******* slide 71 *******/
//========================
// int main() {
//   int numbers[2][3]{
//       {1, 2, 3},  // row 0
//       {4, 5, 6}   // row 1
//   };

//   // Iterate over the 2D array using regular for loops
//   for (int i = 0; i < 2; ++i) {    // Loop over rows
//     for (int j = 0; j < 3; ++j) {  // Loop over columns
//       std::cout << numbers[i][j] << " ";
//     }
//     std::cout << '\n';  // Newline after each row
//   }

//   std::cout << '\n';

//   // Iterate over the 2D array using range-based for loops
//   for (const auto& row : numbers) {
//     for (const auto& element : row) {
//       std::cout << element << " ";
//     }
//     std::cout << '\n';  // Newline after each row
//   }
// }

// int main() {
//   std::array<std::array<int, 3>, 2> numbers{{
//       // note the double braces
//       {1, 2, 3},  // row 0
//       {4, 5, 6}   // row 1
//   }};

//   // Iterate over the 2D array using regular for loops
//   for (int i = 0; i < 2; ++i) {    // Loop over rows
//     for (int j = 0; j < 3; ++j) {  // Loop over columns
//       std::cout << numbers.at(i).at(j) << " ";
//     }
//     std::cout << '\n';  // Newline after each row
//   }

//   std::cout << '\n';
//   // Iterate over the 2D array using range-based for loops
//   for (const auto& row : numbers) {
//     for (const auto& element : row) {
//       std::cout << element << " ";
//     }
//     std::cout << '\n';  // Newline after each row
//   }
// }

//========================
/******* slide 72 *******/
//========================

// int main() {
//   int numbers[3][2][3]{{{1, 2, 3}, {4, 5, 6}},
//                        {{7, 8, 9}, {10, 11, 12}},
//                        {{13, 14, 15}, {16, 17, 18}}};

//   // Iterate over the 3D array using range-based for loops
//   for (const auto& matrix : numbers) {
//     for (const auto& row : matrix) {
//       for (const auto& element : row) {
//         std::cout << element << " ";
//       }
//       std::cout << '\n';  // Newline after each row
//     }
//     std::cout << '\n';  // Newline after each matrix
//   }

//   // Iterate over the 3D array using regular for loops
//   for (int i = 0; i < 3; ++i) {      // Loop over matrices
//     for (int j = 0; j < 2; ++j) {    // Loop over rows
//       for (int k = 0; k < 3; ++k) {  // Loop over columns
//         std::cout << numbers[i][j][k] << " ";
//       }
//       std::cout << '\n';  // Newline after each row
//     }
//     std::cout << '\n';  // Newline after each matrix
//   }
// }

// int main() {
//   std::array<std::array<std::array<int, 3>, 2>, 3> numbers{
//       {{{{1, 2, 3}, {4, 5, 6}}},
//        {{{7, 8, 9}, {10, 11, 12}}},
//        {{{13, 14, 15}, {16, 17, 18}}}}};

//   // Iterate over the 3D array using range-based for loops
//   for (const auto& matrix : numbers) {
//     for (const auto& row : matrix) {
//       for (const auto& element : row) {
//         std::cout << element << " ";
//       }
//       std::cout << '\n';  // Newline after each row
//     }
//     std::cout << '\n';  // Newline after each matrix
//   }

//   // Iterate over the 3D array using regular for loops
//   for (int i = 0; i < 3; ++i) {      // Loop over matrices
//     for (int j = 0; j < 2; ++j) {    // Loop over rows
//       for (int k = 0; k < 3; ++k) {  // Loop over columns
//         std::cout << numbers.at(i).at(j).at(k) << " ";
//       }
//       std::cout << '\n';  // Newline after each row
//     }
//     std::cout << '\n';  // Newline after each matrix
//   }
// }

//========================
/******* slide 73 *******/
//========================
// int main() {
//   int numbers[2][3]{{1, 2, 3}, {4, 5, 6}};
//   numbers[1][1] = 100;
//   std::cout << numbers[1][1] << '\n';  // initialization from an existing
//   vector
// }
// int main() {
//   std::array<std::array<int, 3>, 2> numbers{{{1, 2, 3}, {4, 5, 6}}};

//   numbers.at(1).at(1) = 100;
//   std::cout << numbers.at(1).at(1) << '\n';
// }

//========================
/******* slide 76 *******/
//========================
// int main() {
//   std::vector<int> v1{-1, 3, 5};  // initialization with explicit values
//   std::vector<int> v2{};          // zero initialization
//   for (const auto& item: v2){
//     std::cout << item << ' ';
//   }
//   v2 = v1;                        // copy items of v1 into v2
//   auto v3{v1};                    // initialization from an existing vector
// }

//========================
/******* slide 77 *******/
//========================
// int main() {
//   std::vector<int> numbers{-1, 3, 5, -9};  // initialization with 4 items

//   std::cout << numbers.front() << '\n';  // -1
//   std::cout << numbers.back() << '\n';   // -9

//   // indexing operator (no bounds check)
//   numbers[0] = -2;                  // [-2, 3, 5, -9]
//   std::cout << numbers[0] << '\n';  // -2
//   // at() method
//   numbers.at(0) = 1;                   // [1, 3, 5, -9]
//   std::cout << numbers.at(3) << '\n';  // 4th item - bounds check

//   // regular for loop
//   for (size_t i{0}; i < numbers.size(); ++i) {
//     numbers[i] = 0;
//   }
//   std::cout << '\n';

//   // ranged-base for loop
//   for (auto &item : numbers) {
//     item = 1;
//   }
//   std::cout << '\n';

//   numbers.assign({1, 2, 3, 4});  // replace entire content with new values
// }

//========================
/******* slide 78 *******/
//========================
// int main() {
//   std::vector<int> my_vector;

//   // Add elements to the vector using push_back()
//   my_vector.push_back(10);
//   my_vector.push_back(20);
//   my_vector.push_back(30);

//   // Output the elements of the vector
//   std::cout << "Elements in my_vector: ";
//   for (size_t i{0}; i < my_vector.size(); ++i) {
//     std::cout << my_vector.at(i) << " ";
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 79 *******/
//========================
// int main() {
//   // Declare a vector of pairs of integers
//   std::vector<std::pair<int, int>> pair_vector;

//   // Add elements to the vector using emplace_back()
//   pair_vector.emplace_back(1, 2);
//   pair_vector.emplace_back(3, 4);
//   pair_vector.emplace_back(5, 6);

//   // Output the elements of the vector
//   for (const auto &p : pair_vector) {
//     std::cout << "First: " << p.first << ", Second: " << p.second << '\n';
//   }
// }

//========================
/******* slide 80 *******/
//========================
// int main() {
//   // Declare and initialize a vector of integers
//   std::vector<int> my_vector = {1, 2, 3, 5, 6};

//   // Insert a single element at the 4th position (index 3)
//   my_vector.insert(my_vector.begin() + 3, 4);

//   // Insert multiple elements at the end
//   my_vector.insert(my_vector.end(), {7, 8, 9});

//   // Insert multiple copies of the same value
//   my_vector.insert(my_vector.begin(), 3, 0);
// }

//========================
/******* slide 81 *******/
//========================
// int main() {
//   std::vector<std::pair<int, std::string>> my_vector;

//   // Use emplace() to insert elements
//   my_vector.emplace(vec.begin(), 1, "one");
//   my_vector.emplace(vec.end(), 3, "three");
//   my_vector.emplace(vec.end(), 4, "four");
//   my_vector.emplace(vec.begin() + 1, 2, "two");
// }

//========================
/******* slide 82 *******/
//========================
// int main() {
//   // Declare and initialize a vector of integers
//   std::vector<int> my_vect = {1, 2, 3, 4, 5};

//   // Use pop_back() to remove the last element
//   my_vect.pop_back();

//   // Output the elements of the vector after pop_back()
//   std::cout << "Elements in my_vect after pop_back: ";
//   for (const int &value : my_vect) {
//     std::cout << value << " ";
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 84 *******/
//========================
// int main() {
//   // Declare and initialize a vector of integers
//   std::vector<int> my_vector = {1, 2, 3, 4, 5};

//   // Remove the element at the 2nd position (index 1)
//   my_vector.erase(my_vector.begin() + 1);

//   // Remove a range of elements (3rd and 4th elements)
//   my_vector.erase(my_vector.begin() + 1, my_vector.begin() + 3);
// }

//========================
/******* slide 85 *******/
//========================
// int main() {
//   // Declare and initialize a vector of integers
//   std::vector<int> my_vector = {1, 2, 3, 4, 5};

//   // Clear all elements from the vector
//   my_vector.clear();

//   // Output the size of the vector after clear
//   std::cout << "Size of my_vector after clear: " << my_vector.size() <<
//   '\n';

//   // Check if the vector is empty
//   if (my_vector.empty()) {
//     std::cout << "my_vector is now empty.\n";
//   } else {
//     std::cout << "my_vector is not empty.\n";
//   }
// }
//========================
/******* slide 87 *******/
//========================
// int main() {
//   std::vector<int> vec1 = {1, 2, 3};
//   std::vector<int> vec2 = {1, 2, 3, 4, 5};

//   std::cout << sizeof(vec1) << '\n';
//   std::cout << sizeof(vec2) << '\n';
// }
//========================
/******* slide 89 *******/
//========================
// int main() {
//   int x{10};
//   std::vector<int> vec{1, 2, 3};

//   vec.push_back(x);

//   for (const auto &item : vec) {
//     std::cout << item << ' ';
//   }
//   std::cout << '\n';
// }

//========================
/******* slide 90 *******/
//========================
// int main() {
//   std::vector<int> vec = {1, 2, 3, 4, 5};

//   // Display current size and capacity
//   std::cout << "Initial size: " << vec.size() << '\n';          // 5
//   std::cout << "Initial capacity: " << vec.capacity() << '\n';  // 5

//   // Reserve space
//   vec.reserve(20);
//   std::cout << "\nAfter reserving space for 20 elements:" << '\n';
//   std::cout << "Size: " << vec.size() << '\n';          // 5
//   std::cout << "Capacity: " << vec.capacity() << '\n';  // 20

//   // Add more elements to the vector (capacity will be doubled)
//   for (auto i{0}; i < 20; ++i) vec.push_back(i);

//   // Display updated size and capacity
//   std::cout << "\nAfter adding more elements:" << '\n';
//   std::cout << "Size: " << vec.size() << '\n';          // 25
//   std::cout << "Capacity: " << vec.capacity() << '\n';  // 40

//   // Shrink the vector to fit its size
//   vec.shrink_to_fit();
//   std::cout << "\nAfter shrinking to fit:" << '\n';
//   std::cout << "Size: " << vec.size() << '\n';          // 25
//   std::cout << "Capacity: " << vec.capacity() << '\n';  // 25
// }