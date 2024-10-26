#include <iostream>

int addNumber(int first_pram, int second_pram){
    int result = first_pram + second_pram;
    return result;
}

int multiply(int x, int y){
    return x * y;
}

int main(){
    int firstNumber = 12;
    int secondNumber = 6;
    int thirdNumber {7};
    int fourthNumber {3};
    
    int sum = firstNumber + secondNumber;
    int add = thirdNumber + fourthNumber;
    std::cout <<"the sum of first and second :" << sum << std::endl;
    std::cout << "the addition of third and forth :"<<add << std::endl;

    sum = addNumber(25, 68);
    std::cout << "the addition by function :"<< sum << std::endl;
    std::cout << "the addition by function :"<< addNumber(45,89) << std::endl;
    std::cout << "the multiplication by function :"<< multiply(45,89) << std::endl;
}