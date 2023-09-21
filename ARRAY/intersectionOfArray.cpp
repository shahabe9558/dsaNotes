#include<iostream> 
using namespace std;

// TC = O(N*2)
// SC = O(1)
void intersect(int arr1[], int arr2[], int n1, int n2)
{
  for(int i=0; i<n1; i++)
  {
    for(int j=0; j<n2; j++)
    {
      if(arr1[i] == arr2[j])
      {
        cout << arr1[i] << " ";
        arr2[j] = INT_MIN;
      }
    }
  }
}
// two pointer approach
// TC IS O(N) 
// SC = O(1)
void intersect2(int arr1[], int arr2[], int n1, int n2)
{
   int i=0, j=0;
   while (i<n1 && j<n2)
   {
    if(arr1[i] < arr2[j])
    {
      i++;
    }
    else if(arr1[i] == arr2[j])
    {
      cout << arr1[i] << " ";
      i++;
      j++;
    }
    else
    {
      j++;
    }
   }
   
}
int main()
{
  int arr1[6] = {1,2,3,4,5,2};
  int arr2[5] = {2,3,6,7,8};
  // intersect(arr1, arr2, 6,5);
  intersect2(arr1, arr2, 6, 5);
}















// #include <iostream>
// using namespace std;
// // MORE OPTIMISED SOLUTION
// // THIS IS TWO POINTER APPROch

// void intersect(int arr1[], int arr2[], int s1, int s2) 
// {
//   int i=0, j=0;
//  while(i<s1 && j<s2)
//   {
//     if(arr1[i] == arr2[j])
//     {
//       cout << arr1[i] <<" ";
//       i++;
//       j++;
//     }

//     else if(arr1[i] < arr2[j])
//     {

//       i++;

//     }

//    else
//    {

//      j++;

//    }
//   }
// }



// // brute forcwe method to solve
// /*

// void intersect(int arr1[], int arr2[], int s1, int s2)
// {
//     for(int i=0; i<s1; i++)
//     for(int j =0; j<s2; j++)
//     {
//         if(arr1[i] == arr2[j])
//         {

//           cout <<arr1[i] <<" " ;
//         //   because another elemnt can not match with present elemnts 
//           arr2[j] = INT_MIN;

//         }
//     }
// }

// */
// int main()
// {
//     int arr1[6] = {1,2,3,4,5,2};
//     int arr2[5] = {2,3,6,7,8};
//     intersect(arr1, arr2, 6,5);
// }