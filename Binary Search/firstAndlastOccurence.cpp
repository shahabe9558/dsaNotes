#include<iostream>
using namespace std;
int firstOccurence(int *arr, int n, int k)
{
   int s =0, e = n-1;
   int mid = s + (e-s) / 2;
   int ans = -1;
   while(s<=e)
   {
    if(arr[mid] == k)
    {
        ans = mid;
        e = mid -1;
    }
    else if(arr[mid] > k)
    {
      e = mid-1;
    }
    else if (arr[mid] < k)
    {
      s = mid +1;
    }
    mid = s + (e-s) / 2;
   }
   return ans;
}
int lastOccurence(int *arr, int n, int k)
{
 int s =0, e = n-1;
 int mid = (s+e)/2;
 int ans =-1;
 while(s<=e)
 {
    if(arr[mid] == k)
    {
      ans = mid;
      s = mid+1;
    }
    else if(arr[mid] > k)
    {
        e = mid-1;
    }
    else if(arr[mid] < k)
    {
        s = mid +1;
    }
    mid = (s + e) /2;
  }
  return ans;
}
int totalNoOccur(int *arr, int n, int k)
{
    int first = firstOccurence(arr, n, k);
    int last = lastOccurence(arr, n, k);
    int ans = (last - first) + 1;
    return ans;
}
int main()
{
    int arr[5] = {2,3,3,3,5};
    cout <<"first Occur at index = " << firstOccurence(arr, 5, 3) << endl;
    cout <<"last Occur at index = " << lastOccurence(arr, 5, 3) << endl;
    cout << "Total no. of occur = " << totalNoOccur(arr, 5, 3);
}