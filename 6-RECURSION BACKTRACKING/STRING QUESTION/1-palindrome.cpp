#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] == str[e])
    {
        s++;
        e--;
        return isPalindrome(str, s, e);
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "abbafads";
    int s = 0;
    int e = str.length() - 1;
    bool ans = isPalindrome(str, s, e);
    if (ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}