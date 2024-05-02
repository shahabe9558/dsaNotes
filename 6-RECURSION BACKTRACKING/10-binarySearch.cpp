#include <iostream>
using namespace std;
bool isPresent(int arr[], int n, int s, int e, int k)
{
    // base case 
    if(s > e)
    {
        return false;
    }
    int mid = (s + e) / 2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return isPresent(arr, n, mid+1, e, k);

    }else{
        return isPresent(arr, n, s, mid-1, k);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    bool ans = isPresent(arr, 5, 0, 4, 12);
    if(ans){
        cout << "Presernt" << endl;
    }else{
        cout << "Not Present" << endl;
    }
}