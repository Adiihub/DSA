// Given an array of length n consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s on the left side and 1s on the right side of the array.

// Example 1:

// Input:
// n = 5
// arr[] = {0, 0, 1, 1, 0}
// Output: {0, 0, 0, 1, 1}


#include<bits/stdc++.h>
using namespace std;


int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt0++;
        else cnt1++;
    }

    int ind=0;
    while(cnt0>0){
        arr[ind]=0;
        ind++;
        cnt0--;
    }
    while(cnt1>0){
        arr[ind]=1;
        ind++;
        cnt1--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}