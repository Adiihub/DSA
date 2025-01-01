#include<bits/stdc++.h>
#include<string>
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
	string leftcheck, rightcheck;

	cin>>leftcheck;
	if(leftcheck == "true"){
		root -> left = buildLL();
	}
	cin>>rightcheck;
	if(rightcheck == "true"){
		root -> right =  buildLL();
	}
	return root;
}
bool solve(node* r1, node* r2){
	if(r1 == NULL && r2 == NULL)
		return true;
	if(r1 == NULL || r2 == NULL)
		return false;
	
	bool p = solve(r1->left, r2->left);
	bool q = solve(r1->right, r2->right);
	
	return p && q;
}
int main() {
	node* root1 = buildLL();
	node* root2 = buildLL();
	bool result = solve(root1, root2);
	cout<<(result ? "true" : "false" )<<endl;
	return 0;
}