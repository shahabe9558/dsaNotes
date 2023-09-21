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

    
    for(int i=0; i<size; i++)
    {
      ans = ans^i+1;
    }
    return ans; 
}
int main()
{
    int arr[6] = {2,3,4,2,3};
    cout << findDublicate(arr, 6);

}