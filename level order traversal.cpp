#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

node* newnode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void printLevelOrder(node * root){
    if(root==NULL){return;}
    queue<node *> q;
    q.push(root);
    while(q.empty()==false){
        int nodecount = q.size();
        while(nodecount>0){
            node *Node=q.front();
            cout<<Node->data<<" ";
            q.pop();
            if(Node->left!=NULL){
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                q.push(Node->right);
            }nodecount--;
            }
cout<<endl;
    }
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(7);
    root->left->right=newnode(6);
    root->right->left=newnode(5);
    root->right->right=newnode(4);

    printLevelOrder(root);

    return 0;
}
