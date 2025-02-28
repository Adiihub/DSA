#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool solve(int i, int n){
            if(pow(4, i) == n){
                return true;
    
            }
            if(pow(4, i) > n){
                return false;
            }
            return solve(i+1, n);
        }
        bool isPowerOfFour(int n) {
            return n>0 && solve(0, n);
        }
    };