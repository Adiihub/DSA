#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void solve(vector<int>& candidates, int index, int target,
                   vector<int>& temp, vector<vector<int>>& ans) { 
            if (target == 0) {
                ans.push_back(temp);
                return;
            }
    
            if (index >= candidates.size() || target < 0)
                return;
    
            temp.push_back(candidates[index]);
            solve(candidates, index + 1, target - candidates[index], temp,
                  ans);       
            temp.pop_back();  
    
            // Skip duplicate elements
            int nextIndex = index + 1;
            while (nextIndex < candidates.size() &&
                   candidates[nextIndex] == candidates[index]) {
                nextIndex++;
            }
    
            solve(candidates, nextIndex, target, temp, ans);
        }
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(), candidates.end());  
            vector<int> temp;
            vector<vector<int>> ans;
            solve(candidates, 0, target, temp, ans);
            return ans;
        }
    };
    