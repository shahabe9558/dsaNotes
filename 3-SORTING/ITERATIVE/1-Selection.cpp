#include <iostream>
using namespace std;
// T.C O(n*n) for all cases
void selectionSort(int *arr, int n)
{
    // i represent rounds
    for(int i =0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            // condition check kar lo 
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[9] {82, 42, 49, 8, 25,52,36,93,59};
    selectionSort(arr, 9);
    for(int i = 0; i<9; i++)
    {
        cout << arr[i] << " ";
    }
}