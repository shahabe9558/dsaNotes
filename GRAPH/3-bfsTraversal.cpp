// bfs traversal in graph
#include<iostream> 
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<vector<int>> &adj){
    for(int i =0; i<adj.size(); i++)
    {
        cout << i << "->";
        for(int j = 0; j<adj[i].size(); j++)
        {
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}
void bfsPrint(vector<vector<int>>& adj, int V)
{
   vector<int> vis(V, 0);
   queue<int> q;
   q.push(0);
   vis[0] = 1;
   while(!q.empty())
   {
    int front = q.front();
    q.pop();
    cout << front << " ";
    for(auto i : adj[front])
    {
        if(!vis[i])
        {
            q.push(i);
            vis[i] = 1;
        }
    }
   }
}
int main()
{
  int v = 5;
  vector<vector<int>> adj(v);
  addEdge(adj, 0, 1);
  addEdge(adj, 1, 2);
  addEdge(adj, 2, 3);
  addEdge(adj, 1, 3);
  addEdge(adj, 3, 4);
  addEdge(adj, 0, 4);
  print(adj);
  bfsPrint(adj, v);
}