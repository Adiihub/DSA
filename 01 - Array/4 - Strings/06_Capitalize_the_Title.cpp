#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string capitalizeTitle(string title) {
            string res = "";
            string temp = "";
            int n = title.size();
            
            for (int i = 0; i < n; i++) {
                if (title[i] == ' ') {
                    int len = temp.size();
                    if (len > 0) {
                        if (len <= 2) {
                            // Make all letters lowercase for words of length 1 or 2.
                            for (int j = 0; j < len; j++) {
                                temp[j] = tolower(temp[j]);
                            }
                        } else {
                            // Capitalize the first letter and make the rest lowercase for longer words.
                            temp[0] = toupper(temp[0]);
                            for (int j = 1; j < len; j++) {
                                temp[j] = tolower(temp[j]);
                            }
                        }
                        res += temp;
                        res.push_back(' '); // add the space back after the word
                    }
                    temp = "";
                } else {
                    temp.push_back(title[i]);
                }
            }
            
            // Process the last word (if any) after the loop
            if (!temp.empty()) {
                int len = temp.size();
                if (len <= 2) {
                    for (int j = 0; j < len; j++) {
                        temp[j] = tolower(temp[j]);
                    }
                } else {
                    temp[0] = toupper(temp[0]);
                    for (int j = 1; j < len; j++) {
                        temp[j] = tolower(temp[j]);
                    }
                }
                res += temp;
            }
            
            return res;
        }
    };
    