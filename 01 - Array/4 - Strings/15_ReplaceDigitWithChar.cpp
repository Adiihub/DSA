#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        char shift(char c, int i){
            return c+i;
        }
        string replaceDigits(string s) {
            int n=s.length();
            string res;
    
            for(int i=0; i<n-1; i+=2){
                res += s[i];
                res += shift(s[i], (s[i+1] - '0'));
            }
    
            if(n%2 != 0){
                res += s[n-1];
            }
            return res;
        }
    };