#include<iostream>
using namespace std;

int factorial(int n)
{
    // base case in
    if(n == 0)
    {
        return 1;
    }
    // recursive relation
    int chotiProb = factorial(n-1);
    int badiProb = n * chotiProb;

    // return n * factorial(n-1);

}
int main()
{
    int n;
    cout << "Enter the number" <<endl;
    cin >> n;
    cout << factorial(n);

}










// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if(n == 0)
//     return 1;
    
//     // int smallP = power(n-1);
//     // int bigP = n * smallP;

//     return n*factorial(n-1);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number" <<endl;
//     cin >> n;
//     cout << factorial(n);
// }