#include "fibonacci.hpp"

int fibonacci(int n){

    return fibonacciAux(n, 0, 1);
}

int fibonacciAux(int n, int a, int b){
    
    if (n == 0)
        return a;
    else
        return fibonacciAux(n-1, a+b, a);
}