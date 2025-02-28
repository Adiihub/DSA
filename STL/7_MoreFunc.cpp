#include<bits/stdc++.h>
using namespace std;

void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // int a[]={1,2,3,4,5,6};
    // int n= sizeof(a)/sizeof(int);
    // printArray(a, n);
    // rotate(a, a+3, a+n);
    // reverse(a, a+n);
    // printArray(a, n);

    int a=10, b=20, c=30;
    // cout<<a<<" "<<b<<endl;
    // swap(a, b);
    // cout<<a<<" "<<b<<endl;

    cout<<min(a, min(b, c))<<endl;
    cout<<max(a, max(b, c))<<endl;

    return 0;
}