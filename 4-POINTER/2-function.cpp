#include <iostream>
using namespace std;
void addressPass(int *p2)
{
    *p2 = *p2+1;
    cout << "add of p2" << &p2 << endl;
}
int main()
{
    // ADDRESS CAN NOT BE UPDATE 
    int a = 5;
    int *p = &a;
    cout << "Before function calling " << *p << endl;
    addressPass(p);
    cout << "add of a" << &a <<endl;
    cout << "add of p" << &p <<endl;
    // addressPass(&p); // cannot convert 'int**' to 'int*'
    // addressPass(*p); // can't convert from int to pointer
    cout << "After function Called " << *p << endl;
}