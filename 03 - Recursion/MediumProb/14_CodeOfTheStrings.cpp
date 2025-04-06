#include <bits/stdc++.h>
using namespace std;

vector<string> result;  

void findCodes(string s, int index, string current) {
    if (index == s.length()) {
        result.push_back(current);
        return;
    }

    // Take one character at a time
    int num1 = s[index] - '0';  
    if (num1 >= 1 && num1 <= 9) {  
        findCodes(s, index + 1, current + char('a' + num1 - 1));
    }

    // Take two characters at a time (only if within range 10-26)
    if (index + 1 < s.length()) {
        int num2 = stoi(s.substr(index, 2)); 
        if (num2 >= 10 && num2 <= 26) {
            findCodes(s, index + 2, current + char('a' + num2 - 1));
        }
    }
}

int main() {
    string s; // "123"
    cin >> s;

    findCodes(s, 0, "");

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
