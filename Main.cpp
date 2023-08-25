#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;
const int N=4;
int mat[N+1][N+1], path[N+1][N+1];

int main(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin>>mat[i][j];
            //for only path
            //path[i][j]=mat[i][j];
            //for shortest path
            if(mat[i][j]==0) path[i][j]=54678;
            else path[i][j]=mat[i][j];
        }
    }
//warshall algorithm
    /*for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            for(int k=1; k<=N; k++){
                path[j][k]=path[j][k]|(path[j][i]&path[i][k]);
            }
        }
    }*/
//output of path matrix
    /*for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<path[i][j]<<' ';
        }
        cout<<'\n';
    }*/
//shortest path
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            for(int k=1; k<=N; k++){
                path[j][k]=min(path[j][k], (path[j][i]+path[i][k]));
            }
        }
        cout<<path[2][2]<<'\n';
    }
//output of path matrix
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<path[i][j]<<' ';
        }
        cout<<'\n';
    }

}
