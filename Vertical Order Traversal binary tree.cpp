void verticalOrder(Node *root)
{
    
    queue<pair<Node *,int>> q;
    int hd=0;
    q.push({root,hd});
    map<int,vector<int>> mp;
    while(!q.empty()){
        pair<Node*,int> f=q.front();
        q.pop();
        hd=f.second;
        Node *node = f.first;
        mp[hd].push_back(node->data);
        if(node->left)
            q.push({node->left,hd-1});
        if(node->right)
            q.push({node->right,hd+1});
    }
    map<int,vector<int>> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
    }
}
