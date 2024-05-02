// #include<iostream>
// using namespace std;
// void largestRowSum(int arr[][4], int row, int col)
// {
//   int maxi = INT_MIN;
//   int rowNumber = -1;

//   for(row = 0; row<3; row++)
//   {
//     int sum =0;
//     for(col = 0; col < 4; col++)
//     {
//       sum += arr[row][col];

//     }
//     if(sum > maxi)
//     {
//       maxi = sum;
//       rowNumber++;
//     }
//   }
//   cout << "Maximum row sum is = " << maxi << endl;
//   cout << "Row number is = " << rowNumber << endl;
// }
// void largestColSum(int arr[][4], int row, int col)
// {
//   int maxi = INT_MIN;
//   int colNumber = -1;

//   for(col = 0; col<4; col++)
//   {
//     int sum =0;
//     for(row = 0; row < 3; row++)
//     {
//       sum += arr[row][col];

//     }
//     if(sum > maxi)
//     {
//       maxi = sum;
//       colNumber++;
//     }
//   }
//   cout << "Maximum col sum is = " << maxi << endl;
//   cout << "col number is = " << col << endl;
// }
// int main()
// {
//   int arr[3][4];
//   for(int row=0; row<3; row++)
//   {
//     for(int col =0; col < 4; col++)
//     {
//       cin >> arr[row][col];
//     }
//   }
//   largestRowSum(arr, 3, 4);
//   largestColSum(arr, 3, 4);
// }

#include <iostream>
using namespace std;
void largestRowSumNum(int arr[3][3])
{
  int maxi = INT8_MIN;
  int rowNum = -1;
  for(int i = 0; i<3; i++)
  {
    int sum  = 0;
    for(int j = 0; j<3; j++)
    {
      sum += arr[i][j];
    }
    if(sum > maxi)
    {
      maxi = sum;
      rowNum++;
    }
  }
  cout << "Maximum sum of row num is " << rowNum << endl;
}
void largestColSumNum(int arr[3][3]){
  int maxi = INT8_MIN;
  int colNum = -1;
  for(int i = 0; i <3; i++)
  {
    int sum = 0;
    for(int j = 0; j<3; j++)
    {
      sum += arr[j][i];
    }
    if(sum > maxi)
    {
      maxi = sum;
      colNum++;
    }
  }
   cout << "Maximum sum of col num is " << colNum << endl;
}
int main()
{
  int arr[3][3] = {
    {7,8,9},
    {1,2,3},
    {4,5,6}
  };
  largestRowSumNum(arr);
  largestColSumNum(arr);
}