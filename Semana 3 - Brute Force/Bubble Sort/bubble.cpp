#include <vector>
#include "bubble.hpp"

void sort(std::vector<int> &v){
    
    for (unsigned int i = 0; i < v.size() - 1; i++){
        for (unsigned int j = 0; j < v.size() - 1 - i; j++){
            if (v[j + 1] < v[j]){
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}