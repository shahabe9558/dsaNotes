#include<iostream>
using namespace std;
void seletionSort(int *arr, int size)
{
    // base case 
    if(size == 0 || size == 1)
    return ;
  
    int j = 0;
    for(int i = 0; i<size-1; i++)
    {
        if(arr[j] > arr[i])
        {
            swap(arr[j], arr[i]);
        }
    }
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    seletionSort(arr, size-1);
}
int main()
{
    int arr[5] = {64,25,12,22,11};
    seletionSort(arr, 5);
}