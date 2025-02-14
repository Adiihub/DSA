#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchNearlySorted(vector<int>& arr, int key) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check mid, mid-1, mid+1
            if (arr[mid] == key) return mid;
            if (mid > low && arr[mid - 1] == key) return mid - 1;
            if (mid < high && arr[mid + 1] == key) return mid + 1;

            // Adjust search space
            if (arr[mid] > key) {
                high = mid - 2; // Move left (since mid-1 already checked)
            } else {
                low = mid + 2; // Move right (since mid+1 already checked)
            }
        }
        return -1; // Key not found
    }
};

// Driver Code
int main() {
    vector<vector<int>> testCases = {
        {10, 3, 40, 20, 50, 80, 70},
        {2, 1, 3, 5, 4, 6, 8, 7, 9},
        {1, 2, 3, 4, 5}
    };
    vector<int> keys = {40, 5, 3};

    Solution sol;
    for (int i = 0; i < testCases.size(); i++) {
        int result = sol.searchNearlySorted(testCases[i], keys[i]);
        cout << "Target " << keys[i] << " found at index: " << result << endl;
    }

    return 0;
}
