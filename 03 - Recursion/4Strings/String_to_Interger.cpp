#include<bits/stdc++.h>
using namespace std;

int string_to_int(string s,int n){
    if(n==0)
        return 0;
    int ld=s[n-1]-'0';
    //int CA=string_to_int(s,n-1);
    return string_to_int(s,n-1)*10+ld;
}

void converSTInt(string s, int i, int n, int &res){
    if(i == n){
        return;
    }
    res = res * 10 + s[i] - '0';
    converSTInt(s, i+1, n,  res);
}

int main(){
    string s="1023";
    cin>>s;
    int n=s.size();
    int res = 0;
    cout<<string_to_int(s,n)<<endl;
    return 0;
}