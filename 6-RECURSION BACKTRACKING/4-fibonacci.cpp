#include <iostream> 
using namespace std;
int fib(int n)
{
    // base case 
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n -2);
}
int main()
{
    int n;
    cout << "Enter the num " << endl;
    cin >> n;
    cout << "The term is " << fib(n);
}