#include<iostream>
#include<vector>
using namespace std;

bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    return 0;
}

char toLowerCase(char ch) 
{
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while(s < e)
    {
        if(str[s++] != str[e--])
        {
            return false;
        }
    }
    return true;
}

bool checkValid(string &str)
{
    // remove krna hai faltu character 
    int size = str.length();
    string temp = "";
    

    for(int i = 0; i<size; i++)
    {
        if(valid(str[i]))
        {
            temp.push_back(str[i]);
        }
    }

    for(int i =0; i<temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    return isPalindrome(temp);

}
int main()
{
    string str = "Ra,Ce ca:r";

    bool sol = checkValid(str);
    if(sol)
    cout << "Valid Palindrome" << endl;
    else 
    cout << "Not valid Palindrome" << endl;
}