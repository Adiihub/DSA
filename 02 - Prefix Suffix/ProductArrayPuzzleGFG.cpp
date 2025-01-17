#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n, 1), right(n, 1), ans(n, 1);

        // Build the left product array
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * arr[i - 1];
        }

        // Build the right product array
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * arr[i + 1];
        }

        // Build the answer array by multiplying left and right
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};
 
int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
} 