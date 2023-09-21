#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int *p = &a;
    int **p2 = &p;

    cout << "Everything is ok here" << endl << endl;


    cout << a <<endl;
    cout << *p <<endl;
    cout << **p2 <<endl;

    cout << "Everything is ok here" << endl << endl;

    cout << &a << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << "Everything is ok here" << endl << endl;

    cout << &a << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << "Everything is ok here" << endl << endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << "Everything is ok here" << endl << endl;

    cout << p2 << endl;
    cout << &p << endl;

    cout << "Everything is ok here" << endl << endl;

    cout << &p2 << endl;
    cout << &p2 << endl;


}