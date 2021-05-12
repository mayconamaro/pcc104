#include <iostream>
#include <set>
#include "subsets.hpp"

int main(){

    unsigned int n = 0;

    std::cin >> n;
    std::set<int> number_set;
    int j;

    for (unsigned int i = 0; i < n; i++){
        std::cin >> j;
        number_set.insert(j);
    }

    auto x = all_subsets(number_set);
    
    for(auto i : x){
        std::cout << "[ ";
        for(auto j : i)
            std::cout << j << " ";
        std::cout << "]" << std::endl;
    }
}