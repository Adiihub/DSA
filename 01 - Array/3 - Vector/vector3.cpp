#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec(5);
    for(int i=0; i<5; i++){
        cin>>vec[i];
    }
    for(int i=0; i<5; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    sort(vec.begin(), vec.end());  //for sorting in ascending order
    reverse(vec.begin(), vec.end()) // for reversing the vector

    for(int i=0; i<5; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}