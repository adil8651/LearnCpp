#include <iostream>

int main(){
    int var1 {123}; // ecalare and initialize
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 53; // Assign
    std::cout << "var1 : " << var1 << std::endl;
    
    double var2 {44.55}; // ecalare and initialize
    std::cout << "var2 : " << var2 << std::endl;

    var2 = 99.99; // Assign
    std::cout << "var2 : " << var2 << std::endl;

    bool state {false};
    std::cout <<  "state : " << state << std::endl;
    state = true;
    std::cout <<  "state : " << state << std::endl;

    //auto type deduction
    //careful about auto assignments
    auto var3 {333u}; // Declation and initialize with type deduction
    std::cout <<  "var3 : " << var3 << std::endl;
    var3 = -22; // assign negative number. DANGER!
    std::cout <<  "var3 : " << var3 << std::endl;

    return 0;
}