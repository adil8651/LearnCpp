#include <iostream>

int main(){
    bool red_line {false};
    bool green_line {true};

    if (red_line == true){
        std::cout << "Stop!" << std::endl;
    }else {
        std::cout << "Go though!" << std::endl;
    }

    if (green_line == true){
        std::cout << "the light is green!" << std::endl;
    }else {
        std::cout << "the light is not green!" << std::endl;
    }

    //size of
    std::cout << "Size of red line : " << sizeof(bool) << std::endl;

    std::cout <<std::boolalpha;
    std::cout << "Size of red line : " << sizeof(green_line)<< " "<< green_line << std::endl;
    std::cout << "Size of green line : "<<  sizeof(red_line) << " "<< red_line <<std::endl;

    return 0;
}