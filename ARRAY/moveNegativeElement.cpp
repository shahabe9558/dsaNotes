// MOVING NEGATIVE ELEMENT TO LEFT AND POSITIVE TO RIGHT
#include <iostream>
#include<algorithm>
using namespace std;
void moveNegative(int arr[], int size)
{
    int i=0;
    int negative = 0;

    while(i<size)
    {
        if(arr[i] < 0)
        {
            swap(arr[i], arr[negative]);
            negative++;
        }
        i++;
    }

}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] ={1,2,-3,-4,-5};
    // moveNegative(arr, 5);
    
    sort(arr, arr+5);
    printArray(arr, 5);
   
}