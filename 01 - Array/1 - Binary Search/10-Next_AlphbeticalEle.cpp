#include <iostream>
#include <vector>

char nextAlphabet(const std::vector<char>& arr, char target) {
    int low = 0, high = arr.size() - 1;
    char result = '\0';  

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            result = arr[mid]; // Potential answer
            high = mid - 1;    // Search in the left half
        } else {
            low = mid + 1; // Search in the right half
        }
    }

    return result; // Returns '\0' if no valid character is found
}

int main() {
    std::vector<char> arr = {'a', 'c', 'f', 'h'};
    char target = 'b';
    
    char nextChar = nextAlphabet(arr, target);
    if (nextChar != '\0')
        std::cout << "Next alphabetical element: " << nextChar << std::endl;
    else
        std::cout << "No next alphabetical element found." << std::endl;
    
    return 0;
}
