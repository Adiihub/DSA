// Min depth of Binary Tree
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
    if(data == -1){
        return NULL;
    }
    node*root=new node(data);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
};

int minDepth(node*root){
        if (root == NULL)
            return 0;
        if (root->left == NULL)
            return 1 + minDepth(root->right);
        if (root->right == NULL)
            return 1 + minDepth(root->left);

        int h1 = minDepth(root->left);
        int h2 = minDepth(root->right);

        return 1 + min(h1, h2);
}
            // Another method
// int solve(node* root){
//     if(root==NULL)
//     return INT_MAX;
//     if(root->left==NULL && root->right==NULL)
//     return 1;
//     return 1+ min(solve(root->left),solve(root->right));
// }
// int minDepth(node* root){
//     if(root==NULL)
//     return 0;
//     return solve(root);
// }

int main(){
    node* root = BuildTree();
    cout<<"Depth of Binary Tree: "<<minDepth(root);
    return 0;
}