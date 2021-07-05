#include <iostream>
#include <cassert>
#include <vector>
#include "changemake.hpp"

int main(){

    int n = 0;
    int m = 0;

    std::cin >> n >> m;

    std::vector<int> D(m, 0);

    for(int i = 0; i < m; i++)
        std::cin >> D.at(i);

    assert(n >= 0 && m >= 0);
    assert(D.size() == (size_t) m);

    std::cout << changemake(D, n) << std::endl; 
}