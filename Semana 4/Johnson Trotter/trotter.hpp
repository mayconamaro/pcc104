#ifndef TROTTER_HPP
#define TROTTER_HPP

/* Definições úteis */
enum class Direction {Left, Right};

/*
Gera todas as permutações de 1 até n pelo algoritmo de Johnson Trotter
Parâmetro: Inteiro positivo
Retorno: Arranjo com todas as permutações
*/
std::vector<std::vector<unsigned int>> generate_permutations(unsigned int);

/*
Inverte a direção de todos os elementos maiores que o primeiro parâmetro
*/
void swapall_larger(unsigned int, std::vector<unsigned int>&, std::vector<Direction>&);

/*
Retorna a direção espelhada do parâmetro 
*/
Direction mirror(Direction);

/*
Retorna um iterador para o maior elemento móvel, ou o .end() do primeiro parâmetro se não houverem
elementos móveis
*/
std::vector<unsigned int>::iterator largest_mobile(std::vector<unsigned int>&, std::vector<Direction>&);

#endif