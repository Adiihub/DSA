#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
            int n = grid.size();
            vector<int>tempres;
            
            for(int i=0; i<n; i++){
                int maxval = 0;
                int count = 0;
                sort(grid[i].begin(), grid[i].end());
                int t = limits[i];
    
                // Collect top t elements from the row (largest values)
                for(int j=grid[i].size()-1; j>=0 && count < t; j--){
                    tempres.push_back(grid[i][j]);
                    count++;
                }
            }
    
            // Sort the collected values in descending order
            sort(tempres.begin(), tempres.end(), greater<int>());
            long long res = 0;
            for (int i = 0; i < k && i < tempres.size(); i++){
                res += tempres[i];
            }
            return res;
        }
    };