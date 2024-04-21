#include<iostream>
using namespace std;

int productOfNum(int num)
{
  int ans = 1;
  while(num != 0)
  {
    int digit = num % 10;
    ans = ans * digit;
    num = num / 10;
  }
  return ans;
  
}
int sumOfNum(int num)
{
  int ans = 0;
  while(num != 0)
  {
    int digit = num % 10;
    ans = ans + digit;
    num = num / 10;
  }
  return ans;
}
int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    int product = productOfNum(n);
    cout << "Product is = " << product << endl;
    int sum = sumOfNum(n);
    cout << "sum is = " << sum << endl;
    int diff = product - sum;7
    cout << diff;
   
}