#ifndef SORT_HPP
#define SORT_HPP

#include<vector>
#include<utility> // pair
#include<concepts>
#include<cmath>

/*
É uma função auxiliar para o minmax.
*/
template<std::totally_ordered T>
std::pair<int, int> findMinMax(std::vector<T>&, int, int);
#include "ipp/findMinMax.ipp"

/*
Encontra a posição do maior elemento usando divisão e conquista
recebe: arranjo de dados que possuam uma relação de ordem total
retorna: posição do maior elemento
*/
template<std::totally_ordered T>
std::pair<int, int> minmax(std::vector<T> &v){

    return findMinMax(v, 0, v.size()-1);
}

#endif