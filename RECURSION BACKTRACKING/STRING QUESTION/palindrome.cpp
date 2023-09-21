#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
    if(i > j)
    return true;
    if(str[i] == str[j])
    {
        i++;
        j--;
        return isPalindrome(str, i, j);
    }
    else{
        return false;
    }
}

// bool isPalindrome(string str, int i, int j)
// {
//     if(i > j)
//     {
//         return true;
//     }
//     if(str[i] != str[j])
//     {
//         return false;
//     }
//     else{
//         return isPalindrome(str, i+1, j-1);
//     }
// }
int main()
{
    string str = "abba";

    bool ans = isPalindrome(str, 0, str.length() - 1);

    if(ans)
    {
        cout <<"Given string is palindrome" << endl;
    }
    else{
        cout <<"Given string is not palindrome" << endl;

    }
}