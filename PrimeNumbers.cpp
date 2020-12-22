//
//  PrimeNumbers.cpp
//  
//


#include <iostream>
#include <vector>

bool remainder(std::vector<int>& v, int N) {
    
    bool remainder = true;
    
    for (int& d : v) {
        if (N % d == 0) {
            remainder = false;
            break;
        }
    }
    
    return remainder;

}

int main() {
    
    std::vector<int> primes{2};
    
    bool PoN; // Prime or not?

    for (int i = 3; i < 100; ++i) {

        PoN = remainder(primes, i);
        if (PoN) {
            primes.push_back(i);
        }
        
    }
    
    for (int i = 0; i < primes.size(); ++i) {
        std::cout << primes[i] << std::endl;
    }
    
    return 0;
    
}

