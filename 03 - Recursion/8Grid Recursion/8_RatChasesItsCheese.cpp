#include <iostream>
#include <vector>
using namespace std;

bool findPath(vector<vector<char>> &grid, int i, int j, int n, int m, vector<vector<int>> &path) {
    if (i == n - 1 && j == m - 1 && grid[i][j] == 'O') {
        path[i][j] = 1;  
        return true;
    }

    // Boundary & Obstacle Check
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 'X' || path[i][j] == 1) {
        return false;
    }

    // Mark the current cell as part of the path
    path[i][j] = 1;

    if (findPath(grid, i, j + 1, n, m, path)) return true;  // Move Right
    if (findPath(grid, i + 1, j, n, m, path)) return true;  // Move Down
    if (findPath(grid, i, j - 1, n, m, path)) return true;  // Move Left
    if (findPath(grid, i - 1, j, n, m, path)) return true;  // Move Up

    // If no path found, backtrack
    path[i][j] = 0;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> path(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // If starting or ending position is blocked, no path exists
    if (grid[0][0] == 'X' || grid[n - 1][m - 1] == 'X' || !findPath(grid, 0, 0, n, m, path)) {
        cout << "NO PATH FOUND" << endl;
    } else {
        // Print the unique path found
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
