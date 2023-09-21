// 1- swap()
// 2- swap_range()
// 3- iter_swap()
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
   // swap iterator 

   int arr[5] = {1,2,3,4,5};

   vector<int> v(5, 7);

   iter_swap(arr, v.begin());

 for(int i =0; i<3; i++)
      {
         cout << arr[i] << " ";
      }
cout << endl;
for(int i :v)
{
   cout << i << " ";
}

   // swap_ranges

   // int arr[5] = {1, 2, 3, 4, 5};
   // int arr1[3] = {8, 9, 10};

   // swap_ranges(arr, (arr + 3), arr1);
   // for(int i =0; i<5; i++)
   // {
   //    cout << arr[i] << " ";
   // }
   // cout << endl;
   //  for(int i =0; i<3; i++)
   // {
   //    cout << arr1[i] << " ";
   // }

   // swap 

   // int a = 5, b = 6;
   // swap(a,b);
   // cout << a << b;
}
