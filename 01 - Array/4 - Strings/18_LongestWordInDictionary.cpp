#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool solve(string words, unordered_set<string>& st){
            // loop starts from 1 because substr(0, 0) always returns "", which is unnecessary.
             for(int i=1;i<words.size();i++){ 
                // st.end() jo unordered_set ka ek invalid position hota hai
                if(st.find(words.substr(0,i)) == st.end()){ 
                    return false;  // If any prefix is missing, return false
                }
             }
             return true;
        }
        string longestWord(vector<string>& words) {
            int n = words.size();
            string result = "";
            sort(words.begin(),words.end()); //here i sort the words to maintain lexicographical order
           unordered_set<string> st;
           for(auto word: words){
              st.insert(word);
           }
           for(const string& word : words){
               if(solve(word,st)){
                  if(word.length() > result.length()){
                    result = word;
                  }
               }
           }
           return result;
        }
    };