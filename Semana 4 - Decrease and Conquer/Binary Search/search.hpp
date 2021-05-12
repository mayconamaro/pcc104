#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <cmath>
#include <vector>
#include <concepts>

/*
Busca um elemento em um arranjo ordenado
pelo método da busca binária.
Funciona para qualquer tipo que possua uma
relação de ordem total estrita

Retorna a posição do elemento ou -1 se não encontrado
*/
template<std::totally_ordered T>
int search(std::vector<T> v, T key);
#include "search.ipp"

#endif