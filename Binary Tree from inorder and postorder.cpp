Node *buildTreeUtil(int in[], int post[], int inStrt,int inEnd,int *postIndex){
    if(inStrt > inEnd)
        return NULL;
    struct Node* root = new Node(post[*postIndex]);
    
    (*postIndex)--;
    
    if(inStrt == inEnd)
        return root;
    int i; 
    for (i = inStrt; i <= inEnd; i++) { 
        if (in[i] == root->data) 
            break; 
    } 
    
    if(i <= inEnd){
        
        root->right = buildTreeUtil(in,post,i+1,inEnd,postIndex);
        root->left = buildTreeUtil(in,post,inStrt,i-1,postIndex);
    }
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int postIndex = n-1;
    
    return buildTreeUtil(in,post,0,n-1,&postIndex);
}
