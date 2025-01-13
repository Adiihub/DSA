
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){  
    int data;
    cin>>data;
    if(data == -1)
    return NULL;
    node* root = new node(data);
    root -> left = BuildTree();
    root -> right = BuildTree();

    return root;
}

class Solution{
    public:
        bool solve(node* root, int target){
        if(root == NULL) return false;
        if(root -> left == NULL && root -> right == NULL){
            if(target - root -> data == 0)
                return true;
            return false;
        }
        //LST
        bool lst = solve(root -> left, target - root->data);
        //RST
        bool rst = solve(root -> right, target - root->data);

        return lst || rst;
    }

    bool hasPathSum(node* root, int targetSum) {
        return solve(root, targetSum);
    }
};


int main(){
    node*root=BuildTree();
    int targetSum;
    cin>>targetSum;
    Solution s;
    int res = s.hasPathSum(root,targetSum);
    cout<<res<<endl;

    return 0;
}