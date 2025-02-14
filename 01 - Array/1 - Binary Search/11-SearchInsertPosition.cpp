#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
        int s=0, end=nums.size()-1;
    
        // if(target > end){
        //     return end+1;
        // }
        // if(target < nums[s]){
        //     return s;
        // }
        while(s<=end){
            int mid = s+(end - s)/2;
            if(target == nums[mid]){
                return mid;
            }
            if(target < nums[mid]){
                end = mid -1;
    
            }
            else{
                s = mid+1;            
            }
        }
        return s;
        }
    };