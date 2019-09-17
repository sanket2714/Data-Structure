#include<bits/stdc++.h>
using namespace std;

int main(){
    //A graph of N nodes and M edges
    
    int n,m;
    cin>>n>>m;
    string s;
    
    //make an array of vector
    
    vector<int> arr[n+1];
    
    //assign edges between a and b
    
    while(m--){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
        
    }
    int q;
    cin>>q;
    
    // under q queries check whether edge exist or not
    
    while(q--){
        int c,d;
        cin>>c>>d;
        int j=arr[c].size();
        for(int i=0;i<j;i++){
            if(arr[c][i]==d){
                s="YES";
                break;
            }
            else
                {s="NO";}
        }
        cout<<s<<endl;
    }
    return 0;
 }
