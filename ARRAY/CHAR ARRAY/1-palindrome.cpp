#include<iostream>
using namespace std;
bool isPalindrome(char name[], int n)
{
    int s = 0;
    int e = n-1;
    while(s < e)
    {
        if(name[s++] != name[e--])
        {
            return false;
        }
    }
    return true;
}
void tolowerCase(char name[])
{
    for(int i=0; i<5; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            cout << name[i] << " ";
        }
        else{
            name[i] = (name[i] - 'A') + 'a';
            cout << name[i] << " ";
        }

    }
    cout << endl;
}
int main()
{
    cout << "Enter the name" << endl;
    char name[20];
    cin >> name;
    
    // tolowerCase(name);

    if(isPalindrome(name, 5))
    {
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindome" << endl;
    }
}