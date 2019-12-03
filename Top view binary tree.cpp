void topView(struct Node *root)
{
    if(!root)
        return;
    Node *temp=NULL;
    queue<pair<Node *,int>> q;
    q.push({root,0});
    map<int,int> mp;
    while(!q.empty()){
        temp=q.front().first;
        int dis=q.front().second;
        q.pop();
        
        if(mp.find(dis) == mp.end()){
            
            mp[dis]=temp->data;
        }
        if(temp->left)
            q.push({temp->left,dis-1});
        if(temp->right)
            q.push({temp->right,dis+1});
    }
    for(auto i:mp){
        cout<<i.second<<" ";
    }
}
