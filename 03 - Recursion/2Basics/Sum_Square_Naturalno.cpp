#include<bits/stdc++.h>
using namespace std;

int SumofSquareofNaturalNo(int n){
    if(n==1){
        return 1;
    }
    return n*n + SumofSquareofNaturalNo(n-1);
}

int main(){
    int n = 4;
    cout<<SumofSquareofNaturalNo(n)<<endl;

    return 0;
}