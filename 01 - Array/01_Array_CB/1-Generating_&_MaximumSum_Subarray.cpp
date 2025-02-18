#include <bits/stdc++.h>
using namespace std;

void generateSubArr(int arr[], int n) {
    for (int start = 0; start < n; start++) {  // Start index
        for (int end = start; end < n; end++) {  // End index
            // Print subarray from start to end
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
 
int maxSubarrayBruteForce(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {  // Start index
        for (int j = i; j < n; j++) {  // End index
            int sum = 0;
            for (int k = i; k <= j; k++) {  // Compute subarray sum
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
 
int maxSubarrayKadane(int arr[], int n) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)  // Reset if sum goes negative
            currentSum = 0;
    }
    return maxSum;
}



int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "All subarrays:\n";
    generateSubArr(arr, n);
    cout << "Maximum Subarray Sum: " << maxSubarrayBruteForce(arr, n) << endl;


    return 0;
}
