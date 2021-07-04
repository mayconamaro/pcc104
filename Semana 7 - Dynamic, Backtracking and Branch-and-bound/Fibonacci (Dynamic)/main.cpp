#include <iostream>
#include <cassert>
#include "fibonacci.hpp"

int main(){

    int n = 0;

    std::cout << "Digite a posição que deseja" << std::endl;
    std::cin >> n;

    assert(n >= 0);

    std::cout << fibonacci(n) << std::endl;
}