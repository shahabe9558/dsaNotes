#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccerne(int arr[], int n)
{
     vector<int> temp;
       for(int i =0; i<n; i++)
       {
           int count =0;
           for(int j = i +1; j <n; j++)
           {
               if(arr[i] == arr[j])
               {
                   count++;
               }
           }
           temp.push_back(count);
       }
       
       for(int i=0; i<temp.size(); i++)
       {
           for(int j = i + 1; j<temp.size(); j++)
           {
               if(temp[i] == temp[j])
               {
                   return false;
               }
           }
       }
       return true;
}

int main()
{
 int arr[10] = {2, 2, 5, 10, 1, 2, 10, 5, 10, 2};
 bool ans = uniqueOccerne(arr, 10);
}