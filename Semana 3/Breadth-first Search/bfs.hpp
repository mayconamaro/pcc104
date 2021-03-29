#ifndef BFS_HPP
#define BFS_HPP

#include <vector>
#include <set>
#include <queue>

/* Definições úteis */
typedef std::vector<std::set<int>> adjacency_list;

/*
Indica a ordem dos vértices visitados, conforme a BFS.
recebe: lista de adjacências do grafo
retorna: arranjo com a ordem dos vértices visitados
*/
std::vector<int> verticesOrder(adjacency_list, int);

/*
Algoritmo de busca em largura
*/
void bfs(adjacency_list&, std::queue<int>&, std::vector<int>&);

/*
Verifica se um vértice é elemento do vetor de visitados
*/
bool isVisited(std::vector<int>&, int);

#endif
