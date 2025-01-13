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
int main(){
    int n=4;
    cout<<solve(n);
    return 0;
}