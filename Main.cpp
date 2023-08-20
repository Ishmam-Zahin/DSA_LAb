#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;
int tree[1000];

int bstInsert(int item, int node){
    if(tree[node-1]==NULL){
        tree[node-1]=item;
        return node;
    }
    else if(tree[node-1]==item){
        return node;
    }
    else{
        if(item<tree[node-1]){
            return bstInsert(item, (2*node));
        }
        else{
            return bstInsert(item, (2*node+1));
        }
    }
}

int maxHeapTreeInsert(int node){
    if(node==1){
        return node;
    }
    else{
        int parent=node/2;
        if(tree[node-1]>tree[parent-1]){
            int tmp=tree[parent-1];
            tree[parent-1]=tree[node-1];
            tree[node-1]=tmp;
            return maxHeapTreeInsert(parent);
        }
        else{
            return node;
        }
    }
}
/*
6
40 60 50 33 55 11
*/

int main(){
    int n;
    cin>>n;
    /*for(int i=0; i<n; i++){
        int item;
        cin>>item;
        bstInsert(item, 1);
    }

    cout<<bstInsert(50, 1);*/

    for(int i=0; i<n; i++){
        int item;
        int loc;
        cin>>item;
        for(int i=0; i<1000; i++){
            if(tree[i]==NULL){
                tree[i]=item;
                loc=i+1;
                break;
            }
        }
        cout<<maxHeapTreeInsert(loc)<<'\n';
    }

}
