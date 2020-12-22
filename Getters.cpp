//
//  Getters.cpp
//  
//


#include <iostream>

int get_int();
double get_double();

int main() {
    
    int z;
    z = get_int();
    std::cout << z << std::endl;
    
    double zz;
    zz = get_double();
    std::cout << zz << std::endl;
    
    return 0;
    
}

int get_int() {
    
    int i;
    while(!(std::cin >> i)) {
        std::cin.clear();
        std::cin.ignore();
    }
    return i;
    
}

double get_double() {
    
    double d;
    while(!(std::cin >> d)) {
        std::cin.clear();
        std::cin.ignore();
    }
    return d;
    
}
