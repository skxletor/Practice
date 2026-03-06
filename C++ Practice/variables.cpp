#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main(){

    int var =8;
    int& ref = var;
    LOG(ref);

    std::cin.get();

    
}