#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Important Functions
// 1) nums.push_back();
// 2) nums.size();
// 3) nums.resize();
// 4) nums. back();
// 5) nums.pop_back();
// 6) nums.capacity();

//if vector size not declare then it will be default as zero(0)

int main(){
    
    // declaration of vector
    vector<int> nums;
    // vector<int> nums(10);
    // vector<int> nums(10, -10);
    
    // Element Push krna h
    nums.push_back(10);
    nums.push_back(20);
    
    // size
    cout<<"Size : "<<nums.size()<<endl;
    
    //capacity
    cout<<"Capacity : "<<nums.capacity()<<endl;
    
    //print
    for(int i=0; i<nums.size(); i++){
         cout<<nums[i]<<" ";
    }
    
    // to remove -> pop_back();
    nums.pop_back();
    cout<<"Size : "<<nums.size()<<endl;
    cout<<"Capacity : "<<nums.capacity()<<endl;
    
    // to take input
    for(int i=0; i<nums.size(); i++){
         cin>>nums[i];
    
    vector<int> nums;
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    // to check empty or not -> nums.empty();
    cout<<nums.empty();

    // to clear-> to clear vector
    nums.clear();
    cout<<nums.empty()<<endl;

    // resize fun
    // nums.resize(10, -10); //1st value is for size & 2nd is for value

    // sort
    // sort(arr, arr+n)
    sort(nums.begin(),nums.end());

    return 0;
}