#include<iostream>
using namespace std;
  /*.....................

    TC = O(N*2) // FOR BEST AND  AVG
    SC = O(1)
    jab size choti ho tab laga skte hai;

  /*................... */

void slectionsort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]); 
            }
        }
        for(int i =0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {64,25,12,22,11};
    slectionsort(arr, 5);
}

















// #include <iostream>
// using namespace std;

// // time complexity is o(n^2) 
// // for best and worst case

// int selectionSort(int arr[], int n)
// {
//     for(int i =0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         if(arr[i] > arr[j])
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     for(int i =0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 1;
// }
// void printArray(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     cout << arr[i] <<" ";
// }

// int main()
// {
//     int arr[5] = {64,25,12,22,11};
//     int sortedArra = selectionSort(arr, 5);
//     // printArray(arr,5);
// }