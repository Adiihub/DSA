#include<bits/stdc++.h>
using namespace  std;

int Upper_Bound(vector<int>& arr,int x){
    int n=arr.size();
    int lo=0,hi=n-1;
    int ind=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]>x){
            ind=mid;
            hi=mid-1;
        }else{
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

    int ind=Upper_Bound(arr,x);
    cout<<ind<<endl;

    // Builtin functio
    int ind2=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout<<ind2<<endl;
    return 0;
}