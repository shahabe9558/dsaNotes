#include<iostream>
#include<set>
#include<vector>
using namespace std;

void unionOfM2(int arr[], int n, int arr2[], int m){
  vector<int> Union;
  int i =0; 
  int j =0;
  while(i<n && j<m)
  {
    if(arr[i] <= arr2[j])
    {
      if(Union.size() == 0 || Union.back() != arr[i])
      {
        Union.push_back(arr[i]);
        i++;
      }
    }
    else{
      if(Union.size() == 0 || Union.back() != arr2[j])
      {
        Union.push_back(arr2[j]);
        j++;
      }
    }
  }
  while(i<n)
  {
    if(Union.back() != arr[i])
    {
      Union.push_back(arr[i]);
      i++;
    }
  }
  while(j<m)
  {
    if(Union.back() != arr2[j])
    {
      Union.push_back(arr2[j]);
      j++;
    }
  }
  for(auto i: Union)
  {
    cout << i << " ";
  }
}
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
    unionOfM2(arr1,5, arr2, 3);
    // unionof(arr1, 5, arr2, 3);
}