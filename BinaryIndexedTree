//space- O(n)
//Create- O(nlogn)
//update- O(logn)
//search- O(logn)

#include <bits/stdc++.h>

using namespace std;


int getNext(int);
int getParent(int);
int binaryIndexedTree[1000];

void updateBinaryIndexedTree(int binaryIndexedTree[],int val,int index,int size_){
    while(index<size_){
        binaryIndexedTree[index]+=val;
        index=getNext(index);
    }
}

void createTree(int arr[],int n){
    
    for(int i=1;i<=n;i++){
        updateBinaryIndexedTree(binaryIndexedTree,arr[i-1],i,n+1);
    }
    
}

/*for next element to be updated---

* 2's compliment
* AND it with the original number
* ADD it with original number

*/

int getNext(int x){
    return x + (x & (-x));
}

/*to get parent for sum---

* 2's compliment
* AND it with the original number
* SUB it with original number

*/

int getParent(int x){
    return x - (x & (-x));
}

int getSum(int binaryIndexedTree[],int index){
    index = index + 1;
    int sum = 0;
    while(index > 0){
        sum += binaryIndexedTree[index];
        index = getParent(index);
    }
    return sum;
}

int main()
{
    int arr[]={3,2,-1,6,5,4,-3,-3,7,2,3};
    int n=11;
    createTree(arr,n);
    cout<<getSum(binaryIndexedTree,5);

    return 0;
}
