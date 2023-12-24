#include<iostream>
#include<set>
using namespace std;
void unionof(int arr[], int n, int arr2[], int m)
{
  set<int> s;
  for(int i = 0; i<n; i++)
  {
    s.insert(arr[i]);
  }
  for(int i = 0; i<m; i++)
  {
    s.insert(arr2[i]);
  }
  for(auto i : s)
  {
    cout << i << " ";
  }
}
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,6};
    unionof(arr1, 5, arr2, 3);
}