#include <iostream>
using namespace std;
void sort01(int arr[], int n)
{
    int s=0, e = n-1;
    while(s<e)
    {
        
        while(arr[s] == 0)
        {
            s++;
        }
        while(arr[e] == 1)
        {
            e--;
        }
        if(arr[s] == 1  && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{
    int arr[5] = {1,0,1,0,0};
    sort01(arr, 5);
    printArray(arr,5);
}