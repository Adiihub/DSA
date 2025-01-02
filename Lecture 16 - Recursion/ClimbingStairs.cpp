#include<bits/stdc++.h>
using namespace std;

int staircase(int n){
    if(n==0){
        return 1;
    }
    if(n<1){
        return 0;
    }
    return staircase(n-1)+staircase(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<staircase(n);

}