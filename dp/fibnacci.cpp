
// 2- Recursion + memoization (top down approach)
#include<iostream>
#include<vector>
using namespace std;
int fib(int n, vector<int> &dp)
{
    // base case 
    if(n <= 1)
    {
        return n;
    }
    if(dp[n] != -1)
    return dp[n];

    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}
int main()
{
    int n;
    cout <<"Which term do you want ...?" << endl;
    cin >> n;
    vector<int> dp(n + 1, -1);

    int ans = fib(n, dp);
    cout << ans;
}








// 1- recursion method 
#include<iostream>
// using namespace std;
// int fib(int n)
// {
//     // base case 
//     if(n <= 1)
//     {
//         return n;
//     }

//     return fib(n-1) + fib(n-2);
// }
// int main()
// {
//     int n;
//     cout << "Enter the term" << endl;
//     cin >> n;

//     int ans = fib(n);

//     cout << ans;
// }