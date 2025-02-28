#include<bits/stdc++.h>
using namespace std;

//syntax: pair<datatype, datatype> p;

int main(){

    pair<int, int>p(500, 200);
    pair<int, int> p;
    p = make_pair(22, 42);
    p.first= 10;
    p.second = 101;

    // pair<string, int> p;
    // p= make_pair("BMW", 12);

    // cout<<"First: "<<p.first<<endl;
    // cout<<"Second: "<<p.second<<endl;

    pair<string, pair<float, int> >pr;
    pr.first= "BMW";
    pr.second.first= 10.11;
    pr.second.second= 12;

    cout<<pr.first<<endl;
    cout<<pr.second.first<<endl;
    cout<<pr.second.second<<endl;
}