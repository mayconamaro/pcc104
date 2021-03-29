#include <vector>
#include "traveling_salesman.hpp"

route computeShortestRoute(adjacency_matrix){

    std::vector<route> routes;
    //gerar as permutações
    //calcular a distancia de todas
    //retornar a menor    
}

double calculateDistance(route r, adjacency_matrix g){

    double d = 0;
    for(unsigned int i = 0; i < route.size() - 1; i++)
        d += g[r[i]][r[i+1]];
    d += g[r.back()][r.front()];
    return d; 
}