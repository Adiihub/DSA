#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int *a;
        int f;
        int e;
        int cs; // current size of queue
        int n; // capacity of queue
    public:
    Queue(int size){
        a = new int[size]; 
        n = size;
        f = 0;
        e = size - 1;
        cs = 0;
    }

    void push(int data){
        if(cs < n){
            // move e
            e = (e+1) %n;
            a[e] = data;
            cs ++;
        }
        else{
            cout << "Queue is full" << endl;
        }
    }

    void pop(){
        if(cs < 0){
            cout << "Queue is empty" << endl;
        }
        else{
            // f ko aage move kr do
            f = (f+1) %n;
            cs --;
        }
    }

    int front(){
        if(cs == 0){
            cout<<"Under flow";
            return -1;
        }
        return a[f];
    }

    bool empty(){
        return cs == 0;
    }

    int size(){
        return cs;
    }
};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<"Size of Queue that is (how many elements in queue) : "<<q.size()<<endl;
    cout<<"Front element of Queue : "<<q.front()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}