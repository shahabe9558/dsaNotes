#include<iostream> 
using namespace std;
void movesZero(int *arr, int n)
{
    int nonZero = 0;
    
    for(int i =0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 0, 0, 3, 12};
    movesZero(arr, 5);
    print(arr, 5);
}















// #include <iostream>
// using namespace std;
// void movesZero(int arr[], int n)
// {
//     int nonZero=0;
//     for(int j=0; j<n; j++)
//     {
//         if(arr[j] !=0)
//         {
//             swap(arr[j], arr[nonZero]);
//             nonZero++;
//         }
//     }

// }
// void printArray(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
//     cout <<endl;

// }
// int main()
// {
//     int arr[11] = {1,0,2,0,4,5,7,0,9,0,0};
//     movesZero(arr, 11);
//     printArray(arr, 11);
// }