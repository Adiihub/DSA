#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int s, int mid, int e) {
    vector<int> temp(e - s + 1);
    int left = s;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= e) {
        if (arr[left] <= arr[right]) {
            temp[index++] = arr[left++];
        } else {
            temp[index++] = arr[right++];
        }
    }

    while (left <= mid) {
        temp[index++] = arr[left++];
    }

    while (right <= e) {
        temp[index++] = arr[right++];
    }

    index = 0;
    while(s <= e){
        arr[s] = temp[index];
        s++; index++;
    }
}

void mergesort(vector<int>& arr, int s, int e) {
    if (s >= e) return;  // Base condition

    int mid = s + (e - s) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main() {
    int n = 7;
    vector<int> arr = {32, 3, 4, 1, 5, 6, 0};
    
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
