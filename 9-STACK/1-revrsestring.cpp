// #include<iostream>
// #include<stack>
// #include<string>

// using namespace std;
// int main()
// {
//     cout << "Enter the string" << endl;
//     string str;
//     cin >> str;
//     stack<char> s;
//     for(int i=0; i<str.length(); i++)
//     {
//         char ch = str[i];
//         s.push(ch);

//     }
//     string ans;
//     while(!s.empty())
//     {
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout << "Reverse string is = " << ans << endl;
// }
















// // #include <iostream>
// // #include <cstring>
// // #include <stack>
// // using namespace std;

// // int main()
// // {
// //     cout << "Enter the input" <<endl;
// //     string str;
// //     cin >> str;
// //     stack<char> s;

// //     for (int i = 0; i < str.length(); i++)
// //     {
// //         char ch = str[i];
// //         s.push(ch);
       
// //     }
// //     string ans = "";
// //     while(!s.empty())
// //     { 
// //       char ch = s.top();
// //       ans.push_back(ch);
// //       s.pop();

// //     }
// //     cout << "Answer is : " <<ans <<endl;
// //     return 0;

// // }






















#include<iostream>
#include<string>
#include <stack>
using namespace std;
string reverse(string &str)
{
    stack<char> s;
    for(int i = 0; i<str.length(); i++)
    {
        s.push(str[i]);
    }
    string ans = "";
    while(!s.empty())
    {
       ans.push_back(s.top());
       s.pop(); 
    }
    return ans;
}
int main()
{
    string str = "The quick brown fox jumps over the lazy dogs";
    string modified = reverse(str);
    cout << modified << endl;
}