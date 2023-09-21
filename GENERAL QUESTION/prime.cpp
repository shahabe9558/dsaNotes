#include <iostream>
using namespace std;

// WHAT IS DIFFERENCE BETWEEN return 1 and return -1;

bool isPrime(int n)
{
    if(n <= 1)
    {
      return false;
    }
    for(int i = 2; i<n; i++)
    {
        if(n % i == 0)
        { 

          return false;

        }
        else{
        return true;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int p = isPrime(n);
    if(p)
    {
        cout <<"Prime";
    }
    else{
        cout << "Not Prime";
    }
    
}