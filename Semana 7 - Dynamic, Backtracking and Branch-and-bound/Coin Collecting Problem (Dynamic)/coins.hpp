#ifndef COINS_HPP
#define COINS_HPP

#include <vector>

/**
Calcula o máximo de moedas que um robô
consegue coletar num tabuleiro n x m
começando da posição (0, 0) e se movendo
apenas para direita e para baixo, até atingir
o canto inferior direito do tabuleiro.
Recebe: matriz binária representando o tabuleiro e as moedas
Retorna: número máximo de moedas
**/
int max_coins(std::vector<std::vector<int>>&);

#endif