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

int height(Node* root){
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh,rh);  
}
void solve(Node* root, int &ans){
    if(!root) return;
    int lh = height(root->left);
    int rh = height(root->right);
    ans = max(ans, lh + rh);

    solve(root->left, ans);
    solve(root->right, ans);
}
int diameterOfBinaryTree(Node* root) {
    int ans = 0;
    solve(root, ans);
    return ans;
}

int main(){

}