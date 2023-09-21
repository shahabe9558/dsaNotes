#include<iostream>
using namespace std;
bool ispresent(int arr[3][4], int target, int row, int col)
{
 for(int row =0; row<3; row++)
  {
    for(int col =0; col<4; col++)
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
  cout << "Enter the target" << endl;
  int target;
  cin >> target;

  int sol = ispresent(arr, target, 3, 4);

  if(sol)
  cout << "Present" << endl;
  else 
  cout << "Not Present" << endl;
  }

















// #include <iostream>
// using namespace std;
// bool isPresent(int arr[][3], int target, int row, int column)
// {
//     for(int i=0; i<2; i++)
//   {
//     for(int j=0; j<3; j++)
//     {
//         if(arr[i][j]== target)
//         return 1;
//     }
//   }
//   return 0;
// }
// int main()
// {
  
//   cout << "Enter the elements of array" <<endl;

//   int arr[2][3];
//   for(int i=0; i<2; i++)
//   {
//     for(int j=0; j<3; j++)
//     {
//         cin >> arr[i][j];
//     }
//   }
  
//   cout << "Enter the elements to search" <<endl;
 
//   int target;
//   cin >>target;


//   if(isPresent(arr,target, 2,3))
//   {
//     cout <<"Element is found";
//   }
//   else
//   {
//     cout << "Not Present";
//   }

// }
