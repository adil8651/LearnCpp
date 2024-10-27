#include <iostream>

int main(){
    /*
    int value1 {10};
    int value2 {-300};

    std::cout << "value1 " << value1 << std::endl;
    std::cout << "value2 " << value2 << std::endl;
    std::cout << "value1 " << sizeof(value1) << std::endl;
    std::cout << "value2 " << sizeof(value2) << std::endl;
    */

    unsigned int value3 {4};
    // unsigned int value4 {-4}; compiler error
    
    //short and long
    short short_var {-32768}; //2 bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};
    
    int int_var {55}; // 4 bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long long_var {88}; //4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888}; //8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    /*
    std::cout << "short_var " << short_var<< " size : " << sizeof (short)<< std::endl;
    std::cout << "short_int "<< short_int<< " size : " << sizeof (short int) << std::endl;
    std::cout << "signed_short " << signed_short<< " size : "<< sizeof (signed short) << std::endl;
    std::cout << "signed_short_int " << signed_short_int<< " size : "<< sizeof (signed short int) << std::endl;
    std::cout << "unsigned_short_int " << unsigned_short_int<< " size : " << sizeof (unsigned short int) << std::endl;
    */

   /*
    std::cout << "int_var " << int_var<< " size : " << sizeof (int)<< std::endl;
    std::cout << "signed_var " << signed_var<< " size : "<< sizeof (signed) << std::endl;
    std::cout << "signed_int " << signed_int<< " size : "<< sizeof (signed int) << std::endl;
    std::cout << "unsigned_int " << unsigned_int<< " size : " << sizeof (unsigned int) << std::endl;
    */

    /*
    std::cout << "long_var " << long_var<< " size : " << sizeof (long)<< std::endl;
    std::cout << "long_int "<< long_int<< " size : " << sizeof (long int) << std::endl;
    std::cout << "signed_long " << signed_long<< " size : "<< sizeof (signed long) << std::endl;
    std::cout << "signed_long_int " << signed_long_int<< " size : "<< sizeof (signed long int) << std::endl;
    std::cout << "unsigned_long_int " << unsigned_long_int<< " size : " << sizeof (unsigned long int) << std::endl;
    */

    std::cout << "long_long " << long_long<< " size : " << sizeof (long long)<< std::endl;
    std::cout << "long_long_int "<< long_long_int<< " size : " << sizeof (long long int) << std::endl;
    std::cout << "signed_long_long " << signed_long_long<< " size : "<< sizeof (signed long long) << std::endl;
    std::cout << "signed_long_long_int " << signed_long_long_int<< " size : "<< sizeof (signed long long int) << std::endl;
    std::cout << "unsigned_long_long_int " << unsigned_long_long_int<< " size : " << sizeof (unsigned long long int) << std::endl;

    return 0;
}