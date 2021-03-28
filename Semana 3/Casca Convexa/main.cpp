#include <iostream>
#include <vector>
#include <utility>
#include <cassert>
#include "convex_hull.hpp"

int main(){

    unsigned int n = 0;
    point a;
    std::vector<point> v;

    std::cin >> n;

    for(unsigned int i = 0; i < n; i++){
        std::cin >> a.first >> a.second;
        v.push_back(a);
    }

    assert(v.size() == n);

    std::vector<line_segment> hull = convexHull(v);

    for(auto i : hull){
        std::cout << "(" 
                  << i.first.first << ", " << i.first.second 
                  << ") e (" 
                  << i.second.first << ", " << i.second.second 
                  << ")" << std::endl;
    }
}