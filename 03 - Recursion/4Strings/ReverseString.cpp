#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int s, int e){
    if(s > e){
        return;
    }
    swap(str[s], str[e]);
    reverse(str, s+1, e-1);
}

int main(){
    string str = "aditi";
    int n = str.length();
    reverse(str, 0, n-1);
    cout<<str;

    return 0;
}