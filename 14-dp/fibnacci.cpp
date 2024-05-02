// 4-space optimization
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout <<"Which term do you want ...?" << endl;
    cin >> n;
    int pre1 = 0;
    int pre2 = 1;
    for(int i=2; i<=n; i++)
    {
        int curr = (pre1 + pre2) % 1000000007;
        pre1 = pre2;
        pre2 = curr;
    }
    cout << pre2;
}




// 3-Tabulation method (bottom up approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// int fib(int n, vector<int> &dp)
// {
//     // base case 
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i =2; i<=n; i++)
//     {
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n]; 
// }
// int main()
// {
//     int n;
//     cout <<"Which term do you want ...?" << endl;
//     cin >> n;
//     vector<int> dp(n + 1, -1);
//     int ans = fib(n, dp);
//     cout << ans;
// }


// 2- Recursion + memoization (top down approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// int fib(int n, vector<int> &dp)
// {
//     // base case 
//     if(n <= 1)
//     {
//         return n;
//     }
//     if(dp[n] != -1)
//     return dp[n];

//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cout <<"Which term do you want ...?" << endl;
//     cin >> n;
//     vector<int> dp(n + 1, -1);

//     int ans = fib(n, dp);
//     cout << ans;
// }








// 1- recursion method 
// #include<iostream>
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