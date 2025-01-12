#include<bits/stdc++.h>
using namespace std;
void print(int n){
    // base case 
    // n->0 ruk jao
    if(n==0)
        return ;
    
    cout<<n<<" ";
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
    return  0;
}