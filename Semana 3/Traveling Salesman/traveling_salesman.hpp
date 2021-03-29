#ifndef TRAVELING_SALESMAN_HPP
#define TRAVELING_SALESMAN_HPP

#include <vector>

/* Definições úteis */
typedef unsigned int city;
typedef std::vector<std::vector<double>> adjacency_matrix;
typedef std::vector<city> route;

/*
Calcula a rota mais curta para o problema do caixeiro viajante
recebe: grafo em forma de matriz de adjacencias em que as cidades
são números e também os índices da matriz. Assume-se que o grafo é completo.
retorna: arranjo com a ordem das cidades a serem visitadas
*/
route computeShortestRoute(adjacency_matrix);

/*
Calcula a distância de uma rota
recebe: a rota para calcular e o grafo em forma de matriz de adjacencias
retorna: a distância total da rota
*/
double calculateDistance(route, adjacency_matrix);

#endif