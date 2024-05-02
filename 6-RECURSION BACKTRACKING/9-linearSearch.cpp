#include <iostream>
using namespace std;
bool isPresent(int arr[], int n, int key)
{
    // base case 
    cout << arr[0] << " "  << n << endl;
    if(n == 0)
    {
        return false;
    }
    if(arr[0] == key)
    {
        return true;
    }
    else{
        return isPresent(arr + 1, n-1, key);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    bool ans = isPresent(arr, 5, 90);
    if(ans)
    {
        cout << "Present" << endl;
    }else{
        cout << "Not Present" << endl;
    }
}