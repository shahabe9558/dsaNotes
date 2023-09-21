#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    arr[0] = 101;
    cout << " printing in the upade function " << endl;

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout <<endl;

    cout << "Returning back to the main function " << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << "Printing in the main function " <<endl;
    
    for (int i = 0; i < 3; i++)
    cout << arr[i] << " ";
}