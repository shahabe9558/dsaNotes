#include<iostream>
using namespace std;
string removePart(string s, string part)
{
    while((s.length() != 0) && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";

    cout << "Remaining part is = " << removePart(str, part);
} 