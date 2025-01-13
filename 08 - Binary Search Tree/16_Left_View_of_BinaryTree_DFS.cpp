#include<bits/stdc++.h>
#include<queue>
using namespace std;

// Left View through Depth First Search (DFS)
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

void solve(Node* root,vector<int> &ans, int depth){
    if(root == NULL)
    return;
    if(depth == ans.size()){
        ans.push_back(root -> data);
    }
    solve(root->left, ans, depth+1);
    solve(root->right, ans, depth+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans, 0);
  
   return ans;
}

int main(){

}