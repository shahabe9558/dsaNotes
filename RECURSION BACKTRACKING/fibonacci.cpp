#include<iostream>
using namespace std;
int fibSeries(int n) 
{
    // base case 
    if(n == 0) // n = 1 for first term
    {
        return 0;
    }
    if(n == 1)  // n = 2 for first term
    {
        return 1;
    }
    int ans = fibSeries(n-1) + fibSeries(n-2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    // returning the nth turm of series

    cout << fibSeries(n);
}












// #include <iostream>
// using namespace std;
// int fibBoNacci(int n)
// {
//     if(n == 0) // if(n == 0), 0 se initiate karne ke liye
//     {
//         return 0;
//     }
//     if(n == 1) 
//     {
//         return 1;
//     }
//     int ans = fibBoNacci(n-1) + fibBoNacci(n-2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout <<"Enter the input" << endl;
//     cin >> n;
//     cout <<  fibBoNacci(n);
// }