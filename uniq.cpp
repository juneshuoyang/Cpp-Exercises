//
//  uniq.cpp
//  simple version of 'uniq -c'
//  ./.a.out < order_file


#include <iostream>
#include <string>

int main()
{

std::string s1 = "Spaghetti";
std::string s2 = "Ravioli";

int c1 = 0;
int c2 = 0;
int c3 = 0;

    std::string line;
    while(std::getline(std::cin, line))
    {
        if (line == s1) {
            c1 = c1 + 1;
        }
        else if (line == s2) {
            c2 = c2 + 1;
        }
        else {
            c3 = c3 + 1;
        }
    }
    
    std::cout << c1 << " " << s1 << std::endl;
    std::cout << c2 << " " << s2 << std::endl;
    std::cout << c3 << " " << "others" << std::endl;
    
    return 0;
    
}
