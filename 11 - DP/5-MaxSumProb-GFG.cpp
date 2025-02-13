//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// A number n can be broken into three parts n/2, n/3, and n/4 (consider only the integer part). Each number obtained in this process can be divided further recursively. Find the maximum sum that can be obtained by summing up the divided parts together.

class Solution
{
    public:
        int maxs(int n, vector<int>&dp){
            if(n == 0) return 0;
            
            if( dp[n] != -1){
                return dp[n];
            }
            
            int curmax = maxs(n/2, dp) + maxs(n/3, dp) + maxs(n/4, dp);
            return dp[n] = max(curmax, n);
        }
        int maxSum(int n)
        {
            vector<int>dp(n+1, -1);
            return maxs(n, dp);
        }
};
 
int main()
{
    int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    

    return 0;
} 