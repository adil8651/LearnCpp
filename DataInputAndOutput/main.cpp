#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;
    std::cout << "What is your name" << std::endl;
    // Data with spaces
    std::getline(std::cin, name);
    std::cout << "What is your age " << std::endl;
    std::cin >> age;
    std::cout << "hello "<<name << " !you are " << age << " year old"<< std::endl;
    // std::cout << "Hello World!" << std::endl;
    // std::cerr << "err!" << std::endl;
    // std::clog << "there is a problem!" << std::endl;
}