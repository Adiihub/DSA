#include<bits/stdc++.h>
using namespace std;


// //      1
// //     /  \
// //     2   3
//       / \   \
//     4    5   6
//               \
//                7
class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

node* buildTree(){
    int data;
    cin>>data;

    if(data==-1)
        return NULL;
    
    // root
    node* root=new node(data);
    // LST
    root->left=buildTree();
    //RST
    root->right=buildTree();

    return root;
}

// Print
//Pre Order traversal
void PreOrder(node* root){
    // base
    if(root==NULL)
        return ;
    //  root-->LST-->RST

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//in Order traversal

void inOrder(node* root){
    // base case
    if(root==NULL){
        return ;
    }

    // LST
    inOrder(root->left);
    //print root
    cout<<root->data<<" ";
    // RST
    inOrder(root->right);
}


// Post Order Traversal

void postOrder(node* root){
    // base case
    if(root==NULL)
        return ;
    
    postOrder(root->left);// LST
    postOrder(root->right);// RST
    cout<<root->data<<" ";
}

// count number of nodes in a BT
int countNode(node* root){
    // base case
    if(root==NULL)
        return 0;

    // recurrence
    // number of nodes in LST
    int ln=countNode(root->left);

    // number of nodes in RST
    int rn=countNode(root->right);
    // return total number of nodes
    int totalNodes=ln+rn+1;
    return totalNodes;
}


int Height(node* root){
    // base case
    if(root==NULL)
        return 0;
    // LST ka max height kitna h
    int lh=Height(root->left);
    // RSt ka max height kitna h
    int rh=Height(root->right);

    int height=max(lh,rh)+1;
    return height;
}

int main(){
    node* root=buildTree();
    cout<<"Pre Order traversal:"<<endl;
    PreOrder(root);
    cout<<endl;
    cout<<"in Order traversal:"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Post Order traversal:"<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"Number of nodes: "<<countNode(root)<<endl;
    cout<<"Height: "<<Height(root)<<endl;
    return 0;
}