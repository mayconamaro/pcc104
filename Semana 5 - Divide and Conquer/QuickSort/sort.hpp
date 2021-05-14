#ifndef SORT_HPP
#define SORT_HPP

#include<vector>
#include<concepts>
#include<cmath>

/*
Algoritmo de particionamento de Hoare usando o primeiro elemento
como pivot. Função auxiliar para o quicksort.
*/
template<std::totally_ordered T>
int partition(std::vector<T>&, int l, int r);
#include "ipp/partition.ipp"

/*
Ordena um subarranjo pelo método QuickSort (caso geral)
recebe: arranjo para ordenar, posições dos subarranjos
retorna: nada (ordenação in-place)
*/
template<std::totally_ordered T>
void quicksort(std::vector<T>&, int l, int r);
#include "ipp/quicksort.ipp"

/*
Ordena um arranjo inteiro pelo método QuickSort (caso particular)
recebe: arranjo para ordenar
retorna: nada (ordenação in-place)
*/
template<std::totally_ordered T>
void sort(std::vector<T> &v){
    quicksort(v, 0, v.size() - 1);
}

#endif