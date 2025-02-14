#include <bits/stdc++.h>
using namespace std;

// Function to find the index of a target element in an infinite sorted array
int findIndexInInfiniteArray(vector<int>& arr, int target) {
    int low = 0, high = 1;
    
    while (arr[high] < target) {
        low = high;
        high *= 2;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    
    return -1;  
}
 
int main() {
    vector<int> arr = {2, 3, 5, 7, 9, 12, 15, 18, 21, 24, 30, 35, 40, 50, 60};  
    int target = 21;

    int index = findIndexInInfiniteArray(arr, target);
    cout << "Element found at index: " << index << endl; // Expected Output: 8
    return 0;
}
