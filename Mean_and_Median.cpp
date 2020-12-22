//
//  Mean_and_Median.cpp
//  
//


#include <iostream>
#include <vector>
#include <fstream>

int main() {
    
    std::ifstream inFile;
    inFile.open("temperatures.txt");
    
    std::vector<double> temp;
    double sum{0.0};
    double x;
    
    while (inFile >> x) {
        
        temp.push_back(x);
        sum += x;
        
    }
    
    inFile.close();
    
    std::size_t N = temp.size();
    
    double mean = sum / N;
    
    std::sort(temp.begin(), temp.end());
    double median = (temp[int((N - 1)/2)] + temp[int(N/2)]) / 2;
    
    std::cout << "Mean: " << mean << std::endl << "Median: " << median << std::endl;
    
    return 0;
}
