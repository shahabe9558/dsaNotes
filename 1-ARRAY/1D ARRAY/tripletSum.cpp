#include<iostream>
using namespace std;
void tripletSUm(int arr[], int n, int sum)
{
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      for(int k= j+1; k<n; k++)
      {
        if(arr[i] + arr[j] + arr[k] == sum)
        cout << arr[i] << " " << arr[j] << " " << arr[k];
      }
    }
  }
}
int main()
{
  int arr[5] = {1,2,3,4,5};
  int sum = 12;
  tripletSUm(arr, 5, sum);
}



// #include <iostream>
// using namespace std;
// void tripletSum(int arr[], int size, int sum)
// {
//     for(int i=0; i<size; i++)
//         for(int j=i+1; j<size; j++)
//             for(int k=j+1; k<size; k++)
//               if(arr[i] + arr[j] + arr[k] == sum)
//               {
//                 cout << arr[i] <<" " << arr[j] <<" " <<arr[k];
//               }    
// }
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int s = 12;
//     tripletSum(arr,5,s);
// }