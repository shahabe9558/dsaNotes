#include <iostream>
using namespace std;

bool isPossibleSol(int arr[], int NOS, int mid)
{
     int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i<NOS; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > student || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > student) {
            return false;
        }
    }
    return true;

}
int bookAllocat(int arr[], int NOS, int TSOP)
{
    int s = 0, e = TSOP;
    int mid = (s+e)/2;
    int ans =-1;
    while(s<e)
    {
        if(isPossibleSol(arr, NOS, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main()
{
    int arr[4] = {10,20,30,40};
    int NOS = 2;
    cout <<"Maximum Pages = " << bookAllocat(arr, 2, 100);
}