#include<iostream>
#include "bits/stdc++.h"
using namespace std;

void BFS(int A[][7], int i, int n){
queue<int> q;
int visited[n+1]={0};

cout<<i<<" ";
q.push(i);
visited[i]=1;
while(!q.empty()){
int t=q.front();
q.pop();
for(int k=1; k<=n; k++){
    if(A[t][k]==1 && visited[k]==0){
        cout<<k<<" ";
        visited[k]=1;
        q.push(k);
    }
}
}
cout<<endl;

}

void DFS(int A[][7], int i, int n){
    static int visited[7]={0};

    if(visited[i]==0){
        cout<<i<<" ";
        visited[i]=1;
        for(int v=1; v<=n; v++){
            if(A[i][v]==1 && visited[v]==0)
                DFS(A, v, n);
        }
    }
}


int main(){


int adjMat[7][7]={{0,0,0,0,0,0,0},
                  {0,0,1,1,0,0,0}, 
                  {0,1,0,0,1,0,0}, 
                  {0,1,0,0,1,0,0}, 
                  {0,0,1,1,0,1,1},                   
                  {0,0,0,0,1,0,0}, 
                  {0,0,0,0,1,0,0}, };

BFS(adjMat, 1, 7);
DFS(adjMat, 1, 7);


return 0;
}