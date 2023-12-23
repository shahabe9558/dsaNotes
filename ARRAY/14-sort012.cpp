#include <iostream>
using namespace std;
void sort012(int arr[], int size)
{
  int i=0, j=size-1;
  while(i<j)  
  {
    if(arr[i] == 1 && i<j)
    {
      swap(arr[i], arr[i+1]);
      i++;
    }
    else if(arr[j] == 1 && i<j)
    {
        swap(arr[j], arr[j-1]);
        cout << arr[j] << " " << arr[j-1] << endl;
        j--;
        
    }
     while(arr[i] == 0 && i<j)
        {
            i++;
        }
        while(arr[j] == 2 && i<j)
        {
            j--;
        }
        if(arr[i] == 2 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
  }
}
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort012m2(int arr[], int n)
{
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        countZero++;
        else if(arr[i] == 1)
        countOne++;
        else if(arr[i] == 2)
        countTwo++;
    }
    int index =0;

    while(countZero != 0)
    {
        arr[index++] = 0;
        countZero--;
    }
    while(countOne != 0)
    {
        arr[index++] = 1;
        countOne--;
    }
    while(countTwo != 0)
    {
        arr[index++] = 2;
        countTwo--;
    }

}
void sort012M3(int *arr, int n)
{
    int mid = 0;
    int l = 0;
    int r = n -1;
    while(mid <= r)
    {
        if(arr[mid] == 0){
            swap(arr[mid], arr[l]);
            mid++;
            l++;
        }
        else if(arr[mid] ==  1)
        {
            mid++;
        }
        else{
            swap(arr[mid], arr[r]);
            r--;
        }
    }
}
int main()
{
    int arr[6] = {2,0,2,1,1,0};

    // sort012m2(arr, 6);

    // sort012(arr, 6);
    sort012M3(arr, 6);
    printArray(arr, 6); 
}