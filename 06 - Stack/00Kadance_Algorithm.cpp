#include<bits/stdc++.h>
using namespace std;

int kadanes(vector<int>&a,int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(maxSum<currSum){
            maxSum=currSum;
        }

        if(currSum<0){
            currSum=0;
        }
    }

    return maxSum;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<kadanes(a,n)<<endl;
    return 0;
}