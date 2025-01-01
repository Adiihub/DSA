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
    void preordertraverse(TreeNode* root, vector<int> &ans){
        if(!root){
            return;
        }
        ans.push_back(root -> val);
        preordertraverse(root -> left, ans);
        preordertraverse(root -> right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preordertraverse(root, ans);
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
    ans = s.preorderTraversal(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
        }

    return 0;
}