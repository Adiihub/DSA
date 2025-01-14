#include<bits/stdc++.h>
#include<vector>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSm = 0;
        int leftSm = 0;
        for(auto i : nums){ 
            totalSm += i;
        }
        for(int i=0; i<n; i++){
            totalSm -= nums[i];
            if(leftSm == totalSm){
                return i;
            }
            leftSm += nums[i];
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,7,5,1,9,2};
    cout<<s.pivotIndex(nums)<<endl;


    return 0;
}