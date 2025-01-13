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

bool findPath(Node* root, Node* node, vector<Node*> & path){
    //Base Case
    if(root == node){
        path.push_back(root);
        return true;
    }

    if(!root)
        return false;

    path.push_back(root);
    if(findPath(root->left, node, path)) return true;
    if(findPath(root->right, node, path)) return true;

    path.pop_back();
    return false;
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(!root) return NULL;
    vector<Node*> path1, path2;
    findPath(root, p, path1);
    findPath(root, q, path2);

    for(int i= min(path1.size(), path2.size())-1; i>=0; i--){
        if(path1[i] == path2[i])
            return path1[i];
    }
    return NULL;
}

Node* input(){
    int data;
    cin>>data;
    if(data == -1) return NULL;
    Node* root = new Node(data);
    return root;
}
int main(){
    Node* root = BulidTreeLevelOrder();
    Node* p = input();
    Node* q = input();
    Node* res = lowestCommonAncestor(root, p, q);
    cout<<res -> data<<endl;

    return 0;
}
