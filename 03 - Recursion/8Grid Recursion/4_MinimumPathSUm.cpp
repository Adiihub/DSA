#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mincostp(vector<vector<int>>&grid, int i, int j, vector<vector<int>>&dp){
            int n=grid.size();
            int m=grid[0].size();
    
            if(i == n-1 && j == m-1){
                return grid[i][j];
            }
            if(i >= n || j >= m){
                return INT_MAX;
            }
            if(dp[i][j] != -1){
                return dp[i][j];
            }
            
            int right = mincostp(grid, i+1, j, dp);
            int down = mincostp(grid, i, j+1, dp);
    
            return dp[i][j] = grid[i][j] + min(right, down);
        }
    
        int minPathSum(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
    
            vector<vector<int>>dp(n, vector<int>(m, -1));
    
            return mincostp(grid, 0, 0, dp);
        }
    };