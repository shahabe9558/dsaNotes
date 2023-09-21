#include<iostream>
#include<math.h>

using namespace std;
int totalBits(int n)
{
    int count = 0;
    int ans = 0;
    int i = 0;
    while(n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }
   while(ans != 0)
   {
    int digit = ans % 10;
    if(digit == 1)
    {
        count++;
    }
    ans = ans/10;
   }
   return count;
}
int main()
{
    cout <<"Enter a" << endl;
    int a;
    cin >> a;
    cout <<"Enter b" << endl;
    int b;
    cin >> b;

    int totalSetBitsA = totalBits(a);

    int totalSetBitsB = totalBits(b);
    int total = totalSetBitsA + totalSetBitsB;
    cout << "Total set bit is = " << total;
}