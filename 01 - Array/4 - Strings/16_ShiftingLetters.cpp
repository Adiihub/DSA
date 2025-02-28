#include <iostream>
#include <vector>
using namespace std;

// Input: s = "abc", shifts = [3,5,9]
// Output: "rpl"

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        long long totalShift = 0;

        // Traverse from right to left, accumulating shifts
        for (int i = n - 1; i >= 0; i--) {
            totalShift = (totalShift + shifts[i]) % 26; // Keep within valid range
            s[i] = 'a' + (s[i] - 'a' + totalShift) % 26; // Apply shift
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s = "abc";
    vector<int> shifts = {3, 5, 9};
    cout << "Result: " << sol.shiftingLetters(s, shifts) << endl;
    return 0;
}
