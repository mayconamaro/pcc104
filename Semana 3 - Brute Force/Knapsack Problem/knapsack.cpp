#include <vector>
#include <utility>
#include <set>
#include <cmath>
#include "knapsack.hpp"

std::set<int> mostValuableSubset(std::vector<item> &g, double capacity){

    std::vector<std::set<int>> allSubsets;

    generateAllSubsets(g, allSubsets);

    std::set<int> resp = allSubsets.front();
    double greatest_value = 0;

    for(auto it = allSubsets.begin(); it != allSubsets.end(); it++){

        if(isFeasible(g, capacity, *it)){
            double value_current = calculateValue(g, *it);
            if(value_current > greatest_value){
                resp = *it;
                greatest_value = value_current;
            }
        }
    }

    return resp;
}

void generateAllSubsets(std::vector<item> &g, std::vector<std::set<int>> &allSubsets){

    allSubsets.clear();

    // subconjunto vazio
    std::set<int> empty;
    allSubsets.push_back(empty);
    
    unsigned int count = pow(2, g.size());

    for(unsigned int i = 0; i < count; i++){
        std::set<int> aux;
        for(unsigned int j = 0; j < g.size(); j++){
            if((i & (1 << j)) != 0){
                aux.insert(j);
            }
        }
        allSubsets.push_back(aux);
    }
}

bool isFeasible(std::vector<item> &g, double capacity, std::set<int> solution){

    double weight = 0;

    for(auto i : solution)
        weight += g[i].second;
    
    return weight <= capacity;
}

double calculateValue(std::vector<item> &g, std::set<int> solution){
    
    double value = 0;

    for(auto i : solution)
        value += g[i].first;
    
    return value;
}