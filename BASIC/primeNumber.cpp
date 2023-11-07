// Isko aur optimize karna hai 

#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    cout <<"Enter the number" << endl;
    int n;
    cin >> n;
    bool sol = isPrime(n);
    if(sol)
    cout << "Number is prime" << endl;
    else
    cout << "Number is not prime" << endl;

}