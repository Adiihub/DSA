#include <iostream>
#include <vector>
using namespace std;

// Approach:
// Since every element appears twice except for one, the array can be divided into pairs.
// The unique element must be in the half where the first occurrence of a pair appears at an odd index (0-based).

int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Ensure mid is even (if odd, move back to make it even)
        if (mid % 2 == 1) {
            mid--;
        }
        
        // If the pair matches, move right half
        if (nums[mid] == nums[mid + 1]) {
            left = mid + 2;
        } else {
            right = mid;
        }
    }
    
    return nums[left]; // The unique element
}

int main() {
    vector<int> nums1 = {1,1,2,3,3,4,4,8,8};
    vector<int> nums2 = {3,3,7,7,10,11,11};

    cout << "Output 1: " << singleNonDuplicate(nums1) << endl;
    cout << "Output 2: " << singleNonDuplicate(nums2) << endl;

    return 0;
}
