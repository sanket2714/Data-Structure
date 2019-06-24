#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<bool> v; //visited node
vector<vector<int>> g; //for construction adjacency list as vector of vectors

//below function joins every edge according to input given------->
void edge(int a,int b){
    g[a].pb(b);
    g[b].pb(a); //remove this line for directed graph
}

//below function is for bfs traversal of a graph----->
void bfs(int u){
    std::queue<int> q;
    q.push(u);
    v[u]=true;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        for(auto i=g[f].begin();i!=g[f].end();++i){
            if(!v[*i]){
                q.push(*i);
                v[*i]=true;
            }
        }
    }
}
int main() {
	int n,e;
	cin>>n>>e;
	v.assign(n,false);
	g.assign(n,vector<int>());
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    edge(a,b);
	}
	for(int i=0;i<n;i++){
	    if(!v[i])
	    bfs(i);
	}
	return 0;
}
