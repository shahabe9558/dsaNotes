#include<iostream>
using namespace std;
int sumOfEven(int n)
{
    int ans = 0;
    int ans2 = 0;
    for(int i=1; i<=n; i++)
    {
        if(i %2 == 0)
        {
            ans = ans + i;
        }
        else
        {
            ans2 = ans2 + i;
        }
    }

    cout << "odd sum is = " <<  ans2 << endl;
    cout << "Even sum is = ";
    return ans;
}
int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    cout << sumOfEven(n);
}