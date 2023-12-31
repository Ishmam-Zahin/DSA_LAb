#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;

void dfs(int node, LinkList obj[], bool isvisited[]){
    isvisited[node]=true;
    cout<<node<<'\n';

    obj[node].reposition();
    for(int i=0; i<obj[node].getSize(); i++){
        int child=obj[node].getNode();
        if(isvisited[child]) continue;
        dfs(child, obj, isvisited);
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    LinkList obj[n+1];
    bool isvisited[n+1];
    for(int i=0; i<=n; i++){
        isvisited[i]=false;
    }
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        obj[x].add(y);
        //obj[y].add(x);
    }

    dfs(8, obj, isvisited);
}
