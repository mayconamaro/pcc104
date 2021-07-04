#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

/**
Calcula o n-ésimo termo da sequência de fibonacci
utilizando programação dinâmica.
recebe: posição da sequência
retorna: termo correspondente
**/
int fibonacci(int);

//função auxiliar para o fibonacci
int fibonacciAux(int, int, int);

#endif