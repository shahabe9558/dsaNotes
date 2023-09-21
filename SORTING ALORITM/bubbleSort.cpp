#include<iostream>
using namespace std;
// TC = O(N*2) FOR BEST CASE O(N)
// SC = O(1)
void bubbleSort(int arr[], int n)
{
    int i,j;
    // 1 case in sorting this algorithm
    for(i = 1; i<n; i++) // for(int i = 0; i<n-1; i++)
    {
        for(j = 0; j<n-i; j++) // for(int j =0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
         for(int i=0; i<n; i++)
        {
        cout << arr[i] <<" ";

        }
        cout <<endl;

    }
}
void print(int arr[], int n)
{
    int i;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {6,5,1,2,3,4};
    bubbleSort(arr, 6);
    // print(arr, 6);
    
}




// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     for(int i=0; i<n-1; i++)
//     {

//         // FOR MORE OPTIMIZATION 
//         // TIME COMPLEXITY IS O(N^2)  // FOR WORST CASE

//         // FOR BEST CASE TIME COMPLEXITY IS  = O(N) 
        
//         bool swapped = false;

//         for(int j= 0; j<n-i-1; j++)
//         if(arr[j] > arr[j+1])
//         {
//         swap(arr[j], arr[j+1]);
//         swapped = true;
//         }
//         if(swapped == false)
//         {
//             break;
//         }
//         for(int i=0; i<n; i++)
//         {
//         cout << arr[i] <<" ";

//         }
//         cout <<endl;
        
//     }
// }
// int main()
// {
//     int arr[6] = {6,5,1,2,3,4};
//     bubbleSort(arr, 6);
// }