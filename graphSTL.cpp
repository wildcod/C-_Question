#include<bits/stdc++.h> 
using namespace std; 

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    // adj[v].push_back(u); 
} 
  
int printGraph(vector<int> adj[], int V) 
{ 
    int count = 0;
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 

       for(int i=0; i < adj[v].size(); i++){
            cout << "-> " << adj[v][i]; 
            count++;
       }

        printf("\n"); 
    } 

    return count;
} 
  
int main() 
{ 
    int V = 4; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 2); 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 3); 
    // addEdge(adj, 2, 3); 
    cout << printGraph(adj, V); 
    return 0; 
} 