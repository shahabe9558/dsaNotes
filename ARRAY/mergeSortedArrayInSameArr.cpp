#include<iostream>
using namespace std;
void mergeTwoArray(int arr1[], int n, int arr2[], int m)
{
    int i =0;
    int j = 0;
    while(i < n && j < m)
    {
        if(arr1[i] > arr2[j])
        {
            arr1[i++] = arr2[j++];

        }
        else{
            i++;
        }
    }
    // while(i<n)
    // {
    //     arr1[i] = arr1[i++];
    // }
    while(j<m)
    {
        arr1[i++] = arr2[j++];
    }
}



void printarray(int arr3[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<arr3[i] <<" ";
    }
}
int main()
{
    int arr1[6] = {1,3,5,0,0,0};
    int arr2[3] = {2,4,6};

    mergeTwoArray(arr1, 6, arr2, 3);   

    printarray(arr1, 6);
}

















// #include <iostream>
// using namespace std;
// void mergeTwoArray(int arr1[], int n, int arr2[], int m)
// { 
//   int i=0, j=0;
//   while(i<n && j<m)
//   {
//         if(arr1[i] > arr2[j])
//         {
//             arr1[i++] = arr2[j++];
//         }
//         else
//         {
//             i++;
//             break; 
             
//         }
//   }  
//         while(i<n)
//         {
//             arr1[i] =arr1[i++];

//         }
//         while(j<m)
//         {
//             arr2[i++] =arr2[j++];
    
//         }
//  }
// void printarray(int arr3[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout <<arr3[i] <<" ";
//     }
// }
// int main()
// {
//     int arr1[6] = {1,3,5,0,0,0};
//     int arr2[3] = {2,4,6};

//     mergeTwoArray(arr1, 6, arr2, 3);   

//     printarray(arr1, 6);
// }
