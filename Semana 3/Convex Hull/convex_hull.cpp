#include <vector>
#include <utility>
#include "convex_hull.hpp"

std::vector<line_segment> convexHull(std::vector<point> v){

    std::vector<line_segment> hull;

    for(unsigned int i = 0; i < v.size() - 1; i++){

        for(unsigned int j = i + 1; j < v.size(); j++){

            bool isInHullBoundary = true;
            Signal first = Signal::neutral;
            bool firstAssigned = false;
            
            for(unsigned int k = 0; k < v.size(); k++){

                if(k != i && k != j){

                    if(!firstAssigned){
                        first = checkColinearity(v[i], v[j], v[k]);
                        firstAssigned = true;
                    }else{
                        if(checkColinearity(v[i], v[j], v[k]) != first){
                            isInHullBoundary = false;
                            break;
                        }
                    }
                }
            }

            if(isInHullBoundary){
                line_segment s(v[i], v[j]);
                hull.push_back(s);
            }
        }
    }   
    
    return hull;
}

Signal checkColinearity(point p1, point p2, point p3){

    double a = p2.second - p1.second;
    double b = p1.first - p2.first;
    double c = p1.first * p2.second - p1.second * p2.first;

    double value = a * p3.first + b * p3.second - c;
    
    if(value == 0)
        return Signal::neutral;
    
    if(value > 0)
        return Signal::positive;
    else
        return Signal::negative;
}