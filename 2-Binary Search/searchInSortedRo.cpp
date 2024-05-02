#include<iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = (s + e) / 2;
    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid +1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s , int e, int k)
{
   int mid = (s + e) / 2;
   while(s <= e)
   {
    if(arr[mid] == k)
    {
        return mid;
    }
    else if(arr[mid] < k)
    {
        s = mid + 1;
    }
    else if(arr[mid] > k){
        e = mid -1;
    } 
    mid = (s + e) / 2;

   }
   return -1;
}
int main()
{
    int arr[5] = {4,5,1,2,3};

    int pivot = getPivot(arr, 5);

    int target = 4;

    if(target >= arr[pivot] && target <= arr[4])
    {
       int b1 = binarySearch(arr, pivot, 4, target);
       cout << "b1 = " << b1;
    }
    else
    {
        int b2 = binarySearch(arr, 0, pivot-1, target);
        cout <<"b2 = " << b2;
    }

}