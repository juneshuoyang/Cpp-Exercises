//
//  Avoid_repeated_words.cpp
//  
//  ./.a.out < order_file


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    
    std::string line;
    std::vector<std::string> vecstr;
    
    while(std::getline(std::cin, line)) {
        
        vecstr.push_back(line);
        
    }
    
    std::sort(vecstr.begin(), vecstr.end());
    vecstr.erase(std::unique(vecstr.begin(), vecstr.end()), vecstr.end());
    
    for (std::size_t i = 0; i < vecstr.size(); ++i) {
        std::cout << vecstr[i] << std::endl;
    }
    
    return 0;
}
