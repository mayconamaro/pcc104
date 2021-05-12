#ifndef SORT_HPP
#define SORT_HPP

#include<vector>
#include<concepts>
#include<cmath>

/*
Intercala os dois primeiros parâmetros no terceiro.
É uma função auxiliar para o mergesort.
*/
template<std::totally_ordered T>
void merge(std::vector<T>&, std::vector<T>&, std::vector<T>&);
#include "ipp/merge.ipp"

/*
Ordena um arranjo pelo método da intercalação (MergeSort)
recebe: arranjo para ordenar
retorna: nada (ordenação modifica o vetor original, 
o que não quer dizer que seja in-place)
*/
template<std::totally_ordered T>
void sort(std::vector<T>&);
#include "ipp/sort.ipp"

#endif