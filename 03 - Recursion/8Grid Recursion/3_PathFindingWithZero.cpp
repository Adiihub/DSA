#include <bits/stdc++.h>
using namespace std;

int recursionInMatrix(vector<vector<int>> &arr, int i, int j, bool hasZero) {
    int m = arr.size();
    int n = arr[0].size();

    if (i >= m || j >= n) {
        return 0;
    }

    if (arr[i][j] == 0) {
        hasZero = true;
    }

    if (i == m - 1 && j == n - 1) {
        return hasZero ? 1 : 0;
    }
    int right = recursionInMatrix(arr, i, j + 1, hasZero);
    int down = recursionInMatrix(arr, i + 1, j, hasZero);

    return right + down;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3, 6},
        {4, -1, 0, 7},
        {7, 0, 9, 3}
    };

    int res = recursionInMatrix(arr, 0, 0, false);
    cout << res << endl;

    return 0;
}
