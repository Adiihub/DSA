#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string str, int s, int e){
    if(s > e){
        return 1;
    }
    if(str[s] != str[e]){
        return 0;
    }
    return checkpalindrome(str, s+1, e-1);
}

int cvowel(string str, int i, int n, int sum){
    if(n == i){
        return sum;
    }
    if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        sum++;
    }
    return cvowel(str, i+1, n, sum);

}

int main(){
    string str = "abba";
    int s = 0, e = str.length()-1;
    // cout << checkpalindrome(str, s, e) << endl;

    string strr = "abcdojsi";
    int n = strr.length();
    cout<< cvowel(strr, 0, n, 0);

    return 0;
}