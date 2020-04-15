//Unweighted and undirected graph dfs

#include <bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

//For checking every vertex is either visited or not
void DFS(int u, vector<int> adj[], int visited){
    visited[u]=true;
    cout<<u<<" ";
    vector<int>::iterator i;
    for(i=adj[u].begin() ; i!=adj[u].end() ; i++){
        if(!visited[*i]){
            DFS(*i,adj,visited);
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
    
    bool visited[V]={false};
    
    DFS(0,adj,visited);
    return 0;
}
