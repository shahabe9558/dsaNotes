// #include<iostream>
// using namespace std;
// int power(int n)
// {
//     // base case

//     if(n == 0) 
//     {
//         return 1;
//     }

//     int chotiP = power(n-1);
//     int badiP = 2 * chotiP;
//     return badiP;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "Power of number is = " << power(n) <<endl;
// }


#include <iostream>
using namespace std;
int power(int n)
{
    // base case 
    if(n == 0)
    {
        return 1;
    }
    return 2 * power(n - 1);
}
int main()
{
    int n;
    cout << "Enter the num" << endl;
    cin >> n;
    cout << "Power of num is " << power(n) << endl;
}




