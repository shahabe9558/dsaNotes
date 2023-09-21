#include <iostream>
#include <cstring>
using namespace std;
void printArray(float arr[], int size) 
{
   for(int i = 0; i <size; i++)
   {
      cout << arr[i] <<endl;
   }
}

   
int main()
{
   float arr[] = {3.2, 4, 5.6, 7.123456789, 9};
    int size = sizeof(arr)/sizeof(float);    
    
    printArray(arr, size);
   // int arr[5];
   // for(int i=0; i<size; i++)
   // {
   //   cin >> arr[i];
   // }
  
   // //  cout << sizeof(arr)/sizeof(int);
   // cout << "The Output is " <<endl;

   // printArray(arr, size);
}