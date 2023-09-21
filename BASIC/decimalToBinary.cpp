#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    cout << "Enterr the number" << endl;
    int num;
    cin >> num;
    int i = 0;
     int ans = 0;
     while(num != 0)
     {
        int bit = num & 1;
        ans = (bit * pow(10, i) + ans);
        cout << "Num is = " << num << endl;
        num = num >> 1;
        i++;
     }
     cout << "Decimal to binary is = " << ans << endl;
}