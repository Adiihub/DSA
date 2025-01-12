#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subset(vector<int>&arr, int index, int n, int target, vector<int>&temp, vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || index == n){
            return;
        }
        subset(arr, index+1, n, target, temp, ans);
        temp.push_back(arr[index]);
        subset(arr, index, n, target-arr[index], temp, ans);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int>temp;
        vector<vector<int>>ans;
        subset(candidates, 0, n, target, temp, ans);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<vector<int>> ans = s.combinationSum(candidates, target);
    cout<<"[";
    for(int i=0; i<ans.size(); i++){
        cout<<"{";
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
    }
    cout<<"]";


    return 0;
}