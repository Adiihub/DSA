#include<bits/stdc++.h>
#include<vector>
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

node* buildLL(){
	string val;
	cin>>val;
	if(val == "false") return NULL;

	int data = stoi(val);
	node* root = new node(data);

	string leftcheck;	
	cin>>leftcheck;
	if(leftcheck == "true"){
		root -> left = buildLL();
	}
	
	string rightcheck;
	cin>>rightcheck;
	if(rightcheck == "true"){
		root -> right = buildLL();
	}
	return root;
}

vector<vector<int>> ZigZag(node* root){
	vector<vector<int>> ans;
	if(!root) return ans;

	queue<node*> q;
	q.push(root);

	int cnt = 0;
	while(!q.empty()){
		int size = q.size();
		vector<int> temp;
	
		while(size--){
			node* k = q.front();
			q.pop();
			temp.push_back(k->data);
			if(k -> left) q.push(k->left);
			if(k -> right) q.push(k->right);
		}
		if(cnt % 2 == 1){
			reverse(temp.begin(), temp.end());
		}
		cnt++;
		ans.push_back(temp);
	}
	return ans;
}

void printZigZag(node* root){
	vector<vector<int>> ans;
	ans = ZigZag(root);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
	}
}

int main() {
	node* root = buildLL();
	printZigZag(root);

	return 0;
}