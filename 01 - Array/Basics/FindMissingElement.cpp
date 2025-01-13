#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    // sum of first n natural nubers.
    int SN=(n*(n+1))/2;
    cout<<SN-sum<<endl;

    return 0;
    
}