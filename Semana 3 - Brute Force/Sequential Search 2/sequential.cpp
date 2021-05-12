#include <vector>
#include "sequential.hpp"

int search(std::vector<int> v, int k){

    int n = v.size();
    int i = 0;
    v.push_back(k);

    while (v[i] != k)
        i++;

    return (i < n ? i : -1);
}