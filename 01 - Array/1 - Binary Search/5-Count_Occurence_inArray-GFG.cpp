#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of target
int firstOccurrence(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Move left to find earlier occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of target
int lastOccurrence(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1; // Move right to find later occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to count occurrences of target in sorted array
int countOccurrences(const vector<int>& arr, int target) {
    int first = firstOccurrence(arr, target);
    if (first == -1) return 0; // Target not found
    int last = lastOccurrence(arr, target);
    return last - first + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int target = 2;
    cout << "Occurrences of " << target << ": " << countOccurrences(arr, target) << endl;

    target = 4;
    cout << "Occurrences of " << target << ": " << countOccurrences(arr, target) << endl;

    vector<int> arr2 = {8, 9, 10, 12, 12, 12};
    target = 12;
    cout << "Occurrences of " << target << ": " << countOccurrences(arr2, target) << endl;

    return 0;
}
