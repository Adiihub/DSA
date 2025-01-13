#include<bits/stdc++.h>
using namespace std;

void NGR(vector<int> &a , int n){
    stack<int> s;
    vector<int> ans(n);
    s.push(n-1);
    // s.push(a[n-1]);
    ans[n-1] = -1;

    for(int i = n-2; i>=0; i--){
        while(!s.empty() && a[s.top()] <= a[i]){
            s.pop();
        }
        ans[i] = s.empty() ? -1 : a[s.top()];
        s.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    NGR(a,n);

    return 0;
}