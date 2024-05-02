#include<iostream>
#include<algorithm>
using namespace std;

// 1st approach 
// void sort01(int arr[], int n)
// {
//     int countZero = 0;
//     int countOne = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i] == 0)
//         {
//             countZero++;
//         }
//         else{
//             countOne++;
//         }
//     }
//     int i=0;
//     while(countZero != 0)
//     {
//         arr[i] = 0;
//         i++;
//         countZero--;
//     }
//     while(countOne != 0)
//     {
//         arr[i] = 1;
//         i++;
//         countOne--;
//     }
// }
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort01M2(int arr[], int n)
{
    int i=0; 
    int j = n-1;
  while(i < j)
  {
    while(arr[i] == 0 && i<j)
    {
        i++;
    }
    while(arr[j] == 1)
    {
        j--;
    }
    if(arr[i] == 1 && arr[j] == 0)
    {
        swap(arr[i++], arr[j--]);
    }
  }

}
int main()
{
     int arr[8] = {1,1,0,0,0,0,1,0};
    //  sort01(arr, 8);
    sort01M2(arr, 8);
    printArray(arr, 8); 
}















// #include <iostream>
// using namespace std;
// void sort01(int arr[], int size)
// {
//     int i =0, j=size-1;

//     while(i<j)
//     {
//         while(arr[i] == 0 && i<j)
//         {
//             i++;
//         }
//         while(arr[j] == 1)
//         {
//             j--;
//         }
//         if(arr[i] == 1 && arr[j] == 0)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
// }
// void printArray(int arr[], int size)
// {
//     for(int i=0; i<size; i++)
//     {
//         cout << arr[i] <<" ";
//     }
// }
// int main()
// {
//     int arr[8] = {1,1,0,0,0,0,1,0};
//     sort01(arr, 8);
//     printArray(arr, 8);
// }