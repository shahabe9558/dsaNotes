#include <iostream>
#include <queue>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;
class Graph{
    public :
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void print()
    {
        for(auto i : adj)
        {
            cout << i.first << "-> ";
            for(auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void bfsTraversal(int srcNode)
    {
        vector<int> visited(adj.size(), false);
        queue<int> q;
        q.push(srcNode);
        visited[srcNode] = true;
        while(!q.empty())
        {
            int frontNode = q.front();
            cout << frontNode << " ";
            q.pop();
            for(auto i : adj[frontNode])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }

        }
    }
};
int main()
{
    int n, m;
    cout << "Enter the num of nodes" << endl;
    cin >> n;
    cout << "Enter the num of edges" << endl;
    cin >> m;
    Graph g;
    for(int i = 0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.print();
    g.bfsTraversal(0);

}
