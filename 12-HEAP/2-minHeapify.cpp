#include <iostream>
using namespace std;
void heapify(int arr[], int n, int index)
{
    int smallest = index;
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    if(rightIndex < n && arr[smallest] > arr[rightIndex]){
        smallest = rightIndex;
    }
    if(leftIndex < n && arr[smallest] > arr[leftIndex]){
        smallest = leftIndex;
    }
    if(smallest != index)
    {
        swap(arr[smallest], arr[index]);
        heapify(arr, n, smallest);
    }
}
// TC IS O(n)
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