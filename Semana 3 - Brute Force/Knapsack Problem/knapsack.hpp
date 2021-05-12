#ifndef KNAPSACK_HPP
#define KNAPSACK_HPP

#include <vector>
#include <utility>
#include <set>

/* Definições úteis */
typedef std::pair<double, double> item; // (value, weight)

/*
Calcula o subconjunto viável mais valioso para a mochila
recebe: um arranjo de tuplas indicando (valor, peso) para cada item
retorna: um conjunto contendo os indices dos itens no arranjo a serem colocados
*/
std::set<int> mostValuableSubset(std::vector<item>&, double capacity);

/*
Gera todos os subconjuntos de índices do primeiro parâmetro no segundo parâmetro
Utiliza o método de binary counter
Referência: https://www.includehelp.com/cpp-programs/print-all-possible-subset-of-a-set.aspx
*/
void generateAllSubsets(std::vector<item>&, std::vector<std::set<int>>&);

/*
Calcula se uma solução candidata é viável
*/
bool isFeasible(std::vector<item>&, double, std::set<int>);

/*
Calcula o valor de uma solução candidata, independente se é viável ou não
*/
double calculateValue(std::vector<item>&, std::set<int>);

#endif