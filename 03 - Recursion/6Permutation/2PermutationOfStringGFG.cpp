#include <bits/stdc++.h>
using namespace std;
 
class Solution {
  public:
    void permu(string &s, int index, int n, set<string>&ans){
        if(index == n){
            ans.insert(s);
            return;
        }
        for(int i=index; i<n; i++){
            swap(s[i], s[index]);
            permu(s, index+1, n, ans);
            swap(s[i], s[index]);
        }
    }
    vector<string> findPermutation(string &s) {
        int n = s.size();
        set<string>ans;
        permu(s, 0, n, ans);
        vector<string> res(ans.begin(), ans.end());
        return res;
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
} 