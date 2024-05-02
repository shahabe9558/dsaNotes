#include<iostream>
using namespace std;
int power(int a, int b)
{
    // base case 
    if(b == 0)
    return 1;
    if(b == 1) 
    return a;
    int ans = power(a, b/2);
    // if b is even 
    if(b % 2 == 0)
    {
        return ans * ans;
    }
    else{

        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cout << "Enter the number a " << endl;
    cin >> a;
    cout << "Enter the number b " << endl;
    cin >> b;
    cout << "a ke power b is = " << power(a,b);
}