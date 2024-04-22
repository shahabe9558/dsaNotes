#include <iostream>
#include<algorithm>
using namespace std;
int uniqueElement(int arr[], int size)
{

    int ans = 0; 
    for(int i=0; i<size; i++)
    {
        ans = ans ^ arr[i];
        // cout << "Ans is " << ans << endl;
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
int main()
{
   int arr[7] = {6, 2, 5, 2, 2, 6, 6};
//    cout << uniqueElement(arr,7);
//    cout << multipleOk(arr, 7, 3);

uniqueFirst(arr, 7);
}