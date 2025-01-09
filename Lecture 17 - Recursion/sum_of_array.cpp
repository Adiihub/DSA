#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n){
    // base case 
    if(n==0)
        return 0;
    // chota answer
   // int CA=sum(a+1,n-1);
    //int BadaAns=a[0]+sum(a+1,n-1);
    return a[0]+sum(a+1,n-1);
}
// using iterator
int sum2(int a[],int n,int i){
    // base case
    if(i==n)
        return 0;
    // chhota ans
    //int CA=sum2(a,n,i+1);
    //int BadaAns=a[i]+sum2(a,n,i+1);
    return a[i]+sum2(a,n,i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<sum(a,n)<<endl;
    cout<<sum2(a,n,0)<<endl;
    return 0;
}