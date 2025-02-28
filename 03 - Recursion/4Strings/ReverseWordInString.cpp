#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<string> words;
    string word, res;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                reverse(word.begin(), word.end());
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        reverse(word.begin(), word.end());
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        if (i > 0) res += " ";
        res += words[i];
    }

    cout << res << endl;
    
    return 0;
}
