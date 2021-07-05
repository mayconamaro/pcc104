#include <iostream>
#include <cassert>
#include <vector>
#include "coins.hpp"

int main(){

    int n = 0;
    int m = 0;

    std::cin >> n >> m;

    assert (n >=0 && m >=0);

    std::vector<int> columns(m, 0);
    std::vector<std::vector<int>> matrix(n, columns);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> matrix.at(i).at(j);

    std::cout << max_coins(matrix) << std::endl;
    
}