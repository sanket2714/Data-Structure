void leftView(Node *root)
{
   queue<Node *> q;
   q.push(root);
   while(q.size()){
       int sz=q.size();
       
       int v=-1;
       while(sz--){
            Node *f=q.front();
            if(v == -1){
                v=f->data;
            }
            
            q.pop();
           
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
        cout<<v<<" ";
        
    }
}
