#include <iostream>
#include "search.hpp"
#include <vector>

int main(){

    int n = 16;
    int k = 8;
    std::vector<int> v;

    for (int i = 1; i <= n; i++)
        v.push_back(i);

    std::cout << search(v, k) << std::endl;
}