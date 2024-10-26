#include <iostream>

int main(){
    int n1 = 15; //decimal
    int n2 = 017; //octal
    int n3 = 0x0f; //hexadeciimal
    int n4 = 0b00001111; //binary

    std::cout << "n1 is : " << n1 << ::std::endl;
    std::cout << "n2 is : " << n2 << ::std::endl;
    std::cout << "n3 is : " << n3 << ::std::endl;
    std::cout << "n4 is : " << n4 << ::std::endl;
}