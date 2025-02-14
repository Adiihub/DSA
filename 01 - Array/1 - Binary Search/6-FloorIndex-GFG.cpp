#include <bits/stdc++.h>
using namespace std;

// Given a sorted array arr[] (with unique elements) and an integer k, find the index (0-based) of the largest element in arr[] that is less than or equal to k. This element is called the "floor" of k. If such an element does not exist, return -1.

class Solution {
public:
    int findFloor(vector<int>& arr, int k) {
        int s = 0, e = arr.size() - 1, floorIndex = -1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            
            if (arr[mid] <= k) {
                floorIndex = mid; // Potential floor found
                s = mid + 1;      // Search in the right half
            } else {
                e = mid - 1;      // Search in the left half
            }
        }
        return floorIndex;
    }
};

// Driver Code
int main() {
    vector<vector<int>> testCases = {
        {1, 2, 8, 10, 11, 12, 19},
        {1, 2, 8},
        {1, 2, 8, 10, 11, 12, 19}
    };
    vector<int> ks = {0, 5, 1};

    Solution ob;
    for (int i = 0; i < testCases.size(); i++) {
        cout << "Floor index of " << ks[i] << " : " 
             << ob.findFloor(testCases[i], ks[i]) << endl;
    }
    
    return 0;
}
