#include<iostream>
using namespace std;
int main()
{
    // cin does not read space, tab, etc.
    // but cin.get read  all
    // int a = 1;
    int a; 
    cout << "Enter the value of a =";
    // cin >> a;
     a = cin.get();
    cout << "Value of a is = " << a;
}