#include<iostream>
using namespace std;
void largestRowSum(int arr[][4], int row, int col)
{
  int maxi = INT_MIN;
  int rowNumber = -1;

  for(row = 0; row<3; row++)
  {
    int sum =0;
    for(col = 0; col < 4; col++)
    {
      sum += arr[row][col];

    }
    if(sum > maxi)
    {
      maxi = sum;
      rowNumber++;
    }
  }
  cout << "Maximum row sum is = " << maxi << endl;
  cout << "Row number is = " << rowNumber << endl;
}
void largestColSum(int arr[][4], int row, int col)
{
  int maxi = INT_MIN;
  int colNumber = -1;

  for(col = 0; col<4; col++)
  {
    int sum =0;
    for(row = 0; row < 3; row++)
    {
      sum += arr[row][col];

    }
    if(sum > maxi)
    {
      maxi = sum;
      colNumber++;
    }
  }
  cout << "Maximum col sum is = " << maxi << endl;
  cout << "col number is = " << col << endl;
}
int main()
{
  int arr[3][4];
  for(int row=0; row<3; row++)
  {
    for(int col =0; col < 4; col++)
    {
      cin >> arr[row][col];
    }
  }
  largestRowSum(arr, 3, 4);
  largestColSum(arr, 3, 4);
}


















// #include <iostream>
// using namespace std;

// // MAXIMUM COLUMN SUMMATION

// int maxColumnSum(int arr[][4], int i, int j)
// {
//     int maxi = INT_MIN;
//     int columnIndex =-1;

//     for(int i=0; i<4; i++)
//   {
//     int sum =0;
//     for(int j=0; j<3; j++)
//     {
//        sum += arr[j][i];
//     }
//     if(sum > maxi)
//     {
//         maxi =sum;
//         columnIndex++;
//     }
//   }
//   cout << "Maximum Column sum is = " << maxi << endl;
  
//   cout << "It is at Column number = "; 
//   return columnIndex;
// }

// // MAXIMUM ROW SUMMATION

// int maxRowSum(int arr[][4], int i, int j)
// {
//     int maxi = INT_MIN;
//     int rowIndex =-1;  // bcz row start with zero

//     for(int i=0; i<3; i++)
//   {
//     int sum =0;
//     for(int j=0; j<4; j++)
//     {
//        sum += arr[i][j];
//     }
//     if(sum > maxi)
//     {
//         maxi = sum;
//         rowIndex++;
//     }
//   }
//   cout << "Maximum Sum of Row is = " << maxi <<endl; 
  
//   cout << "It is at row Number = ";
//   return rowIndex;
// }
// int main()
// {
//   int arr[3][4];
//   cout <<"Enter the element of Array" << endl;
//   for(int i=0; i<3; i++)
//   {
//     for(int j=0; j<4; j++)
//     {
//         cin >> arr[i][j];
//     }
//   }
//   cout <<maxRowSum(arr,3,4) << endl;
//   cout << maxColumnSum(arr,3,4);
// }