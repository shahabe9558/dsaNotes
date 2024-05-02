#include<iostream>
using namespace std;
int getMax(int arr[], int n)
{
   int maxi = INT64_MIN;

   for(int i=0; i<n; i++)
   {
     maxi = max(maxi, arr[i]);
   }
   return maxi;
}
int getMin(int arr[], int n)
{
  int mini = INT64_MAX;
  for(int i=0; i<n; i++)
  {
    mini = min(mini, arr[i]);
  }
  return mini;
}

int main()
{
    cout << "Enter the size of array " <<endl;
    int size;
    cin >> size;

    cout << "Enter the elements of array" << endl;
    int arr[1000];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max value is = " << getMax(arr, size) << endl;
    cout << "Min value is = " << getMin(arr, size) << endl;
}









// #include <iostream>
// using namespace std;
// int getMax(int arr[], int size)
// {
//     int maxi = INT_MIN;
//     for(int i=0; i<size; i++)
//     {
//        maxi = max(maxi, arr[i]);
//     }
//     return maxi;
// }

// int getMin(int arr[], int size)
// {
//     int mini = INT_MAX;
//     for(int i=0; i<size; i++)
//     {
//         mini = min(mini, arr[i]);
//     }
//     return mini;

// }

// int main()
// {
//     int size;
//     cout << "Enter the size of array" << endl;
//     cin >> size;
//     cout << "Enter the element of array" <<endl;
    
//     int arr[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];   
//     }
//     cout <<"Maximum number in array is = " << getMax(arr, size) <<endl;
//     cout <<"Minimum number in array is = " << getMin(arr, size) <<endl; 

// }