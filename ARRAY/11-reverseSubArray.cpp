#include<iostream>
using namespace std;

void subArray(int arr[], int n, int l, int r)
{
    while(l < r && r > l)
    {
        swap(arr[l-1], arr[r-1]);
        l++;
        r--;
    }
}

void printArray(int arr[], int n){
    for(int i =0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int l = 2;
    int r =4;
    subArray(arr, 7, l, r);
    printArray(arr, 7);
}