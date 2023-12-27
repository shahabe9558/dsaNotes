#include<iostream>
#include<algorithm>
using namespace std;
// // TC = O(N*2)
// void pairSum(int arr[], int n, int sum)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j= i+1; j<n; j++)
//         {
//             if((arr[i] + arr[j]) == sum)
//             {
//                 cout << arr[i] << " " << arr[j];
//             }
//         }
//         cout << endl;
//     }
// }
void pairSum2(int arr[], int n, int sum)
{
    sort(arr, arr+n);
    int i =0; 
    int j = n -1;
    while(i < j)
    {
        if(arr[i] + arr[j] == sum)
        {
         cout << arr[i] << " " << arr[j] << endl;
         i++;
         j--;
        }
        else if(arr[i] < arr[j])
        {
            i++;
        }
        else{
            j--;
        }
    }
}
int main()
{
    int arr[4] = {1,5, 7, 1};
    int sum = 6;
    // pairSum(arr, 5, sum);
    pairSum2(arr, 4, sum);
}










// #include <iostream>
// using namespace std;
// void pairSum(int arr[], int size, int sum)
// {
//     for(int i=0; i<size; i++)
//     {
//         for(int j = i+1; j<size; j++)
//         if(arr[i] + arr[j] == sum)
//         {
//           cout << arr[i] << " " << arr[j] << endl;
//         }
//     }
// }
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int s = 5;
//     pairSum(arr, 5, s);
// }