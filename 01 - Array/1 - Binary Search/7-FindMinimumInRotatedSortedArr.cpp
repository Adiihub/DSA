#include <bits/stdc++.h>
using namespace std;

 //     int min = INT_MAX;
        //     for(int i=0; i<n; i++){
        //         if(nums[i]<min){
        //             min=nums[i];
        //         }
        //     }
        //     return min;

        // sort(nums.begin(), nums.end());  //brute force approach tc = O(n^2)


class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int lo = 0, hi = n - 1;

        // If the array is already sorted (not rotated), return the first element
        if (arr[lo] <= arr[hi]) return arr[lo];

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int prev = (mid - 1 + n) % n; // Corrected modulo operation
            int next = (mid + 1) % n;

            // Check if mid is the minimum element
            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
                return arr[mid];
            }

            // If mid element is greater than the last element, search right
            if (arr[mid] > arr[hi]) {
                lo = mid + 1;
            } else { // Otherwise, search left
                hi = mid - 1;
            }
        }

        // Return the leftmost element as a fallback
        return arr[lo];
    }
};

// Driver Code
int main() {
    vector<vector<int>> testCases = {
        {4, 5, 6, 7, 0, 1, 2},
        {3, 4, 5, 1, 2},
        {11, 13, 15, 17},
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 1}
    };

    Solution sol;
    for (auto& testCase : testCases) {
        cout << "Minimum element: " << sol.findMin(testCase) << endl;
    }

    return 0;
}
