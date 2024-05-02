#include <iostream>
using namespace std;
int factNum(int n)
{
    int fact =1;
    for(int i = 2; i<=n; i++)
    {
       fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter the number";
    cin >>num;
    cout << factNum(num);
}