#include <iostream>

//-- slide 11
int main()
{
    // Binary literals
    int positive_255{0b11111111};                                   // 255 in binary
    int16_t negative_255{static_cast<int16_t>(0b1111111100000001)}; // -255 in binary (16-bit two's complement)

    std::cout << "Positive 255 in decimal: " << positive_255 << '\n';
    std::cout << "Negative 255 in decimal: " << negative_255 << '\n';
}

//-- slide 12
// int main()
// {
//     int x{0b1010}; // 10 in decimal
//     int y{0b1100}; // 12 in decimal

//     int and_result{x & y}; // Bitwise AND
//     int or_result{x | y};  // Bitwise OR
//     int xor_result{x ^ y}; // Bitwise XOR

//     std::cout << "AND result: " << and_result << '\n'; //1000->8
//     std::cout << "OR result: " << or_result << '\n'; // 1110->14
//     std::cout << "XOR result: " << xor_result << '\n'; //0110->6
// }

//-- slide 16
// int main()
// {
//     int red{0xFF0000};   // Red color
//     int green{0x00FF00}; // Green color
//     int blue{0x0000FF};  // Blue color

//     std::cout << "Red color: 0x" << std::hex << red << '\n';
//     std::cout << "Green color: 0x" << std::hex << green << '\n';
//     std::cout << "Blue color: 0x" << std::hex << blue << '\n';
// }
