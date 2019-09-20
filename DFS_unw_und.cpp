//Unweighted and undirected graph dfs

#include <bits/stdc++.h>
using namespace std;
vector<bool> visited;

void addedge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

//For marking every vertex related to the parent vertex as visited
void DFSutil(int u,vector<int> adj[],vector<bool> &visited){
    visited[u]=true;
    cout<<u<<" ";
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]]==false){
            DFSutil(adj[u][i],adj,visited);
        }
    }
}

//For checking every vertex is either visited or not
void DFS(vector<int> adj[],int V){
    vector<bool> visited(V,false);
    for(int u=0;u<V;u++){
        if(visited[u]==false){
            DFSutil(u,adj,visited);
        }
    }
}

int main() {
    int v=5;
    
    vector<int> adj[v];
    
    addedge(adj,0,1);
    addedge(adj,0,4);
    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,3);
    addedge(adj,3,4);
    
    DFS(adj,v);
    return 0;
}
