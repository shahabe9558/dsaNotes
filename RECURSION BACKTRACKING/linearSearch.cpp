#include<iostream>
using namespace std;
bool isKeyPresent(int *arr, int n, int key) 
{
    if(n == 0)
    return false;
    if(arr[0] == key) 
    {
        return true;
    }
    else{
        bool remainingPart = isKeyPresent(arr+1, n-1, key);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int k = 5;
    bool ans = isKeyPresent(arr, size, k);
    if(ans)
    {
        cout << "Key is present" <<endl;
    }
    else
    cout << "Key is absent" << endl;
}

// #include <iostream>
// using namespace std;
// void print(int arr[], int size)
// {
//     cout << "The size is = " << size << endl;
//     for(int i=0; i<size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// bool isPresent(int arr[], int size, int key)
// {
//     // base case 
//     print(arr, size);
//     if(size == 0)
//     {
//         return false;
//     }
//     if(arr[0] == key)
//     {
//         return true;
//     }
//     else 
//     {
//         bool ans = isPresent(arr+1, size-1, key);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[5] = {2,4,1,3,5};
//     if(isPresent(arr, 5, 5))
//     {
//         cout << "Element is present" <<endl;
//     }
//     else 
//     {
//         cout << "Element is not present" << endl;
//     }
// }