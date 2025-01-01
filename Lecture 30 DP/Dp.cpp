#include<bits/stdc++.h>
using namespace std;

// Recursive code
int fibo(int n){
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

// Memoization / top down approach

int fibo_memo(int n, int dp[]){
    if(n <= 1)
    return n;
    // check kar rahe h ki pahle se ans calculated h ya nahi
    if(dp[n] != -1){
        return dp[n];
    }

    // Memoization 
    dp[n] = fibo_memo(n-1, dp) + fibo_memo(n-2,dp);
    return dp[n];
}

// Tabular DP / Bottom up approach

int fibo_Tabular(int n){
    int dp[n+1];
    // base case -> as a intilization
    dp[0] = 0;
    dp[1] = 1;

    // 0->n
    for(int i = 2; i <= n; i++){   
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0; i<n+1; i++){
        dp[i] = -1;
    }
    cout<<fibo(n)<<endl;
    cout<<fibo_memo(n,dp)<<endl;
    cout<<fibo_Tabular(n)<<endl;

    return 0;
}