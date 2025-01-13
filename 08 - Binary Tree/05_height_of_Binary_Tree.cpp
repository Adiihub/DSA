// Height of Binary Tree
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node*BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node*root=new node(data);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
};

int maxDepth(node* root) {
    if(root == NULL) 
        return 0;

    int lh = maxDepth(root -> left);
    int rh = maxDepth(root -> right);

    return 1 + max(lh,rh);
}

// Second Method

int height(node* root){
    if(root == NULL)
        return 0;
    return 1+ max(height(root->left),height(root->right));
};


int main(){
    node*root=BuildTree();
    cout<<"Height of Binary Tree: ";
    cout<<height(root);
    return 0;
}