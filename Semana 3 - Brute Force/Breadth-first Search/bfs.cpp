#include <vector>
#include <set>
#include <queue>
#include "bfs.hpp"

std::vector<int> verticesOrder(adjacency_list g, int start){

    std::queue<int> verticesToVisit;
    std::vector<int> verticesVisited;

    verticesToVisit.push(start);

    bfs(g, verticesToVisit, verticesVisited);

    return verticesVisited;

}

void bfs(adjacency_list &g, std::queue<int> &s, std::vector<int> &v){

    while(!s.empty()){

        if(isVisited(v, s.front())){
            s.pop();
            continue;
        }

        int vertex = s.front();
        v.push_back(vertex);
        s.pop();
        
        for(auto it = g[vertex].begin(); it != g[vertex].end(); it++)
            if(!isVisited(v, (*it)))
                s.push((*it));   
    }
    
}

bool isVisited(std::vector<int> &visited, int v){

    for(auto it = visited.begin(); it != visited.end(); it++)
        if((*it) == v)
            return true;
    
    return false;
}