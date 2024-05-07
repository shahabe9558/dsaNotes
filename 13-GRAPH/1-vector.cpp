#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<vector<int>>& adj, int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void print(vector<vector<int>>& adj)
{
  for(int i = 0; i<adj.size(); i++)
  {
    cout << i << "-> ";
    for(int j =0; j<adj[i].size(); j++)
    {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }
}
int main()
{
  int ver = 5;
  vector<vector<int>> adj(ver);
  addEdge(adj, 0, 1);
  addEdge(adj, 1, 2);
  addEdge(adj, 2, 3);
  addEdge(adj, 1, 3);
  addEdge(adj, 3, 4);
  addEdge(adj, 0, 4);
  print(adj);
}