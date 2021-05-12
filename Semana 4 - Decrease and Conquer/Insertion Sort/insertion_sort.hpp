#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include <concepts> // Necessário suporte ao C++ 20. Utilize G++ >=10, MSVC >=19.23 ou Clang >=10 
#include <vector>

/*
Ordena os elementos de um vetor in-place
pelo método de inserção. Funciona para 
qualquer tipo com uma relação de ordem total.

Recebe: o vetor a ser ordenado

Retorna: nada (ordenação in-place)
*/
// void sort(vector<T>&);
#include "insertion_sort.ipp"


#endif