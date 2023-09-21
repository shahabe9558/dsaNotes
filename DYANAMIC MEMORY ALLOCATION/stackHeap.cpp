#include <iostream> 
using namespace std;
int main()
{

    // difference between Heap and Stack nenory
    //    1- heap memory ka size zayada hota hai (byte);
    //    2- heap me variable name nhi likh skte hai
    //    3- memory can not be free automatically in heap as in stack;
    //    4- delete keyword is used for deleting i.e (delete i or delete []arr)

   // heap memory me var name nhi bana skte isliye pointer ka use krte hai

    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i =0; i < n; i++)
    {
        cout << arr[i] << " ";
    }








    // Allocating memory in stack uing new keyword

    // new int;  // it store address only in Heap

/*
    char a = 5;
    cout << sizeof(a) << endl;
    char *p = &a;
    cout << sizeof(p) << endl;

    int b = 5;
    cout << sizeof(b) << endl;
    int *p1 = &b;
    cout << sizeof(p1) << endl;
*/

    


    
   




    // THis is bad practice
    /*
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    */
}