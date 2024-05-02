#include <iostream>
using namespace std;
int sumOfElements(int arr[], int size)
{
    int ans =0;
    for(int i=0; i<size; i++)
    {
        ans = ans + arr[i];
    }
    return ans;

}
int main()
{
  int arr[5] = {3,2,5,7,6};
  cout << " Sum of all elements in array = " << sumOfElements(arr, 5) <<endl; 
}