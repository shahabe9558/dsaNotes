#include <iostream>
#include <string>
#define ROW 3
#define COL 4
using namespace std;
// TC = O(logn) where n row*col i.e O(log(row*col))

string binarySearch(int arr[][COL], int k)
{
    int s = 0;
    int e = (ROW * COL) - 1;
    int mid = (s + e)/2;
    string Yes = "Present";
    string No = "Not Present";
    while(s <= e)
    {
      int element = arr[mid/COL][mid%COL];
      if(element == k)
      {
        return Yes;
      }
      if(element < k)
      {
        s = mid + 1;
      }
      else{
        e = mid - 1;
      }
      mid = (s + e)/2;
    }
    return No;
}
int main()
{
  int arr[ROW][COL] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
  int k = 1213;
  cout << binarySearch(arr, k);
}