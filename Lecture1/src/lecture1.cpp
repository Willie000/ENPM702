#include <iostream>
#include <thread>
#include <chrono>

int main (){
    std::cout << "hello word\n";
    std::cout << "hello word" << std::endl ; //avoid using this
    // std::end' will flush the output buffer
    // for debuging and tuning, after should change to \n

    //examples
    // 1. whole sentences appear after 2s
    std::cout << "This is some output";
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << " that may not appear immediately\n";
   
    // 2. First part appear immidently, second part appear after 2s
    std::cout << "This is some output" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << " that may not appear immediately\n";
    
    // 3. same as 2. using std::flush 
    std::cout << "This is some output" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << " that may not appear immediately";


    return 0;
}