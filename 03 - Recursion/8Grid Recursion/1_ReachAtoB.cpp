#include <bits/stdc++.h>
using namespace std;

int recursionInMatrix(vector<vector<int>> &arr, int i, int j) {
    int m = arr.size();
    int n = arr[0].size();

    if (i == m || j == n) {
        return 0;
    }

    if (i == m - 1 && j == n - 1) {
        return 1;
    }
    int right = recursionInMatrix(arr, i, j + 1);
    int down = recursionInMatrix(arr, i + 1, j);

    return right + down;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 0, 7},
        {7, 9, 3}
    };

    int res = recursionInMatrix(arr, 0, 0);
    cout << res << endl;

    return 0;
}
