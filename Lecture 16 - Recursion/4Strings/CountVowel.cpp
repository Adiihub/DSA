#include<bits/stdc++.h>
using namespace std;
 

int cvowel(string str, int i, int n, int sum){
    if(n == i){
        return sum;
    }
    if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        sum++;
    }
    return cvowel(str, i+1, n, sum);
}

int countv(string str, int i){
    if(i == -1){
        return 0;
    }
    if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        return 1 + countv(str, i-1);
    }
    else{
        return countv(str, i-1);
    }
}

int main(){
     
    string strr = "abcdojsi";
    int n = strr.length();
    cout<< cvowel(strr, 0, n, 0) << endl;

    cout<<countv(strr, n-1);

    return 0;
}