#include<iostream>
using namespace std;
int main()
{
    cout << "How many terms of fibonacci....?"<< endl;
    int n;
    cin >> n;
    int a1 = 0, a2 = 1;
    cout << a1 << " " << a2 <<" ";
    for(int i = 1; i<n-1; i++)
    {
        int nextNum = a1 + a2;
        cout << nextNum << " ";
        a1 = a2;
        a2 = nextNum;
    }
}