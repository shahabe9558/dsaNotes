#include<iostream>
#include<string>
using namespace std;

// cin execution stop kar dega jab bhi space, enter and tab aaata hasi tah
int getLenght(char name[])
{
    int count = 0;
    int i =0;
    while(name[i++] != '\0')
    {
     count++;

    }
    return count;
}
void reverse(char name[])
{
    int s = 0;
    int e = 6;
    while(s < e)
    {
        swap(name[s++], name[e--]);

    }
    // cout << name << endl;
}
int main()
{
    string str;

    cout << "Enter your name " << endl;
    
    cin >> str;

    str[2] = '\0';
    str[1] = '\0';

    cout << "Your name is " << str << endl;  // Shahabe Alam nhi print hoga bas Shahabe print hoga 

    // char name[20];

    // cout << "Enter the name" << endl;
    // cin >> name;
    // name[2] = '\0';
    // cout << "Your name is = " << name << endl;

    // cout <<"Length of string is = " << getLenght(name) << endl;

    //  cout << "b4 of name is = " << name << endl;

    // reverse(name);

    // cout << "Reverse of name is = " << name << endl;
}