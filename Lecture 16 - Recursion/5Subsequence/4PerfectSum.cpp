#include<bits/stdc++.h>
using namespace std;

int PerfectSum(int arr[], int index, int n, int sum){
    if(index==n){
        return sum==0;
    }

    return PerfectSum(arr, index+1, n, sum) + PerfectSum(arr, index+1, n,  sum-arr[index]);
}

int main(){
    int arr[] = {1, 0};
    int sum = 1;
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;

    cout<< PerfectSum(arr, 0, n, sum)<<endl;



    return 0;
}