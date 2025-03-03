#include<bits/stdc++.h>
using namespace std;
void reversed(string &s){   
    int n=s.length();
    int x=0;
    for(int i=0;i<n;i++){
        if( s[i]==' ' ){
            reverse(s.begin() + x,s.begin() + i);
            x= i+1;
        }
    }
}

int main(){
    string s="olleh si eman ehT ";  
    reversed(s);

    cout<<s<<" ";
     
return 0;
}