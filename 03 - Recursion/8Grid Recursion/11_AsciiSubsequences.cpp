#include <iostream>
using namespace std;

// Function to print all ASCII subsequences and count them
void asciiSubsequences(string str, string output, int index, int &count) {
    if (index == str.length()) {
        cout << output << " ";
        count++;
        return;
    }

    // Exclude current character
    asciiSubsequences(str, output, index + 1, count);
    
    // Include current character
    asciiSubsequences(str, output + str[index], index + 1, count);
    
    // Include ASCII value of the character
    asciiSubsequences(str, output + to_string(int(str[index])), index + 1, count);
}

int main() {
    string str;
    cin >> str;

    int count = 0;
    asciiSubsequences(str, "", 0, count);
    
    cout << endl << count << endl;

    return 0;
}
