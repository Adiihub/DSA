#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, greater<int>());  // Sorting in descending order

    cout << "Sorted array in descending order: ";
    for (int x : arr) cout << x << " ";

    return 0;
}
