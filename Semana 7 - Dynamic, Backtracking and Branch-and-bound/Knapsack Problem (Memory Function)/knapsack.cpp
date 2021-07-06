#include <vector>
#include "knapsack.hpp"

int knapsack(std::vector<int> &w, std::vector<int> &v, int W){

    std::vector<int> c(W + 1, -1);
    c.at(0) = 0;
    std::vector<int> zeros(W + 1, 0);
    std::vector<std::vector<int>> F(((int) v.size()) + 1, c);
    F.at(0) = zeros;

    return aux_knapsack(w, v, W, (int) v.size(), F);
}

int aux_knapsack(std::vector<int> &w, std::vector<int> &v, int j, int i, std::vector<std::vector<int>> &F){
    
    int value = -1;

    if(F.at(i).at(j) < 0){

        if(j < w.at(i - 1)){

            value = aux_knapsack(w, v, j, i - 1, F);
        }else{

            value = std::max(aux_knapsack(w, v, j, i - 1, F),
                             v.at(i - 1) + aux_knapsack(w, v, j - w.at(i - 1), i - 1, F));
        }

        F.at(i).at(j) = value;
    }

    return F.at(i).at(j);
}