#include<iostream>
using namespace std;

int peakMountain(int *arr, int n)
{
    int  s=0;
     int e = n-1;
     int mid = (s + e) / 2;
     while(s < e)
     {
        if(arr[mid] < arr[mid +1])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s + e) / 2;
     }
     return s;

}
int main()
{
    int arr[5] = {2,3,4,5,1};
    cout <<"Peak Mountain element index is at = " << peakMountain(arr, 5);
}