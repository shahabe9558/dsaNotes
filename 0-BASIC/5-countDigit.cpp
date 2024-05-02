#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt = 0;
    while(n != 0)
    {
       n = n / 10; 
       cnt++;
    }
    return cnt;
}
int count2(int n)
{
    string s = to_string(n);
    return s.length();
}
int count3(int n)
{
    int digit = floor(log10(n) + 1);
    return digit;
}
int main()
{
    int n;
    cout << "Enter the number"<< endl;
    cin >> n;
    cout << "Count is =" << count3(n);
}