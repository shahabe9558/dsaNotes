#include<iostream>
using namespace std;
int sumOfArrayElements(int *arr, int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return arr[0];
    }
    int sum = 0;
    sum = arr[0] + sumOfArrayElements(arr+1, n-1);
    return sum;

}
int main()
{
    int arr[5] = {6,2,3,4,5};
    int size = 5;
    cout << "The sum is = " << sumOfArrayElements(arr, size); 
}

















// #include <iostream>
// using namespace std;
// int sumOfArray(int arr[], int size)
// {
//     // base case 
//     if(size == 0)
//     {
//         return -1;
//     }
//     if(size == 1)
//     {
//         return arr[0];
//     }
//     int ans = arr[0] + sumOfArray(arr+1, size-1);
//     return ans;
   
// }
// int main()
// {
//     int arr[5] = {2,4,9,9,9};
//     cout << "The sum is = " << sumOfArray(arr, 5);
// }