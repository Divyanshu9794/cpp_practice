#include<bits/stdc++.h>
using namespace std;
const  int v=5;

int main(){
    int graph[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            graph[i][j]=0;

        }
    }
    int e;
    cout<<"Enter the number of edges"<<endl;
    cin>>e;
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        graph[s][d]=1;
        
        
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
        
    }

}