//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numberOfWay(int n, vector<int>&dp){
        if(n == 1 || n == 2){
            return n;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = numberOfWay(n-1, dp) + numberOfWay(n-2, dp);
    }
    int numberOfWays(int n) {
        vector<int>dp(n+1, -1);
        return numberOfWay(n, dp);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;

        cin >> n;

        Solution ob;
        cout << ob.numberOfWays(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}