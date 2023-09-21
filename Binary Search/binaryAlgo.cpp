#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s =0;
    int e = n-1;
    int mid = (s + e) /2;
    while(s <= e)
    {
      if(arr[mid] == key)
      {
        return mid;
      }
      if(arr[mid] > key)
      {
        e = mid-1;
      }
      else{
        s = mid +1;
      }
      mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 4;
    cout << binarySearch(arr, 5, key);
}















// #include <iostream>
// using namespace std;

// // TIME COMPLEXITY IS 
// // Big o(logn)

// int binarySearch(int arr[], int size, int key)
// {
//     int start=0, end =size-1;
//     int mid = (start+end)/2;
//     while(start<=end)
//     {
//         if(arr[mid] == key)
//         {
//             return mid;
//         }
//         if(arr[mid] > key)
//         {
//             end = mid-1;
//         }
//         else
//         {
//             start = mid + 1;
//         }

//         mid = (start+end) /2; 
//     }
//     return -1;
// }
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout << binarySearch(arr, 5, 7);
// }