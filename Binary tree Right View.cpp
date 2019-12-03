void rightView(Node *root)
{
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int sz=q.size();
       int v=sz-1;
       while(sz--){
            Node* f=q.front();
            if(v==0)
                cout<<f->data<<" ";
            q.pop();
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        v--;
       }
       
   }
}
