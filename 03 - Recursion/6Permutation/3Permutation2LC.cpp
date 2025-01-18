#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    void permu(vector<int>& arr, int index, set<vector<int>>& ans) {
        if (index == arr.size()) {
            ans.insert(arr); // Insert the permutation into the set
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            swap(arr[index], arr[i]); // Swap current element with index
            permu(arr, index + 1, ans); // Recurse for the next index
            swap(arr[index], arr[i]); // Backtrack to restore original state
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans; // To store unique permutations
        permu(nums, 0, ans);
        vector<vector<int>> res(ans.begin(), ans.end()); // Convert set to vector
        return res;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 1, 2};

    // Get unique permutations
    vector<vector<int>> result = solution.permuteUnique(nums);

    // Print the results
    cout << "Unique Permutations:" << endl;
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
