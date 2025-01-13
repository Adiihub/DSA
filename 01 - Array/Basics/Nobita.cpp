#include <bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin>>t;
   while(t--){
       int x,n;
       cin>>x>>n;
       int remaining=x%n;
       int take=n-remaining;
       int ans=min(remaining,take);

       cout<<ans<<endl;
   }
return 0;
}