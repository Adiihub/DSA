#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count(int n, vector<int> &dp) {
        if (n <= 1) return 1; 
        if (dp[n] != -1) return dp[n]; 
        return dp[n] = count(n - 1, dp) + count(n - 2, dp); 
    }

    int countWays(int n) {
        vector<int> dp(n + 1, -1);
        return count(n, dp);
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl;
    }

    return 0;
}
