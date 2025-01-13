#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

node* buildBalancedBST(vector<int>& ans, int start, int end) {
    if (start > end) return NULL;
    int mid = start + (end - start) / 2;
    node* root = new node(ans[mid]);
    root->left = buildBalancedBST(ans, start, mid - 1);
    root->right = buildBalancedBST(ans, mid + 1, end);
    return root;
}

node* sortedArrayToBST(vector<int>& nums) {
    return buildBalancedBST(nums, 0, nums.size() - 1);
}

void print(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main(){ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    node* root = sortedArrayToBST(arr);
    print(root);

    return 0;
}