#include <iostream>
using namespace std;
void printAllDivisory(int num)
{
    for(int i=1; i<=num; i++)
    {
        if(num % i == 0)
        cout << i << " ";
    }
}
int main()
{
    int num;
    cout << "Enter the number";
    cin >>num;
    printAllDivisory(num);
}