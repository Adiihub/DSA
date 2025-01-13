#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

node* InsertBST(node* root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root->data){
        // data jo h wo root ke data se chota h
        root->left = InsertBST(root->left, data);
    }
    else{
        // data jo h wo root ke data se bada h
        root->right = InsertBST(root->right, data);
    }
}

node* createBST(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = NULL;
    if(data != -1){
        root = new node(data);
        cin>>data;
    }
    return root;
}

void preOrder(node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(node* root){
    if(!root) return;
    InOrder(root->left);
    cout<<root->data<<" "; // INOrder hamesha shorted order me hi print krta hai
    InOrder(root->right);
}

void postOrder(node* root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void printAtoB(node* root, int a, int b) {
    if (!root) return;

    if (root->data > a) {
        printAtoB(root->left, a, b);
    }

    if (root->data >= a && root->data <= b) {
        cout << root->data << " ";
    }
    if (root->data < b) {
        printAtoB(root->right, a, b);
    }
}

int main(){
    node* root = createBST();
    cout<<"Pre Order"<<endl;
    preOrder(root);
    cout<<endl;

    int a, b;
    cin>>a>>b;
    printAtoB(root, a,b);

    // cout<<"In Order"<<endl;
    // InOrder(root);
    // cout<<endl;
    
    // cout<<"Post Order"<<endl;
    // postOrder(root);
    // cout<<endl;
  
    return 0;
}