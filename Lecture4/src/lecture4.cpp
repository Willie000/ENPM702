#include <iostream>
#include <typeinfo>

//========================
/******* slide 14 *******/
//========================

// int main() {
//     int x{10};
//     int *p_int{&x};
//     std::cout << &x << '\n';
//     std::cout << p_int << '\n';
// }

//========================
/******* slide 15 *******/
//========================

int main() {
    int x{10};
    std::cout << typeid(&x).name() << '\n';
    int *p_int;
    std::cout << typeid(p_int).name() << '\n';
    std::cout << *(&p_int) << '\n';
    std::cout << p_int << '\n';
}

//========================
/******* slide 20 *******/
//========================

// int main() {
//     int x{3};
//     int *p1_int{&x};
//     int *p2_int{nullptr};
//     if (p1_int != p2_int)
//         std::cout << "p1_int is not null\n";
//     else
//         std::cout << "p1_int is null\n";
// }

//========================
/******* slide 21 *******/
//========================

// int main() {
//     int x{10};
//     std::cout << &x << '\n';     // 0x7fffffffdb3c
//     std::cout << *(&x) << '\n';  // What is the output?

//     int *p_int{&x};
//     std::cout << p_int << '\n';   // 0x7fffffffdb3c
//     std::cout << *p_int << '\n';  // What is the output?
// }

//========================
/******* slide 22 *******/
//========================

// int main() {
//     int x{10};
//     int *p_int{&x};

//     // Modify the value of x through p_int
//     *p_int = 20;

//     std::cout << x << '\n';       // 20
//     std::cout << *p_int << '\n';  // 20
// }

//========================
/******* slide 23 *******/
//========================

// int main() {
//     int x{10};
//     int *p_int{&x};

//     *p_int *= 2;

//     std::cout << x << '\n';
//     std::cout << *p_int << '\n';
// }

// int main() {
//     int a{2};
//     int *p_int{&a};
//     int **q_int{&p_int};
//     int ***r_int{&q_int};

//     std::cout << *p_int << '\n';
//     std::cout << **q_int << '\n';
//     std::cout << ***r_int << '\n';
// }

//========================
/******* slide 24 *******/
//========================

// int main() {
//     int i{10};
//     double d{10.0};
//     float f{10.0f};
//     char c{'a'};

//     int *p_int{&i};
//     double *p_double{&d};
//     float *p_float{&f};
//     char *p_char{&c};

//     std::cout << sizeof(p_int) << '\n';
//     std::cout << sizeof(p_double) << '\n';
//     std::cout << sizeof(p_float) << '\n';
//     std::cout << sizeof(p_char) << '\n';
// }

//========================
/******* slide 25 *******/
//========================

// int main() {
//     int x{5};
//     double y{2.5};
//     int *p_int{nullptr};  // OK
//     p_int = &x;           // OK
//     p_int = &y;           // error
// }

//========================
/******* slide 27 *******/
//========================

// int main() {
//     int x{5};
//     int *p_int{&x};
//     std::cout << p_int << '\n';  // 0x7ffeeb2a5f80
//     p_int++;                     // 0x7ffeeb2a5f80 + 1 * sizeof(int) = 0x7ffeeb2a5f80 + 4 bytes
//     std::cout << p_int << '\n';  // 0x7ffeeb2a5f84
// }

// int main() {
//     int x{5};
//     int *p_int{&x};
//     std::cout << p_int << '\n';  // 0x7ffeeb2a5f88
//     p_int--;                     // 0x7ffeeb2a5f88 - 1 * sizeof(int) = 0x7ffeeb2a5f88 - 4 bytes
//     std::cout << p_int << '\n';  // 0x7ffeeb2a5f84
// }

//========================
/******* slide 28 *******/
//========================

// int main(){
//     int x{5};
//     int *p_int{&x};
//     std::cout << p_int << '\n';  // 0x7ffcb5318adc
//     p_int += 2;                  // 0x7ffcb5318adc + 2 * sizeof(int) = 0x7ffcb5318adc + 8 bytes
//     std::cout << p_int << '\n';  // 0x7ffcb5318ae4
// }

// int main() {
//     int x{5};
//     int *p_int{&x};
//     std::cout << p_int << '\n';  // 0x7ffe530ca49c
//     p_int -= 2;                  // 0x7ffe530ca49c - 2 * sizeof(int) = 0x7ffe530ca49c - 8 bytes
//     std::cout << p_int << '\n';  // 0x7ffe530ca488
// }

//========================
/******* slide 29 *******/
//========================

// int main() {
//     int x{5};
//     int y{5};

//     int *p1_int{&x};  // p1_int points to x
//     int *p2_int{&y};  // p2_int points to y
//     int *p3_int{&x};  // p3_int points to x

//     std::cout << std::boolalpha;  // print bools as true/false
//     std::cout << (p1_int == p2_int) << '\n';
//     std::cout << (p1_int == p3_int) << '\n';
// }

//========================
/******* slide 30 *******/
//========================

// int main() {
//     int x{10};
//     int y{20};

//     int *p1_int{&x};  // p1_int points to x
//     int *p2_int{&y};  // p2_int points to y
//     int *p3_int{&x};  // p3_int points to x

//     std::cout << std::boolalpha;                // print bools as true/false
//     std::cout << (*p1_int == *p2_int) << '\n';  // false
//     std::cout << (*p1_int == *p3_int) << '\n';  // true
//     std::cout << (*p1_int > *p2_int) << '\n';   // false
//     std::cout << (*p1_int >= *p2_int) << '\n';  // false
//     std::cout << (*p1_int < *p2_int) << '\n';   // true
//     std::cout << (*p1_int <= *p2_int) << '\n';  // true
//     std::cout << (*p1_int != *p2_int) << '\n';  // true
// }

//========================
/******* slide 31 *******/
//========================

// int main() {
//     int x{10};
//     int y{20};

//     int *p1_int{&x};  // p1_int points to x
//     int *p2_int{&y};  // p2_int points to y
//     int *p3_int{&x};  // p3_int points to x
// }

//========================
/******* slide 33 *******/
//========================

// int main(){
//     int x{2};
//     int y{3};

//     /* pointer to const */
//     const int *p1_int;
//     p1_int = &x;  // OK
//     p1_int = &y;  // OK
//     *p1_int = 3;  // error

//     /* const pointer */
//     int *const p2_int{&x};
//     *p2_int = 3;  // OK
//     int y{3};
//     p2_int = &y;  // error

//     /* const pointer to const */
//     const int *const p3_int{&x};
//     *p3_int = 3;  // error
//     p3_int = &y;  // error
// }

//========================
/******* slide 38 *******/
//========================

// int main(){
//     int* p_int{new int{15}};
//     std::cout << p_int << '\n';  // 0x55555556b2b0
//     delete p_int;
//     std::cout << p_int << '\n';   // 0x55555556b2b0
//     std::cout << *p_int << '\n';  // UB
// }

//========================
/******* slide 39 *******/
//========================

// int main(){
//     int *p_int{new int{5}};  // allocate and point to data on the heap
//     delete p_int;            // free the heap memory
//     int x{2};                // create x is on the stack
//     p_int = &x;              // point to data on the stack
//     p_int = new int{3};      // allocate and point to data on the heap
//     delete p_int;            // free the heap memory
//     p_int = nullptr;         // null pointer
// }

//========================
/******* slide 40 *******/
//========================

// int main() {
//     int x{3};
//     int *p_int{&x};
//     delete p_int;  // UB
// }

//========================
/******* slide 41 *******/
//========================

// int main() {
//     int *p_int{nullptr};
//     delete p_int;  // safe to delete a null pointer
// }

//========================
/******* slide 43 *******/
//========================

// int main() {
//     int *p_int;                   // uninitialized
//     std::cout << *p_int << '\n';  // using a wild pointer: UB
// }

//========================
/******* slide 44 *******/
//========================

// int main() {
//     int *p_int{new int{2}};
//     delete p_int;                 // p_int is dangling
//     *p_int = 5;                   // UB
//     std::cout << *p_int << '\n';  // UB
// }

//========================
/******* slide 45 *******/
//========================

// int main() {
//     {
//         int *p_int{new int{5}};
//         int x{10};
//         p_int = &x;  // we just lost our only way of accessing the heap memory location
//     }  // p_int is destroyed here, but the memory it points to is not freed (@\emphIII{memory leak}@)
// }

//========================
/******* slide 46 *******/
//========================

// int main() {
//     int *p1_int{new int{2}};
//     int *p2_int{p1_int};

//     delete p1_int;
//     p1_int = nullptr;

//     delete p2_int;  // UB
// }

//========================
/******* slide 47 *******/
//========================

// int main() {
//     int *p_int{nullptr};
//     std::cout << *p_int << '\n';  // UB
// }

// int main() {
//     int *p_int{nullptr};
//     if (p_int) {                      // if p is not null
//         std::cout << *p_int << '\n';  // it's ok to derefence it
//     } else {                          // if p is null
//         // print error, assign pointer, do nothing at all, etc
//         // but do not derefence it
//         std::cout << "pointer is null\n";
//     }
// }

//========================
/******* slide 50 *******/
//========================

// int main() {
//     int x{10};
//     int& ref{x};               // ref is a reference to x
//     std::cout << "memory x: " << &x << '\n';
//     std::cout << "memory ref: " << &ref << '\n';
//     std::cout << x << '\n';    // 10
//     std::cout << ref << '\n';  // 10
//     ref = 20;                  // x is now 20
//     std::cout << x << '\n';    // 20
//     std::cout << ref << '\n';  // 20
//     x = 30;                    // ref is now 30
//     std::cout << x << '\n';    // 30
//     std::cout << ref << '\n';  // 30
// }

//========================
/******* slide 52 *******/
//========================
// int main() {
//     int *p1_int{new int{40}};
//     int *p2_int{new int{50}};

//     p1_int = new int{100};
//     delete p2_int;
//     *p2_int = 5;
//     p1_int = p2_int;
//     *p1_int = 500;
//     delete p1_int;
// }
