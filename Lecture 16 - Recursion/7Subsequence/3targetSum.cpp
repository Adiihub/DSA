#include<bits/stdc++.h>
using namespace std;

bool TargetSum(int arr[], int index, int n, int target){
    if(target == 0){
        return 1;
    }
    if(index==n || target < 0){
        return 0;
    }

    return TargetSum(arr, index+1, n, target) || TargetSum(arr, index+1, n,  target-arr[index]);
}

int main(){
    int arr[] = {1, 2, 3, 7};
    int target = 15;
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;

    cout<< TargetSum(arr, 0, n, target)<<endl;



    return 0;
}