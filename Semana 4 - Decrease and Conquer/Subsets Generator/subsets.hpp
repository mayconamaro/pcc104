#ifndef SUBSETS_HPP
#define SUBSETS_HPP

#include <cmath>
#include <set>

/*
Gera todos o conjunto potencia do conjunto informado
utilizando o algoritmo de Binary Counter
*/
template <typename T>
std::set<std::set<T>> all_subsets(std::set<T>);
#include "subsets.ipp"

#endif