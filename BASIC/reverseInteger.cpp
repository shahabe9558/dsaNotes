#include<iostream>
#include<math.h>

using namespace std;
int reverse(int &n)
{
    int ans = 0;
    int i = 0;
    while(n != 0)
    {
        int digit = n % 10;
        ans = (ans * 10 ) + digit;
        n = n / 10;
        i++;
    }
    return ans;

}
int main()
{
    cout << "Enter the integer" << endl;
    int n;
    cin >> n;

    cout << "reversse of integer is = " <<reverse(n);

}