#include <iostream>
using namespace std;
int uniqueElement(int arr[], int size)
{

    int ans = 0; 
    for(int i=0; i<size; i++)
    {
        ans = ans ^ arr[i];
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
   int arr[6] = {2,2,4,9,4};

   uniqueFirst(arr, 5);
}