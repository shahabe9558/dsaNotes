#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
  map<string, int> m1;
  m1["Age"]  = 24;
  m1["class"] = 11;
  m1["sub"] = 32;
  // cout << m1["Age"] << endl;
  // traversing the map 
  map<string, int> :: iterator it = m1.begin();
  while(it != m1.end())
  {
    cout << it->first << " " << it->second << endl;
    it++;
  }
}




// #include <iostream>
// #include <map>
// using  namespace std;
// int main()
// {
//   int arr[5] = {1,1,2,3,4};
//   arr[0] = true;
//   map<int, bool> visited;
//   if(visited[0] == true)
//   {
//     cout << "True hai";
//   }
//   else{
//     cout <<"False hai";
//   }
  
//     // map<int, char> m;

//     // m[0] = '1';
//     // m[2] = '2';

//     // if(m[0] == '1')
//     // {
        
//     // }


    // map<int, string> m;
    // m[0] = "A1"; 
    // m[1] = "A2"; 
    // m[2] = "A3";
    // m[2] = "A3";
    // // m.insert({3, "a1"});

    // for(auto i:m) 
    // {
        
    //     cout << i.first << " " << i.second << " " <<endl;
    // }
    // // cout << " Present or not =" <<  m.count(1) << endl;
    // // m.erase(2);

    // auto it = m.find(0);

    // for(auto i =it; i!=m.end(); i++)
    // {

    //     cout << (*i).first <<endl;
    // }
// }
