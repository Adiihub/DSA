#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
};
node* BulidTreeLevelOrder( ){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    node* root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter data for left node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new node(rightdata);
            q.push(temp -> left);
        }
    }
}
// create root node
// push into q
// access teh front node form q
// ask for left node data && right node data
// make left node & right node
// connect them to front node
// push them into q

void PrintLevelOrder(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            node* f = q.front();
            q.pop();
            cout<<f->data<<" ";
            if(f -> left)  q.push(f -> left);
            if(f -> right) q.push(f -> right);
        }
        cout<<endl;
    }
}

// vector<vector<int>> leveltraversal(TreeNode* root){
//         vector<vector<int>> result;
//         if(root == NULL) return result;
//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//             vector<int> ans;
//             int size = q.size();
//             while(size--){
//                 TreeNode* f = q.front();
//                 q.pop();
//                 if(f->left) q.push(f->left);
//                 if(f->right) q.push(f->right);
//                 ans.push_back(f->val);
//             }
//             result.push_back(ans);
//         }
//         return result;
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         return leveltraversal(root);
//     }