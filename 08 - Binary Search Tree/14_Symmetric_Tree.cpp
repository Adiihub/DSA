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

class Solution {
public:
    bool solve(node* r1, node* r2){
    
        if(r1 == NULL && r2 == NULL)
            return true;
        if( !r1 || !r2 )
            return false;

        bool ans1 = solve(r1 -> left, r2-> right);
        bool ans2 = solve(r1 -> right, r2-> left);
        if(ans1 && ans2 && r1-> data == r2 -> data)
            return true;
        return false;
    }
    bool isSymmetric(node* root) {
        if(!root) return true;
        return solve(root-> left, root -> right);
    }
};


int main(){
    node*root=BuildTree();
    

    return 0;
}