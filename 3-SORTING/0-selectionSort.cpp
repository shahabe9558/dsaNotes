#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    // base case 
    if(n == 0 || n == 1)
    {
        return ;
    }
    // i round 
    int i = 0;
    for(int j = 1; j<n; j++)
    {
        if(arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }
    return selectionSort(arr + 1, n - 1);
}
int main()
{
    int arr[9] {82, 42, 49, 8, 25,52,36,93,59};
    selectionSort(arr, 9);
    for(int i =0 ; i<9; i++)
    {
        cout << arr[i] << " ";
    }
}