#include<bits/stdc++.h>
using namespace std;
// syntax: binary search(start address, end address, key);
// it is used to ignore some part of the array
int main(){
    int a[]= {1,3,5,7,8,100};
    int n= sizeof(a)/sizeof(int);
    bool present= binary_search(a, a+n, 2);
    if(present== true){
        cout<<"key found"<<endl;
    }else{
        cout<<"key not found"<<endl;
    }
    return 0;
}