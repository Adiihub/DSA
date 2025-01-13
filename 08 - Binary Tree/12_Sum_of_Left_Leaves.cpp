// Height of Binary Tree
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){  
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    root -> left = BuildTree();
    root -> right = BuildTree();

    return root;
}

int Sum(node* root, string s){
    if(root == NULL) return 0;

    if(root -> left == NULL && root -> right == NULL){
        if(s == "left") return root -> data;
        return 0;
    }

    int lst = Sum(root -> left, "left");
    int rst = Sum(root -> right, "right");

    return lst + rst;
}

int sumOfLeftLeaves(node* root) {
    string s = "";
    return Sum(root, s);
}

int main(){
    node*root=BuildTree();
    cout<<"Sum of Left Leaves : "<<sumOfLeftLeaves(root);
    

    return 0;
}