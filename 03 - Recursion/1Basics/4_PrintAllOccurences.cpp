#include<bits/stdc++.h>
using namespace std;

void PAO(int arr[], int n, int key) {
    if (n == -1){
        return;
    }
    
    PAO(arr, n-1, key);

    if(arr[n] == key){
        cout<<arr[n]<<" ";
    }
}

int main() {
    int arr[] = {4, 5, 6, 5, 3, 4, 5, 3, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    
    PAO(arr, n-1, 3);
    
    return 0;
}
