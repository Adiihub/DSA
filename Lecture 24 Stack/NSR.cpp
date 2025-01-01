#include<bits/stdc++.h>
using namespace std;

void NSL(vector<int> &a , int n){
    stack<int>s;
    vector<int>ans(n);
    ans[0] = -1;
    s.push(a[0]);
 
    for(int i=1; i<n; i++){
        while(!s.empty() && s.top() >= a[i]){
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(a[i]);
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
    NSL(a,n);

    return 0;
}