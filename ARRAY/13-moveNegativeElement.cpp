// maintaining the order 
#include<iostream>
#include<vector>
using namespace std;
void moveNegative(int *arr, int n)
{
    vector<int> ans;
    for(int i =0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i =0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i =0; i<n; i++)
    {
        arr[i] = ans[i];   
    }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
   int arr[8] ={1, -1, 3, 2, -7, -5, 11, 6 };
   moveNegative(arr, 8);
   printArray(arr, 8);
}


// //1-Not maintaining the order 
// // MOVING NEGATIVE ELEMENT TO LEFT AND POSITIVE TO RIGHT
// #include <iostream>
// #include<algorithm>
// using namespace std;
// void moveNegative(int arr[], int size)
// {
//     int negativeIndex =0;
//     for(int i=0; i<size; i++){
//         if(arr[i] > 0){
//             swap(arr[i], arr[negativeIndex]);
//             negativeIndex++;
//         }
//     }
// }

// void printArray(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[8] ={1, -1, 3, 2, -7, -5, 11, 6 };
//     moveNegative(arr, 8);
//     printArray(arr, 8);
   
// }