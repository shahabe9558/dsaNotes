#include<iostream>
using namespace std;
int factorial(int n)
{
   int fact = 1;
   while(n > 0)
   {
    fact = fact * n;
    n--;
   }
   return fact;
}
int ncr(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}
int main()
{
    cout << "Input the value of n" << endl;
    int n;
    cin >> n;
    cout << "Input the value of r "<< endl;
    int r;
    cin >> r;
    cout <<"NCR of given input is = " << ncr(n, r);
}