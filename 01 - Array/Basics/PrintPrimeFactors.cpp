#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    // if 2 is prime factor
    if(num%2==0){
        cout<<2<<",";
        while(num%2==0){
           // cout<<2<<",";
            num/=2;
        }
    }
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0){
            cout<<i<<",";
            while(num%i==0){
               // cout<<i<<",";
               num/=i;
            }
        }
    }

    if(num>1){
        cout<<num<<",";
    }



    return 0;
}