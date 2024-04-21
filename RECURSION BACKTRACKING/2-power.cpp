#include<iostream>
using namespace std;
int power(int n)
{
    // base case

    if(n == 0) 
    {
        return 1;
    }

    int chotiP = power(n-1);
    int badiP = 2 * chotiP;
    return badiP;
}
int main()
{
    int n;
    cin >> n;
    cout << "Power of number is = " << power(n) <<endl;
}






// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     if(n == 0)
//     return 1;

//     // int smallP = power(n-1);
//     // int bigP = 2 * smallP;

//     return 2 * power(n-1);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     cout << power(n);
// }