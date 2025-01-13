#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> ans;
        map<int,int> um;
        priority_queue<pair<int, int>> pq;

        for(int i=0; i<n; i++){
            um[nums[i]]+=1;
        }
        int c=0;
        for(auto it: um ){
            pq.push({-it.second, it.first});
            if (pq.size() > k) {
                pq.pop();
            } 
        }
        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n; i++)}{
        cin>>nums[i];
    }


    return 0;
}