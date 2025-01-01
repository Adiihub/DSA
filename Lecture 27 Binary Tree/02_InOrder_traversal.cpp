#include<bits/stdc++.h>
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
 
class Solution {
public:
    void inordertraverse(TreeNode* root, vector<int>& ans){
        if(!root){
            return;
        }
        inordertraverse(root -> left, ans);
        ans.push_back(root -> val);
        inordertraverse(root -> right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inordertraverse(root, ans);
        return ans;
    }
};

int main(){
    Solution s;
    TreeNode *root = new TreeNode(1);
    root -> left = new TreeNode(NULL);
    root -> right = new TreeNode(2);
    root -> right -> left = new TreeNode(3);
    // root -> right -> right = new TreeNode(nullptr);

    vector<int> ans;
    ans = s.inorderTraversal(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
        }

    return 0;
}