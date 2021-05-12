#include <iostream>
#include <vector>
#include <cassert>
#include "trotter.hpp"

int main(){

    unsigned int n = 0;
    std::cin >> n; assert(n > 0);

    auto resp = generate_permutations(n);

    for (auto i : resp){
        std::cout << "[ ";
        for (auto j : i){
            std::cout << j << " ";
        }
        std::cout << "]" << std::endl;
    }
}