#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countUniquePath(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp) {
        int n = grid.size();
        int m = grid[0].size();

        if (i >= n || j >= m) return 0;

        // If there is an obstacle, return 0 (no path)
        if (grid[i][j] == 1) return 0;

        if (i == n - 1 && j == m - 1) return 1;

        if (dp[i][j] != -1) return dp[i][j];

        int right = countUniquePath(grid, i + 1, j, dp);
        int down = countUniquePath(grid, i, j + 1, dp);

        return dp[i][j] = right + down;  
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        // If the start or end cell has an obstacle, return 0 (no path)
        if (obstacleGrid[0][0] == 1 || obstacleGrid[n - 1][m - 1] == 1) return 0;

        vector<vector<int>> dp(n, vector<int>(m, -1));   

        return countUniquePath(obstacleGrid, 0, 0, dp);
    }
};

int main() {
    Solution sol;

    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    cout << "Number of unique paths: " << sol.uniquePathsWithObstacles(obstacleGrid) << endl;

    return 0;
}
