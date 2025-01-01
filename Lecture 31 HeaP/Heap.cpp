#include<bits/stdc++.h>
using namespace std;

int main(){
    // Max Heap/ Max Priority queue
    // declaration
    cout<<"max Heap"<<endl;
    priority_queue<int> pq;


    cout<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    pq.pop();
    cout<<pq.top()<<endl;

    // Min Priority queue / min Heap
    cout<<"Min Heap"<<endl;
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10);
    minpq.pop();
    

    return 0;
}