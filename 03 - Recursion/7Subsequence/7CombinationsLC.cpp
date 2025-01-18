#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve(int index, int n, int k, vector<int>& temp, vector<vector<int>>& ans) { 
         
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        // Iterate through the numbers from index to n
        for (int i = index; i <= n; i++) {
            temp.push_back(i);
            solve(i + 1, n, k, temp, ans); 
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) { 
        vector<int> temp;           
        vector<vector<int>> ans;  // Vector to store all combinations
        solve(1, n, k, temp, ans);  
        return ans;          
    }
};

int main() {
    Solution sol;
    int n, k;
    
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of k: ";
    cin >> k;

    vector<vector<int>> result = sol.combine(n, k);

    cout << "Combinations of " << k << " numbers from 1 to " << n << ":" << endl;
    for (const auto& combination : result) {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
