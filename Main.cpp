#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;

int k=20;
char tree[20];

void preorder(int node){
    if(tree[node-1]==NULL || node>k) return;
    cout<<tree[node-1];
    preorder(2*node);
    preorder(2*node+1);
}

void inorder(int node){
    if(tree[node-1]==NULL || node>k) return;
    inorder(2*node);
    cout<<tree[node-1];
    inorder(2*node+1);
}

void postorder(int node){
    if(tree[node-1]==NULL || node>k) return;
    postorder(2*node);
    postorder(2*node+1);
    cout<<tree[node-1];
}

/*
example trees inputs
test 1
9
1 a
2 b
3 c
4 d
6 e
7 f
8 g
9 h
19 k

test 2
10
1 a
2 b
3 c
4 d
6 e
8 g
9 h
16 k
18 l
19 m
*/

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x; char ch;
        cin>>x>>ch;
        tree[x-1]=ch;
    }

    //preorder(1);
    //inorder(1);
    //postorder(1);
}
