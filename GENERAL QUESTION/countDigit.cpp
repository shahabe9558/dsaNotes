#include <iostream>
using namespace std;
int findCount(int n)
{
    int count = 0;
    while(n != 0)
    {
       n = n/10;
       count++;
    }
    return count;
}
int main()
{
    int n;
    cout <<"Enter the number";
    cin>>n;
    int count = findCount(n);
    cout << "The number of digit is = " <<count;
}