#include<vector>
#include "changemake.hpp"

int changemake(std::vector<int> &D, int n){

    int m = (int) D.size();

    std::vector<int> F(n+1, 0);
    F.at(0) = 0;
    
    for(int i = 1; i <= n; i++){

        int temp = std::numeric_limits<int>::max();
        int j = 0;
        
        while(j < m && i >= D.at(j)) {

            temp = std::min(F.at(i - D.at(j)), temp);
            j++;
        }

        F.at(i) = temp + 1;
    }

    return F.at(n);
}