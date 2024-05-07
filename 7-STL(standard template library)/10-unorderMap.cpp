// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<string, int> m;
//     m["Age"] = 24;
//     m["Sal"] = 34;
//     m["Pal"] = 12;
//     pair<string, int> p;
//     // p.first("cal");
//     p.second(43);
//     m.insert(p);
//     for(auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
// }

#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
int main()
{
    unordered_map<int, list<int>> listHolder;
    listHolder[1] = {1,2,3};
    listHolder[2] = {4,5,6};
    listHolder[3] = {7, 8, 9};
    // for(auto i : listHolder)
    // {
    //     // cout << i.first << "-> ";
    //     // for(auto j : i.second)
    //     // {
    //     //     cout << j << " ";
    //     // }
    //     // cout << endl;
    // }
    for(auto i : listHolder[1])
    {
        cout << i << " ";
    }
}
