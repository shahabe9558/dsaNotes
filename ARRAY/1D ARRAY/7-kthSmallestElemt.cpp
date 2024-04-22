#include <iostream>
#include<algorithm>
using namespace std;
int kthSmallest(int arr[], int size, int k){
    sort(arr, arr+5);
    return arr[k-1];   
}
 int main()
 {
    int arr[5] = {7, 10, 4, 3, 20};
    int k = 4;
    cout <<  "kth smallest elment  is = " << kthSmallest(arr, 5, k);
 }