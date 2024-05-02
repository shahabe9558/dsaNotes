#include <iostream>
#include <string>
using namespace std;
int main()
{
    // char ch[7] = "abcde\0";
    // char *c = &ch[0];
    // cout << ch << endl;
    // cout << c << endl;

    // char ch = 'z';
    // char *temp = &ch;
    // cout << temp;

    string str = "alam";
    string *s = &str;
    cout << *s << endl;
    cout << &str  << endl;
    cout << &str + 1  << endl;
    cout << str << endl;
}