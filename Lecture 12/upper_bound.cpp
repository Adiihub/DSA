#include<iostream>
#include<vector>
using namespace std;

int lower_bound(vector<int>& arr, int x){
    // Time Complexity = O(logn)
    int n = arr.size();
    int lo=0,hi=n-1;
    int ind1=-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]>x){
            ind1=mid;
            hi=mid-1;
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
    }
    return ind1;
}

int main(){
    int n;
    cout<<"Enter the no of Elements : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];   
    }
    int x;
    cout<<"Enter the elements to find the smallest index : ";
    cin>>x;
    
    // //Time Complexity = O(n); 
    // for(int i=0; i<n; i++){
    //     if(arr[i]>x){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    
    int ind2 = lower_bound(arr,x);
    cout<<ind2<<endl;
    
    
    // int ind4 =upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    // cout<<ind4;
    
    return 0;
}