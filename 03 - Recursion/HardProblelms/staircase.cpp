#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    // base case
    if(n==0)
        return 1;
    if(n<0)
        return 0;

    return solve(n-1)+solve(n-2)+solve(n-3);
}

int Nstair2(int n, int k){
    if(n==0)
        return 1;
    if(n<0)
        return 0;

    int ans = 0;
    for(int i=1; i<=k; i++){
        ans += Nstair2(n-i, k);
    }
    return ans;
}
int main(){
    int n=4;
    cout<<solve(n);
    cout<<Nstair2(n, 4);
    return 0;
}