#include<iostream>
using namespace std;
int numOfWaysToClimbOnStairs(int n)
{
    if(n < 0)
    return 0;
    if(n == 0)
    return 1;
    int ans = numOfWaysToClimbOnStairs(n-1) + numOfWaysToClimbOnStairs(n-2);
    return ans;
}

int main()
{
    int nthSrairs;
    cout << "Enter the number of stairs" << endl;
    cin >> nthSrairs;

    cout << numOfWaysToClimbOnStairs(nthSrairs);
}














// #include <iostream>
// using namespace std;
// int waysToClimbOnStairs(int n)
// {
//     if(n < 0)
//     {
//         return 0;
//     }
//     if(n == 0)
//     {
//         return 1;
//     }
//     int ans = waysToClimbOnStairs(n-1) + waysToClimbOnStairs(n-2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout <<"Enter the number of stairs" << endl;
//     cin >> n;
//     cout << waysToClimbOnStairs(n);
// }