// Isko aur optimize karna hai 

#include<iostream>
#include<cmath>
using namespace std;
// time complexity is o(n);
bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;

}
// best tC from above
bool isPrimeM2(int n){
    for(int i =2; i <=sqrt(n); i++){
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout <<"Enter the number" << endl;
    int n;
    cin >> n;
    bool sol = isPrimeM2(n);
    if(sol)
    cout << "Number is prime" << endl;
    else
    cout << "Number is not prime" << endl;

}