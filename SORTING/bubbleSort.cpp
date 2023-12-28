#include<iostream>
using namespace std;
void bubbleSort(int *arr, int size)
{
    //  for(int i =0; i<5; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    // cout <<endl;
    // base case
    if(size == 0 || size == 1)
    {
        return ;
    }
 
    for(int i = 0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
          swap(arr[i], arr[i+1]);
    
        }
    }
    
      for(int i =0; i<5; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl;

    bubbleSort(arr, size-1);
}
int main()
{
    int arr[5] = {12,11,10,9,8};
    bubbleSort(arr, 5);
    // for(int i =0; i<5; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    // cout <<endl;
}