// collection of vertices and edges is called graph
// types og graph
// 1- directed graph
// 2- undirected graph
// degree of grpah is defined  as how many nodes are outgoing from the vertex
// Types of degree in directerd graph
// 1- indgree
// 2- outdegree

#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int> > adj;

    void addEdges(int u, int v, bool direction)
    {
       adj[u].push_back(v);
       if(direction == 0)
       {
        adj[v].push_back(u);
       }
    }

    void printadj()
    {
      for(auto i: adj)
      {
         cout << i.first << "->";
         for(int j: i.second)
         {
          cout << j << ",";
         }
         cout << endl;
      }
    }
};
int main()
{
  int n;
  cout << "Enter the number of nodes" << endl;
  cin >> n;
  int m;
  cout << "Enter the number of edges" << endl;
  cin >> m;
  
  Graph g;

  for(int i =0; i<m; i++)
  {
    int u, v;
    cin >> u >> v;
    g.addEdges(u, v, 0);
  }

  g.printadj();

}















// #include<iostream>
// #include<unordered_map>
// #include<list>

// using namespace std;

// class Graph{
//  public:

//    unordered_map<int, list<int>> adj;

//    void addEdge(int u, int v, bool direction)
//    {
//     adj[u].push_back(v);

//     if(direction == 0)
//     {
//         adj[v].push_back(u);
//     }
//    }

//    void printadj()
//    {
//     for(auto i: adj)
//     {
//         cout << i.first << "->";
//         for(auto j : i.second)
//         {
//             cout << j << ", ";
//         }
//         cout << endl;
//     }
//    }
// };
// int main()
// {
//    int n;
//    cout << "Enter the number of nodes" << endl;
//    cin >> n;

//    int m;
//    cout << "Enter the number of edges" << endl;
//    cin >> m;

//    Graph g;

//    for(int i =0; i<m; i++)
//    {
//     int u, v;
//     cin >> u >> v;
//     g.addEdge(u, v, 0);
//    }
//    g.printadj();
//    return 0;
// }

