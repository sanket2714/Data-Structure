#include<bits/stdc++.h>
using namespace std;

vector<int> graph[300005];
bool vis[300005]={false};

void dfs(int i){
        vis[i]=true;
        for(int j=0;j<graph[i].size();j++){
            int ch=graph[i][j];
            if(vis[ch]==0){
                dfs(ch);
            }
        }
        return;
}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    int connectedComponents=0;
    while(e--){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=vertices;i++){
        flag=0;
        if(!vis[i]){
            dfs(i);
            connectedComponents++;
        }
    }
    cout<<connectedComponents<<endl;
    return 0;
}
