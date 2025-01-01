#include<bits/stdc++.h>
using namespace std;
int Binary_Search_rec(int a[],int s,int e,int target){
    // base case
    if(s>e)
        return false;
    
    // ye mera kaam
    int mid=(s+e)/2;
    
    if(a[mid]==target)
        return true;
    // recursion
    if(a[mid]>target)
        return Binary_Search_rec(a,s,mid-1,target);
    else if(a[mid]<target)
        return Binary_Search_rec(a,mid+1,e,target);
}
int main(){
    int a[]={1,2,3,8,9,12,15};
    int n=sizeof(a)/sizeof(int);
    int target=5;
    if(Binary_Search_rec(a,0,n-1,target)){
        cout<<"yes, found target!!!"<<endl;
    }else{
        cout<<"Couldn't, found target!!!"<<endl;
    }
    return 0;
}