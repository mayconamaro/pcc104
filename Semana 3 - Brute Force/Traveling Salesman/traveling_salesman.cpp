#include <vector>
#include <algorithm>
#include <limits>
#include "traveling_salesman.hpp"

route computeShortestRoute(adjacency_matrix g){

    std::vector<route> routes;

    //primeira rota
    route r;
    for(unsigned int i = 0; i < g.size(); i++)
        r.push_back(i);

    do{
        routes.push_back(r);
    } while (std::next_permutation(r.begin(), r.end()));
    
    route shortest = routes[0];
    double d_shortest = calculateDistance(shortest, g);

    for(auto it = routes.begin(); it != routes.end(); it++){
        double d_current = calculateDistance((*it), g);
        if( d_current < d_shortest){
            shortest = (*it);
            d_shortest = d_current;
        }
    }

    return shortest;
}

double calculateDistance(route r, adjacency_matrix g){

    double d = 0;
    for(unsigned int i = 0; i < r.size() - 1; i++)
        d += g[r[i]][r[i+1]];
    d += g[r.back()][r.front()];
    return d; 
}