#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> workingKeys;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && s[i] == s[i + 1]) {
            i++;  // Skip the next character as it's part of a malfunctioning key
        } else {
            workingKeys.insert(s[i]);
        }
    }
    
    string str(workingKeys.begin(), workingKeys.end());
    cout << str << endl;
    return 0;
}
