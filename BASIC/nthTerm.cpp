#include<iostream>
using namespace std;
int apofnumber(int n)
{
   int ans = (3 * n + 7);
   return ans;
   
}
int main()
{
    cout << "Enter the input" << endl;
    int n;
    cin >> n;
    cout << apofnumber(n);
}