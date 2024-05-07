// #include <iostream>
// #include <list>
// #include<unordered_map>
// #include <vector>
// #include <stack>

// using namespace std;
// class Graph{
//     public :
//     unordered_map<int, list<int>> adj;
//     void addEdge(int u, int v)
//     {
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     void print()
//     {
//         for(auto i : adj)
//         {
//             cout << i.first << "-> ";
//             for(auto j : i.second)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
//     void dfsPrint(int node)
//     {
//         vector<int> visited(adj.size(), false);
//         stack<int> s;
//         s.push(node);
//         visited[node] = true;
//         while(!s.empty())
//         {
//             int front = s.top();
//             cout << front << " ";
//             s.pop();
//             for(auto i : adj[front])
//             {
//                 if(!visited[i])
//                 {
//                     s.push(i);
//                     visited[i] = true;
//                 }
//             }
//         }
//     }
// };
// int main()
// {
//     cout << "Enter the number of nodes" << endl;
//     int n, m;
//     cin >> n;
//     cout << "Enter the number of edges" << endl;
//     cin >> m;
//     Graph g;

//     for(int i = 0; i<m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u,v);
//     }
//     g.print();
//     g.dfsPrint(0);
// }


#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <stack>
using namespace std;
class Graph{
    public:
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
    void dfs(int node)
    {
        vector<int> visited(adj.size(), false);
        stack<int> s;
        s.push(node);
        visited[node] = true;
        while(!s.empty())
        {
            int front = s.top();
            s.pop();
            cout << front << " ";
            for(auto i : adj[front])
            {
                if(!visited[i])
                {
                    s.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};
int main()
{
    cout << "Enter the nodes" << endl;
    int n, m;
    cin >> n;
    cout << "Enter the edges" << endl;
    cin >> m;
    Graph g;
    for(int i = 0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.print();
    g.dfs(0);
}
