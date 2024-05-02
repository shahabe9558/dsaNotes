#include <iostream>
using namespace std;
// it creates only one time variable  
void fun(int& n)
{
    cout << "Value if n is = " << n << "The add of n is " << &n << endl;
    if(n == 0)
    {
        return ;
    }
    n--;
    fun(n);
}
int main()
{
    int n = 5;
    fun(n);
}

