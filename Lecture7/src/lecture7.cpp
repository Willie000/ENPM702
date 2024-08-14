#include <cassert>   // for assert()
#include <iostream>  // for IO
#include <memory>    // for smart pointers

// int main() {
//   int x{2};
//   assert(x == 3);
//   std::cout << "line after assert()\n";
// }
//========================
/******* slide 8 *******/
//========================
// int main() {
//   std::unique_ptr<int> u_ptr1 = std::make_unique<int>(5);
// //   std::unique_ptr<int> u_ptr2{u_ptr1};  // error
// }

//========================
/******* slide 9 *******/
//========================
// int main() {
//   {
//     // allocate an int on the heap
//     auto u_ptr = std::make_unique<int>(10);
//     std::cout << *u_ptr << '\n';  // 10
//     *u_ptr = 20;                  // modify the resource
//     std::cout << *u_ptr << '\n';  // 20
//     std::cout << u_ptr << '\n';   // error
//   }  // u_ptr is destroyed here and resource is automatically deleted
// }

//========================
/******* slide 12 *******/
//========================
// int main() {
//   // allocate an int on the heap
//   auto u_ptr = std::make_unique<int>(10);
//   if (u_ptr) {  // if u_ptr is not null
//     std::cout << "The value at " << u_ptr.get() << " is " << *u_ptr << '\n';
//   }
// }

// int main() {
//   // allocate an int on the heap
//   auto u_ptr = std::make_unique<int>(10);
//   int* ptr{u_ptr.get()};  // get the stored pointer and store it in a
//   variable if (ptr) {              // if ptr is not null
//     std::cout << "The value at " << ptr << " is " << *ptr << '\n';
//   }
// }

//========================
/******* slide 14 *******/
//========================
// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   auto raw_ptr = u_ptr.release();
//   std::cout << *raw_ptr << '\n';
//   assert(u_ptr.get() == nullptr);
//   assert(u_ptr == nullptr);
//   delete raw_ptr;  // don't forget to call delete
// }

//========================
/******* slide 15 *******/
//========================
// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   u_ptr.release();
// }

//========================
/******* slide 16 *******/
//========================
// void manage_raw_ptr(int* ptr);  // declaration

// void manage_raw_ptr(int* ptr) {
//   if (ptr) {
//     std::cout << *ptr << '\n';
//     delete ptr;  // Clean up the memory when done
//   }
// }

// int main() {
//   std::unique_ptr<int> u_ptr = std::make_unique<int>(42);
//   // Transfer ownership to a raw pointer using release()
//   int* raw_ptr = u_ptr.release();

//   // At this point, u_ptr no longer owns the resource, raw_ptr does
//   if (!u_ptr) std::cout << "u_ptr is now null after release().\n";

//   // Pass the raw pointer to a function for further management
//   manage_raw_ptr(raw_ptr);
// }

//========================
/******* slide 17 *******/
//========================
// int main() {
//   auto u1_ptr = std::make_unique<int>(10);
//   int* raw_ptr{u1_ptr.release()};
//   std::unique_ptr<int> u2_ptr(raw_ptr);  // u2_ptr is now managing the
//   resource
// }

//========================
/******* slide 19 *******/
//========================
// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   u_ptr.reset();
//   assert(u_ptr.get() == nullptr);
// }

//========================
/******* slide 20 *******/
//========================
// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   u_ptr.reset(new int(20));
// }

//========================
/******* slide 22 *******/
//========================
// int main() {
//   auto u_ptr1 = std::make_unique<int>(10);
//   auto u_ptr2 = std::make_unique<int>(20);
//   u_ptr1.swap(u_ptr2);
// }

//========================
/******* slide 24 *******/
//========================
// void display(std::unique_ptr<int> ptr);

// void display(std::unique_ptr<int> ptr) {
//   // implicit: std::unique_ptr<int> ptr{u_ptr};
//   std::cout << *ptr << '\n';
// }

// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   display(u_ptr);
// }

//========================
/******* slide 25 *******/
//========================
// int main() {
//   // Allocate memory for an int on the heap
//   auto u_ptr1 = std::make_unique<int>(100);
//   std::cout << "u_ptr1: " << u_ptr1.get() << '\n';  // @1

//   // Transfer ownership
//   auto u_ptr2{std::move(u_ptr1)};                   // Move semantics
//   std::cout << "u_ptr2: " << u_ptr2.get() << '\n';  // @1
//   assert(u_ptr1 == nullptr);                        // u_ptr1 is null

//   // Reuse u_ptr1 to allocate a new resource if needed
//   u_ptr1.reset(new int{200});
//   std::cout << u_ptr1.get() << '\n';  // @2
// }

//========================
/******* slide 27 *******/
//========================
// void display(std::unique_ptr<int> ptr) {
//   // implicit: std::unique_ptr<int> ptr{u_ptr};
//   std::cout << *ptr << '\n';
// }

// int main() {
//   auto u_ptr = std::make_unique<int>(10);
//   display(std::move(u_ptr));
// }

//========================
/******* slide 29 *******/
//========================
// void reseat(std::unique_ptr<int>& ptr) { ptr.reset(new int(20)); }

// int main() {
//   std::unique_ptr<int> u_ptr = std::make_unique<int>(10);
//   std::cout << "*u_ptr: " << *u_ptr << '\n';      // 10
//   std::cout << "u_ptr: " << u_ptr.get() << '\n';  // @1
//   reseat(u_ptr);
//   std::cout << "*u_ptr1: " << *u_ptr << '\n';      // 20
//   std::cout << "u_ptr1: " << u_ptr.get() << '\n';  // @2
// }

//========================
/******* slide 30 *******/
//========================
// std::unique_ptr<int> return_by_value() {
//   auto ptr = std::make_unique<int>(10);
//   std::cout << *ptr << '\n';  // 10
//   std::cout << &ptr << '\n';  // @1
//   return ptr;
// }

// int main() {
//   auto u_ptr{return_by_value()};
//   std::cout << *u_ptr << '\n';  // 10
//   std::cout << &u_ptr << '\n';  // @1
// }

//========================
/******* slide 34 *******/
//========================
// int main() {
//   auto s_ptr1 = std::make_shared<int>(10);
//   auto s_ptr2{s_ptr1};
//   auto s_ptr3 = s_ptr2;
// }

//========================
/******* slide 38 *******/
//========================
// int main() {
//   auto s_ptr1 = std::make_shared<int>(10);
//   auto s_ptr2{s_ptr1};
//   s_ptr1.reset();
//   s_ptr2.reset();
// }

//========================
/******* slide 40 *******/
//========================
// int main() {
//   auto s_ptr1 = std::make_shared<int>(10);
//   std::cout << s_ptr1.use_count() << '\n';  // 1

//   auto s_ptr2{s_ptr1};
//   std::cout << s_ptr1.use_count() << ' ';   // 2
//   std::cout << s_ptr2.use_count() << '\n';  // 2

//   auto s_ptr3 = s_ptr2;
//   std::cout << s_ptr1.use_count() << ' ';   // 3
//   std::cout << s_ptr2.use_count() << ' ';   // 3
//   std::cout << s_ptr3.use_count() << '\n';  // 3

//   s_ptr1.reset();                           // s_ptr1 is now null
//   std::cout << s_ptr1.use_count() << ' ';   // 0
//   std::cout << s_ptr2.use_count() << ' ';   // 2
//   std::cout << s_ptr3.use_count() << '\n';  // 2

//   s_ptr1.swap(s_ptr2);  // s_ptr1 points to 10 and s_ptr2 is null
//   std::cout << s_ptr1.use_count() << ' ';   // 2
//   std::cout << s_ptr2.use_count() << ' ';   // 0
//   std::cout << s_ptr3.use_count() << '\n';  // 2

//   s_ptr2.reset(new int(20));  // s_ptr2 is pointing to a new resource (20)
//   std::cout << s_ptr1.use_count() << ' ';   // 2
//   std::cout << s_ptr2.use_count() << ' ';   // 1
//   std::cout << s_ptr3.use_count() << '\n';  // 2
// }

//========================
/******* slide 41 *******/
//========================
// void sink(std::shared_ptr<int> ptr) {
//   std::cout << ptr.use_count() << '\n';  // 2
// }

// int main() {
//   auto s_ptr = std::make_shared<int>(10);
//   std::cout << s_ptr.use_count() << '\n';  // 1
//   sink(s_ptr);
//   std::cout << s_ptr.use_count() << '\n';  // 1
// }

//========================
/******* slide 42 *******/
//========================
// void reseat(std::shared_ptr<int>& ptr) {
//   std::cout << ptr.use_count() << '\n';  // 1
// }

// int main() {
//   auto s_ptr = std::make_shared<int>(10);
//   std::cout << s_ptr.use_count() << '\n';  // 1
//   reseat(s_ptr);
//   std::cout << s_ptr.use_count() << '\n';  // 1
// }

//========================
/******* slide 43 *******/
//========================

// std::shared_ptr<int> return_shared_ptr() {
//   auto ptr = std::make_shared<int>(10);
//   std::cout << ptr.get() << '\n';  // @1
//   return ptr;
// }

// int main() {
//   auto s_ptr{return_shared_ptr()};
//   std::cout << s_ptr.get() << '\n';  // @1
// }

//========================
/******* slide 45 *******/
//========================

// int main() {
//   auto s_ptr = std::make_shared<int>(10);
//   // create a weak_ptr from a shared_ptr
//   std::weak_ptr<int> w_ptr1{s_ptr};
//   // create a weak_ptr from another weak_ptr
//   std::weak_ptr<int> w_ptr2{w_ptr1};
// }

//========================
/******* slide 46 *******/
//========================
// int main() {
//   auto s_ptr = std::make_shared<int>(10);
//   // create a weak_ptr from a shared_ptr
//   std::weak_ptr<int> w_ptr{s_ptr};

//   std::cout << *w_ptr << '\n';       // error
//   std::cout << w_ptr.get() << '\n';  // error
// }

//========================
/******* slide 48 *******/
//========================
// int main() {
//   // declare an empty weak pointer
//   std::weak_ptr<int> w_ptr;
//   {
//     auto s_ptr1 = std::make_shared<int>(10);
//     w_ptr = s_ptr1;  // w_ptr now points to the resource
//     if (auto s_ptr2 = w_ptr.lock(); s_ptr2)
//       std::cout << "resource is " << *s_ptr2 << "\n";
//     else
//       std::cout << "unable to get resource\n";
//   }  // s_ptr1 goes out of scope and the resource is deleted

//   if (auto s_ptr2 = w_ptr.lock(); s_ptr2)
//     std::cout << "resource is =" << *s_ptr2 << "\n";
//   else
//     std::cout << "unable to get resource\n";
// }

//========================
/******* slide 49 *******/
//========================
// int main() {
//   // declare an empty weak pointer
//   std::weak_ptr<int> w_ptr;
//   {
//     auto s_ptr1 = std::make_shared<int>(10);
//     w_ptr = s_ptr1;  // w_ptr now points to the resource
//     if (!w_ptr.expired())
//       std::cout << "resource is valid\n";
//     else
//       std::cout << "resource is expired\n";
//   }  // s_ptr1 goes out of scope and the resource is deleted

//   if (!w_ptr.expired())
//     std::cout << "resource is valid\n";
//   else
//     std::cout << "resource is expired\n";
// }

//========================
/******* slide 50 *******/
//========================
// int main() {
//   auto s_ptr = std::make_shared<int>(10);
//   std::weak_ptr<int> w_ptr = s_ptr;
//   s_ptr.reset();
//   w_ptr.reset();
// }