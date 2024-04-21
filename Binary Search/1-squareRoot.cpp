#include<iostream>
using namespace std;
long long int square(int num)
{
    int s =0;
    int e = num;
    long long int mid = (s + e) / 2;
    int ans = -1;
    while(s <= e)
    {
        long long int square = mid * mid;
        if(square == num)
        {
            return mid;
        }
        if(square < num)
        {
            ans = mid; 
            s = mid + 1;

        }
        else{
            e = mid -1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
double morePrecision(int n, int pre, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<pre; i++)
    {
        factor = factor / 10;
        for(double j = ans; j*j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
 int main()
 {
    cout << "Enter the number" << endl;
    int num;
    cin >> num;
    cout <<"Square root of number is = " << square(num) << endl;
    int tempSol = square(num);
    
    cout <<"More precition " << morePrecision(num, 3, tempSol);
 }