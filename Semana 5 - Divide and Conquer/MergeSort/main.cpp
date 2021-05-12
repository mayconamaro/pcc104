#include <iostream>
#include <vector>
#include <cassert>
#include "sort.hpp"

int main(){

    unsigned int n;
    std::cin >> n;

    int j = 0;
    std::vector<int> numbers;

    for (unsigned int i = 0; i < n; ++i){
        std::cin >> j;
        numbers.push_back(j);
    }

    assert (numbers.size() == n);

    sort(numbers);

    for(auto i : numbers){
        std::cout << i << std::endl;
    }
}