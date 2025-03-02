#include <bits/stdc++.h>
using namespace std;

bool canPlace(int mat[][9], int i, int j, int n, int number) {
    for (int x = 0; x < n; x++) {
        // Row & Column Check
        if (mat[x][j] == number || mat[i][x] == number) {
            return false;
        }
    }

    int rn = sqrt(n);
    int sx = (i / rn) * rn;
    int sy = (j / rn) * rn;

    for (int x = sx; x < sx + rn; x++) {
        for (int y = sy; y < sy + rn; y++) {
            if (mat[x][y] == number) {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n) {
    // Base Case
    if (i == n) {
        // Print the solved matrix
        for (int p = 0; p < n; p++) {
            for (int q = 0; q < n; q++) {
                cout << mat[p][q] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // Case: Row End
    if (j == n) {
        return solveSudoku(mat, i + 1, 0, n);  // Fix j reset
    }

    // Skip the Pre-filled Cells
    if (mat[i][j] != 0) {
        return solveSudoku(mat, i, j + 1, n);
    }

    // Try filling the current cell with numbers 1 to 9
    for (int number = 1; number <= n; number++) {
        if (canPlace(mat, i, j, n, number)) {
            mat[i][j] = number;

            bool couldWeSolve = solveSudoku(mat, i, j + 1, n);
            if (couldWeSolve) {
                return true;
            }

            // Backtrack
            mat[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int mat[9][9];

    // Take input for the Sudoku grid
    cout << "Enter the 9x9 Sudoku grid (use 0 for empty cells):\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nSolving Sudoku...\n\n";
    if (!solveSudoku(mat, 0, 0, 9)) {
        cout << "No solution exists!\n";
    }

    return 0;
}
