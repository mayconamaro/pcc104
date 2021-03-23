#include <iostream>
#include <string>
#include <cassert>
#include "pattern_matching.hpp"

int main(){

    std::string t;
    std::string p;

    std::getline(std::cin, t);
    std::getline(std::cin, p);

    //nenhum deles pode ser vazio
    assert(!t.empty() || !t.empty());

    std::cout << match(t, p) << std::endl;
}