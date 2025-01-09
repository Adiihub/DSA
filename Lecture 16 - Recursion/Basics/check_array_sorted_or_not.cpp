#include<bits/stdc++.h>
using namespace std;
bool is_Sorted(int a[],int n){
    if(n==1)
        return true;
    
    //bool isSmallerSorted=is_Sorted(a+1,n-1);
    return (a[0]<=a[1]) && is_Sorted(a+1,n-1);
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<is_Sorted(a,n)<<endl;
    return 0;
}