#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void solve(string &s, int &n){
            //cuz constraints me diya h ki 3se upr string ka size hoga
            if(n == 2){  
                return;
            }
            string res;
            for(int i=0; i<n-1; i++){
                int ch1 = s[i] - '0';
                int ch2 = s[i+1] - '0';
    
                int val = (ch1 + ch2) % 10;
                res += to_string(val);
            }
            s = res;
            n = res.length();
            solve(s, n);
            return;
        }
        bool hasSameDigits(string s) {
            int n = s.length();
            solve(s, n);
            return s[0] == s[1];
        }
    }