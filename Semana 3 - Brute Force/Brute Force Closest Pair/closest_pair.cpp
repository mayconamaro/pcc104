#include <vector>
#include <utility>
#include <limits>
#include <algorithm>
#include <cmath>

double findShortest(std::vector<std::pair<int, int>> v){

    double d = std::numeric_limits<double>::infinity();
    for(unsigned int i = 0; i < v.size() - 1; i++){
        for(unsigned int j = i + 1; j < v.size(); j++){

            d = std::min(d, sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2)));
        }
    }

    return d;
}
