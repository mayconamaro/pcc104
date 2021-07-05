#include <vector>
#include "coins.hpp"

int max_coins(std::vector<std::vector<int>> &C){

    int m = (int) C.at(0).size();
    int n = (int) C.size();

    std::vector<int> columns(m, 0);
    std::vector<std::vector<int>> F(n, columns);

    F.at(0).at(0) = C.at(0).at(0);

    for(int j = 1; j < m; j++){

        F.at(1).at(j) = F.at(0).at(j - 1) + C.at(0).at(j);
    }

    for(int i = 1; i < n; i++){

        F.at(i).at(0) = F.at(i - 1).at(0) + C.at(i).at(0);
        
        for(int j = 1; j < m; j++){

            F.at(i).at(j) = std::max(F.at(i - 1).at(j), F.at(i).at(j - 1)) + C.at(i).at(j);
        }
    }

    return F.at(n - 1).at(m - 1);
}