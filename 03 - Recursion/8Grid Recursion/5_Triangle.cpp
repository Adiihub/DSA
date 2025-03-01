#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int triangle(vector<vector<int>>&mat, int i, int j, vector<vector<int>>&dp){
            int n = mat.size();
    
            if(i == n-1){
                return mat[i][j];
            }
            if(dp[i][j] != -1){
                return dp[i][j];
            }
    
            int dia = triangle(mat, i+1, j+1, dp);
            int down = triangle(mat, i+1, j, dp);
    
            return dp[i][j] = mat[i][j] + min(dia, down);
        }
        int minimumTotal(vector<vector<int>>& triang) {
            int n = triang.size();
            vector<vector<int>>dp(n, vector<int>(n, -1));
            return triangle(triang, 0, 0, dp);
        }
    };