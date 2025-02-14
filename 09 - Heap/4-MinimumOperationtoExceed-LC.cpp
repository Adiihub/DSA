// You are given a 0-indexed integer array nums, and an integer k.

// You are allowed to perform some operations on nums, where in a single operation, you can:

// Select the two smallest integers x and y from nums.
// Remove x and y from nums.
// Insert (min(x, y) * 2 + max(x, y)) at any position in the array.
// Note that you can only apply the described operation if nums contains at least two elements.

// Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.

 #include<bits/stdc++.h>
 using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long long,vector<long long>,greater<long long>> pq;
            for(auto i:nums) pq.push(i);
            int ans = 0;
            while(!pq.empty() && pq.top()<k){
                long long x = pq.top();
                pq.pop();
                long long y = pq.top();
                pq.pop();
                pq.push(min(x, y) * 2 + max(x, y));
                ans++;
            }   
            return ans;
        }
    };