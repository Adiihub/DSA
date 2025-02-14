#include <iostream>
#include <vector>

using namespace std;

int countRotations(vector<int>& arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    
    while (low <= high) {
        // If the array is already sorted, return low (no rotation)
        if (arr[low] <= arr[high]) 
            return low;

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        // Check if mid is the minimum element
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) 
            return mid;

        // Decide whether to search in left or right half
        if (arr[mid] >= arr[low]) 
            low = mid + 1;
        else 
            high = mid - 1;
    }
    
    return 0;  
}

int main() {
    vector<int> arr = {15, 18, 2, 3, 6, 12};
    cout << "Array is rotated " << countRotations(arr) << " times.\n";
    return 0;
}
