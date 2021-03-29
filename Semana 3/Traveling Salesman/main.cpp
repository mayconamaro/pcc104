#include <iostream>
#include <vector>
#include <cassert>
#include "traveling_salesman.hpp"

int main(){

    unsigned int num_vertices = 0;
    unsigned int num_edges = 0;

    std::cin >> num_vertices; 
    std::cin >> num_edges; 

    assert(num_vertices >= 2); // não tem rota com uma cidade só

    std::vector<double> g_aux(num_vertices, 0.0);
    adjacency_matrix g(num_vertices, g_aux);
    
    unsigned int i;
    unsigned int j;

    for(unsigned int e = 0; e < num_edges; e++){
        std::cin >> i >> j;
        std::cin >> g[i][j];     
    }

    route resp = computeShortestRoute(g);

    for(auto i : resp)
        std::cout << i << std::endl;
    std::cout << resp.front() << std::endl;
}