//
//  SieveofEratosthenes.cpp
//  
//


#include <iostream>
#include <cmath>

int main() {
 
    std::cout << "Please input N." << std::endl;
    int N;
    std::cin >> N;
    
    bool *arr = new bool[N + 1]{};
    
    for (int i = 2; i <= std::sqrt(N + 1); ++i) {
        if (arr[i] == false) {
            for (int j = i * i; j <= (N + 1); j = j + i) {
                arr[j] = true;
            }
        }
    }
    
    for (int i = 2; i <= (N + 1); ++i) {
        if (arr[i] == false) {
            std::cout << i << std::endl;
        }
    }
    
    delete[] arr;
    
    return 0;
    
}
