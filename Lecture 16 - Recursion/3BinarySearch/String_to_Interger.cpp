#include<bits/stdc++.h>
using namespace std;
int string_to_int(string s,int n){
    if(n==0)
        return 0;
    int ld=s[n-1]-'0';
    //int CA=string_to_int(s,n-1);
    return string_to_int(s,n-1)*10+ld;
}
int main(){
    string s="1023";
    cin>>s;
    int n=s.size();
    cout<<string_to_int(s,n)<<endl;
    return 0;
}