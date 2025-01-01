#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            um[nums[i]]++;
        }
        int len = 0;
        for(int i=0; i<n; i++){
            int start = nums[i];
            if(um.count(start -1) == 0){
                int cnt = 0;
                while(um.count(start)){
                    cnt++;
                    start += 1;
                }
                if(cnt > len){
                    len = cnt;
                }
            }
        }
        return len;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    Solution s;
    cout<<s.longestConsecutive(arr)<<endl;


    return 0;
}