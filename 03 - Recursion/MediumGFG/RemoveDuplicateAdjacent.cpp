// Given a string s, remove all its adjacent duplicate characters recursively, until there are no adjacent duplicate characters left.
 
#include <bits/stdc++.h>
using namespace std;
 
class Solution {
  public:
    string solve(string &s){
        
        if(s.length() <= 0){
            return s;
        }
        
        string result = "";
        
        for(int i=0; i<s.length(); i++){
            if(i < s.length()-1 && s[i] == s[i+1]){
                while(i < s.length()-1 && s[i] == s[i+1]){
                    i++;
                }
            }
            else{
                result += s[i];
            }
        }
        if(result == s){
            return s;
        }
        
        return solve(result);
    }
    string removeUtil(string &s) {
        return solve(s);
    }
};
 
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        s = ob.removeUtil(s);
        if (s.size() == 0)
            cout << "\"\"";
        else
            cout << s << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
 