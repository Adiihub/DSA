#include<bits/stdc++.h>
using namespace std;

int minEle(int arr[], int i, int n){
    if(i == n-1){
        return arr[i];
    }
    return min(arr[i], minEle(arr, i+1, n));
}

int main(){
    int arr[] = {7,3,2,4,9,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << minEle(arr, 0, n) << endl;

    return 0;
}