#include<iostream>
#include <algorithm>
using namespace std;
void mergeTwoArray(int arr1[], int n, int arr2[], int m)
{
   int left = n-1;
   int right = 0;
   while(left >= 0 && right < m)
   {
    if(arr1[left] > arr2[right])
    {
        swap(arr1[left], arr2[right]);
        left--;
        right++;

    }
    else{
        break;
    }
   }
   sort(arr1, arr1+n);
   sort(arr2, arr2+m);

}
void printarray(int arr3[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<arr3[i] <<" ";
    }
}   
int main()
{
    int arr1[3] = {1,3,5};
    int arr2[3] = {2,4,6};

    mergeTwoArray(arr1, 3, arr2, 3);   

    printarray(arr1, 3);
    printarray(arr2, 3);
}