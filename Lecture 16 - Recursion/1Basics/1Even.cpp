#include<bits/stdc++.h>
using namespace std;

void printEven(int n){
    if(n==2){
        cout<<n<<" ";
        return;
    }
    printEven(n-2);
    cout<<n<<" ";
}

void printEven2(int n, int e){
    if(n > e){
        return;
    }
    cout<<n<<" ";
    printEven2(n+2, e);
}

int main(){
    int n=11;
    if(n%2== 1){
        n--;
    }
    printEven(n);
    cout<<endl;
    printEven2(2, 17);


    return 0;
}