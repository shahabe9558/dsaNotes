#include<iostream>
using namespace std;

// TC = O(logn) where n row*col i.e O(log(row*col))

bool bnarySearch(int arr[][4], int nrow, int mcol, int k) 
{
    int s =0;
    int e = (nrow*mcol) - 1;
    int mid = s + (e - s)/ 2;
    while(s <= e)
    {
       int element = arr[mid/mcol][mid%mcol];

       if(element == k)
       {
        return 1;
       }
       if(element < k)
       {
        s = mid + 1;
       }
       else{
        e = mid - 1;
       }
     mid = s + (e - s)/ 2;
    }
    return 0;
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    bool ans = bnarySearch(arr, 3, 4, 7780);
    if(ans)
    cout << "Present" << endl;
    else
    cout <<"Not present" << endl;
}