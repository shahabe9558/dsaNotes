#include<iostream>
#include<stack>
#include<string>

using namespace std;
int main()
{
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    stack<char> s;
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);

    }
    string ans;
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "Reverse string is = " << ans << endl;
}
















// #include <iostream>
// #include <cstring>
// #include <stack>
// using namespace std;

// int main()
// {
//     cout << "Enter the input" <<endl;
//     string str;
//     cin >> str;
//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         s.push(ch);
       
//     }
//     string ans = "";
//     while(!s.empty())
//     { 
//       char ch = s.top();
//       ans.push_back(ch);
//       s.pop();

//     }
//     cout << "Answer is : " <<ans <<endl;
//     return 0;

// }