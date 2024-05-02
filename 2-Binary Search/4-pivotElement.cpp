#include<iostream>
using namespace std;
int pivot(int *arr, int n)
{
    int s =0 ;
    int e = n-1;
    int mid = (s + e) / 2;
    while(s < e)
    {
         if(arr[mid] >= arr[0])
         {
            s = mid + 1;
         }
         else {
            e = mid;
         }
         mid = s + (e - s )/ 2;

    }
    return s;
}
int main()
{
     int arr[5] = {8,10,17,1,3};
     cout << "Pivot is at index = " <<  pivot(arr, 5); 
}
















// #include <iostream>
// using namespace std;
// int peakElement(int arr[], int size)
// {
//     int s=0, e = size-1;
//     int mid = (s+e)/2;
//     while(s<e)
//     {
//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//        mid = (s+e)/2;
//     }
//     return s;
// }
// int main()
// {
//     int arr[5] = {8,10,17,1,3};
//      cout << "Pivot element is = " << peakElement(arr, 5);
   
// }