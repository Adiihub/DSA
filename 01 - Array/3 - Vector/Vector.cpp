#include<iostream>
#include<vector>
using namespace std;

int main(){

    //declare a vector
    vector<int> nums;
    for(int i=10; i<=15; i++){
        
        // to push element in a vector
        nums.push_back(i);
        cout<<"Size : "<<nums.size()<<"\t";
        cout<<"Capacity : "<<nums.capacity();
        cout<<endl;
    }
    
    //to check last element entered
    cout<<nums.back()<<endl;

    return 0;
}