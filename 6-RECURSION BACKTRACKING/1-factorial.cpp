#include <iostream>
using namespace std;
int factoriral(int n) 
{
    if(n == 0)
    {
        return 1;
    }
    return n * factoriral(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Fact of num is " << factoriral(n);
}








