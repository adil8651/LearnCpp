#include <iostream>
#include <iomanip>

int main(){
    float number1 {1.12345678901234567890f}; //precision = 7
    double number2 {1.12345678901234567890}; //precision = 16
    long double number3 {1.12345678901234567890L}; //precision = 16

    std::cout << "sizeof float : " << sizeof(number1) << std::endl;
    std::cout << "sizeof double : " << sizeof(number2) << std::endl;
    std::cout << "sizeof long double : " << sizeof(number3) << std::endl;

    //precision
    std::cout << std::setprecision(20); // control the precision form std::cout
    std::cout << "number 1 : " << number1 << std::endl;
    std::cout << "number 2 : " << number2 << std::endl;
    std::cout << "number 3 : " << number3 << std::endl;

    //float problem : the precision is usually too limited
    // for a lot of application

    float number4 {192400023.0f};           //error : narrouwing conversion
    double number5 {192400023.0};
    long double number6 = 1.12345678901234567890L;
    double number7 {1.92400023e8};
    double number8 {1.924e8};
    double number9 {0.00000000003498};
    double number10 {3.498e-11};

    std::cout << "number 4 : " << number4 << std::endl;
    std::cout << "number 5 : " << number5 << std::endl;
    std::cout << "number 6 : " << number6 << std::endl;
    std::cout << "-------------------------------------"<< std::endl;
    std::cout << "number 7 : " << number7 << std::endl;
    std::cout << "number 8 : " << number8 << std::endl;
    std::cout << "number 9 : " << number9 << std::endl;
    std::cout << "number 10 : " << number10 << std::endl;

    //infinity and nan
    std::cout << std::endl;
    std::cout << "infinity and NaN  " << std::endl;

    double number11 { 5.6 };
    double number12 {}; //initialization to 0
    double number13 {}; //initialization to 0

    //infinity
    double result {number11 / number12};

    std::cout << "number 11 : " << number11 << std::endl;
    std::cout << "number 12 : " << number12 << std::endl;
    std::cout << "number 13 : " << number13 << std::endl;

    std::cout << number11 << "/" << number12 << " yields " << result << std::endl;
    std::cout << result << "+" << number11 << " yields " << result + number11 << std::endl;

    //NaN
    result = number12 / number13;
    std::cout<< "NaN : " << result << std::endl;
    return 0;
}