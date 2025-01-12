#include<bits/stdc++.h>
using namespace std;

int SubsetSum(int arr[], int index, int n, int sum){
    if(sum==0){
        return 1;
    }
    if(index==n || sum < 0){
        return 0;
    }

    return SubsetSum(arr, index+1, n, sum) + SubsetSum(arr, index, n,  sum-arr[index]);
}

int main(){
    int arr[] = {2, 3, 4};
    int sum = 6;
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;

    cout<< SubsetSum(arr, 0, n, sum)<<endl;



    return 0;
}