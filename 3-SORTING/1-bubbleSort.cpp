#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
    // base case 
    if(n == 0 || n == 1)
    {
        return ;
    }
    // solve one case 
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    return bubbleSort(arr, n-1);
}
int main()
{
    int arr[6] = {40, 20, 50, 60, 30, 10};
    bubbleSort(arr, 6);
    for(int i = 0; i<6; i++)
    {
        cout << arr[i] << " ";
    }
}