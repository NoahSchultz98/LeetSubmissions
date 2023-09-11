#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // add each value in each row 
        int value = 0;
        int maxValue = 0;
        //int maxAccount = 0;

        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < (accounts.at(i)).size(); j++){
                value += accounts[i][j];
            }
            if(value > maxValue){
                //maxAccount = i;
                maxValue = value;
            }
            value = 0;
        }

        return maxValue;
    }
};