#include <iostream>
#include <string>
using namespace std;
void reverse(string &str, int s, int e)
{
    // base case 
    if(s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    return reverse(str, s, e);
}
int main()
{
    string str = "mafaz";
    int s = 0;
    int e = str.length() - 1;
    reverse(str, s, e);
    cout << str;
}