#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
    node(int data){
        this -> data = data;
        next = NULL;
    }
};

class Queue{
    private:
        node* head;
        node* tail;
        int cs;
    public:
        Queue(){
            head = NULL;
            tail = NULL;
            cs = 0;
        }
        void push(int data){
            if(head == NULL){
                node* n = new node(data);
                head = n;
                tail = n;
                cs++;
            }
            else{
                node* n = new node(data);
                tail -> next = n;
                tail = n;
                cs++;
            }
        }

        void pop(){
            if(head == NULL){
                cout<<"Underflow"<<endl;
            }
            else{
                node* temp = head;
                head = head -> next;
                delete temp;
            }
        }

        bool empty(){
            return head == NULL;
        }

        int size(){
            return cs;
        }

        int front(){
            if(head == NULL){
                cout<<"Underflow"<<endl;
                return -1;
            }
            return head -> data;
        }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}