#include<bits/stdc++.h>
#include<queue>
using namespace std;

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

void solve(Node* root,vector<int> &ans){
    if(root == NULL)
    return;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        bool flag = false;
        
        while(size--){
            Node* f = q.front();
            q.pop();
            
            if(flag == false){
                ans.push_back(f->data);
                flag = true;
            }
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
    }
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans);
  
   return ans;
}

int main(){

}