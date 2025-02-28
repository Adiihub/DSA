#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3};
    int n= sizeof(a)/sizeof(int);

   next_permutation(a, a+n);
   
   for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
   }
    return 0;
}