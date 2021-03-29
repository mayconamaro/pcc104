#include <vector>
#include <set>
#include <stack>
#include "dfs.hpp"

std::vector<int> verticesOrder(adjacency_list g, int start){

    std::stack<int> verticesToVisit;
    std::vector<int> verticesVisited;

    verticesToVisit.push(start);

    dfs(g, verticesToVisit, verticesVisited);

    return verticesVisited;

}

void dfs(adjacency_list &g, std::stack<int> &s, std::vector<int> &v){

    while(!s.empty()){

        if(isVisited(v, s.top())){
            s.pop();
            continue;
        }

        int vertex = s.top();
        v.push_back(vertex);
        s.pop();
        
        for(auto it = g[vertex].rbegin(); it != g[vertex].rend(); it++)
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