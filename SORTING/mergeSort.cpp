#include<iostream>
using namespace std;

// time complexity is o(nlogn);

void mergeTwoSortedArray(int *arr, int s, int e)
{
    // cout << "Yaha tak sab sahi chal raha hai"<< endl;
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating two new array
    int *first = new int[len1];
    int *second = new int[len2];
   
   // copying alll thee elements

    int mainAraayIndex = s;
    for(int i =0; i<len1; i++)
    {
        first[i] = arr[mainAraayIndex++];
    }

    mainAraayIndex = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainAraayIndex++];
    }

    //merging two sorted array

    int index1 = 0;
    int index2 = 0;
    mainAraayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainAraayIndex++] = first[index1++];
        }
        else
        {
            arr[mainAraayIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainAraayIndex++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[mainAraayIndex++] = second[index2++];
    }
    // cout << "Sab sahi chal raha hai";

}
void mergeSort(int *arr, int s, int e)
{
    // base case 
    if(s >= e)
    {
        return;
    }
    int mid = (s+e)/2;

    // left part sort krne ke liye
    mergeSort(arr, s, mid);

    // right part sort krne ke liye

    mergeSort(arr, mid+1, e);

    mergeTwoSortedArray(arr, s, e);
}
int main()
{
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int size = 15;

    mergeSort(arr, 0, size-1);

    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
    } 
    cout << endl;
}