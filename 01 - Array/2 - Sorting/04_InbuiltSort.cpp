#include <iostream>
#include <algorithm>  // Required for sort()
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);  // Sorting in ascending order

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";

    return 0;
}
