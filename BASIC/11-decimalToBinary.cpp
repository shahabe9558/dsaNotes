// #include<iostream>
// #include<math.h>

// using namespace std;
// int main()
// {
//     cout << "Enterr the number" << endl;
//     int num;
//     cin >> num;
//     int i = 0;
//      int ans = 0;
//      while(num != 0)
//      {
//         int bit = num & 1;
//         cout << "bit is " << bit << endl;
//         ans = (bit * pow(10, i) + ans);
//       //   cout << "Num is = " << num << endl;
//         num = num >> 1;
//         i++;
//      }
//      cout << "Decimal to binary is = " << ans << endl;
// }


#include<iostream>
#include<string>
#include<vector>
using namespace std;
void decToBina(int n)
{
  int arr[100];
  while(n != 0)
  {
    int carry = n % 2;
    arr.push_back(carry);
    n = n / 2;
  }
  arr.reverse();
}
int main(){
  cout << "Enter the number" << endl;
  int n;
  cin >> n;
  decToBina(n);

}