#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd";
    }
    // if(num & 1)
    // {
    //     cout << "Odd" << endl;
    // }
    // else{
    //     cout << "Even";
    // }
}