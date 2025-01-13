// find second max in an array
// arr[5]={2,8,1,10,4};

// output=8

#include<bits/stdc++.h>
using namespace std;



int findMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

int findSecMaxi(int arr[],int n){
    int maxi=INT_MIN;
    int secMaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            secMaxi=maxi;
            maxi=arr[i];
        }else if(arr[i]>secMaxi){
            secMaxi=arr[i];
        }
    }
    return secMaxi;
}
int main(){
    int arr[]={2,8,1,10,4};
    int n=sizeof(arr)/sizeof(int);
    int maxi=findMax(arr,n);
    int secMaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>secMaxi && arr[i]!=maxi){
            secMaxi=arr[i];
        }
    }
    cout<<secMaxi<<endl;
    cout<<findSecMaxi(arr,n)<<endl;


    return 0;
}