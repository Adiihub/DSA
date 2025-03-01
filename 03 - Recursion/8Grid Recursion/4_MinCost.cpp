#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minCost(vector<vector<int>> &arr, int i, int j, vector<vector<int>>& dp) {
    int m = arr.size();
    int n = arr[0].size();

    if (i == m - 1 && j == n - 1) {
        return arr[i][j]; 
    }
    if (i >= m || j >= n) {
        return INT_MAX;  
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int right = minCost(arr, i, j + 1, dp);
    int down = minCost(arr, i + 1, j, dp);

    return dp[i][j] = arr[i][j] + min(right, down);  
}

int main() {

    vector<vector<int>> arr = {
        {1, 2, 3, 6},
        {4, -1, 0, 7},
        {7, 0, 9, 3}
    };

    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>>dp(n, vector<int>(m, -1));

    int res = minCost(arr, 0, 0, dp);
    cout << "Minimum cost: " << res << endl;

    return 0;
}
