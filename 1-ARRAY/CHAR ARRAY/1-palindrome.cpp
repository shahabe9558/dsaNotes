#include<iostream>
using namespace std;
bool isPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while(s < e)
    {
        if(str[s] != str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    string str = "saaS";
    if(isPalindrome(str)){
        cout << "Yes is it palindrome " << endl;
    }else {
        cout << "No this is not palindrome" << endl;
    }
}