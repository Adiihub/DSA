// Check the tree is identical or not
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
node*BuildTree(){
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node*root = new node(data);
    root->left = BuildTree();
    root->right = BuildTree();

    return root;
};
bool isSameTree(node* p , node* q){
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    bool l = isSameTree(p->left,q->left);
    bool r = isSameTree(p->right,q->right);
    if(p->data == q->data && l && r){
        return true;
    }
    return false;
}

// Another easy way
bool isSameTrees(node* p, node* q) {
        if(p == NULL || q == NULL) 
            return (p == q);

        if(p->data != q->data) return false;
        return isSameTrees(p -> left , q -> left) && isSameTrees(p -> right, q -> right);
}
int main(){
    node*p = BuildTree();
    node*q = BuildTree();
    if(isSameTree(p,q))
     cout<<"Identical Tree";
     else
     cout<<"Not Identical Tree";
    return 0;
}