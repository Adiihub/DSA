#include<bits/stdc++.h>
using namespace std;

Class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            data -> d;
            next -> NULL;
        }
};

class Stack{
    private:
        Node* head;
    public:
        Stack(){  // Constructor calls only once in the whole program
            head = NULL;
        }
        //push
        void push(int data){
           Node* n = new Node(data);
           n -> next = head;
           head = n;
        }

        //top
        int top(){
            if(head == NULL){
                cout<<"Kya tapleek hai bhai"<<endl;
                return -1;
            }
            return head->data;
        }

        //pop
        int pop(){
            if(head == NULL){
                cout<<"Kya tapleek hai bhai"<<endl;
            }
            Node* n = head;
            head = head -> next;
            delete n;
        }
            
        bool empty(){
           return head = NULL;
        }
};

int main(){
    Stack s;
    //push
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    

    return 0;
}