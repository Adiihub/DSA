#include<bits/stdc++.h>
using namespace std;
void BubbleSort_rec(int a[],int n,int i){
    // base case
    if(i==1)
        return;
    // ek element ko sahi jagah pe me pahucha deta hu
    for(int j=0;j<i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    // bakiyo ke liye recursion hai
    BubbleSort_rec(a,n,i-1);

}
int main(){
    int a[]={4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    BubbleSort_rec(a,n,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}