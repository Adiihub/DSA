#include <bits/stdc++.h>
using namespace std;
 
class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteM(stack<int>& s, int n, int mid){
        if(n == mid){
            s.pop();
            return;
        }
        int topEle = s.top();
        s.pop();
        deleteM(s, n-1, mid);
        s.push(topEle);
        
    }
    void deleteMid(stack<int>& s) {
        int mid = (s.size()+1)/2;
        deleteM(s, s.size(), mid);
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
 