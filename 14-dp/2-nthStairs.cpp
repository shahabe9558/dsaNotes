
// 1-Recursion 
#include<iostream>
#include<vector>
using namespace std;

int fib(int n)
{
    // base case 
    if(n < 0)
    return 0;
    if(n == 0)
    return 1;
  

    return fib(n-1) + fib(n-2);
}
int fibMemo(int n, vector<int> &dp){
//   base case 
    if(n < 0)
    {
        return 0;
    }
    if(n == 0)
    return 1;

    // pahle se hi agar dp nhi hai to 
    if(dp[n] != -1)
    return dp[n];

    dp[n] = fibMemo(n-1, dp) + fibMemo(n-2, dp);
    return dp[n];
}
int fibTab(int n, vector<int> &dp){

    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}
int fibSpace(int n)
{
    int p1 = 1;
    int p2 = 1;
    for(int i =2; i<=n; i++)
    {
        int curr = p1 + p2;
        p1 = p2;
        p2 = curr;
    }
    return p2;
}
int main()
{
    int n;
    cout << "Enter the stairs the person want to reach" << endl;
    cin >> n;
    // vector<int> dp(n + 1, -1);
    // base case 
    int ans = fib(n);
    cout << "The total number of wAYS TO CLIM ON  the top of stars is = " << ans;
}