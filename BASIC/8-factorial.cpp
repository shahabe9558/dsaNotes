#include<iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    while(n != 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout << fact(n);
}