//
//  Units_of_measure.cpp
//  
//


#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter a numer with its proper unit.\n";
    double num;
    std::string unit;
    
    std::cin >> num >> unit;
    
    if (unit == "inch") {
        num = num * 0.0254;
        unit = "m";
    }
    else if (unit == "pound"){
        num = num * 0.453592;
        unit = "kg";
    }
    else {
        std::cout << "Please enter a valid unit.\n";
    }
    
    std::cout << num << " " << unit << std::endl;
    
    return 0;
}

