#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    node(int v){
        val = v;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL:
    }
    node* root = new node(data);
    root -> left = BuildTree();
    root -> right = BuildTree();

    return root;
}
node* invertTree(node* root) {
    if(root == NULL) return 0;
    // root node(current root)
    swap(root -> left, root -> right);
    invertTree(root -> left);
    invertTree(root -> right);
    return root;
}

void print(node* root)

int main(){
    node* root = BuildTree();
    root = invertTree(root);


    return 0;
}
