#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of 1 in an infinite sorted binary array
int findFirstOneIndex(vector<int>& arr) {
    int low = 0, high = 1;
    
    // Expand high exponentially until we find a '1'
    while (arr[high] == 0) {
        low = high;
        high *= 2;  // Doubling the search range
    }

    // Binary search between low and high
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1) {
            result = mid; 
            high = mid - 1; // Look for the first occurrence in the left half
        } else {
            low = mid + 1;  
        }
    }
    return result;
}
 
int main() {
    vector<int> arr = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};  
    int index = findFirstOneIndex(arr);
    
    cout << "First occurrence of 1 is at index: " << index << endl; // Expected Output: 6
    return 0;
}
