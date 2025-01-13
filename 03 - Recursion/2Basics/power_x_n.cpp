#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    // base case
    if(n==0)
        return 1;
    // recursion
    return x*power(x,n-1);
}

// Power of 2
int pow(int n){
    if(n==1){
        return 2;
    }
    return 2 * pow(n-1);
}

int main(){
    int n=3,x=2;
    cout<<power(x,n)<<endl;
    cout<<pow(n)<<endl;
    return 0;
}