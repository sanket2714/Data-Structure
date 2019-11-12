#include<bits/stdc++.h>
using namespace std;

bool dfs(int i,vector<int> adj[],bool vis[],int par){
    vis[i]=true;
    for(int j=0;j<adj[i].size();j++){
        int ch=adj[i][j];
        if(!vis[ch]){
            if(dfs(ch,adj,vis,i)){
                return true;
            }
        }
        else if(ch!=par)
            return true;
    }
    return false;
}
bool isCyclic(vector<int> adj[], int V)
{
   bool vis[V]={false};
   for(int i=0;i<V;i++){
       if(!vis[i]){
           //dfs(i,adj);
           if(dfs(i,adj,vis,-1))
                return true;
       }
   }
   return false;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << isCyclic(adj, V)<<endl;
    }
}
