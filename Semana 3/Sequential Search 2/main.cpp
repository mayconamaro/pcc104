#include <iostream>
#include <vector>
#include "sequential.hpp"

int main(){

    int n, k, x = 0;

    std::cin >> n;
    std::cin >> k;

    std::vector<int> v;

    for(int i = 0; i < n; i++){
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << search(v, k) << std::endl;
}