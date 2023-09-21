#include<iostream>
using namespace std;
void rotateArray(int arr[], int n, int k)
{
    int temp[4] = {0};
    for(int i=0; i<n; i++)
    {
        temp[(i+k) % n] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << temp[i] << " ";
    }

}
int main()
{
    int arr[4] = {11,12,13,14};

    rotateArray(arr, 4, 2);

    int a = 2, b = 4;
    cout << endl;

    cout << a % b;
}


















// #include <iostream>
// using namespace std;

// void rotatedArray(int arr[], int n, int k)
// {
    
//     int temp[5];
   
//     for(int i; i<n; i++)
//     {
//      temp[(i+k)% n] = arr[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         arr[i] = temp[i];

//     }
//     /*
//     //THIS WILL PRINT THE ADDRES OF INDEX

//      for(int i=0; i<n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
//     */
// }
// void printArray(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
// }
// int main()
// {
//     int arr[5] = {11,12,13,14,15};
//     int k = 2;
//     rotatedArray(arr, 5, k);
//     printArray(arr, 5);
// }