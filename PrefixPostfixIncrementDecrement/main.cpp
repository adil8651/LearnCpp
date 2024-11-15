#include <iostream>

int main(){
    int value {5};
    
    //Icrement by one
    value = value +1;
    std::cout << "The value is : " << value << std::endl;
    
    value =5; // Reset the value to 5

    //Decrement by one 

    value = value -1;
    std::cout << "The value is : " << value << std::endl;

    value = 5;
    std::cout << "=======postfix increment and decrement======="<< std::endl;

    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl;
    std::cout << "The value is : " << value << std::endl;

    value = 5;
    std::cout << "The value is (decrementing) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;

    std::cout << "=======prefix increment and decrement======="<< std::endl;

    value = 5;
    std::cout << "The value is (prefix++) : " << ++value << std::endl;//6
    std::cout << "The value is (prefix++ in place) : " << value << std::endl;//6

    value = 5;
    std::cout << "The value is (prefix--) : " << --value << std::endl;//4
    std::cout << "The value is (prefix-- in place) : " << value << std::endl;//4


    return 0;
}