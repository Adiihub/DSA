#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    // base 
    if(n==0)
        return 1;
    // recursion
    // recurrence relation
    //int smallerAns=fact(n-1);
    //int BiggerAns=n*fact(n-1);
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}