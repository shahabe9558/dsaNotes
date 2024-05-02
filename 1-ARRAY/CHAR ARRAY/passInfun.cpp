#include<iostream>
using namespace std;
// str not act as address

void update2(string str)
{
    str[0] = 'A';
    // cout << "In function str is " << str << endl;
}

// it works as int function
void update(char ch[])
{
    ch[0] = 'z';

}
int main()
{
    string str ="Shahabe";
    
    cout <<"Before string is " << str << endl;
    update2(str);
    cout <<"After string is " << str << endl;
    





    // char name[5] = {'a', 'b', 'c', 'd', 'e'};

    // cout <<"Before name is " << name << endl;
    // update(name);
    // cout <<"After name is " << name << endl;
}