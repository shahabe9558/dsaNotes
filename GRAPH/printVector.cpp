#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std;
class Graph{
    public:
     
    unordered_map<int, list<int> > adj;

    void adjList(int u, int v, bool direction)
    {
       adj[u].push_back(v);

       if(direction == 0)
       {
        adj[v].push_back(u);
       }
    }

    vector<vector<int>> printGraph(int node)
    {
        vector<vector<int>> ans(node);
        for(auto i: adj)
        {
            int u = i.first;
            int v = i.second;
            ans[u].push_back(v);
            ans[v].push_back(u);
        }
        return ans;
    }

};
int main()
{
  int n;
  cout << "Enter the node" << endl;
  cin >> n;
  int m;
  cout << "Enter the edges" << endl;
  cin >> m;
  Graph g;

  for(int i =0; i<m; i++)
  {
    int u, v;
    cin >> u >> v;
    g.adjList(u, v, 0);
  }
}