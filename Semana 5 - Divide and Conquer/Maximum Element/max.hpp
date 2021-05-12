#ifndef SORT_HPP
#define SORT_HPP

#include<vector>
#include<concepts>
#include<cmath>
#include <cassert>

/*
É uma função auxiliar para o findMax.
*/
template<std::totally_ordered T>
int findMax(std::vector<T>&, int, int);
#include "ipp/findMax.ipp"

/*
Encontra a posição do maior elemento usando divisão e conquista
recebe: arranjo de dados que possuam uma relação de ordem total
retorna: posição do maior elemento
*/
template<std::totally_ordered T>
int max(std::vector<T> &v){

    return findMax(v, 0, v.size()-1);
}

#endif