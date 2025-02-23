#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string reverseWords(string s) {
            stack<string> st;
            
            string temp = "";
            for(int i=0; i<s.size(); i++){
                if(s[i] != ' '){
                    
                    temp += s[i];
           
                }
                else{
                    if(temp.size() > 0){
                        st.push(temp);
                        temp = "";
                    }
                }
            }
            s.clear();
            if(temp.size() > 0){
                st.push(temp);
            }
            while(!st.empty()){
                s += st.top();
                st.pop();
                s += ' ';
            }
            s.pop_back();
            return s;
            
        }
    };