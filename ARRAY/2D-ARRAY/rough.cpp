#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int row, int col)
{
 for(int i =0; i<row; i++)
  {
    for(int j =0; j<col; j++)
    {
      if(arr[row][col] == target)
      return 1;
    }
  }
  return 0;
}
int main()
{
  int arr[3][4];
  cout << "Enter the element" << endl;
  for(int i =0; i<3; i++)
  {
    for(int j =0; j<4; j++)
    {
      cin >> arr[i][j];
    }
  }
 bool ans =  ispresent(arr, 2, 3, 4);

  cout << "Is present = "  << ans;
}