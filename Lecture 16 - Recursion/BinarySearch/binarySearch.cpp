#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr, int n, int s, int e){
    if(s > e){
        return -1;
    }
    int mid = s + (e - s) / 2;
    if(arr[mid] == n){
        return mid;
    }
    if(arr[mid] < n){
        return binarySearch(arr, n, mid + 1, e);
    }
    else {
        return binarySearch(arr, n, s, mid - 1);
    }
}

int main(){
    int n = 7;
    vector<int>arr = {0,1, 2, 3, 4, 5,6,7,8,9};
    cout<<binarySearch(arr, n, 0, 10);
    
    return 0;
}