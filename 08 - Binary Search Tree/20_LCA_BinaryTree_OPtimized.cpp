#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* BulidTreeLevelOrder( ){
    queue<Node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    Node* root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter data for left Node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new Node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right Node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new Node(rightdata);
            q.push(temp -> left);
        }
    }
}

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(!root) return NULL;

        if(root == p || root == q){
            return root;
        }

        Node* lst = lowestCommonAncestor(root->left, p, q);
        Node* rst = lowestCommonAncestor(root->right, p, q);

        if(lst && rst){
            return root;
        }
        else if(lst){
            return lst;
        }
        else if(rst){
            return rst;
        }
        return NULL;
    }

Node* input(){
    int data;
    cin>>data;
    if(data == -1) return NULL;
    Node* root = new Node(data);
    return root;
}
int main(){
    Node* root = BulidTreeLevelOrder();
    Node* p = input();
    Node* q = input();
    Node* res = lowestCommonAncestor(root, p, q);
    cout<<res -> data<<endl;

    return 0;
}
