#include<bits/stdc++.h>
using  namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void print(int num){
    if(num==0)
        return ;
    
    int ld=num%10;
    print(num/10);
    cout<<arr[ld]<<" ";
}

int main(){
    int num=2048;
    // cin>>num;
    print(num);
    return 0;
}