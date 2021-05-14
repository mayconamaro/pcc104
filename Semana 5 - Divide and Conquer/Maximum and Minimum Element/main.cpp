#include <iostream>
#include <vector>
#include <utility> //pair
#include <cassert>
#include "minmax.hpp"

int main(){

    int n;
    std::cin >> n;

    int j = 0;
    std::vector<int> numbers;

    for (int i = 0; i < n; ++i){
        std::cin >> j;
        numbers.push_back(j);
    }

    assert (numbers.size() == (size_t)n && !numbers.empty());

    std::pair<int, int> resp = minmax(numbers);

    std::cout << resp.first << " " << resp.second << std::endl;

}