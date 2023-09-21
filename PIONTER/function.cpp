#include <iostream>
using namespace std;
void addressPass(int *p)
{
    *p = *p+1;
}
int main()
{
    // ADDRESS CAN NOT BE UPDATE 
    
    int a = 5;
    int *p = &a;
    cout << "Before function calling " << *p << endl;

    addressPass(p);
    
    // addressPass(&p); // cannot convert 'int**' to 'int*'

    // addressPass(*p); // can't convert from int to pointer

    cout << "After function Called " << *p << endl;
}