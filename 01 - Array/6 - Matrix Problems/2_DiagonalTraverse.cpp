#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
            int n = mat.size();
            int m = mat[0].size();
    
            map<int, vector<int>> mp;
            vector<int> res;
    
            // Fill Map Using [i+j]
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    mp[i+j].push_back(mat[i][j]);
                }
            }
    
            bool flip = true;
            for(auto &it : mp){
                if(flip){
                    // it.second ko reverse krdo
                    reverse(it.second.begin(), it.second.end());
                }
    
                for(int &num : it.second){
                    res.push_back(num);
                }
    
                flip = !flip;
            }
            return res;
        }
    };
    