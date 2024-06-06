#include <iostream>
#include<unordered_map>
#include <list>
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
            cout << i.first << "=> " ;
            for(auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
bool isCycle(){

}
int main()
{
    int n, m;
    cout << "Enter the num of node/vertex " << endl;
    cin >> n;
    cout << "Enter the num of edges " << endl;
    cin >> m;
    Graph g;
    for(int i = 0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.print();
    int srcNode = 4;
    bool ans = isCycle(srcNode,);
    if(ans)
    cout << "Cycle is present"<< endl;
    else
    cout <<"Not Present" << endl;
}