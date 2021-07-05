#include <vector>
#include "coins.hpp"

int max_coins(std::vector<std::vector<int>> &C){

   return max_coins_at(C, ((int) C.size()) - 1, ((int) C.at(0).size()) - 1);
}

int max_coins_at(std::vector<std::vector<int>> &C, int i, int j){

    if(i == 0)
        return 0;

    if(j == 0)
        return 0;

    return std::max(max_coins_at(C, i - 1, j), max_coins_at(C, i, j - 1)) + C.at(i).at(j);
}