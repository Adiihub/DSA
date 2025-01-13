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
void solve(node* root, int sum, int &ans){
    if(root == NULL) return;
    sum = sum * 10 + root -> data;
    if(root -> left == NULL && root -> right == NULL){
        ans += sum;
    }
    solve(root -> left, sum, ans);
    solve(root -> right,sum, ans);
}
int sumNumbers(node* root) {
    int ans =0;
    int sum = 0;
    solve(root,sum, ans);
    return ans;
}

int main(){
    node* root = BulidTreeLevelOrder();
    cout<<sumNumbers(root);

    return 0;
}