#include <iostream>
using namespace std;
void sumOfTwoArray(int arr1[], int n, int arr2[], int m)
{
    int i = n-1;
    int j = m-1;
    int sum = 0;
    int ans[4] = {0};
    int carry = 0;

    while(i >= 0 &&  j >= 0)
    {
        sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;

        sum = sum % 10;

        ans[i] = sum;
        i--;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};

    sumOfTwoArray(arr1, 4, arr2, 4);
}