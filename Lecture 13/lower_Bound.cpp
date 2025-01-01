#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int Lower_Bound(vector<int>& arr,int x){
    // time complexity=O(logn)
    int n=arr.size();
    int lo=0,hi=n-1;
    int ind=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        // check ar[mid]>=x
        if(arr[mid]>=x){
            ind=mid;
            hi=mid-1;
        }else if(arr[mid]<x){
            lo=mid+1;
        }
    }
    return ind;
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    // time complexity=O(n)
    int ind1=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            ind1=i;
            break;
        }
    }
    cout<<ind1<<endl;

    int ind2=Lower_Bound(arr,x);
    cout<<ind2<<endl;

    // using inbuilt function-> lower_bound()


    int ind3=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout<<ind3<<endl;



    return 0;
}