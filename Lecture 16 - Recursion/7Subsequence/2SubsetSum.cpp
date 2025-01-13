#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subsetSum(vector<int> arr, int index, int n, vector<int>& temp, vector<int>& ans) {
        if (index == n) {
            int sum = 0;
            for (int i = 0; i < temp.size(); i++) {
                sum += temp[i];
            }
            ans.push_back(sum);
            return;
        }
        // Exclude the current element
        subsetSum(arr, index + 1, n, temp, ans);
        
        // Include the current element
        temp.push_back(arr[index]);
        subsetSum(arr, index + 1, n, temp, ans);
        temp.pop_back(); // Backtrack
    }

    vector<int> subsetSums(vector<int>& arr) {
        vector<int> temp;
        vector<int> ans;
        subsetSum(arr, 0, arr.size(), temp, ans);
        return ans;
    }
};


int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n; // Size of the array

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input the array
        }

        Solution solutionObject;
        vector<int> result = solutionObject.subsetSums(arr);
        sort(result.begin(), result.end()); // Sort the result

        for (int sum : result) {
            cout << sum << " "; // Print each subset sum
        }
        cout << endl; // New line after each test case
    }

    return 0;
}
