//Undirected and weighted graph dfs

#include <bits/stdc++.h>
using namespace std;
vector<bool> visited;

void addedge(vector<pair<int,int>> adj[],int a,int b,int wt){
    adj[a].push_back(make_pair(b,wt));
    adj[b].push_back(make_pair(a,wt));
}

void printGraph(vector<pair<int,int>> adj[],int V){
    int u,v,wt;
    for(u=0;u<V;u++){
        cout<<u<<" Connected to - "<<endl;
        for(auto it=adj[u].begin();it!=adj[u].end();it++){
            v=it->first;
            wt=it->second;
            cout<<v<<" with weight = "<<wt<<endl;
        }
        cout<<endl;
    }
}


int main() {
    int v=5;
    
    vector<pair<int,int>> adj[v];
    
    addedge(adj,0,1,10);
    addedge(adj,0,4,20);
    addedge(adj,1,2,30);
    addedge(adj,1,3,40);
    addedge(adj,1,4,50);
    addedge(adj,2,3,60);
    addedge(adj,3,4,70);
    
    printGraph(adj,v);
    return 0;
}

/*OUTPUT------

0 Connected to - 
1 with weight = 10
4 with weight = 20

1 Connected to - 
0 with weight = 10
2 with weight = 30
3 with weight = 40
4 with weight = 50

2 Connected to - 
1 with weight = 30
3 with weight = 60

3 Connected to - 
1 with weight = 40
2 with weight = 60
4 with weight = 70

4 Connected to - 
0 with weight = 20
1 with weight = 50
3 with weight = 70

*/
