#include<iostream>
#include<string>
using namespace std;
int main()
{
    // taking input 
    // cout << "Enter your name" << endl;
    // string s;
    // cin >> s;
    // // cin >> cin.getline(s, len);
    // cout << "Your name is = " << s;

    // string str;
    // cin >> str;
    // cout << str.length() << endl;
    // for(int i = 0; i<str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    
    // definning the char array
    // char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // for(int i = 0; i<5; i++)
    // {
    //     cout << ch[i] << " ";
    // }
    // cout << ch;

    // string str = "Talib";
    // for(int i = 0; i<str.length(); i++)
    // {
    //     cout << str[i];
    // }

    char ch = 'B';
    ch = (ch - 'A') + 'a';
    cout << ch << endl;

    char c = 'a';
    c = (c - 'a') + 'A';
    cout << c;
   
}