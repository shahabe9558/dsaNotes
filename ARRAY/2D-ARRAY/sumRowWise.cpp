#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col)
{
  for(row=0; row<3; row++)
  {
    int sum =0;

    for(col =0; col<4; col++)
    {
      sum += arr[row][col];
    }
    cout << sum << " ";
  }
  cout << endl;
}
void colSum(int arr[][4], int row, int col)
{
  for(int i=0; i<4; i++)
  {
    int sum =0;

    for(int j =0; j<3; j++)
    {
      sum += arr[j][i];
    }
    cout << sum << " ";
  }
}
int main()
{
  int arr[3][4];

  for(int i=0; i<3; i++)
  {
    for(int j =0; j<4; j++)
    {
      cin >> arr[i][j];
    }
  }
 rowSum(arr, 3, 4);

 colSum(arr, 3, 4);
}





















// #include <iostream>
// using namespace std;

// // COLUMN WISE SUMMATION

// void sumColumnWise(int arr[][4], int i, int j)
// {
//     for(int i=0; i<4; i++)
//   {
//     int sum =0;
//     for(int j=0; j<3; j++)
//     {
//        sum += arr[j][i];
//     }
//     cout << sum << " ";
//   }
// }

// // ROW WISE SUMMATION 

// void sumRowWise(int arr[][4], int i, int j)
// {
//     for(int i=0; i<3; i++)
//   {
//     int sum =0;
//     for(int j=0; j<4; j++)
//     {
//        sum += arr[i][j];
//     }
//     cout << sum << " ";
//   }
//   cout <<endl;
  
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
//   sumRowWise(arr,3,4);
//   sumColumnWise(arr,3,4);
// }