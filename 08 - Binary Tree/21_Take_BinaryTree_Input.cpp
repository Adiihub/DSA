#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
node* BuildTree(queue<string>& values){
    if(values.empty())
    return NULL;
    string val = values.front();
    values.pop();

    int nodeData = stoi(val);
    node* root = new node(nodeData);

    // LST
    if(!values.empty() && values.front() == "true"){
        values.pop();
        root->left = BuildTree(values);
    }else if(!values.empty() && values.front() == "false"){
        values.pop();
    }

    // RST
    if(!values.empty() && values.front() == "true"){
        values.pop();
        root->right = BuildTree(values);
    }else if(!values.empty() && values.front() == "false"){
            values.pop();
    }

    return root;
}
void print(node* root){
    if(root == NULL)
    return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // cout<<s1<<endl;
    // cout<<s2<<endl;

    stringstream ss1(s1) , ss2(s2);
    string word;
    queue<string>q1,q2;
    while(ss1 >> word){
        // cout<<word<<" ";
        q1.push(word);
    }
    while(ss2 >> word){
        // cout<<word<<" ";
        q2.push(word);
    }
    node* root = BuildTree(q1);
    print(root);
    node* root1 = BuildTree(q2);
    print(root1);
    return 0;
}