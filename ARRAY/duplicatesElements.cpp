#include <iostream>
#include <array>
using namespace std;
int findDublicate(int arr[], int size)
{
    int ans =0;
    //  using xor with all elements of array 

    for(int i=0; i<size; i++)
    {
      ans = ans^arr[i];
    }

    // xor with n-1 elements 

    
    for(int i=1; i<size; i++)
    {
      ans = ans^i;
    }
    return ans; 
}
void findDublicate2(int arr[], int s)
{
    for(int i=0; i<s; i++)
    {
      for(int j = i+1; j<s; j++)
      {
        if(arr[i] == arr[j])
        {
  
          cout << arr[i] << " ";
         
        }
      }
    }
}
void findDublicate3(int arr[], int n)
{
  
}
int main()
{
    int arr[5] = {2,2,2,2,2};
    cout << findDublicate3(arr, 5);
    // findDublicate2(arr, 5);

}