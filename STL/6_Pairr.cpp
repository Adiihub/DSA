#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int>p1;  // declaration
    p1 = {1000,2000}; // assign value
    // acess->first, second
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string , int>p2 ={"abc",101};
    cout<<p2.first<<" "<<p2.second<<endl;

    vector<pair<int , int> >vp;
    vp = {{1,2},{2,4},{101,102}};
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    stack<pair<int , int>>sp;
    return 0;
}