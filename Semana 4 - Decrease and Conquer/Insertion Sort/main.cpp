#include <iostream>
#include <vector>
#include <cassert>
#include "insertion_sort.hpp"

int main(){

    unsigned int n = 0;
    int j = 0;

    std::cin >> n;

    std::vector<int> v;

    for(unsigned int i = 0; i < n; i++){
        
        std::cin >> j;
        v.push_back(j); 
    }

    assert (v.size() == n);

    sort(v);

    for(auto i : v)
        std::cout << i << std::endl;
}