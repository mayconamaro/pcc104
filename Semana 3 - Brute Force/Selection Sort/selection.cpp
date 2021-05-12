#include <vector>
#include "selection.hpp"

void sort(std::vector<int> &v){
    
    unsigned int minimo;

    for (unsigned int i = 0; i < v.size() - 1; i++){
        minimo = i;
        for (unsigned int j = i + 1; j < v.size(); j++){
            if (v[j] < v[minimo]){
                minimo = j;
            }
        }

        int aux = v[i];
        v[i] = v[minimo];
        v[minimo] = aux;
    }
}