#include<iostream>
using namespace std;
int sumOfEven(int n)
{
    int oddSum = 0;
    int evenSum = 0;
    for(int i = 1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            evenSum += i;
        }else{
            oddSum += i;
        }
    }
    cout << "odd sum is = " <<  oddSum << endl;
    cout << "Even sum is = " << evenSum << endl;
    return oddSum;
}
int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    cout << sumOfEven(n);
}