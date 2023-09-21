#include<iostream>
using namespace std;
void unionof(int arr[], int n, int arr2[], int m)
{
    int count = n;
    int i =0;
    int j = 0;
    while(i<n && j<m)
    {
      if(arr[i] != arr2[j])
      {
        j++;
        count++;
      }
      else{
        i++;
        j++;
      }
    }

    while(j <= m)
    {
        count++;
        j++;
    }
    cout << "Count = " << count;
}

int main()
{
    int arr[3] = {1,2,3};
    int arr2[5] = {1,2,3,4,5};
    unionof(arr, 3, arr2, 4);
}