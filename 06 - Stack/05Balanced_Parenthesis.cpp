#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(!st.empty() && s[i]==']' && st.top()=='[')
                st.pop();
            else if(!st.empty() && s[i]==')' && st.top()=='(')
                st.pop();
            else if(!st.empty() && s[i]=='}' && st.top()=='{')
                st.pop();
            else 
                return false;
        }
        return st.empty();
    }

int main(){
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
    return 0;
}