#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(int);


    // 1st Approach
    // int lastindex = arr[n-1];
    // for(int i=n-2; i>=0; i--){
    //     arr[i+1] = arr[i];
    // }
    // arr[0] = lastindex;


    // 2nd Approach
    for(int i=n-1; i>0; i--){
        swap(arr[i], arr[i-1]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}