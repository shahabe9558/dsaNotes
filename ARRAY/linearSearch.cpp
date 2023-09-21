#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i] == key)
        {
         
        cout << arr[i] <<endl;
        return i;
        }
    }
    return false;
}
int main()
{
    int arr[3] = {5};
    int key = 5;
    bool liner = search(arr, 3, 5);
    if(liner)
    {
        cout << "Key is present ";

    }
    else 
    {
        cout <<"Key is absent";
    }
}