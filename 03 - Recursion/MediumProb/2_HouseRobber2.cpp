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
            if(n == 1) return nums[0]; // Only one house
    
            // Case 1: Rob from house 0 to n-2 (excluding last house)
            vector<int>dp(n+1, -1);
            int max1 = hrob(nums, 0, n-1, dp);
    
             // Case 2: Rob from house 1 to n-1 (excluding first house)
            vector<int>dp2(n+1, -1);
            int max2 = hrob(nums, 1, n, dp2);
            return max(max1, max2);
        }
    };