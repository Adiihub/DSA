#include<bits/stdc++.h>
using namespace std;

// n=1 && m==10^9
// x^1==10^9

int power(int x,int n){
    // 3^3==3*3*3
    int p=1;
    for(int i=0;i<n;i++){
        p=p*x;
    }
    return p;
}



//Optimized code

int findNthRoot(int n,int m){
    long  lo=1,hi=m;

    while(lo<=hi){
        long mid=(lo+hi)/2;
        if(power(mid,n)==m){
            return mid;
        }else if(power(mid,n)>m){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;

    // Brute force
    // x^n===m
    int ans;
    for(int x=1;x<=m;x++){
        if(power(x,n)==m){
            ans=x;
            break;
        }
    }
    cout<<ans<<endl;

    cout<<findNthRoot(n,m)<<endl;
}