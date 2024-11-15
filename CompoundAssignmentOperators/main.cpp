#include <iostream>

int main(){
    int value {45};

    std::cout << "the value is : " << value << std::endl;

    std::cout << std::endl;
    value += 5; //equvalent to value = value +5
    std::cout << "the value is : " << value << std::endl; //50
    value -= 5; //equvalent to value = value -5
    std::cout << "the value is : " << value << std::endl;
    value *= 2; //equvalent to value = value *5
    std::cout << "the value is : " << value << std::endl;
    value /= 3; //equvalent to value = value /5
    std::cout << "the value is : " << value << std::endl;
    value %= 11; //equvalent to value = value % 5
    std::cout << "the value is : " << value << std::endl;
    return 0;
}