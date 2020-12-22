//
//  ReverseOrder.cpp
//  
//


#include <iostream>

template <typename T>
T collect(T *a, const std::size_t n) {
    for (int i = 0; i < n; ++i) {
        T a_new;
        std::cin >> a_new;
        a[i] = a_new;
    }
    return *a;
}

template <typename R>
void print(R a[], const std::size_t n) {
    for (int i = n; i > 0; --i) {
        std::cout << a[i - 1] << " ";
    }
    std::cout << std::endl;
}


int main() {
    
    std::cout << "Please input the length of the array." << std::endl;
    std::size_t n;
    std::cin >> n;
    
    double *arr = new double[n];
    
    std::cout << "Please initialize its elements." << std::endl;
    collect(arr, n);
    
    std::cout << "printing the elements in the reverse order..." << std::endl;
    print(arr, n);
    
    delete[] arr;
    
    return 0;
    
}
