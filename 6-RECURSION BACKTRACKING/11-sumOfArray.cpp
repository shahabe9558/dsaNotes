#include <iostream>
using namespace std;
int sumOf(int arr[], int n)
{
    // base case 
    if(n == 0)
    return 0;
    if(n == 1)
    {
        return arr[0];
    }
    return arr[0] + sumOf(arr+1, n-1);
}
int main()
{
    int arr[5] ={1,2,3,4,5};
    cout << "Sum of array is " << sumOf(arr,5);
}