
#include <bits/stdc++.h>
using namespace std;
int mat[20][20]; 
int count = 0;

void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}

void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex " << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}


void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << mat[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       
   mat[u][v] = 1;
   mat[v][u] = 1;
}

int main() {
  int V = 5;

  
  vector<int> adj[V];

  
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  printGraph(adj, V);
  add_edge( 0, 1);
  add_edge( 0, 2);
  add_edge( 0, 3);
  add_edge( 1, 2);
   displayMatrix(V);
}