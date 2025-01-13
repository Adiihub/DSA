#include<bits/stdc++.h>
#include<queue>
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
      
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    } 
};

TreeNode* BuildTree(){
    int data;
    cout<<"enter root node : ";
    cin>>data;
    TreeNode* root = new TreeNode(data);

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        cout<<"Enter Left child node for "<<temp->val<<" : ";
        cin>>data;
        if(data != -1){
            temp->left = new TreeNode(data);
            q.push(temp->left);
        }
        cout<<"Enter Right child node for "<<temp->val<<" : ";
        cin>>data;
        if(data != -1){
            temp->right = new TreeNode(data);
            q.push(temp->right);
        }
    }
    return root;
}
 
class Solution {
public:
    void postorder(TreeNode* root, vector<int> &ans){
        if(!root) return;
        postorder(root -> left , ans);
        postorder(root -> right , ans);
        ans.push_back(root -> val);
    }   
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;

    }
};

int main(){
    Solution s;
    TreeNode* root = BuildTree();

    vector<int> ans;
    ans = s.postorderTraversal(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
        }

    return 0;
}