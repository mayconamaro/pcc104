#ifndef CONVEX_HULL_HPP
#define CONVEX_HULL_HPP

#include <vector>
#include <utility>

/* Definições úteis */
enum class Signal {positive, negative, neutral};
typedef std::pair<double, double> point;
typedef std::pair<point, point> line_segment;

/*
Calcula a casca convexa de um polígono
recebe: um arranjo dos pontos, em sentido horário, do polígono
retorna: um arranjo dos segmentos de reta que formam a casca convexa
*/
std::vector<line_segment> convexHull(std::vector<point>);

/*
Calcula o lado em que um ponto está com relação à uma reta.
Faz uso da equação geral da reta ax + by - c = 0.
recebe: dois pontos p1 e p2 para formar a reta e um ponto p3 
para verificar o lado com relação à reta.
retorna: o sinal (positivo, negativo, neutro) da relação de p3 em relação
à reta. 
*/
Signal checkColinearity(point p1, point p2, point p3);

#endif