void bottomView(Node *root)
{
   int hd=0;
   map<int,int> mp;
   queue<pair<Node *,int>> q;
   q.push(make_pair(root,hd));
   while(!q.empty()){
       pair<Node*,int> f=q.front();
       Node * front=f.first;
       q.pop();
       
       hd=f.second;
       mp[hd]=f.first->data;
       if(front->left)
            q.push(make_pair(front->left,hd-1));
       if(front->right)
            q.push(make_pair(front->right,hd+1));
       
   }
   for(auto i=mp.begin();i!=mp.end();i++){
       cout<<i->second<<" ";
   }
}
