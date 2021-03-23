#include <vector>
#include <utility>
#include <iostream>
#include "closest_pair.hpp"

int main(){

    int n = 0;

    std::cin >> n;

    std::vector<std::pair<int, int>> v;

    for(int i = 0; i < n; i++){
        std::pair<int, int> aux;
        std::cin >> aux.first >> aux.second;
        v.push_back(aux);
    }

    std::cout << findShortest(v) << std::endl;
}