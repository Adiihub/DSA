#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public: // anagrams means permutations of string
    vector<vector<string>> groupAnagrams(vector<string>& vs) {
        unordered_map<string, vector<string>> um;
        int n = vs.size();
        for(int i=0; i<n; i++){
            string temp = vs[i];
            sort(temp.begin(), temp.end());
            um[temp].push_back(vs[i]);
        }
        vector<vector<string>> ans;
        for(auto it : um){
            vector<string> v = it.second;
            ans.push_back(v);
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<string> vs(n);
    for(int i=0; i<n; i++){
        cin>>vs[i];
    }
    Solution s;
    vector<vector<string>> ans = s.groupAnagrams(vs);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
    }

    return 0;
}