#include<bits/stdc++.h>
#include<queue>
using namespace std;

// Left View through Depth First Search (DFS)
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* BulidTreeLevelOrder( ){
    queue<Node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    Node* root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter data for left Node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new Node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right Node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new Node(rightdata);
            q.push(temp -> left);
        }
    }
}

// Post Order Traversal through
    int diameter(Node* root, int &dia){
        if(!root) return 0;

        int leftheight = diameter(root->left, dia);
        int rightheight = diameter(root->right, dia);

        //Diameter calculation
        dia = max(dia, leftheight + rightheight);

        int height = 1 + max(leftheight, rightheight);
        return height;
    }
    int diameterOfBinaryTree(Node* root) {
        int dia = 0;
        diameter(root, dia);
        return dia;
    }

int main(){

}