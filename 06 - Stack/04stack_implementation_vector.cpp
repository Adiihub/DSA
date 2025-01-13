#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        vector<int> vec;
    public:
        //push
        void push(int data){
            vec.push_back(data);
            return;
        }

        //pop
        void pop(){
            if(vec.size()==0){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            vec.pop_back();
            return;
        }

        //top
        int top(){
            if(vec.size()==0){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return vec[vec.size()-1];
        }

        //empty
        bool empty(){
            if(vec.size()==0){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    Stack s;
    //push
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    //top
    cout<<s.top()<<endl;

    //empty
    if(s.empty()==false){
        cout<<"Stack is not empty"<<endl;
    }else{
        cout<<"Stack is empty"<<endl;
    }

    //pop
    s.pop();

    return 0;
}