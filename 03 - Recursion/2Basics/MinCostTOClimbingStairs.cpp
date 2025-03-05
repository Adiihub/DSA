#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(int idx, vector<int>& cost){
    
            if(idx >= cost.size()){
                return INT_MAX;
            }
            int a = cost[idx] + solve(idx+1, cost);
            int b = cost[idx] + solve(idx+2, cost);
    
            return min(a, b);
        }
        int minCostClimbingStairs(vector<int>& cost) {
            int n = cost.size();
    
            return min(solve(0, cost), solve(1, cost));
        }
    };