#include <iostream>
#include<climits>

using namespace std;

int *harr;
int capacity;
int heap_size;

int parent(int i){
    return ((i-1)/2);
}
int left(int i){
    return ((2*i)+1);
}
int right(int i){
    return ((2*i)+2);
}
void minHeap(int cap){
    heap_size=0;
    capacity=cap;
    harr =new int[cap];
}
void insertkey(int k){
    if(heap_size==capacity){
        cout<<"\n Overflow, Could not insert a key\n";
        return;
    }
    heap_size++;
    int i= heap_size-1;
    harr[i]=k;
    while(i!=0 && harr[parent(i)]>harr[i]){
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
}
void MinHeapify(int i){
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heap_size && harr[l]<harr[i]){
        smallest=l;
    }
    if(r<heap_size && harr[r]<harr[smallest]){smallest=r;}
    if(smallest!=i){
        swap(harr[i],harr[smallest]);
        MinHeapify(smallest);
    }
}
int extractMin(){
    if(heap_size<=0){return INT_MAX;}
    if(heap_size==1){heap_size--; return harr[0];}
    int root=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;
}

void decreaseKey(int i,int new_val){
    harr[i]=new_val;
    while(i!=0 && harr[parent(i)]>harr[i]){
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
}
void deletekey(int i){
    decreaseKey(i, INT_MIN);
    extractMin();
}

int getMin(){
    return (harr[0]);
}


/*
int main()
{
  minHeap(6);
  for(int x=0;x<capacity;x++){
        int val;
        cin>>val;
        insertkey(val);
  }
  for(int x=0;x<heap_size;x++){
  cout<<harr[x]<<" "; }
  cout<<endl<<getMin()<<endl;
  //cout<<extractMin()<<endl;
  deletekey(5);
  for(int x=0;x<heap_size;x++){
  cout<<harr[x]<<" "; }
  return 0;
}
*/
