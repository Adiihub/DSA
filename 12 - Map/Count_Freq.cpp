#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mymap;
    for(int i=0; i<n; i++){
        mymap[arr[i]]+=1;
    }

    for(auto it : mymap){
        cout<<it.first<<": "<<it.second<<endl;
    }

    // Find Out Max freq of data
    int maxfreq = INT_MIN;
    int val;
    for(auto it : mymap){
        if(it.second > maxfreq){
            val = it.first;
            maxfreq = it.second;
        }
    }
    cout<<"max freq : "<<val<<endl;

    return 0;
}