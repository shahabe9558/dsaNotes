#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccerne(int arr[], int n)
{
     vector<int> temp(n);
     int visited = -1;
       for(int i =0; i<n; i++)
       {
           int count = 1;
           for(int j = i + 1; j <n; j++)
           {
               if(arr[i] == arr[j])
               {
                   count++;
                   temp[j] = visited;
               }
               if(temp[i] != visited)
               {
                temp[i] = count;
               }
           }
            temp.push_back(count);
       }
        
        // cout << "Size is " << temp.size() << endl;

        for(auto i : temp)
        {
    
                cout << i << endl;
    
        }


    //    for(int i=0; i<temp.size(); i++)
    //    {
    //        for(int j = i + 1; j<temp.size(); j++)
    //        {
    //            if(temp[i] == temp[j])
    //            {
    //                return false;
    //            }
    //        }
    //    }
    //    return true;
}

int main()
{
    //  int arr[10] = {2, 2, 5, 10, 1, 2, 10, 5, 10, 2};
    int arr[5] = {2,2,5,6,6};
    bool ans = uniqueOccerne(arr, 5);
    if(ans)
    {
        cout << "Found Unique";
    }
    else{
        cout <<"Not Unique";
    }
}