#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            int n = s.size();
            int ans = 0 ;
            unordered_map<char,int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    
            for(int i=0 ; i<n ; i++){
                if(i+1<n && m[s[i]] < m[s[i+1]]){
                    ans -= m[s[i]];
                }
                else ans += m[s[i]];
            }
            return ans;
            
        }
    };
    