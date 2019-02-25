int parent[100001]={0};

int rank_[100001];

void makeset(int N){
    for(int i=0;i<N;i++){
        parent[i]=i;
        rank_[i]=0;
       
    }
    
}
int find_set(int i){
    if(parent[i]==i){
        return i;
    }
    else{
        parent[i]=find_set(parent[i]);
        return parent[i];
    }
}
void merge_set(int a,int b){
    if(find_set(a)==find_set(b)){
        cout<<"cycle detected"<<endl;
    }
    else{
        int fa=find_set(a);
        int fb=find_set(b);
        if(fa!=fb){
            if (rank_[fa] < rank_[fb])
                swap(fa, fb);
            parent[fb] = fa;
            rank_[fa]++;
        }
        
    }
    
}
