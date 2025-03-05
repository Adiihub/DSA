#include<bits/stdc++.h>
using namespace std;

 
class Solution {
    public:
    
        int minFallingPSum(vector<vector<int>>&matrix, int i, int j, int n, int m, vector<vector<int>>&dp){
            if(j < 0 || j >= m){
                return INT_MAX;
            }
            if(i == n-1){
                return matrix[i][j];
            }
            if(dp[i][j] != INT_MAX){
                return dp[i][j];
            }
            int left = minFallingPSum(matrix, i+1, j-1, n, m, dp);
            int down = minFallingPSum(matrix, i+1, j, n, m, dp);
            int dia = minFallingPSum(matrix, i+1, j+1, n, m, dp);
    
            return dp[i][j] = matrix[i][j] + min({left, down, dia});
        }
    
        int minFallingPathSum(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
    
            vector<vector<int>>dp(n, vector<int>(m, INT_MAX));
    
            int ans = INT_MAX;
            for(int j=0; j<m; j++){
                ans = min(ans, minFallingPSum(matrix, 0, j, n, m, dp));
            }
            return ans;
        }
    }; 