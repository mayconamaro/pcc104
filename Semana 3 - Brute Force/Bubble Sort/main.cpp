#include <iostream>
#include <cassert>
#include "bubble.hpp"

int main(){

    unsigned int n = 0;
    int x = 0;
    std::vector<int> v;

    std::cin >> n;
    
    for (unsigned int i = 0; i < n; i++){
        std::cin >> x;
        v.push_back(x);
    }

    //todos os números devem ter sido lidos
    assert(v.size() == n);
    
    sort(v);

    for(auto y : v)
        std::cout << y << " ";
    std::cout << std::endl;
}