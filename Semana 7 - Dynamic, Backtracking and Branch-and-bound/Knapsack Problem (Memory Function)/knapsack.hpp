#ifndef KNAPSACK_HPP
#define KNAPSACK_HPP

#include <vector>

/**
Calcula o valor máximo que pode ser incluído na mochila
usando a técnica de função memória.
Recebe: vetor com pesos, vetor com valores e capacidade
Retorna: valor máximo
**/
int knapsack(std::vector<int>&, std::vector<int>&, int);

// Função auxiliar
int aux_knapsack(std::vector<int>&, std::vector<int>&, int, int, std::vector<std::vector<int>>&);

#endif