#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        // Function to find index of the minimum element (pivot point)
        int findMinIndex(vector<int>& arr) {
            int low = 0, high = arr.size() - 1;
            while (low < high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] > arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            return low; // Pivot index (smallest element)
        }
    
        // Standard Binary Search
        int binarySearch(vector<int>& arr, int low, int high, int key) {
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == key) return mid;
                else if (arr[mid] < key) low = mid + 1;
                else high = mid - 1;
            }
            return -1;
        }
    
        // Function to search for target using pivot
        int search(vector<int>& arr, int key) {
            int n = arr.size();
            int minIdx = findMinIndex(arr); // Find pivot (minimum element index)
    
            // Perform binary search on the correct half
            if (key >= arr[minIdx] && key <= arr[n - 1]) {
                return binarySearch(arr, minIdx, n - 1, key);
            } else {
                return binarySearch(arr, 0, minIdx - 1, key);
            }
        }
    };


class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int lo=0 , hi=nums.size()-1;
            while(lo<=hi){
                int mid = lo + (hi - lo)/2;
                if(nums[mid] == target)
                    return mid;
    
                else if(nums[lo] <= nums[mid]){ //left half sorted
                    if(target >= nums[lo] && target <= nums[mid]){
                        //remove the right half
                        hi = mid -1;
                    }
                    else
                        lo = mid + 1; 
                }
    
                else{ // right half sorted
                    if(target >= nums[mid] && target <= nums[hi]){
                        //remove the left half
                        lo = mid + 1;
                    }
                    else
                        hi = mid - 1;
                }  
            }
            return -1;
        }
    };