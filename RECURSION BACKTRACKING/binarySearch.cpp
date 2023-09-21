#include<iostream>
using namespace std;
bool binarySearch(int arr[], int key, int s, int e)
{
    // base case 
    if(s > e)
    {
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key)
    {
        return true;
    }
    if(arr[mid] < key)
    {
        return binarySearch(arr, key, mid + 1, e);
    }
    else
    {
        return binarySearch(arr, key, s, mid-1);

    }    
}
int main()
{
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int s = 0;
    int e = size-1;
    int key = 14;
    cout << "Key is present or not = " << binarySearch(arr, key, s, e);
}











// #include <iostream>
// using namespace std;
// void print(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";

//     }
//     cout << endl;
// }
// bool isPresent(int arr[], int s, int e, int key)
// {
//     // print(arr, e);
//     // base case 
//     if(s > e)
//     return false; 

//     int mid = s + (e-s)/2;

//     if(arr[mid] == key)
//     return true;

//     if(arr[mid] < key)
//     {
//         return isPresent(arr, mid+1, e, key);
//     }
//     else 
//     {
//         return isPresent(arr, s, mid-1, key);
//     }
// }
// int main()
// {
//     int arr[5] = {2,1,4,12,45};
//     int ans = isPresent(arr, 0, 4, 45);

//     if(ans)
//     {
//         cout << "Key is present" << endl;
//     }
//     else{
//         cout << "Key is not present";
//     }
// }