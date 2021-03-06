#ifndef DFS_HPP
#define DFS_HPP

#include <vector>
#include <set>
#include <stack>

/* Definições úteis */
typedef std::vector<std::set<int>> adjacency_list;

/*
Indica a ordem dos vértices visitados, conforme a DFS.
recebe: lista de adjacências do grafo
retorna: arranjo com a ordem dos vértices visitados
*/
std::vector<int> verticesOrder(adjacency_list, int);

/*
Algoritmo de busca em profundidade
*/
void dfs(adjacency_list&, std::stack<int>&, std::vector<int>&);

/*
Verifica se um vértice é elemento do vetor de visitados
*/
bool isVisited(std::vector<int>&, int);

#endif