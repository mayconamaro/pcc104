#include <string>
#include "pattern_matching.hpp"

int match(std::string t, std::string p){

    for(unsigned int i = 0; i < t.length() - p.length(); i++){
        
        unsigned int j = 0;

        while (j < p.length() && p[j] == t[i+j]) 
            j++;
        
        if (j == p.length()) 
            return i; 
    }

    return -1;
}