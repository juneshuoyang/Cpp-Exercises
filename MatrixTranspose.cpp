//
//  MatrixTranspose.cpp
//  
//


#include <iostream>
#include <iomanip>
#include <array>
#include <utility>
#include <sstream>

template <typename std::size_t N>
std::array<double, N> Transpose(std::array<double, N>& A, std::size_t r, std::size_t l) {
    
    if (r == l) {
        for (std::size_t i = 0; i < l; ++i) {
            for (std::size_t j = i + 1; j < r; ++j) {
                std::swap(A[i * r + j], A[j * l + i]);
            }
        }
    }
    
    else {
        std::array<double, N> R;
        for (std::size_t i = 0; i < l; ++i) {
            for (std::size_t j = 0; j < r; ++j) {
                R[i * r + j] = A[j * l + i];
            }
        }
        A = R;
    }
    
    return A;
}

int main () {
    
    const std::size_t NoR = 5;
    const std::size_t NoC = 5;
    
    const std::size_t N = NoR * NoC;
   
    std::cout << "Transpose of the " << NoR << " by " << NoC << " matrix { ";
    std::array<double, N> A;
    for (std::size_t i = 0; i < N; ++i) {
        A[i] = i + 1;
        std::cout << A[i] << " ";
    }
    std::cout << "} is " << std::endl << "{ ";

    std::array<double, N> AT = Transpose(A, NoR, NoC);
    for (std::size_t i = 0; i < N; ++i) {
        std::cout << AT[i] << " ";
    }
    std::cout << "}" << std::endl;
    
    return 0;
}
