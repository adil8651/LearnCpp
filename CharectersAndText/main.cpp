#include <iostream>

int main(){
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256  diffrent values (0 ~ 255)

    char value {65};
    
    //size of 
    std::cout << sizeof(char) << std::endl;
    std::cout << value << std::endl;

    return 0;
}