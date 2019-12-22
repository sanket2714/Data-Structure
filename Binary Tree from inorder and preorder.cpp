/* 
  time : O(n^2)
  can be improved by using unordered_map for searching index
*/

Node* buildTree(int in[],int pre[], int l, int h)
{
    if(l > h)
        return NULL;
        
    Node* root = newNode(pre[preIndex++]);
    
    if(l == h)
        return root;
        
    int i;
    for(i=l;i<=h;i++)
        if(root->data == in[i])
            break;
            
    if(i <= h)
    {
        root->left = buildTree(in, pre, l, i-1);
        
        root->right = buildTree(in, pre, i+1, h);
    }
    
    return root;
}
