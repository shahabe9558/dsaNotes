#include <iostream>
using namespace std;
int main()
{
    // int a = 9;
    // int *ptr = &a;
    // cout << "Printing the value of a = " << a << endl;
    // cout << "Value at address = " << &a<< endl;
    // cout << "Value at address = " << *ptr<< endl;
    // cout << "Addres of pointer ptr = " << ptr<< endl;

    // IT CAN BE ALSO INITILIZE WITH ZERO

    // int a = 8;
    // int *p = 0 ;
    // // *p = &a;  // ye possible nhi hai kyunki pointer integer ko address nhi assign kar skte
    // p = &a; 
    // cout << *p;

    // int a = 10;
    // int *p = &a;
    // cout << p <<endl;
    // cout << &a <<endl;
    // cout << &p <<endl;

    int b = 10;

    int *r = &b;
    cout <<"Before " << r <<endl;

    r++;
    cout <<"After "  << r;




}