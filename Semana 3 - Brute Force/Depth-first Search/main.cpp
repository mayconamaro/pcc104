#include <iostream>
#include <vector>
#include <set>
#include "dfs.hpp"

int main(){

    unsigned int n = 0;
    unsigned int e = 0;

    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int start = 0;

    std::cin >> n;
    std::cin >> e;
    std::cin >> start;

    std::set<int> s;
    adjacency_list g(n, s);

    for(unsigned int h = 0; h < e; h++){

        std::cin >> i >> j;
        g[i].insert(j);
    }

    std::vector<int> vertices = verticesOrder(g, start);

    for(auto z : vertices)
        std::cout << z << std::endl;
}