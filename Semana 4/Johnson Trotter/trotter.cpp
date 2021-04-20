#include <vector>
#include <utility>
#include "trotter.hpp"

std::vector<std::vector<unsigned int>> generate_permutations(unsigned int n){

    std::vector<std::vector<unsigned int>> all_permutations;
    std::vector<unsigned int> current_permutation;
    std::vector<Direction> current_directions(n, Direction::Left);

    for (unsigned int i = 1; i <= n; i++) {
        current_permutation.push_back(i);
    }

    all_permutations.push_back(current_permutation);

    auto k = largest_mobile(current_permutation, current_directions);

    while (k != current_permutation.end()){
        
        int dist = std::distance(current_permutation.begin(), k);
        auto curr_dir = current_directions.begin() + dist;
        unsigned int k_copy = *k;
        
        std::swap(*k, *curr_dir == Direction::Left ? *(k-1) : *(k+1));
        std::swap(*curr_dir, *curr_dir == Direction::Left ? *(curr_dir-1) : *(curr_dir+1));
        swapall_larger(k_copy, current_permutation, current_directions);
        
        all_permutations.push_back(current_permutation);
        
        k = largest_mobile(current_permutation, current_directions);
    }

    return all_permutations;
}

void swapall_larger(unsigned int k, std::vector<unsigned int> &v, std::vector<Direction> &d){

    auto it_d = d.begin();
    for (auto it = v.begin(); it != v.end(); it++) {
        
        if (*it > k)  *it_d = mirror(*it_d);

        it_d++;
    }
}

Direction mirror(Direction d){
    return (d == Direction::Left) ? Direction::Right : Direction::Left;
}

std::vector<unsigned int>::iterator largest_mobile(std::vector<unsigned int> &v, std::vector<Direction> &d){

    auto k = v.end();
    auto it_d = d.begin();

    for (auto it = v.begin(); it != v.end(); it++){

        if (*it_d == Direction::Left  &&  it != v.begin()  &&  *it > *(it - 1)){
           k = (k == v.end()) ? it : (std::max(*k, *it) == *k ? k : it);
        }

        if (*it_d == Direction::Right  &&  it != v.end() - 1  &&  *it > *(it + 1)){
           k = (k == v.end()) ? it : (std::max(*k, *it) == *k ? k : it);
        }

        it_d++;
    }

    return k;
}