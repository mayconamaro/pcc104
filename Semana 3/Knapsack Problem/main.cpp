#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include "knapsack.hpp"

int main(){

    unsigned int n = 0;
    double capacity = 0;

    std::cin >> n >> capacity;

    double v, w = 0;
    std::vector<item> itens;

    for(unsigned int i = 0; i < n; i++){
        std::cin >> v >> w;
        std::pair<double, double> item(v, w);
        itens.push_back(item);
    }
    
    std::set<int> resp = mostValuableSubset(itens, capacity);

    for(auto i : resp)
        std::cout << i << std::endl;
}