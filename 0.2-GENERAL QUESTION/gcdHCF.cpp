#include <iostream>
using namespace std;

// gcd(a,b) = gcd(a-b, b) or gcd(a%b, b);
// lcm(a,b) * gcd(a,b) = a * b;

int gcd(int a, int b)
{
    if(a == 0)
    return b;
    if(b == 0)
    return a;
    while( a != b)
    {
        if(a>b)
        a = a-b;
        else
        b = b-a;   
    }
    return a;
}
int main()
{
    int a,b;
    cout << "Enter value of a" <<endl;
    cin >> a;
    cout << "Enter value of b" <<endl;
    cin >> b;

    cout << gcd(a,b);
    

}