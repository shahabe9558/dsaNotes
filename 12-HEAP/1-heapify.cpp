#include <iostream>
using namespace std;
void heapify(int arr[], int n, int index)
{
    int largest = index;
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    if(leftIndex < n && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }
    if(rightIndex < n && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }
    if(largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify(arr, n, largest);
    }
}
int main()
{
    int arr[6] = {-1, 5, 10, 3, 4, 1};
    int n = 5;
    for(int i = n/2; i>0; i--){
    heapify(arr, n, i);
    }
    for(int i = 1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }
}