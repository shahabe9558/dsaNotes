#include <iostream>
#include<algorithm>
using namespace std;
int uniqueElement(int arr[], int size)
{

    int ans = 0; 
    for(int i=0; i<size; i++)
    {
        ans = ans ^ arr[i];
        cout << "Ans is " << ans << endl;
    }
    return ans;
}
void uniqueFirst(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        int count =0;
        for(int j=0; j<n; j++)    
        {
            if(i != j)
            {
             if(arr[i] == arr[j])
             {
                count++;
             }
            }
        }
        if(count == 0)
        {
            cout << arr[i];
        }
    }
}
// multiples of k unique elememt
    int multipleOk(int arr[], int n, int k)
    {
        // pahle to sort karenge
        sort(arr, arr+n);
        for(int i = 0; i<n; i = i + k)
        {
            if(arr[i] != arr[i +k-1])
            {
                return arr[i];
            }
        }
        return -1;
    }
int main()
{
   int arr[7] = {6, 2, 5, 2, 2, 6, 6};
   cout << multipleOk(arr, 7, 3);

// uniqueFirst(arr, 7);
}