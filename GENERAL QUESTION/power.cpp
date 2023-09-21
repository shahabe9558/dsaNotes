#include <iostream>
#include <math.h>
using namespace std;
int powAB(int a, int b)
{
    int ans = 1;
    for(int i=0; i<b;i++)
    {
        ans = ans * a;
    }
    return ans;
    // int n = pow(a,b);
    // return n;
}
int main()
{
    int a,b;
    cout << "Enter the value of a" <<endl;
    cin >> a;
    cout << "Enter the value of b" <<endl;
    cin >> b;
    cout << powAB(a,b);
} 