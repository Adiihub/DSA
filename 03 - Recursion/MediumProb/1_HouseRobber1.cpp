#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int hrob(vector<int>&nums, int i, int n, vector<int>&dp){
            if(i >= n){
                return 0;
            }
            if(dp[i] != -1){
                return dp[i];
            }
            int sum1 = nums[i] + hrob(nums, i+2, n, dp);
            int sum2 = hrob(nums, i+1, n, dp);
            dp[i] = max(sum1, sum2);
            return dp[i];
        }
        int rob(vector<int>& nums) {
            int n = nums.size();
            vector<int>dp(n+1, -1);
            return hrob(nums, 0, n, dp);
        }
    };