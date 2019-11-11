#include<bits/stdc++.h>
using namespace std;

const int N = 100000;                 // Maximum number of nodes, change according to constraints.
map<int, vector<int> > adjList;       // Considering undirected graph
bool visited[N];

void dfs(int u){
  printf("%d ", u);
  visited[u] = true;
  for(int i = 0 ; i < adjList[u].size() ; i ++){
    int v = adjList[u][i];          // neighbour of u
    if(visited[v] != true){         // checking if neighbour is already visited or not
      dfs(v);
    }
  }
}

int main(){
  memset(visited, 0, sizeof(visited));
  int n , edges;                    // n = number of nodes, edges = Number of edges
  scanf("%d%d",&n,&edges);
  for(int i = 0 ; i < edges ; i ++){
    int u, v;
    scanf("%d%d",&u,&v);
    adjList[u].push_back(v);
    adjList[v].push_back(u);  
  }
  int connectedComponents = 0;
  printf("Connected Components in G are :\n");
  for(int i = 1 ; i <= n ; i++){
    if(!visited[i]){
      dfs(i);
      connectedComponents++;
      printf("\n");
    }
  }
  printf("The number of Connected Components in G is %d.\n", connectedComponents);
}
