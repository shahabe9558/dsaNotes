#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<n-i; j++) 
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j +1]);
            }
        }
        for(int i = 0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[6] = {40, 20, 50, 60, 30, 10};
    bubbleSort(arr, 6);
    for(int i= 0; i<6; i++)
    {
        cout << arr[i] << " ";
    }
} 