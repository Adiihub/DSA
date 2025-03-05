#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp; // Memoization table

    bool subsetSum(vector<int> &nums, int index, int target)
    {
        if (target == 0)
            return true;
        if (index < 0 || target < 0)
            return false;

        if (dp[index][target] != -1)
            return dp[index][target];

        // Include or exclude the current element
        bool include = subsetSum(nums, index - 1, target - nums[index]);
        bool exclude = subsetSum(nums, index - 1, target);

        return dp[index][target] = include || exclude;
    }

    bool canPartition(vector<int> &nums)
    {
        int total_sum = 0;
        for (int num : nums)
            total_sum += num;

        if (total_sum % 2 != 0)
            return false; // Odd sum cannot be split

        int target = total_sum / 2;
        int n = nums.size();

        // Initialize memoization table
        dp.assign(n, vector<int>(target + 1, -1));

        return subsetSum(nums, n - 1, target);
    }
};