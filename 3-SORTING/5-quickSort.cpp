#include<iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt =0;
    for(int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int sahiPivotIndex = s + cnt;
    swap(arr[sahiPivotIndex], arr[s]);
    int i = s;
    int j = e;

    while(i < sahiPivotIndex && j > sahiPivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < sahiPivotIndex && j > sahiPivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return sahiPivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if(s >= e )
    {
        return;
    }
    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}
int main()
{
    int arr[12] = {2,4,3,6,8,10,2,5,1,9,14,78};
    int size = 12;
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}