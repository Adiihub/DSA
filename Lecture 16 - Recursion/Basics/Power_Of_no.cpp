#include <bits/stdc++.h>
using namespace std;


// Given a number n, find the value of n raised to the power of its own reverse.

class Solution {
  public:
    int power(int n, int p, int i){
        if(i == p){
            return 1;
        }
        return n * power(n, p, i+1);
    }
    int reverseExponentiation(int n) {
        int no =n;
        int rev = 0;
        while(n!=0){
            int ld = n%10;
            n=n/10;
            rev = rev*10+ld;
        }
        return power(no, rev, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
} 