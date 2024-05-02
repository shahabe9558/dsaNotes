#include <iostream>
using namespace std;
int main()
{
    // arr[i] = *(arr+i);
    // i[arr] = *(i+arr); // both line are same

    // int arr[10] = {1,2,3,4,5};
    // cout << arr << endl; // return the first index address
    // cout << &arr[0] << endl; // return the first index address
    // cout << *arr << endl; // return the first index value
    // cout << arr+1 << endl;
    // cout << *(arr+1) << endl;  // value at 1st position

    // int arr[4] = {1,2,3,4};
    // int *ptr = &arr[0];
    // cout << sizeof(arr) << endl;
    // cout << sizeof(*arr) << endl;
    // cout << sizeof(*arr+1) << endl;
    // cout << sizeof(*ptr+1) << endl;
    // cout << sizeof(&ptr) << endl;
    // cout << sizeof(&arr) << endl;
    
    // SYMBOL TABLE CONTENT  CAN NOT BE CHANGED

    int arr[5] = {1,2,4,3,5};
     // arr = arr+1;
    int *ptr = arr;
    ptr = ptr+1;
    cout << arr << endl;
    cout << ptr  << endl;
    // &ptr = ptr+1;
    cout << &ptr;
}