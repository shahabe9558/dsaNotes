#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int *p = &a;
    int **p2 = &p;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << p2 << endl;

    cout << a <<endl;
    cout << *p <<endl;
    cout << **p2 <<endl;

    cout << &a << endl;
    cout << p << endl;
    cout << *p2 << endl;
  
    cout << &p2 << endl;
}