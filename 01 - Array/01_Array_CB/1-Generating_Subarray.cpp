#include <iostream>
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

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "All subarrays:\n";
    generateSubArr(arr, n);

    return 0;
}
