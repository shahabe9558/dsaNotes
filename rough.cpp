#include<iostream>
#include<vector>

using namespace std;
bool isPrime(int n)
{
  if(n == 1)
  {
    return true;
  }
  // assuming any number can be devide with one that why we started count from 1;
  int count = 1;
  for(int i =2; i<n; i++)
  {
    if(n % i == 0)
    {
      return false;
    }
  }
  count++;
  // any number is prime only when it has only 2 factor
  if(count == 2)
  {
    return true;
  }else  return false;
}
int main()
{
  int n;
  cout << "Enter the number" << endl;
  cin >> n;
  bool ans = isPrime(n);
  if(ans)
  {
    cout << "Number is prime" << endl;
  }else{
    cout << "Not Prime" << endl;
  }
}