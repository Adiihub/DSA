#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 0;
    for(int i=1; i<n/2; i++){ // n/2 cuz any perfect square no is less than its half value
        if(i*i==n){
            cout<<"yes";
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"no";
    }

    return 0;
}