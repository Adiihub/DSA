#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            um[nums1[i]]++;
        }
        vector<int>ans;
        for(int j=0; j<m; j++){
            if(um[nums2[j]] >= 1){
                ans.push_back(nums2[j]);
                um[nums2[j]] = 0;
            }
        }
        
        return ans;
    }
};
int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int>nums1(n);
    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }

    int m;
    cin>>m;
    vector<int> nums2(m);
    for(int j=0; j<m; j++){
        cin>>nums2[j];
    }
    vector<int> result;
    result = sol.intersection(nums1, nums2);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}