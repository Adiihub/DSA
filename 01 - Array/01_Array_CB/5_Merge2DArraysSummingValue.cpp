#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int m = nums1.size();
            int n = nums2.size();
            vector<vector<int>>ans;
    
            // 2Pointer Approach
            int i=0;
            int j=0;
    
            while(i < m && j < n){
                if(nums1[i][0] < nums2[j][0]){
                    ans.push_back(nums1[i]);
                    i++;
                }
                else if(nums2[j][0] < nums1[i][0]){
                    ans.push_back(nums2[j]);
                    j++;
                }
                else{
                    ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                    j++; i++;
                }
            }
    
            while(i<m){
                ans.push_back(nums1[i]);
                i++;
            }
            while(j<n){
                ans.push_back(nums2[j]);
                j++;
            }
    
            return ans;
            
            // By Map
            // map<int,int>mp; //took ordered map so it will automatically sorted
    
            // for(int i=0; i<m; i++){
            //     int id = nums1[i][0];
            //     int val = nums1[i][1];
    
            //     mp[id] += val;
            // }
    
            // for(int i=0; i<n; i++){
            //     int id = nums2[i][0];
            //     int val = nums2[i][1];
    
            //     mp[id] += val;
            // }
    
            // for(auto it : mp){
            //     ans.push_back({it.first, it.second});
            // }
            // return ans;
        }
    };