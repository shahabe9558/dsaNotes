#include <iostream>
using namespace std;

// int getSum(int *arr, int n) // both equation is true
void getSum(int arr[], int n)
{
    // cout << "Size is " << sizeof(arr) << endl;
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i] + 10;
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    // passing the address of arr 
    getSum(arr, 5);
    for(int i = 0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
}