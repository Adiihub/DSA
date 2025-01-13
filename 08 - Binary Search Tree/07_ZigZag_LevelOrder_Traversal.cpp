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

vector<vector<int>> zigzagLevelOrder(node* root) {
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<node*> q;
    q.push(root);

    int cnt = 0;
    while(!q.empty()){
        vector<int> temp;
        int size = q.size();
        while(size--){
            node* f = q.front();
            q.pop();
            temp.push_back(f->data);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        if(cnt %2 == 1){
            reverse(temp.begin(), temp.end());
        }
        ans.push_back(temp);
        cnt++;
    }
    return ans;
}

int main(){
    node* root = BulidTreeLevelOrder();
    vector<vector<int>> ans = zigzagLevelOrder(root);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
            }
    }

    return 0;
}
