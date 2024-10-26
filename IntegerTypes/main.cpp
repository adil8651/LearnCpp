#include <iostream>

int main(){
    /*
    //variable may contain randon garbege
    int elephant_count;
    int lion_count{}; //initialize with zero
    int dog_count{10}; //initialize with 10
    int cat_count{15}; //initialize with 15
    //int d_m {doesn't_exist};
    //int narrow_conversion {2.9}; compiler error
    
    //functional initialization
    int apple_count (5);
    int orange_count (10);
    int fruit_count ( apple_count + orange_count);
    int narrow_conversion_functional (2.9);

    // std::cout << elephant_count <<std::endl;
    // std::cout << lion_count <<std::endl;
    // std::cout << dog_count <<std::endl;
    // std::cout << cat_count <<std::endl;
    std::cout << fruit_count <<std::endl;
    std::cout << narrow_conversion_functional <<std::endl;
    */
    int bike_count =5;
    int truck_count =10;
    int vehical_count = bike_count + truck_count;
    int narrowing_conversion_functional =2.9;

    std::cout  << "bike_count : "<< bike_count <<std::endl;
    std::cout  <<"truck_count : "<< truck_count <<std::endl;
    std::cout  << "vehical_count : "<< vehical_count <<std::endl;
    std::cout  <<"narrowing_conversion_functional : "<< narrowing_conversion_functional <<std::endl;
    

    // check size using sizeof
    std::cout  << "size of : "<< sizeof(vehical_count) <<std::endl;
    std::cout  <<"size of : "<< sizeof(narrowing_conversion_functional) <<std::endl;

}