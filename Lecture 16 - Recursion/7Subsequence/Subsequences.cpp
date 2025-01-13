#include<bits/stdc++.h>
using namespace std;
void solve(string& s,int i,string output ){
    int n=s.size();
    // base case
    if(i==n){
        cout<<output<<endl;
        return;
    }
    //exclude karke ith char ko
    solve(s,i+1,output);
    // include karke ith char ko
    solve(s,i+1,output+s[i]);
}
int main(){
    string s="abc";
    solve(s,0,"");
    return 0;
    
}