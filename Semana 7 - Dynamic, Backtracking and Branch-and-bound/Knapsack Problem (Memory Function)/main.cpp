#include <iostream>
#include <cassert>
#include <vector>
#include "knapsack.hpp"

int main(){

    int n = 0;
    int W = 0;

    std::cin >> n >> W;

    assert(n >= 0 && W >= 0);

    std::vector<int> weights(n, 0);
    std::vector<int> values(n, 0);

    for(int i = 0; i < n; i++){
        std::cin >> weights.at(i) >> values.at(i);
    }

    std::cout << knapsack(weights, values, W) << std::endl;
}