#include<bits/stdc++.h>
using namespace std;

void permutations(string& s,int i,int n){
    // base case
    if(i==n){
        cout<<s<<endl;
    }
    // to generate all the permutation
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutations(s,i+1,n);
        // backtrack
        swap(s[j],s[i]);
    }
}
int main(){
    string s="abc";
    int n=s.size();
    permutations(s,0,n);
    return 0;
}