#include <bits/stdc++.h>

using namespace std;

 struct node{
    int data;
    struct node *left;
    struct node *right;
 };
 
 // Node created
 
 struct node* newnode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
 }
 
 void print_tree(node *root){
       
       
       //cout<<root->data<<" ";//PRE-ORDER traversal

        if(root->left!=NULL){
            print_tree(root->left);
        }

        cout<<root->data<<" "; //IN-ORDER traversal

        if(root->right!=NULL){

            print_tree(root->right);

        }
        
        
        //cout<<root->data<<" "; //POST_ORDER traversal
        
        return;

 }
int main()
{
    struct node* root= newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    print_tree(root);
    
    return 0;
}
