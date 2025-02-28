#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return a<=b;
}
int main(){
    int coins[]={1,2,5,10,20,50,100};
    int n= sizeof(coins)/sizeof(int);
    int money=50;

    while(money>0){
    int indx= lower_bound(coins, coins+n, money, compare)-coins-1;
    cout<<"we would give exchange of coin"<<coins[indx]<<endl;
    money== coins[indx];
    }
    return 0;
}