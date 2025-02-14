#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find index of the minimum element (pivot point)
    int findMinIndex(vector<int> &arr)
    {
        int low = 0, high = arr.size() - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return low; // Pivot index (smallest element)
    }

    // Standard Binary Search
    int binarySearch(vector<int> &arr, int low, int high, int key)
    {
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    // Function to search for target using pivot
    int search(vector<int> &arr, int key)
    {
        int n = arr.size();
        int minIdx = findMinIndex(arr); // Find pivot (minimum element index)

        // Perform binary search on the correct half
        if (key >= arr[minIdx] && key <= arr[n - 1])
        {
            return binarySearch(arr, minIdx, n - 1, key);
        }
        else
        {
            return binarySearch(arr, 0, minIdx - 1, key);
        }
    }
};

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target)
                return mid;

            // Check if left half is sorted
            if (nums[lo] <= nums[mid])
            {
                if (target >= nums[lo] && target < nums[mid])
                {
                    hi = mid - 1; // Search in left half
                }
                else
                {
                    lo = mid + 1; // Search in right half
                }
            }
            // Otherwise, right half must be sorted
            else
            {
                if (target > nums[mid] && target <= nums[hi])
                {
                    lo = mid + 1; // Search in right half
                }
                else
                {
                    hi = mid - 1; // Search in left half
                }
            }
        }
        return -1; // Not found
    }
};

// Driver code
int main()
{
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(arr, target);
    cout << "Element found at index: " << index << endl; // Output: 4
    return 0;
}
