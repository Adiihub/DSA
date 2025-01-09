#include<bits/stdc++.h>
using namespace std;

void lowerToUpper(string &str, int i){
    if(i == -1){
        return;
    }
    str[i] = 'A' + str[i] - 'a';
    lowerToUpper(str, i-1);
}

int main(){
    string str = "aditi";
    int n = str.length();
    lowerToUpper(str, n-1);
    cout<<str;

    return 0;
}