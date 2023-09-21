#include<iostream>
using namespace std;
void reverse(string &str)
{
    int s = 0;
    int e = str.length()-1;
    while(s < e)
    {
        swap(str[s++], str[e--]);
    }
}
int main()
{
    string str;
    cin >> str;
    reverse(str);
    cout <<"Reverse of string is = " << str <<endl;
}
